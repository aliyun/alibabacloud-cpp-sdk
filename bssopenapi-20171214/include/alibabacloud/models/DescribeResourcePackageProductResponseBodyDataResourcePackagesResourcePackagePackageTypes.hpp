// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGESRESOURCEPACKAGEPACKAGETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGESRESOURCEPACKAGEPACKAGETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes& obj) { 
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
    };
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes(const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes(DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes &&) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes& operator=(const DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes& operator=(DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->packageType_ != nullptr; };
    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline const vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType> & packageType() const { DARABONBA_PTR_GET_CONST(packageType_, vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType>) };
    inline vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType> packageType() { DARABONBA_PTR_GET(packageType_, vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType>) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes& setPackageType(const vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType> & packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypes& setPackageType(vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType> && packageType) { DARABONBA_PTR_SET_RVALUE(packageType_, packageType) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackagePackageTypesPackageType>> packageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
