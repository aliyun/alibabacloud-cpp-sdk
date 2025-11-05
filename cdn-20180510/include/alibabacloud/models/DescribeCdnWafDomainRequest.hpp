// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNWAFDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNWAFDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnWafDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnWafDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnWafDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeCdnWafDomainRequest() = default ;
    DescribeCdnWafDomainRequest(const DescribeCdnWafDomainRequest &) = default ;
    DescribeCdnWafDomainRequest(DescribeCdnWafDomainRequest &&) = default ;
    DescribeCdnWafDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnWafDomainRequest() = default ;
    DescribeCdnWafDomainRequest& operator=(const DescribeCdnWafDomainRequest &) = default ;
    DescribeCdnWafDomainRequest& operator=(DescribeCdnWafDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnWafDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCdnWafDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCdnWafDomainRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The domain name that you want to query.
    // 
    // You can specify only one domain name in each request. You have three options to configure this parameter:
    // 
    // *   Specify an exact domain name. For example, if you set this parameter to example.com, configuration information of example.com is queried.
    // *   Specify a keyword. For example, if you set this parameter to example, configuration information about all domain names that contain example is queried.
    // *   Leave this parameter empty. If this parameter is left empty, all accelerated domain names for which WAF is configured are queried.
    std::shared_ptr<string> domainName_ = nullptr;
    // The region where WAF is enabled. Valid values:
    // 
    // *   **cn-hangzhou**: inside the Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    // 
    // > ap-southeast-1 includes Hong Kong (China), Macao (China), Taiwan (China), and other countries and regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
