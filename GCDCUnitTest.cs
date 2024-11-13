using Microsoft.VisualStudio.TestTools.UnitTesting;
using GCDLib;

namespace GCDUnitTest
{
    [TestClass]
    public class GCDCalculatorTests
    {
[TestMethod]
public void TestGCDSubtractionMethod()
{
    Assert.AreEqual(1, GCDCalculator.CalculateGCDUsingSubtraction(103, 3));
    Assert.AreEqual(1, GCDCalculator.CalculateGCDUsingSubtraction(106, 3));
    Assert.AreEqual(2, GCDCalculator.CalculateGCDUsingSubtraction(48, 18));
    Assert.AreEqual(6, GCDCalculator.CalculateGCDUsingSubtraction(54, 24));
}

[TestMethod]
public void TestGCDModuloMethod()
{
    Assert.AreEqual(1, GCDCalculator.CalculateGCDUsingModulo(103, 3));
    Assert.AreEqual(1, GCDCalculator.CalculateGCDUsingModulo(106, 3));
    Assert.AreEqual(2, GCDCalculator.CalculateGCDUsingModulo(48, 18));
    Assert.AreEqual(6, GCDCalculator.CalculateGCDUsingModulo(54, 24));
}
