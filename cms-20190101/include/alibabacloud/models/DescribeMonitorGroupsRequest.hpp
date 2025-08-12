// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_TO_JSON(GroupFounderTagKey, groupFounderTagKey_);
      DARABONBA_PTR_TO_JSON(GroupFounderTagValue, groupFounderTagValue_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IncludeTemplateHistory, includeTemplateHistory_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SelectContactGroups, selectContactGroups_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_FROM_JSON(GroupFounderTagKey, groupFounderTagKey_);
      DARABONBA_PTR_FROM_JSON(GroupFounderTagValue, groupFounderTagValue_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IncludeTemplateHistory, includeTemplateHistory_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SelectContactGroups, selectContactGroups_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    DescribeMonitorGroupsRequest() = default ;
    DescribeMonitorGroupsRequest(const DescribeMonitorGroupsRequest &) = default ;
    DescribeMonitorGroupsRequest(DescribeMonitorGroupsRequest &&) = default ;
    DescribeMonitorGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsRequest() = default ;
    DescribeMonitorGroupsRequest& operator=(const DescribeMonitorGroupsRequest &) = default ;
    DescribeMonitorGroupsRequest& operator=(DescribeMonitorGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicTagRuleId_ != nullptr
        && this->groupFounderTagKey_ != nullptr && this->groupFounderTagValue_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->includeTemplateHistory_ != nullptr
        && this->instanceId_ != nullptr && this->keyword_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->selectContactGroups_ != nullptr && this->tag_ != nullptr && this->type_ != nullptr && this->types_ != nullptr; };
    // dynamicTagRuleId Field Functions 
    bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
    void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
    inline string dynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
    inline DescribeMonitorGroupsRequest& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


    // groupFounderTagKey Field Functions 
    bool hasGroupFounderTagKey() const { return this->groupFounderTagKey_ != nullptr;};
    void deleteGroupFounderTagKey() { this->groupFounderTagKey_ = nullptr;};
    inline string groupFounderTagKey() const { DARABONBA_PTR_GET_DEFAULT(groupFounderTagKey_, "") };
    inline DescribeMonitorGroupsRequest& setGroupFounderTagKey(string groupFounderTagKey) { DARABONBA_PTR_SET_VALUE(groupFounderTagKey_, groupFounderTagKey) };


    // groupFounderTagValue Field Functions 
    bool hasGroupFounderTagValue() const { return this->groupFounderTagValue_ != nullptr;};
    void deleteGroupFounderTagValue() { this->groupFounderTagValue_ = nullptr;};
    inline string groupFounderTagValue() const { DARABONBA_PTR_GET_DEFAULT(groupFounderTagValue_, "") };
    inline DescribeMonitorGroupsRequest& setGroupFounderTagValue(string groupFounderTagValue) { DARABONBA_PTR_SET_VALUE(groupFounderTagValue_, groupFounderTagValue) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeMonitorGroupsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeMonitorGroupsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // includeTemplateHistory Field Functions 
    bool hasIncludeTemplateHistory() const { return this->includeTemplateHistory_ != nullptr;};
    void deleteIncludeTemplateHistory() { this->includeTemplateHistory_ = nullptr;};
    inline bool includeTemplateHistory() const { DARABONBA_PTR_GET_DEFAULT(includeTemplateHistory_, false) };
    inline DescribeMonitorGroupsRequest& setIncludeTemplateHistory(bool includeTemplateHistory) { DARABONBA_PTR_SET_VALUE(includeTemplateHistory_, includeTemplateHistory) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitorGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeMonitorGroupsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMonitorGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMonitorGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitorGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // selectContactGroups Field Functions 
    bool hasSelectContactGroups() const { return this->selectContactGroups_ != nullptr;};
    void deleteSelectContactGroups() { this->selectContactGroups_ = nullptr;};
    inline bool selectContactGroups() const { DARABONBA_PTR_GET_DEFAULT(selectContactGroups_, false) };
    inline DescribeMonitorGroupsRequest& setSelectContactGroups(bool selectContactGroups) { DARABONBA_PTR_SET_VALUE(selectContactGroups_, selectContactGroups) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeMonitorGroupsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeMonitorGroupsRequestTag>) };
    inline vector<DescribeMonitorGroupsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeMonitorGroupsRequestTag>) };
    inline DescribeMonitorGroupsRequest& setTag(const vector<DescribeMonitorGroupsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeMonitorGroupsRequest& setTag(vector<DescribeMonitorGroupsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeMonitorGroupsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string types() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline DescribeMonitorGroupsRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


  protected:
    // The ID of the tag rule.
    std::shared_ptr<string> dynamicTagRuleId_ = nullptr;
    // The tag key that is created for the application group by using the tag rule.
    std::shared_ptr<string> groupFounderTagKey_ = nullptr;
    // The tag value that is created for the application group by using the tag rule.
    std::shared_ptr<string> groupFounderTagValue_ = nullptr;
    // The ID of the application group. Separate multiple application group IDs with commas (,).
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
    // Specifies whether to include the historical alert templates that are applied to the application group in the response. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> includeTemplateHistory_ = nullptr;
    // The instance ID. This parameter is used to query the application group to which the specified instance belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The keyword that is used for the search.
    std::shared_ptr<string> keyword_ = nullptr;
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Pages start from page 1. Default value: 30.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to include the alert contact groups in the response. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> selectContactGroups_ = nullptr;
    // The tags of the application group.
    std::shared_ptr<vector<DescribeMonitorGroupsRequestTag>> tag_ = nullptr;
    // The type of the application group. Valid values:
    // 
    // *   custom: a self-managed application group
    // *   ehpc_cluster: an application group that is synchronized from an E-HPC cluster
    // *   kubernetes: an application group that is synchronized from an ACK cluster
    std::shared_ptr<string> type_ = nullptr;
    // The type of the application group. Valid values:
    // 
    // *   custom: a self-managed application group
    // *   ehpc_cluster: an application group that is synchronized from an Elastic High Performance Computing (E-HPC) cluster
    // *   kubernetes: an application group that is synchronized from a Container Service for Kubernetes (ACK) cluster
    // *   tag: an application group that is automatically created by using tags
    // *   resMgr: an application group that is created by using resource groups
    // *   ess: an application group that is synchronized from Auto Scaling (ESS)
    std::shared_ptr<string> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
