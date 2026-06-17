// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDYNAMICTAGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDYNAMICTAGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class MatchExpress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MatchExpress& obj) { 
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        DARABONBA_PTR_TO_JSON(TagValueMatchFunction, tagValueMatchFunction_);
      };
      friend void from_json(const Darabonba::Json& j, MatchExpress& obj) { 
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        DARABONBA_PTR_FROM_JSON(TagValueMatchFunction, tagValueMatchFunction_);
      };
      MatchExpress() = default ;
      MatchExpress(const MatchExpress &) = default ;
      MatchExpress(MatchExpress &&) = default ;
      MatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MatchExpress() = default ;
      MatchExpress& operator=(const MatchExpress &) = default ;
      MatchExpress& operator=(MatchExpress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagName_ == nullptr
        && this->tagValue_ == nullptr && this->tagValueMatchFunction_ == nullptr; };
      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline MatchExpress& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline MatchExpress& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      // tagValueMatchFunction Field Functions 
      bool hasTagValueMatchFunction() const { return this->tagValueMatchFunction_ != nullptr;};
      void deleteTagValueMatchFunction() { this->tagValueMatchFunction_ = nullptr;};
      inline string getTagValueMatchFunction() const { DARABONBA_PTR_GET_DEFAULT(tagValueMatchFunction_, "") };
      inline MatchExpress& setTagValueMatchFunction(string tagValueMatchFunction) { DARABONBA_PTR_SET_VALUE(tagValueMatchFunction_, tagValueMatchFunction) };


    protected:
      // The key of the tag that is used to create the group. If multiple resources have this tag key, the resources that meet the filter conditions are added to the same group based on the same key-value pair.
      shared_ptr<string> tagName_ {};
      // The value of the resource tag. The value of N is 1.
      // 
      // > You must specify both the `MatchExpress.N.TagValueMatchFunction` and `MatchExpress.N.TagValue` parameters.
      shared_ptr<string> tagValue_ {};
      // The method that is used to match the values of resource tags. The value of N is 1. Valid values:
      // 
      // - contains: includes.
      // 
      // - startWith: prefix.
      // 
      // - endWith: suffix.
      // 
      // - notContains: does not include.
      // 
      // - equals: equals.
      // 
      // - all: all.
      // 
      // > You must specify both the `MatchExpress.N.TagValueMatchFunction` and `MatchExpress.N.TagValue` parameters.
      shared_ptr<string> tagValueMatchFunction_ {};
    };

    virtual bool empty() const override { return this->contactGroupList_ == nullptr
        && this->enableInstallAgent_ == nullptr && this->enableSubscribeEvent_ == nullptr && this->matchExpress_ == nullptr && this->matchExpressFilterRelation_ == nullptr && this->regionId_ == nullptr
        && this->tagKey_ == nullptr && this->tagRegionId_ == nullptr && this->templateIdList_ == nullptr; };
    // contactGroupList Field Functions 
    bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
    void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
    inline const vector<string> & getContactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, vector<string>) };
    inline vector<string> getContactGroupList() { DARABONBA_PTR_GET(contactGroupList_, vector<string>) };
    inline CreateDynamicTagGroupRequest& setContactGroupList(const vector<string> & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
    inline CreateDynamicTagGroupRequest& setContactGroupList(vector<string> && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


    // enableInstallAgent Field Functions 
    bool hasEnableInstallAgent() const { return this->enableInstallAgent_ != nullptr;};
    void deleteEnableInstallAgent() { this->enableInstallAgent_ = nullptr;};
    inline bool getEnableInstallAgent() const { DARABONBA_PTR_GET_DEFAULT(enableInstallAgent_, false) };
    inline CreateDynamicTagGroupRequest& setEnableInstallAgent(bool enableInstallAgent) { DARABONBA_PTR_SET_VALUE(enableInstallAgent_, enableInstallAgent) };


    // enableSubscribeEvent Field Functions 
    bool hasEnableSubscribeEvent() const { return this->enableSubscribeEvent_ != nullptr;};
    void deleteEnableSubscribeEvent() { this->enableSubscribeEvent_ = nullptr;};
    inline bool getEnableSubscribeEvent() const { DARABONBA_PTR_GET_DEFAULT(enableSubscribeEvent_, false) };
    inline CreateDynamicTagGroupRequest& setEnableSubscribeEvent(bool enableSubscribeEvent) { DARABONBA_PTR_SET_VALUE(enableSubscribeEvent_, enableSubscribeEvent) };


    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<CreateDynamicTagGroupRequest::MatchExpress> & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<CreateDynamicTagGroupRequest::MatchExpress>) };
    inline vector<CreateDynamicTagGroupRequest::MatchExpress> getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<CreateDynamicTagGroupRequest::MatchExpress>) };
    inline CreateDynamicTagGroupRequest& setMatchExpress(const vector<CreateDynamicTagGroupRequest::MatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline CreateDynamicTagGroupRequest& setMatchExpress(vector<CreateDynamicTagGroupRequest::MatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


    // matchExpressFilterRelation Field Functions 
    bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
    void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
    inline string getMatchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
    inline CreateDynamicTagGroupRequest& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDynamicTagGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline CreateDynamicTagGroupRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagRegionId Field Functions 
    bool hasTagRegionId() const { return this->tagRegionId_ != nullptr;};
    void deleteTagRegionId() { this->tagRegionId_ = nullptr;};
    inline string getTagRegionId() const { DARABONBA_PTR_GET_DEFAULT(tagRegionId_, "") };
    inline CreateDynamicTagGroupRequest& setTagRegionId(string tagRegionId) { DARABONBA_PTR_SET_VALUE(tagRegionId_, tagRegionId) };


    // templateIdList Field Functions 
    bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
    void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
    inline const vector<string> & getTemplateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, vector<string>) };
    inline vector<string> getTemplateIdList() { DARABONBA_PTR_GET(templateIdList_, vector<string>) };
    inline CreateDynamicTagGroupRequest& setTemplateIdList(const vector<string> & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
    inline CreateDynamicTagGroupRequest& setTemplateIdList(vector<string> && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


  protected:
    // The alert contact groups. The value of N can be from 1 to 100. Alert notifications for the application group are sent to the alert contacts in these alert contact groups.
    // 
    // An alert contact group can contain one or more alert contacts. For more information about how to create alert contacts and alert contact groups, see [PutContact](https://help.aliyun.com/document_detail/114923.html) and [PutContactGroup](https://help.aliyun.com/document_detail/114929.html). For more information about how to obtain alert contact groups, see [DescribeContactGroupList](https://help.aliyun.com/document_detail/114922.html).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> contactGroupList_ {};
    // Specifies whether to automatically install the CloudMonitor agent for the application group. CloudMonitor automatically installs the agent on the hosts in the application group. Valid values:
    // 
    // - true: enabled.
    // 
    // - false (default): disabled.
    shared_ptr<bool> enableInstallAgent_ {};
    // Specifies whether to automatically subscribe to event notifications for the application group. When a critical or warning event occurs on a resource in the application group, CloudMonitor sends an alert notification. Valid values:
    // 
    // - true: enabled.
    // 
    // - false (default): disabled.
    shared_ptr<bool> enableSubscribeEvent_ {};
    // The match expressions that are used to create an application group from tags.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateDynamicTagGroupRequest::MatchExpress>> matchExpress_ {};
    // The relationship between the conditional expressions for the tag values. Valid values:
    // 
    // - and (default)
    // 
    // - or
    shared_ptr<string> matchExpressFilterRelation_ {};
    shared_ptr<string> regionId_ {};
    // The tag key of the resource.
    // 
    // For more information about how to query the tag keys of resources, see [DescribeTagKeyList](https://help.aliyun.com/document_detail/145558.html).
    // 
    // This parameter is required.
    shared_ptr<string> tagKey_ {};
    // The ID of the region to which the tag belongs.
    shared_ptr<string> tagRegionId_ {};
    // The ID of the alert template.
    // 
    // For more information about how to query the IDs of alert templates, see [DescribeMetricRuleTemplateList](https://help.aliyun.com/document_detail/114982.html).
    shared_ptr<vector<string>> templateIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
