// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGESRESOURCEPACKAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGESRESOURCEPACKAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageTypes, packageTypes_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageTypes, packageTypes_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage(const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage(DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage &&) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& operator=(const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& operator=(DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->packageTypes_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageTypes Field Functions 
    bool hasPackageTypes() const { return this->packageTypes_ != nullptr;};
    void deletePackageTypes() { this->packageTypes_ = nullptr;};
    inline const Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes & packageTypes() const { DARABONBA_PTR_GET_CONST(packageTypes_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes) };
    inline Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes packageTypes() { DARABONBA_PTR_GET(packageTypes_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& setPackageTypes(const Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes & packageTypes) { DARABONBA_PTR_SET_VALUE(packageTypes_, packageTypes) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& setPackageTypes(Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes && packageTypes) { DARABONBA_PTR_SET_RVALUE(packageTypes_, packageTypes) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The name of the resource plan.
    std::shared_ptr<string> name_ = nullptr;
    // The types of the resource plans.
    std::shared_ptr<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes> packageTypes_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
