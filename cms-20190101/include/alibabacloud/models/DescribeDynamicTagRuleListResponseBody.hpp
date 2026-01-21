// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODY_HPP_
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
  class DescribeDynamicTagRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagGroupList, tagGroupList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagGroupList, tagGroupList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDynamicTagRuleListResponseBody() = default ;
    DescribeDynamicTagRuleListResponseBody(const DescribeDynamicTagRuleListResponseBody &) = default ;
    DescribeDynamicTagRuleListResponseBody(DescribeDynamicTagRuleListResponseBody &&) = default ;
    DescribeDynamicTagRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBody() = default ;
    DescribeDynamicTagRuleListResponseBody& operator=(const DescribeDynamicTagRuleListResponseBody &) = default ;
    DescribeDynamicTagRuleListResponseBody& operator=(DescribeDynamicTagRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
      };
      friend void from_json(const Darabonba::Json& j, TagGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
      };
      TagGroupList() = default ;
      TagGroupList(const TagGroupList &) = default ;
      TagGroupList(TagGroupList &&) = default ;
      TagGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagGroupList() = default ;
      TagGroupList& operator=(const TagGroupList &) = default ;
      TagGroupList& operator=(TagGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagGroup& obj) { 
          DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
          DARABONBA_PTR_TO_JSON(DynamicTagRuleId, dynamicTagRuleId_);
          DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
          DARABONBA_PTR_TO_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValueBlacklist, tagValueBlacklist_);
          DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
        };
        friend void from_json(const Darabonba::Json& j, TagGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
          DARABONBA_PTR_FROM_JSON(DynamicTagRuleId, dynamicTagRuleId_);
          DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
          DARABONBA_PTR_FROM_JSON(MatchExpressFilterRelation, matchExpressFilterRelation_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValueBlacklist, tagValueBlacklist_);
          DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
        };
        TagGroup() = default ;
        TagGroup(const TagGroup &) = default ;
        TagGroup(TagGroup &&) = default ;
        TagGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagGroup() = default ;
        TagGroup& operator=(const TagGroup &) = default ;
        TagGroup& operator=(TagGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TemplateIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TemplateIdList& obj) { 
            DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
          };
          friend void from_json(const Darabonba::Json& j, TemplateIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
          };
          TemplateIdList() = default ;
          TemplateIdList(const TemplateIdList &) = default ;
          TemplateIdList(TemplateIdList &&) = default ;
          TemplateIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TemplateIdList() = default ;
          TemplateIdList& operator=(const TemplateIdList &) = default ;
          TemplateIdList& operator=(TemplateIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->templateIdList_ == nullptr; };
          // templateIdList Field Functions 
          bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
          void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
          inline const vector<string> & getTemplateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, vector<string>) };
          inline vector<string> getTemplateIdList() { DARABONBA_PTR_GET(templateIdList_, vector<string>) };
          inline TemplateIdList& setTemplateIdList(const vector<string> & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
          inline TemplateIdList& setTemplateIdList(vector<string> && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


        protected:
          shared_ptr<vector<string>> templateIdList_ {};
        };

        class TagValueBlacklist : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagValueBlacklist& obj) { 
            DARABONBA_PTR_TO_JSON(TagValueBlacklist, tagValueBlacklist_);
          };
          friend void from_json(const Darabonba::Json& j, TagValueBlacklist& obj) { 
            DARABONBA_PTR_FROM_JSON(TagValueBlacklist, tagValueBlacklist_);
          };
          TagValueBlacklist() = default ;
          TagValueBlacklist(const TagValueBlacklist &) = default ;
          TagValueBlacklist(TagValueBlacklist &&) = default ;
          TagValueBlacklist(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagValueBlacklist() = default ;
          TagValueBlacklist& operator=(const TagValueBlacklist &) = default ;
          TagValueBlacklist& operator=(TagValueBlacklist &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagValueBlacklist_ == nullptr; };
          // tagValueBlacklist Field Functions 
          bool hasTagValueBlacklist() const { return this->tagValueBlacklist_ != nullptr;};
          void deleteTagValueBlacklist() { this->tagValueBlacklist_ = nullptr;};
          inline const vector<string> & getTagValueBlacklist() const { DARABONBA_PTR_GET_CONST(tagValueBlacklist_, vector<string>) };
          inline vector<string> getTagValueBlacklist() { DARABONBA_PTR_GET(tagValueBlacklist_, vector<string>) };
          inline TagValueBlacklist& setTagValueBlacklist(const vector<string> & tagValueBlacklist) { DARABONBA_PTR_SET_VALUE(tagValueBlacklist_, tagValueBlacklist) };
          inline TagValueBlacklist& setTagValueBlacklist(vector<string> && tagValueBlacklist) { DARABONBA_PTR_SET_RVALUE(tagValueBlacklist_, tagValueBlacklist) };


        protected:
          shared_ptr<vector<string>> tagValueBlacklist_ {};
        };

        class MatchExpress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MatchExpress& obj) { 
            DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
          };
          friend void from_json(const Darabonba::Json& j, MatchExpress& obj) { 
            DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
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
          class MatchExpressItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MatchExpressItem& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
              DARABONBA_PTR_TO_JSON(TagValueMatchFunction, tagValueMatchFunction_);
            };
            friend void from_json(const Darabonba::Json& j, MatchExpressItem& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
              DARABONBA_PTR_FROM_JSON(TagValueMatchFunction, tagValueMatchFunction_);
            };
            MatchExpressItem() = default ;
            MatchExpressItem(const MatchExpressItem &) = default ;
            MatchExpressItem(MatchExpressItem &&) = default ;
            MatchExpressItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MatchExpressItem() = default ;
            MatchExpressItem& operator=(const MatchExpressItem &) = default ;
            MatchExpressItem& operator=(MatchExpressItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr && this->tagValueMatchFunction_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline MatchExpressItem& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline MatchExpressItem& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


            // tagValueMatchFunction Field Functions 
            bool hasTagValueMatchFunction() const { return this->tagValueMatchFunction_ != nullptr;};
            void deleteTagValueMatchFunction() { this->tagValueMatchFunction_ = nullptr;};
            inline string getTagValueMatchFunction() const { DARABONBA_PTR_GET_DEFAULT(tagValueMatchFunction_, "") };
            inline MatchExpressItem& setTagValueMatchFunction(string tagValueMatchFunction) { DARABONBA_PTR_SET_VALUE(tagValueMatchFunction_, tagValueMatchFunction) };


          protected:
            // The tag key.
            shared_ptr<string> tagKey_ {};
            // The tag value.
            // 
            // The `TagValue` and `TagValueMatchFunction` parameters must be used in pairs.
            shared_ptr<string> tagValue_ {};
            // The method that is used to match tag values. Valid values:
            // 
            // *   all: includes all
            // *   startWith: starts with a prefix
            // *   endWith: ends with a suffix
            // *   contains: contains
            // *   notContains: does not contain
            // *   equals: equals
            shared_ptr<string> tagValueMatchFunction_ {};
          };

          virtual bool empty() const override { return this->matchExpress_ == nullptr; };
          // matchExpress Field Functions 
          bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
          void deleteMatchExpress() { this->matchExpress_ = nullptr;};
          inline const vector<MatchExpress::MatchExpressItem> & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<MatchExpress::MatchExpressItem>) };
          inline vector<MatchExpress::MatchExpressItem> getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<MatchExpress::MatchExpressItem>) };
          inline MatchExpress& setMatchExpress(const vector<MatchExpress::MatchExpressItem> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
          inline MatchExpress& setMatchExpress(vector<MatchExpress::MatchExpressItem> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


        protected:
          shared_ptr<vector<MatchExpress::MatchExpressItem>> matchExpress_ {};
        };

        class ContactGroupList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContactGroupList& obj) { 
            DARABONBA_PTR_TO_JSON(ContactGroupList, contactGroupList_);
          };
          friend void from_json(const Darabonba::Json& j, ContactGroupList& obj) { 
            DARABONBA_PTR_FROM_JSON(ContactGroupList, contactGroupList_);
          };
          ContactGroupList() = default ;
          ContactGroupList(const ContactGroupList &) = default ;
          ContactGroupList(ContactGroupList &&) = default ;
          ContactGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContactGroupList() = default ;
          ContactGroupList& operator=(const ContactGroupList &) = default ;
          ContactGroupList& operator=(ContactGroupList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contactGroupList_ == nullptr; };
          // contactGroupList Field Functions 
          bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
          void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
          inline const vector<string> & getContactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, vector<string>) };
          inline vector<string> getContactGroupList() { DARABONBA_PTR_GET(contactGroupList_, vector<string>) };
          inline ContactGroupList& setContactGroupList(const vector<string> & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
          inline ContactGroupList& setContactGroupList(vector<string> && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


        protected:
          shared_ptr<vector<string>> contactGroupList_ {};
        };

        virtual bool empty() const override { return this->contactGroupList_ == nullptr
        && this->dynamicTagRuleId_ == nullptr && this->matchExpress_ == nullptr && this->matchExpressFilterRelation_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->tagKey_ == nullptr && this->tagValueBlacklist_ == nullptr && this->templateIdList_ == nullptr; };
        // contactGroupList Field Functions 
        bool hasContactGroupList() const { return this->contactGroupList_ != nullptr;};
        void deleteContactGroupList() { this->contactGroupList_ = nullptr;};
        inline const TagGroup::ContactGroupList & getContactGroupList() const { DARABONBA_PTR_GET_CONST(contactGroupList_, TagGroup::ContactGroupList) };
        inline TagGroup::ContactGroupList getContactGroupList() { DARABONBA_PTR_GET(contactGroupList_, TagGroup::ContactGroupList) };
        inline TagGroup& setContactGroupList(const TagGroup::ContactGroupList & contactGroupList) { DARABONBA_PTR_SET_VALUE(contactGroupList_, contactGroupList) };
        inline TagGroup& setContactGroupList(TagGroup::ContactGroupList && contactGroupList) { DARABONBA_PTR_SET_RVALUE(contactGroupList_, contactGroupList) };


        // dynamicTagRuleId Field Functions 
        bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
        void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
        inline string getDynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
        inline TagGroup& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


        // matchExpress Field Functions 
        bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
        void deleteMatchExpress() { this->matchExpress_ = nullptr;};
        inline const TagGroup::MatchExpress & getMatchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, TagGroup::MatchExpress) };
        inline TagGroup::MatchExpress getMatchExpress() { DARABONBA_PTR_GET(matchExpress_, TagGroup::MatchExpress) };
        inline TagGroup& setMatchExpress(const TagGroup::MatchExpress & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
        inline TagGroup& setMatchExpress(TagGroup::MatchExpress && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


        // matchExpressFilterRelation Field Functions 
        bool hasMatchExpressFilterRelation() const { return this->matchExpressFilterRelation_ != nullptr;};
        void deleteMatchExpressFilterRelation() { this->matchExpressFilterRelation_ = nullptr;};
        inline string getMatchExpressFilterRelation() const { DARABONBA_PTR_GET_DEFAULT(matchExpressFilterRelation_, "") };
        inline TagGroup& setMatchExpressFilterRelation(string matchExpressFilterRelation) { DARABONBA_PTR_SET_VALUE(matchExpressFilterRelation_, matchExpressFilterRelation) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TagGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TagGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagGroup& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValueBlacklist Field Functions 
        bool hasTagValueBlacklist() const { return this->tagValueBlacklist_ != nullptr;};
        void deleteTagValueBlacklist() { this->tagValueBlacklist_ = nullptr;};
        inline const TagGroup::TagValueBlacklist & getTagValueBlacklist() const { DARABONBA_PTR_GET_CONST(tagValueBlacklist_, TagGroup::TagValueBlacklist) };
        inline TagGroup::TagValueBlacklist getTagValueBlacklist() { DARABONBA_PTR_GET(tagValueBlacklist_, TagGroup::TagValueBlacklist) };
        inline TagGroup& setTagValueBlacklist(const TagGroup::TagValueBlacklist & tagValueBlacklist) { DARABONBA_PTR_SET_VALUE(tagValueBlacklist_, tagValueBlacklist) };
        inline TagGroup& setTagValueBlacklist(TagGroup::TagValueBlacklist && tagValueBlacklist) { DARABONBA_PTR_SET_RVALUE(tagValueBlacklist_, tagValueBlacklist) };


        // templateIdList Field Functions 
        bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
        void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
        inline const TagGroup::TemplateIdList & getTemplateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, TagGroup::TemplateIdList) };
        inline TagGroup::TemplateIdList getTemplateIdList() { DARABONBA_PTR_GET(templateIdList_, TagGroup::TemplateIdList) };
        inline TagGroup& setTemplateIdList(const TagGroup::TemplateIdList & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
        inline TagGroup& setTemplateIdList(TagGroup::TemplateIdList && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


      protected:
        // The alert contact group.
        shared_ptr<TagGroup::ContactGroupList> contactGroupList_ {};
        // The ID of the tag rule.
        shared_ptr<string> dynamicTagRuleId_ {};
        // The conditional expressions used to create an application group based on the tag.
        shared_ptr<TagGroup::MatchExpress> matchExpress_ {};
        // The logical operator that is used between conditional expressions. Valid values:
        // 
        // *   `and`
        // *   `or`
        // 
        // >  Only one logical operator can be used in a request.
        shared_ptr<string> matchExpressFilterRelation_ {};
        // The ID of the region to which the tags belong.
        shared_ptr<string> regionId_ {};
        // The status of adding instances that meet the tag rule to the application group. Valid values:
        // 
        // *   `RUNNING`
        // *   `FINISH`
        shared_ptr<string> status_ {};
        // The tag key.
        shared_ptr<string> tagKey_ {};
        shared_ptr<TagGroup::TagValueBlacklist> tagValueBlacklist_ {};
        // The IDs of the alert templates.
        shared_ptr<TagGroup::TemplateIdList> templateIdList_ {};
      };

      virtual bool empty() const override { return this->tagGroup_ == nullptr; };
      // tagGroup Field Functions 
      bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
      void deleteTagGroup() { this->tagGroup_ = nullptr;};
      inline const vector<TagGroupList::TagGroup> & getTagGroup() const { DARABONBA_PTR_GET_CONST(tagGroup_, vector<TagGroupList::TagGroup>) };
      inline vector<TagGroupList::TagGroup> getTagGroup() { DARABONBA_PTR_GET(tagGroup_, vector<TagGroupList::TagGroup>) };
      inline TagGroupList& setTagGroup(const vector<TagGroupList::TagGroup> & tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };
      inline TagGroupList& setTagGroup(vector<TagGroupList::TagGroup> && tagGroup) { DARABONBA_PTR_SET_RVALUE(tagGroup_, tagGroup) };


    protected:
      shared_ptr<vector<TagGroupList::TagGroup>> tagGroup_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->tagGroupList_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDynamicTagRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDynamicTagRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagGroupList Field Functions 
    bool hasTagGroupList() const { return this->tagGroupList_ != nullptr;};
    void deleteTagGroupList() { this->tagGroupList_ = nullptr;};
    inline const DescribeDynamicTagRuleListResponseBody::TagGroupList & getTagGroupList() const { DARABONBA_PTR_GET_CONST(tagGroupList_, DescribeDynamicTagRuleListResponseBody::TagGroupList) };
    inline DescribeDynamicTagRuleListResponseBody::TagGroupList getTagGroupList() { DARABONBA_PTR_GET(tagGroupList_, DescribeDynamicTagRuleListResponseBody::TagGroupList) };
    inline DescribeDynamicTagRuleListResponseBody& setTagGroupList(const DescribeDynamicTagRuleListResponseBody::TagGroupList & tagGroupList) { DARABONBA_PTR_SET_VALUE(tagGroupList_, tagGroupList) };
    inline DescribeDynamicTagRuleListResponseBody& setTagGroupList(DescribeDynamicTagRuleListResponseBody::TagGroupList && tagGroupList) { DARABONBA_PTR_SET_RVALUE(tagGroupList_, tagGroupList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeDynamicTagRuleListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<string> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    shared_ptr<bool> success_ {};
    // The tag rules of application groups.
    shared_ptr<DescribeDynamicTagRuleListResponseBody::TagGroupList> tagGroupList_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
