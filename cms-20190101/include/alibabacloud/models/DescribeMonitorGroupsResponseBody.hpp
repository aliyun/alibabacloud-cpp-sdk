// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODY_HPP_
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
  class DescribeMonitorGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMonitorGroupsResponseBody() = default ;
    DescribeMonitorGroupsResponseBody(const DescribeMonitorGroupsResponseBody &) = default ;
    DescribeMonitorGroupsResponseBody(DescribeMonitorGroupsResponseBody &&) = default ;
    DescribeMonitorGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBody() = default ;
    DescribeMonitorGroupsResponseBody& operator=(const DescribeMonitorGroupsResponseBody &) = default ;
    DescribeMonitorGroupsResponseBody& operator=(DescribeMonitorGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Resource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Resource& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Resource& obj) { 
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
        Resource() = default ;
        Resource(const Resource &) = default ;
        Resource(Resource &&) = default ;
        Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Resource() = default ;
        Resource& operator=(const Resource &) = default ;
        Resource& operator=(Resource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TemplateInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TemplateInfos& obj) { 
            DARABONBA_PTR_TO_JSON(TemplateInfo, templateInfo_);
          };
          friend void from_json(const Darabonba::Json& j, TemplateInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(TemplateInfo, templateInfo_);
          };
          TemplateInfos() = default ;
          TemplateInfos(const TemplateInfos &) = default ;
          TemplateInfos(TemplateInfos &&) = default ;
          TemplateInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TemplateInfos() = default ;
          TemplateInfos& operator=(const TemplateInfos &) = default ;
          TemplateInfos& operator=(TemplateInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TemplateInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TemplateInfo& obj) { 
              DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
              DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
              DARABONBA_PTR_TO_JSON(Ver, ver_);
            };
            friend void from_json(const Darabonba::Json& j, TemplateInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
              DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
              DARABONBA_PTR_FROM_JSON(Ver, ver_);
            };
            TemplateInfo() = default ;
            TemplateInfo(const TemplateInfo &) = default ;
            TemplateInfo(TemplateInfo &&) = default ;
            TemplateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TemplateInfo() = default ;
            TemplateInfo& operator=(const TemplateInfo &) = default ;
            TemplateInfo& operator=(TemplateInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->effectTime_ == nullptr
        && this->templateId_ == nullptr && this->ver_ == nullptr; };
            // effectTime Field Functions 
            bool hasEffectTime() const { return this->effectTime_ != nullptr;};
            void deleteEffectTime() { this->effectTime_ = nullptr;};
            inline int64_t getEffectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, 0L) };
            inline TemplateInfo& setEffectTime(int64_t effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


            // templateId Field Functions 
            bool hasTemplateId() const { return this->templateId_ != nullptr;};
            void deleteTemplateId() { this->templateId_ = nullptr;};
            inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
            inline TemplateInfo& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


            // ver Field Functions 
            bool hasVer() const { return this->ver_ != nullptr;};
            void deleteVer() { this->ver_ = nullptr;};
            inline string getVer() const { DARABONBA_PTR_GET_DEFAULT(ver_, "") };
            inline TemplateInfo& setVer(string ver) { DARABONBA_PTR_SET_VALUE(ver_, ver) };


          protected:
            shared_ptr<int64_t> effectTime_ {};
            shared_ptr<string> templateId_ {};
            shared_ptr<string> ver_ {};
          };

          virtual bool empty() const override { return this->templateInfo_ == nullptr; };
          // templateInfo Field Functions 
          bool hasTemplateInfo() const { return this->templateInfo_ != nullptr;};
          void deleteTemplateInfo() { this->templateInfo_ = nullptr;};
          inline const vector<TemplateInfos::TemplateInfo> & getTemplateInfo() const { DARABONBA_PTR_GET_CONST(templateInfo_, vector<TemplateInfos::TemplateInfo>) };
          inline vector<TemplateInfos::TemplateInfo> getTemplateInfo() { DARABONBA_PTR_GET(templateInfo_, vector<TemplateInfos::TemplateInfo>) };
          inline TemplateInfos& setTemplateInfo(const vector<TemplateInfos::TemplateInfo> & templateInfo) { DARABONBA_PTR_SET_VALUE(templateInfo_, templateInfo) };
          inline TemplateInfos& setTemplateInfo(vector<TemplateInfos::TemplateInfo> && templateInfo) { DARABONBA_PTR_SET_RVALUE(templateInfo_, templateInfo) };


        protected:
          shared_ptr<vector<TemplateInfos::TemplateInfo>> templateInfo_ {};
        };

        class TemplateIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TemplateIds& obj) { 
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          };
          friend void from_json(const Darabonba::Json& j, TemplateIds& obj) { 
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          };
          TemplateIds() = default ;
          TemplateIds(const TemplateIds &) = default ;
          TemplateIds(TemplateIds &&) = default ;
          TemplateIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TemplateIds() = default ;
          TemplateIds& operator=(const TemplateIds &) = default ;
          TemplateIds& operator=(TemplateIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->templateId_ == nullptr; };
          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline const vector<string> & getTemplateId() const { DARABONBA_PTR_GET_CONST(templateId_, vector<string>) };
          inline vector<string> getTemplateId() { DARABONBA_PTR_GET(templateId_, vector<string>) };
          inline TemplateIds& setTemplateId(const vector<string> & templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };
          inline TemplateIds& setTemplateId(vector<string> && templateId) { DARABONBA_PTR_SET_RVALUE(templateId_, templateId) };


        protected:
          shared_ptr<vector<string>> templateId_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The tag key of the application group.
            shared_ptr<string> key_ {};
            // The tag value of the application group.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class ContactGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactGroups& obj) { 
            DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
          };
          friend void from_json(const Darabonba::Json& j, ContactGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
          };
          ContactGroups() = default ;
          ContactGroups(const ContactGroups &) = default ;
          ContactGroups(ContactGroups &&) = default ;
          ContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContactGroups() = default ;
          ContactGroups& operator=(const ContactGroups &) = default ;
          ContactGroups& operator=(ContactGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ContactGroup : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ContactGroup& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, ContactGroup& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            ContactGroup() = default ;
            ContactGroup(const ContactGroup &) = default ;
            ContactGroup(ContactGroup &&) = default ;
            ContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ContactGroup() = default ;
            ContactGroup& operator=(const ContactGroup &) = default ;
            ContactGroup& operator=(ContactGroup &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // The name of the alert contact group.
            shared_ptr<string> name_ {};
          };

          virtual bool empty() const override { return this->contactGroup_ == nullptr; };
          // contactGroup Field Functions 
          bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
          void deleteContactGroup() { this->contactGroup_ = nullptr;};
          inline const vector<ContactGroups::ContactGroup> & getContactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<ContactGroups::ContactGroup>) };
          inline vector<ContactGroups::ContactGroup> getContactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<ContactGroups::ContactGroup>) };
          inline ContactGroups& setContactGroup(const vector<ContactGroups::ContactGroup> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
          inline ContactGroups& setContactGroup(vector<ContactGroups::ContactGroup> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


        protected:
          shared_ptr<vector<ContactGroups::ContactGroup>> contactGroup_ {};
        };

        virtual bool empty() const override { return this->bindUrl_ == nullptr
        && this->contactGroups_ == nullptr && this->dynamicTagRuleId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->groupFounderTagKey_ == nullptr
        && this->groupFounderTagValue_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceId_ == nullptr
        && this->tags_ == nullptr && this->templateIds_ == nullptr && this->templateInfos_ == nullptr && this->type_ == nullptr; };
        // bindUrl Field Functions 
        bool hasBindUrl() const { return this->bindUrl_ != nullptr;};
        void deleteBindUrl() { this->bindUrl_ = nullptr;};
        inline string getBindUrl() const { DARABONBA_PTR_GET_DEFAULT(bindUrl_, "") };
        inline Resource& setBindUrl(string bindUrl) { DARABONBA_PTR_SET_VALUE(bindUrl_, bindUrl) };


        // contactGroups Field Functions 
        bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
        void deleteContactGroups() { this->contactGroups_ = nullptr;};
        inline const Resource::ContactGroups & getContactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Resource::ContactGroups) };
        inline Resource::ContactGroups getContactGroups() { DARABONBA_PTR_GET(contactGroups_, Resource::ContactGroups) };
        inline Resource& setContactGroups(const Resource::ContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
        inline Resource& setContactGroups(Resource::ContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


        // dynamicTagRuleId Field Functions 
        bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
        void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
        inline string getDynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
        inline Resource& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Resource& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Resource& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // groupFounderTagKey Field Functions 
        bool hasGroupFounderTagKey() const { return this->groupFounderTagKey_ != nullptr;};
        void deleteGroupFounderTagKey() { this->groupFounderTagKey_ = nullptr;};
        inline string getGroupFounderTagKey() const { DARABONBA_PTR_GET_DEFAULT(groupFounderTagKey_, "") };
        inline Resource& setGroupFounderTagKey(string groupFounderTagKey) { DARABONBA_PTR_SET_VALUE(groupFounderTagKey_, groupFounderTagKey) };


        // groupFounderTagValue Field Functions 
        bool hasGroupFounderTagValue() const { return this->groupFounderTagValue_ != nullptr;};
        void deleteGroupFounderTagValue() { this->groupFounderTagValue_ = nullptr;};
        inline string getGroupFounderTagValue() const { DARABONBA_PTR_GET_DEFAULT(groupFounderTagValue_, "") };
        inline Resource& setGroupFounderTagValue(string groupFounderTagValue) { DARABONBA_PTR_SET_VALUE(groupFounderTagValue_, groupFounderTagValue) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline Resource& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Resource& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Resource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Resource& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Resource::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Resource::Tags) };
        inline Resource::Tags getTags() { DARABONBA_PTR_GET(tags_, Resource::Tags) };
        inline Resource& setTags(const Resource::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Resource& setTags(Resource::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // templateIds Field Functions 
        bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
        void deleteTemplateIds() { this->templateIds_ = nullptr;};
        inline const Resource::TemplateIds & getTemplateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, Resource::TemplateIds) };
        inline Resource::TemplateIds getTemplateIds() { DARABONBA_PTR_GET(templateIds_, Resource::TemplateIds) };
        inline Resource& setTemplateIds(const Resource::TemplateIds & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
        inline Resource& setTemplateIds(Resource::TemplateIds && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


        // templateInfos Field Functions 
        bool hasTemplateInfos() const { return this->templateInfos_ != nullptr;};
        void deleteTemplateInfos() { this->templateInfos_ = nullptr;};
        inline const Resource::TemplateInfos & getTemplateInfos() const { DARABONBA_PTR_GET_CONST(templateInfos_, Resource::TemplateInfos) };
        inline Resource::TemplateInfos getTemplateInfos() { DARABONBA_PTR_GET(templateInfos_, Resource::TemplateInfos) };
        inline Resource& setTemplateInfos(const Resource::TemplateInfos & templateInfos) { DARABONBA_PTR_SET_VALUE(templateInfos_, templateInfos) };
        inline Resource& setTemplateInfos(Resource::TemplateInfos && templateInfos) { DARABONBA_PTR_SET_RVALUE(templateInfos_, templateInfos) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Resource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The URL of the ACK cluster from which the application group is synchronized.
        shared_ptr<string> bindUrl_ {};
        // The alert contact groups.
        shared_ptr<Resource::ContactGroups> contactGroups_ {};
        // The ID of the tag rule.
        shared_ptr<string> dynamicTagRuleId_ {};
        // The timestamp when the application group was created. Unit: milliseconds.
        shared_ptr<int64_t> gmtCreate_ {};
        // The timestamp when the application group was modified. Unit: milliseconds.
        shared_ptr<int64_t> gmtModified_ {};
        // The tag key that is created for the application group by using the tag rule.
        shared_ptr<string> groupFounderTagKey_ {};
        // The tag value that is created for the application group by using the tag rule.
        shared_ptr<string> groupFounderTagValue_ {};
        // The ID of the application group.
        shared_ptr<int64_t> groupId_ {};
        // The name of the application group.
        shared_ptr<string> groupName_ {};
        // The resource ID.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the Alibaba Cloud service.
        shared_ptr<string> serviceId_ {};
        // The tags that are attached to the application group.
        shared_ptr<Resource::Tags> tags_ {};
        // The ID of the template.
        shared_ptr<Resource::TemplateIds> templateIds_ {};
        shared_ptr<Resource::TemplateInfos> templateInfos_ {};
        // The type of the application group. Valid values:
        // 
        // *   custom: a self-managed application group
        // *   ehpc_cluster: an application group that is synchronized from an E-HPC cluster
        // *   kubernetes: an application group that is synchronized from an ACK cluster
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->resource_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline const vector<Resources::Resource> & getResource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Resources::Resource>) };
      inline vector<Resources::Resource> getResource() { DARABONBA_PTR_GET(resource_, vector<Resources::Resource>) };
      inline Resources& setResource(const vector<Resources::Resource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
      inline Resources& setResource(vector<Resources::Resource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    protected:
      shared_ptr<vector<Resources::Resource>> resource_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resources_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeMonitorGroupsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMonitorGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMonitorGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const DescribeMonitorGroupsResponseBody::Resources & getResources() const { DARABONBA_PTR_GET_CONST(resources_, DescribeMonitorGroupsResponseBody::Resources) };
    inline DescribeMonitorGroupsResponseBody::Resources getResources() { DARABONBA_PTR_GET(resources_, DescribeMonitorGroupsResponseBody::Resources) };
    inline DescribeMonitorGroupsResponseBody& setResources(const DescribeMonitorGroupsResponseBody::Resources & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DescribeMonitorGroupsResponseBody& setResources(DescribeMonitorGroupsResponseBody::Resources && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitorGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMonitorGroupsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resources that are associated with the application group.
    shared_ptr<DescribeMonitorGroupsResponseBody::Resources> resources_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
