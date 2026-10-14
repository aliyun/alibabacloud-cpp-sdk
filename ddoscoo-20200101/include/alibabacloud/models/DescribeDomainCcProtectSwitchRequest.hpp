// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCCPROTECTSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCCPROTECTSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainCcProtectSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCcProtectSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCcProtectSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeDomainCcProtectSwitchRequest() = default ;
    DescribeDomainCcProtectSwitchRequest(const DescribeDomainCcProtectSwitchRequest &) = default ;
    DescribeDomainCcProtectSwitchRequest(DescribeDomainCcProtectSwitchRequest &&) = default ;
    DescribeDomainCcProtectSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCcProtectSwitchRequest() = default ;
    DescribeDomainCcProtectSwitchRequest& operator=(const DescribeDomainCcProtectSwitchRequest &) = default ;
    DescribeDomainCcProtectSwitchRequest& operator=(DescribeDomainCcProtectSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && this->resourceGroupId_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeDomainCcProtectSwitchRequest& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDomainCcProtectSwitchRequest& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDomainCcProtectSwitchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The domain names of the websites. You can specify up to five domain names.
    // 
    // > A website forwarding rule must be configured for the domain name. Call [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> domains_ {};
    // The ID of the resource group to which the Anti-DDoS Pro instance belongs in Resource Management. If you do not specify this parameter, the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
