// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATARESOURCEPACKAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourcePackageProductResponseBodyDataResourcePackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackageProductResponseBodyDataResourcePackages& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePackage, resourcePackage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackageProductResponseBodyDataResourcePackages& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePackage, resourcePackage_);
    };
    DescribeResourcePackageProductResponseBodyDataResourcePackages() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackages(const DescribeResourcePackageProductResponseBodyDataResourcePackages &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackages(DescribeResourcePackageProductResponseBodyDataResourcePackages &&) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackageProductResponseBodyDataResourcePackages() = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackages& operator=(const DescribeResourcePackageProductResponseBodyDataResourcePackages &) = default ;
    DescribeResourcePackageProductResponseBodyDataResourcePackages& operator=(DescribeResourcePackageProductResponseBodyDataResourcePackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcePackage_ != nullptr; };
    // resourcePackage Field Functions 
    bool hasResourcePackage() const { return this->resourcePackage_ != nullptr;};
    void deleteResourcePackage() { this->resourcePackage_ = nullptr;};
    inline const vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage> & resourcePackage() const { DARABONBA_PTR_GET_CONST(resourcePackage_, vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage>) };
    inline vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage> resourcePackage() { DARABONBA_PTR_GET(resourcePackage_, vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage>) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackages& setResourcePackage(const vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage> & resourcePackage) { DARABONBA_PTR_SET_VALUE(resourcePackage_, resourcePackage) };
    inline DescribeResourcePackageProductResponseBodyDataResourcePackages& setResourcePackage(vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage> && resourcePackage) { DARABONBA_PTR_SET_RVALUE(resourcePackage_, resourcePackage) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourcePackageProductResponseBodyDataResourcePackagesResourcePackage>> resourcePackage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
