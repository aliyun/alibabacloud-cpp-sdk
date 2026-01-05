// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateSets, launchTemplateSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateSets, launchTemplateSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLaunchTemplatesResponseBody() = default ;
    DescribeLaunchTemplatesResponseBody(const DescribeLaunchTemplatesResponseBody &) = default ;
    DescribeLaunchTemplatesResponseBody(DescribeLaunchTemplatesResponseBody &&) = default ;
    DescribeLaunchTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplatesResponseBody() = default ;
    DescribeLaunchTemplatesResponseBody& operator=(const DescribeLaunchTemplatesResponseBody &) = default ;
    DescribeLaunchTemplatesResponseBody& operator=(DescribeLaunchTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchTemplateSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateSets& obj) { 
        DARABONBA_PTR_TO_JSON(LaunchTemplateSet, launchTemplateSet_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateSets& obj) { 
        DARABONBA_PTR_FROM_JSON(LaunchTemplateSet, launchTemplateSet_);
      };
      LaunchTemplateSets() = default ;
      LaunchTemplateSets(const LaunchTemplateSets &) = default ;
      LaunchTemplateSets(LaunchTemplateSets &&) = default ;
      LaunchTemplateSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchTemplateSets() = default ;
      LaunchTemplateSets& operator=(const LaunchTemplateSets &) = default ;
      LaunchTemplateSets& operator=(LaunchTemplateSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LaunchTemplateSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LaunchTemplateSet& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
          DARABONBA_PTR_TO_JSON(DefaultVersionNumber, defaultVersionNumber_);
          DARABONBA_PTR_TO_JSON(LatestVersionNumber, latestVersionNumber_);
          DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
          DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, LaunchTemplateSet& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
          DARABONBA_PTR_FROM_JSON(DefaultVersionNumber, defaultVersionNumber_);
          DARABONBA_PTR_FROM_JSON(LatestVersionNumber, latestVersionNumber_);
          DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
          DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        LaunchTemplateSet() = default ;
        LaunchTemplateSet(const LaunchTemplateSet &) = default ;
        LaunchTemplateSet(LaunchTemplateSet &&) = default ;
        LaunchTemplateSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LaunchTemplateSet() = default ;
        LaunchTemplateSet& operator=(const LaunchTemplateSet &) = default ;
        LaunchTemplateSet& operator=(LaunchTemplateSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag value of the launch template.
            shared_ptr<string> tagKey_ {};
            // The tag key of the launch template.
            shared_ptr<string> tagValue_ {};
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

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createdBy_ == nullptr && this->defaultVersionNumber_ == nullptr && this->latestVersionNumber_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateName_ == nullptr
        && this->modifiedTime_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LaunchTemplateSet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdBy Field Functions 
        bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
        void deleteCreatedBy() { this->createdBy_ = nullptr;};
        inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
        inline LaunchTemplateSet& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


        // defaultVersionNumber Field Functions 
        bool hasDefaultVersionNumber() const { return this->defaultVersionNumber_ != nullptr;};
        void deleteDefaultVersionNumber() { this->defaultVersionNumber_ = nullptr;};
        inline int64_t getDefaultVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionNumber_, 0L) };
        inline LaunchTemplateSet& setDefaultVersionNumber(int64_t defaultVersionNumber) { DARABONBA_PTR_SET_VALUE(defaultVersionNumber_, defaultVersionNumber) };


        // latestVersionNumber Field Functions 
        bool hasLatestVersionNumber() const { return this->latestVersionNumber_ != nullptr;};
        void deleteLatestVersionNumber() { this->latestVersionNumber_ = nullptr;};
        inline int64_t getLatestVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(latestVersionNumber_, 0L) };
        inline LaunchTemplateSet& setLatestVersionNumber(int64_t latestVersionNumber) { DARABONBA_PTR_SET_VALUE(latestVersionNumber_, latestVersionNumber) };


        // launchTemplateId Field Functions 
        bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
        void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
        inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
        inline LaunchTemplateSet& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


        // launchTemplateName Field Functions 
        bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
        void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
        inline string getLaunchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
        inline LaunchTemplateSet& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline LaunchTemplateSet& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline LaunchTemplateSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const LaunchTemplateSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, LaunchTemplateSet::Tags) };
        inline LaunchTemplateSet::Tags getTags() { DARABONBA_PTR_GET(tags_, LaunchTemplateSet::Tags) };
        inline LaunchTemplateSet& setTags(const LaunchTemplateSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline LaunchTemplateSet& setTags(LaunchTemplateSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The time when the launch template was created.
        // 
        // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The ID of the Alibaba Cloud account that created the launch template.
        shared_ptr<string> createdBy_ {};
        // The default version number of the launch template.
        shared_ptr<int64_t> defaultVersionNumber_ {};
        // The latest version number of the launch template.
        shared_ptr<int64_t> latestVersionNumber_ {};
        // The ID of the launch template.
        shared_ptr<string> launchTemplateId_ {};
        // The name of the launch template.
        shared_ptr<string> launchTemplateName_ {};
        // The time when a version was added to or deleted from the launch template.
        // 
        // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The ID of the resource group to which the launch template belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The tags of the launch template.
        // 
        // >  You can only call API operations to add tags to and query the tags of a launch template. You cannot add tags to or view the tags of a launch template in the ECS console.
        shared_ptr<LaunchTemplateSet::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->launchTemplateSet_ == nullptr; };
      // launchTemplateSet Field Functions 
      bool hasLaunchTemplateSet() const { return this->launchTemplateSet_ != nullptr;};
      void deleteLaunchTemplateSet() { this->launchTemplateSet_ = nullptr;};
      inline const vector<LaunchTemplateSets::LaunchTemplateSet> & getLaunchTemplateSet() const { DARABONBA_PTR_GET_CONST(launchTemplateSet_, vector<LaunchTemplateSets::LaunchTemplateSet>) };
      inline vector<LaunchTemplateSets::LaunchTemplateSet> getLaunchTemplateSet() { DARABONBA_PTR_GET(launchTemplateSet_, vector<LaunchTemplateSets::LaunchTemplateSet>) };
      inline LaunchTemplateSets& setLaunchTemplateSet(const vector<LaunchTemplateSets::LaunchTemplateSet> & launchTemplateSet) { DARABONBA_PTR_SET_VALUE(launchTemplateSet_, launchTemplateSet) };
      inline LaunchTemplateSets& setLaunchTemplateSet(vector<LaunchTemplateSets::LaunchTemplateSet> && launchTemplateSet) { DARABONBA_PTR_SET_RVALUE(launchTemplateSet_, launchTemplateSet) };


    protected:
      shared_ptr<vector<LaunchTemplateSets::LaunchTemplateSet>> launchTemplateSet_ {};
    };

    virtual bool empty() const override { return this->launchTemplateSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // launchTemplateSets Field Functions 
    bool hasLaunchTemplateSets() const { return this->launchTemplateSets_ != nullptr;};
    void deleteLaunchTemplateSets() { this->launchTemplateSets_ = nullptr;};
    inline const DescribeLaunchTemplatesResponseBody::LaunchTemplateSets & getLaunchTemplateSets() const { DARABONBA_PTR_GET_CONST(launchTemplateSets_, DescribeLaunchTemplatesResponseBody::LaunchTemplateSets) };
    inline DescribeLaunchTemplatesResponseBody::LaunchTemplateSets getLaunchTemplateSets() { DARABONBA_PTR_GET(launchTemplateSets_, DescribeLaunchTemplatesResponseBody::LaunchTemplateSets) };
    inline DescribeLaunchTemplatesResponseBody& setLaunchTemplateSets(const DescribeLaunchTemplatesResponseBody::LaunchTemplateSets & launchTemplateSets) { DARABONBA_PTR_SET_VALUE(launchTemplateSets_, launchTemplateSets) };
    inline DescribeLaunchTemplatesResponseBody& setLaunchTemplateSets(DescribeLaunchTemplatesResponseBody::LaunchTemplateSets && launchTemplateSets) { DARABONBA_PTR_SET_RVALUE(launchTemplateSets_, launchTemplateSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLaunchTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLaunchTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLaunchTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLaunchTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried launch templates.
    shared_ptr<DescribeLaunchTemplatesResponseBody::LaunchTemplateSets> launchTemplateSets_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of launch templates.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
