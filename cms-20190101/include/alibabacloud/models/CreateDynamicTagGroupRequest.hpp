// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDYNAMICTAGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDYNAMICTAGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDynamicTagGroupRequestMatchExpress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateDynamicTagGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDynamicTagGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_TO_JSON(EnableInstallAgent, enableInstallAgent_);
      DARABONBA_PTR_TO_JSON(EnableSubscribeEvent, enableSubscribeEvent_);
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagRegionId, tagRegionId_);
      DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDynamicTagGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
      DARABONBA_PTR_FROM_JSON(EnableInstallAgent, enableInstallAgent_);
      DARABONBA_PTR_FROM_JSON(EnableSubscribeEvent, enableSubscribeEvent_);
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
      DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagRegionId, tagRegionId_);
      DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
    };
    CreateDynamicTagGroupRequest() = default ;
    CreateDynamicTagGroupRequest(const CreateDynamicTagGroupRequest &) = default ;
    CreateDynamicTagGroupRequest(CreateDynamicTagGroupRequest &&) = default ;
    CreateDynamicTagGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDynamicTagGroupRequest() = default ;
    CreateDynamicTagGroupRequest& operator=(const CreateDynamicTagGroupRequest &) = default ;
    CreateDynamicTagGroupRequest& operator=(CreateDynamicTagGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupList_ != nullptr
        && this->enableInstallAgent_ != nullptr && this->enableSubscribeEvent_ != nullptr && this->matchExpress_ != nullptr && this->matchExpressFilterRelation_ != nullptr && this->regionId_ != nullptr
        && this->tagKey_ != nullptr && this->tagRegionId_ != nullptr && this->templateIdList_ != nullptr; };
    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const vector<string> & contactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, vector<string>) };
    inline vector<string> contactGroupList() { DARABONBA_PTR_GET(contactGroupList_, vector<string>) };
    inline CreateDynamicTagGroupRequest& setContactGroupList(const vector<string> & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline CreateDynamicTagGroupRequest& setContactGroupList(vector<string> && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


    // enableInstallAgent Field Functions 
    bool hasEnableInstallAgent() const { return this->enableInstallAgent_ != nullptr;};
    void deleteEnableInstallAgent() { this->enableInstallAgent_ = nullptr;};
    inline bool enableInstallAgent() const { DARABONBA_PTR_GET_DEFAULT(enableInstallAgent_, false) };
    inline CreateDynamicTagGroupRequest& setEnableInstallAgent(bool enableInstallAgent) { DARABONBA_PTR_SET_VALUE(enableInstallAgent_, enableInstallAgent) };


    // enableSubscribeEvent Field Functions 
    bool hasEnableSubscribeEvent() const { return this->enableSubscribeEvent_ != nullptr;};
    void deleteEnableSubscribeEvent() { this->enableSubscribeEvent_ = nullptr;};
    inline bool enableSubscribeEvent() const { DARABONBA_PTR_GET_DEFAULT(enableSubscribeEvent_, false) };
    inline CreateDynamicTagGroupRequest& setEnableSubscribeEvent(bool enableSubscribeEvent) { DARABONBA_PTR_SET_VALUE(enableSubscribeEvent_, enableSubscribeEvent) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<CreateDynamicTagGroupRequestMatchExpress> & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<CreateDynamicTagGroupRequestMatchExpress>) };
    inline vector<CreateDynamicTagGroupRequestMatchExpress> matchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<CreateDynamicTagGroupRequestMatchExpress>) };
    inline CreateDynamicTagGroupRequest& setMatchExpress(const vector<CreateDynamicTagGroupRequestMatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline CreateDynamicTagGroupRequest& setMatchExpress(vector<CreateDynamicTagGroupRequestMatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string matchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline CreateDynamicTagGroupRequest& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDynamicTagGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline CreateDynamicTagGroupRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagRegionId Field Functions 
    bool hasTagRegionId() const { return this->tagRegionId_ != nullptr;};
    void deleteTagRegionId() { this->tagRegionId_ = nullptr;};
    inline string tagRegionId() const { DARABONBA_PTR_GET_DEFAULT(tagRegionId_, "") };
    inline CreateDynamicTagGroupRequest& setTagRegionId(string tagRegionId) { DARABONBA_PTR_SET_VALUE(tagRegionId_, tagRegionId) };


    // templateIdList Field Functions 
    bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
    void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
    inline const vector<string> & templateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, vector<string>) };
    inline vector<string> templateIdList() { DARABONBA_PTR_GET(templateIdList_, vector<string>) };
    inline CreateDynamicTagGroupRequest& setTemplateIdList(const vector<string> & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
    inline CreateDynamicTagGroupRequest& setTemplateIdList(vector<string> && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> contactGroupList_ = nullptr;
    // Specifies whether the CloudMonitor agent is automatically installed for the application group. CloudMonitor determines whether to automatically install the CloudMonitor agent for the hosts in an application group based on the value of this parameter. Valid values:
    // 
    // *   true: The CloudMonitor agent is automatically installed.
    // *   false (default value): The CloudMonitor agent is not automatically installed.
    std::shared_ptr<bool> enableInstallAgent_ = nullptr;
    // Specifies whether the application group automatically subscribes to event notifications. If events whose severity level is critical or warning occur on resources in an application group, CloudMonitor sends alert notifications. Valid values:
    // 
    // *   true: The application group automatically subscribes to event notifications.
    // *   false (default value): The application group does not automatically subscribe to event notifications.
    std::shared_ptr<bool> enableSubscribeEvent_ = nullptr;
    // The conditional expressions used to create an application group based on the tag.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateDynamicTagGroupRequestMatchExpress>> matchExpress_ = nullptr;
    // The relationship between the conditional expressions for the tag values of the cloud resources. Valid values:
    // 
    // *   and (default)
    // *   or
    std::shared_ptr<string> matchExpressFilterRelation_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The tag keys of the cloud resources.
    // 
    // For more information about how to obtain tag keys, see [DescribeTagKeyList](https://help.aliyun.com/document_detail/145558.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The ID of the region to which the tags belong.
    std::shared_ptr<string> tagRegionId_ = nullptr;
    std::shared_ptr<vector<string>> templateIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
