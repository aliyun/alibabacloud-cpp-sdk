// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGEPRODUCTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeResourcePackageProductResponseBodyDataResourcePackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeResourcePackageProductResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackageProductResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePackages, resourcePackages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackageProductResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePackages, resourcePackages_);
    };
    DescribeResourcePackageProductResponseBodyData() = default ;
    DescribeResourcePackageProductResponseBodyData(const DescribeResourcePackageProductResponseBodyData &) = default ;
    DescribeResourcePackageProductResponseBodyData(DescribeResourcePackageProductResponseBodyData &&) = default ;
    DescribeResourcePackageProductResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackageProductResponseBodyData() = default ;
    DescribeResourcePackageProductResponseBodyData& operator=(const DescribeResourcePackageProductResponseBodyData &) = default ;
    DescribeResourcePackageProductResponseBodyData& operator=(DescribeResourcePackageProductResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourcePackages_ != nullptr; };
    // resourcePackages Field Functions 
    bool hasResourcePackages() const { return this->resourcePackages_ != nullptr;};
    void deleteResourcePackages() { this->resourcePackages_ = nullptr;};
    inline const Models::DescribeResourcePackageProductResponseBodyDataResourcePackages & resourcePackages() const { DARABONBA_PTR_GET_CONST(resourcePackages_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackages) };
    inline Models::DescribeResourcePackageProductResponseBodyDataResourcePackages resourcePackages() { DARABONBA_PTR_GET(resourcePackages_, Models::DescribeResourcePackageProductResponseBodyDataResourcePackages) };
    inline DescribeResourcePackageProductResponseBodyData& setResourcePackages(const Models::DescribeResourcePackageProductResponseBodyDataResourcePackages & resourcePackages) { DARABONBA_PTR_SET_VALUE(resourcePackages_, resourcePackages) };
    inline DescribeResourcePackageProductResponseBodyData& setResourcePackages(Models::DescribeResourcePackageProductResponseBodyDataResourcePackages && resourcePackages) { DARABONBA_PTR_SET_RVALUE(resourcePackages_, resourcePackages) };


  protected:
    // The details about the resource plans.
    std::shared_ptr<Models::DescribeResourcePackageProductResponseBodyDataResourcePackages> resourcePackages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
