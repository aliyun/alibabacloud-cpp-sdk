// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUNISHEDDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUNISHEDDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePunishedDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePunishedDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PunishType, punishType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePunishedDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PunishType, punishType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribePunishedDomainsRequest() = default ;
    DescribePunishedDomainsRequest(const DescribePunishedDomainsRequest &) = default ;
    DescribePunishedDomainsRequest(DescribePunishedDomainsRequest &&) = default ;
    DescribePunishedDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePunishedDomainsRequest() = default ;
    DescribePunishedDomainsRequest& operator=(const DescribePunishedDomainsRequest &) = default ;
    DescribePunishedDomainsRequest& operator=(DescribePunishedDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && this->instanceId_ == nullptr && this->punishType_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribePunishedDomainsRequest& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribePunishedDomainsRequest& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePunishedDomainsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // punishType Field Functions 
    bool hasPunishType() const { return this->punishType_ != nullptr;};
    void deletePunishType() { this->punishType_ = nullptr;};
    inline string getPunishType() const { DARABONBA_PTR_GET_DEFAULT(punishType_, "") };
    inline DescribePunishedDomainsRequest& setPunishType(string punishType) { DARABONBA_PTR_SET_VALUE(punishType_, punishType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePunishedDomainsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribePunishedDomainsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The domain names that are added to WAF.
    shared_ptr<vector<string>> domains_ {};
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of punishment. Valid values:
    // 
    // *   **beian** (default): the filing center.
    // *   **punishCenter**: the punishment center.
    shared_ptr<string> punishType_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
