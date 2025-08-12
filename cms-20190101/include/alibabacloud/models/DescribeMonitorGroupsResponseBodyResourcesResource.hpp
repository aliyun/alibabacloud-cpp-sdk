// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups.hpp>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceTags.hpp>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds.hpp>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(BindUrl, bindUrl_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupFounderTagKey, groupFounderTagKey_);
      DARABONBA_PTR_TO_JSON(GroupFounderTagValue, groupFounderTagValue_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(TemplateInfos, templateInfos_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(BindUrl, bindUrl_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupFounderTagKey, groupFounderTagKey_);
      DARABONBA_PTR_FROM_JSON(GroupFounderTagValue, groupFounderTagValue_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(TemplateInfos, templateInfos_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResource() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResource(const DescribeMonitorGroupsResponseBodyResourcesResource &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResource(DescribeMonitorGroupsResponseBodyResourcesResource &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResource() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResource& operator=(const DescribeMonitorGroupsResponseBodyResourcesResource &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResource& operator=(DescribeMonitorGroupsResponseBodyResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindUrl_ != nullptr
        && this->contactGroups_ != nullptr && this->dynamicTagRuleId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->groupFounderTagKey_ != nullptr
        && this->groupFounderTagValue_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->resourceGroupId_ != nullptr && this->serviceId_ != nullptr
        && this->tags_ != nullptr && this->templateIds_ != nullptr && this->templateInfos_ != nullptr && this->type_ != nullptr; };
    // bindUrl Field Functions 
    bool hasBindUrl() const { return this->bindUrl_ != nullptr;};
    void deleteBindUrl() { this->bindUrl_ = nullptr;};
    inline string bindUrl() const { DARABONBA_PTR_GET_DEFAULT(bindUrl_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setBindUrl(string bindUrl) { DARABONBA_PTR_SET_VALUE(bindUrl_, bindUrl) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups) };
    inline Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups contactGroups() { DARABONBA_PTR_GET(contactGroups_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setContactGroups(const Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setContactGroups(Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // dynamicTagRuleId Field Functions 
    bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
    void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
    inline string dynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupFounderTagKey Field Functions 
    bool hasGroupFounderTagKey() const { return this->groupFounderTagKey_ != nullptr;};
    void deleteGroupFounderTagKey() { this->groupFounderTagKey_ = nullptr;};
    inline string groupFounderTagKey() const { DARABONBA_PTR_GET_DEFAULT(groupFounderTagKey_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setGroupFounderTagKey(string groupFounderTagKey) { DARABONBA_PTR_SET_VALUE(groupFounderTagKey_, groupFounderTagKey) };


    // groupFounderTagValue Field Functions 
    bool hasGroupFounderTagValue() const { return this->groupFounderTagValue_ != nullptr;};
    void deleteGroupFounderTagValue() { this->groupFounderTagValue_ = nullptr;};
    inline string groupFounderTagValue() const { DARABONBA_PTR_GET_DEFAULT(groupFounderTagValue_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setGroupFounderTagValue(string groupFounderTagValue) { DARABONBA_PTR_SET_VALUE(groupFounderTagValue_, groupFounderTagValue) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags) };
    inline Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setTags(const Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setTags(Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds) };
    inline Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds templateIds() { DARABONBA_PTR_GET(templateIds_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setTemplateIds(const Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setTemplateIds(Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // templateInfos Field Functions 
    bool hasTemplateInfos() const { return this->templateInfos_ != nullptr;};
    void deleteTemplateInfos() { this->templateInfos_ = nullptr;};
    inline const Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos & templateInfos() const { DARABONBA_PTR_GET_CONST(templateInfos_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos) };
    inline Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos templateInfos() { DARABONBA_PTR_GET(templateInfos_, Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setTemplateInfos(const Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos & templateInfos) { DARABONBA_PTR_SET_VALUE(templateInfos_, templateInfos) };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setTemplateInfos(Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos && templateInfos) { DARABONBA_PTR_SET_RVALUE(templateInfos_, templateInfos) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the ACK cluster from which the application group is synchronized.
    std::shared_ptr<string> bindUrl_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups> contactGroups_ = nullptr;
    // The ID of the tag rule.
    std::shared_ptr<string> dynamicTagRuleId_ = nullptr;
    // The timestamp when the application group was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timestamp when the application group was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The tag key that is created for the application group by using the tag rule.
    std::shared_ptr<string> groupFounderTagKey_ = nullptr;
    // The tag value that is created for the application group by using the tag rule.
    std::shared_ptr<string> groupFounderTagValue_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the Alibaba Cloud service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The tags that are attached to the application group.
    std::shared_ptr<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTags> tags_ = nullptr;
    // The ID of the template.
    std::shared_ptr<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateIds> templateIds_ = nullptr;
    std::shared_ptr<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTemplateInfos> templateInfos_ = nullptr;
    // The type of the application group. Valid values:
    // 
    // *   custom: a self-managed application group
    // *   ehpc_cluster: an application group that is synchronized from an E-HPC cluster
    // *   kubernetes: an application group that is synchronized from an ACK cluster
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
