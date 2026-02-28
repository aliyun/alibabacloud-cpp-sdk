// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCGRANTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCGRANTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccGrantRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccGrantRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(ForSelect, forSelect_);
      DARABONBA_PTR_TO_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_TO_JSON(GrantTenantId, grantTenantId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccGrantRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(ForSelect, forSelect_);
      DARABONBA_PTR_FROM_JSON(GrantRuleId, grantRuleId_);
      DARABONBA_PTR_FROM_JSON(GrantTenantId, grantTenantId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListVccGrantRulesRequest() = default ;
    ListVccGrantRulesRequest(const ListVccGrantRulesRequest &) = default ;
    ListVccGrantRulesRequest(ListVccGrantRulesRequest &&) = default ;
    ListVccGrantRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccGrantRulesRequest() = default ;
    ListVccGrantRulesRequest& operator=(const ListVccGrantRulesRequest &) = default ;
    ListVccGrantRulesRequest& operator=(ListVccGrantRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enablePage_ == nullptr
        && this->erId_ == nullptr && this->forSelect_ == nullptr && this->grantRuleId_ == nullptr && this->grantTenantId_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListVccGrantRulesRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline ListVccGrantRulesRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // forSelect Field Functions 
    bool hasForSelect() const { return this->forSelect_ != nullptr;};
    void deleteForSelect() { this->forSelect_ = nullptr;};
    inline bool getForSelect() const { DARABONBA_PTR_GET_DEFAULT(forSelect_, false) };
    inline ListVccGrantRulesRequest& setForSelect(bool forSelect) { DARABONBA_PTR_SET_VALUE(forSelect_, forSelect) };


    // grantRuleId Field Functions 
    bool hasGrantRuleId() const { return this->grantRuleId_ != nullptr;};
    void deleteGrantRuleId() { this->grantRuleId_ = nullptr;};
    inline string getGrantRuleId() const { DARABONBA_PTR_GET_DEFAULT(grantRuleId_, "") };
    inline ListVccGrantRulesRequest& setGrantRuleId(string grantRuleId) { DARABONBA_PTR_SET_VALUE(grantRuleId_, grantRuleId) };


    // grantTenantId Field Functions 
    bool hasGrantTenantId() const { return this->grantTenantId_ != nullptr;};
    void deleteGrantTenantId() { this->grantTenantId_ = nullptr;};
    inline string getGrantTenantId() const { DARABONBA_PTR_GET_DEFAULT(grantTenantId_, "") };
    inline ListVccGrantRulesRequest& setGrantTenantId(string grantTenantId) { DARABONBA_PTR_SET_VALUE(grantTenantId_, grantTenantId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVccGrantRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListVccGrantRulesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVccGrantRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVccGrantRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVccGrantRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVccGrantRulesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Specifies whether to enable paged query. Optional values:
    // 
    // *   **true**: Enable pagination query
    // *   **false**: Pagination query is disabled
    shared_ptr<bool> enablePage_ {};
    // Lingjun HUB ID
    shared_ptr<string> erId_ {};
    // Use the drop-down box
    shared_ptr<bool> forSelect_ {};
    // Authorization Entry ID
    shared_ptr<string> grantRuleId_ {};
    // Authorized Tenant ID
    shared_ptr<string> grantTenantId_ {};
    // Network Instance ID
    shared_ptr<string> instanceId_ {};
    // Instance name
    shared_ptr<string> instanceName_ {};
    // The page number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group instance ID
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
