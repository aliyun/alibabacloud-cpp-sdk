// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITESRESOURCEAMOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITESRESOURCEAMOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts() = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts(const DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts(DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts &&) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts() = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts& operator=(const DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts& operator=(DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->resourceType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The number of resources.
    std::shared_ptr<int64_t> amount_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   desktop: the cloud computer.
    // *   DesktopGroup: the cloud computer share.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
