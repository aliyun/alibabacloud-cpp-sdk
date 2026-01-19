// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisResponseBody() = default ;
    DescribeApisResponseBody(const DescribeApisResponseBody &) = default ;
    DescribeApisResponseBody(DescribeApisResponseBody &&) = default ;
    DescribeApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisResponseBody() = default ;
    DescribeApisResponseBody& operator=(const DescribeApisResponseBody &) = default ;
    DescribeApisResponseBody& operator=(DescribeApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiSummarys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiSummarys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiSummary, apiSummary_);
      };
      friend void from_json(const Darabonba::Json& j, ApiSummarys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiSummary, apiSummary_);
      };
      ApiSummarys() = default ;
      ApiSummarys(const ApiSummarys &) = default ;
      ApiSummarys(ApiSummarys &&) = default ;
      ApiSummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiSummarys() = default ;
      ApiSummarys& operator=(const ApiSummarys &) = default ;
      ApiSummarys& operator=(ApiSummarys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiSummary& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiMethod, apiMethod_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(DeployedInfos, deployedInfos_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(TagList, tagList_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, ApiSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiMethod, apiMethod_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiPath, apiPath_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(DeployedInfos, deployedInfos_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(TagList, tagList_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        };
        ApiSummary() = default ;
        ApiSummary(const ApiSummary &) = default ;
        ApiSummary(ApiSummary &&) = default ;
        ApiSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiSummary() = default ;
        ApiSummary& operator=(const ApiSummary &) = default ;
        ApiSummary& operator=(ApiSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagList& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, TagList& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          TagList() = default ;
          TagList(const TagList &) = default ;
          TagList(TagList &&) = default ;
          TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagList() = default ;
          TagList& operator=(const TagList &) = default ;
          TagList& operator=(TagList &&) = default ;
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
            // The tag key.
            shared_ptr<string> tagKey_ {};
            // The tag value.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<TagList::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<TagList::Tag>) };
          inline vector<TagList::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<TagList::Tag>) };
          inline TagList& setTag(const vector<TagList::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline TagList& setTag(vector<TagList::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<TagList::Tag>> tag_ {};
        };

        class DeployedInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeployedInfos& obj) { 
            DARABONBA_PTR_TO_JSON(DeployedInfo, deployedInfo_);
          };
          friend void from_json(const Darabonba::Json& j, DeployedInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(DeployedInfo, deployedInfo_);
          };
          DeployedInfos() = default ;
          DeployedInfos(const DeployedInfos &) = default ;
          DeployedInfos(DeployedInfos &&) = default ;
          DeployedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeployedInfos() = default ;
          DeployedInfos& operator=(const DeployedInfos &) = default ;
          DeployedInfos& operator=(DeployedInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DeployedInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DeployedInfo& obj) { 
              DARABONBA_PTR_TO_JSON(DeployedStatus, deployedStatus_);
              DARABONBA_PTR_TO_JSON(EffectiveVersion, effectiveVersion_);
              DARABONBA_PTR_TO_JSON(StageName, stageName_);
            };
            friend void from_json(const Darabonba::Json& j, DeployedInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(DeployedStatus, deployedStatus_);
              DARABONBA_PTR_FROM_JSON(EffectiveVersion, effectiveVersion_);
              DARABONBA_PTR_FROM_JSON(StageName, stageName_);
            };
            DeployedInfo() = default ;
            DeployedInfo(const DeployedInfo &) = default ;
            DeployedInfo(DeployedInfo &&) = default ;
            DeployedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DeployedInfo() = default ;
            DeployedInfo& operator=(const DeployedInfo &) = default ;
            DeployedInfo& operator=(DeployedInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->deployedStatus_ == nullptr
        && this->effectiveVersion_ == nullptr && this->stageName_ == nullptr; };
            // deployedStatus Field Functions 
            bool hasDeployedStatus() const { return this->deployedStatus_ != nullptr;};
            void deleteDeployedStatus() { this->deployedStatus_ = nullptr;};
            inline string getDeployedStatus() const { DARABONBA_PTR_GET_DEFAULT(deployedStatus_, "") };
            inline DeployedInfo& setDeployedStatus(string deployedStatus) { DARABONBA_PTR_SET_VALUE(deployedStatus_, deployedStatus) };


            // effectiveVersion Field Functions 
            bool hasEffectiveVersion() const { return this->effectiveVersion_ != nullptr;};
            void deleteEffectiveVersion() { this->effectiveVersion_ = nullptr;};
            inline string getEffectiveVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersion_, "") };
            inline DeployedInfo& setEffectiveVersion(string effectiveVersion) { DARABONBA_PTR_SET_VALUE(effectiveVersion_, effectiveVersion) };


            // stageName Field Functions 
            bool hasStageName() const { return this->stageName_ != nullptr;};
            void deleteStageName() { this->stageName_ = nullptr;};
            inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
            inline DeployedInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


          protected:
            // The deployment status. Valid values: DEPLOYED and NONDEPLOYED.
            shared_ptr<string> deployedStatus_ {};
            // The deployed version.
            shared_ptr<string> effectiveVersion_ {};
            // Stage Name:
            // 
            // *   **RELEASE**: production environment
            // *   **PRE**: staging environment
            // *   **TEST**: test environment
            shared_ptr<string> stageName_ {};
          };

          virtual bool empty() const override { return this->deployedInfo_ == nullptr; };
          // deployedInfo Field Functions 
          bool hasDeployedInfo() const { return this->deployedInfo_ != nullptr;};
          void deleteDeployedInfo() { this->deployedInfo_ = nullptr;};
          inline const vector<DeployedInfos::DeployedInfo> & getDeployedInfo() const { DARABONBA_PTR_GET_CONST(deployedInfo_, vector<DeployedInfos::DeployedInfo>) };
          inline vector<DeployedInfos::DeployedInfo> getDeployedInfo() { DARABONBA_PTR_GET(deployedInfo_, vector<DeployedInfos::DeployedInfo>) };
          inline DeployedInfos& setDeployedInfo(const vector<DeployedInfos::DeployedInfo> & deployedInfo) { DARABONBA_PTR_SET_VALUE(deployedInfo_, deployedInfo) };
          inline DeployedInfos& setDeployedInfo(vector<DeployedInfos::DeployedInfo> && deployedInfo) { DARABONBA_PTR_SET_RVALUE(deployedInfo_, deployedInfo) };


        protected:
          shared_ptr<vector<DeployedInfos::DeployedInfo>> deployedInfo_ {};
        };

        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiMethod_ == nullptr && this->apiName_ == nullptr && this->apiPath_ == nullptr && this->createdTime_ == nullptr && this->deployedInfos_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->modifiedTime_ == nullptr && this->regionId_ == nullptr
        && this->tagList_ == nullptr && this->visibility_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiSummary& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiMethod Field Functions 
        bool hasApiMethod() const { return this->apiMethod_ != nullptr;};
        void deleteApiMethod() { this->apiMethod_ = nullptr;};
        inline string getApiMethod() const { DARABONBA_PTR_GET_DEFAULT(apiMethod_, "") };
        inline ApiSummary& setApiMethod(string apiMethod) { DARABONBA_PTR_SET_VALUE(apiMethod_, apiMethod) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiSummary& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiPath Field Functions 
        bool hasApiPath() const { return this->apiPath_ != nullptr;};
        void deleteApiPath() { this->apiPath_ = nullptr;};
        inline string getApiPath() const { DARABONBA_PTR_GET_DEFAULT(apiPath_, "") };
        inline ApiSummary& setApiPath(string apiPath) { DARABONBA_PTR_SET_VALUE(apiPath_, apiPath) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline ApiSummary& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // deployedInfos Field Functions 
        bool hasDeployedInfos() const { return this->deployedInfos_ != nullptr;};
        void deleteDeployedInfos() { this->deployedInfos_ = nullptr;};
        inline const ApiSummary::DeployedInfos & getDeployedInfos() const { DARABONBA_PTR_GET_CONST(deployedInfos_, ApiSummary::DeployedInfos) };
        inline ApiSummary::DeployedInfos getDeployedInfos() { DARABONBA_PTR_GET(deployedInfos_, ApiSummary::DeployedInfos) };
        inline ApiSummary& setDeployedInfos(const ApiSummary::DeployedInfos & deployedInfos) { DARABONBA_PTR_SET_VALUE(deployedInfos_, deployedInfos) };
        inline ApiSummary& setDeployedInfos(ApiSummary::DeployedInfos && deployedInfos) { DARABONBA_PTR_SET_RVALUE(deployedInfos_, deployedInfos) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiSummary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline ApiSummary& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ApiSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // tagList Field Functions 
        bool hasTagList() const { return this->tagList_ != nullptr;};
        void deleteTagList() { this->tagList_ = nullptr;};
        inline const ApiSummary::TagList & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, ApiSummary::TagList) };
        inline ApiSummary::TagList getTagList() { DARABONBA_PTR_GET(tagList_, ApiSummary::TagList) };
        inline ApiSummary& setTagList(const ApiSummary::TagList & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
        inline ApiSummary& setTagList(ApiSummary::TagList && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline ApiSummary& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The HTTP method of the API request.
        shared_ptr<string> apiMethod_ {};
        // The API name.
        shared_ptr<string> apiName_ {};
        // The request path of the API.
        shared_ptr<string> apiPath_ {};
        // The time when the API was created. The time is displayed in UTC.
        shared_ptr<string> createdTime_ {};
        // The API publishing statuses.
        shared_ptr<ApiSummary::DeployedInfos> deployedInfos_ {};
        // The API description.
        shared_ptr<string> description_ {};
        // The API group ID.
        shared_ptr<string> groupId_ {};
        // The name of the API group to which the API belongs.
        shared_ptr<string> groupName_ {};
        // The time when the API was modified. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
        // The ID of the region to which the API belongs.
        shared_ptr<string> regionId_ {};
        // The tags that are added to the APIs.
        shared_ptr<ApiSummary::TagList> tagList_ {};
        // Indicates whether the API is public. Valid values:
        // 
        // *   **PUBLIC**: The API is public.
        // *   **PRIVATE**: The API is private.
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->apiSummary_ == nullptr; };
      // apiSummary Field Functions 
      bool hasApiSummary() const { return this->apiSummary_ != nullptr;};
      void deleteApiSummary() { this->apiSummary_ = nullptr;};
      inline const vector<ApiSummarys::ApiSummary> & getApiSummary() const { DARABONBA_PTR_GET_CONST(apiSummary_, vector<ApiSummarys::ApiSummary>) };
      inline vector<ApiSummarys::ApiSummary> getApiSummary() { DARABONBA_PTR_GET(apiSummary_, vector<ApiSummarys::ApiSummary>) };
      inline ApiSummarys& setApiSummary(const vector<ApiSummarys::ApiSummary> & apiSummary) { DARABONBA_PTR_SET_VALUE(apiSummary_, apiSummary) };
      inline ApiSummarys& setApiSummary(vector<ApiSummarys::ApiSummary> && apiSummary) { DARABONBA_PTR_SET_RVALUE(apiSummary_, apiSummary) };


    protected:
      shared_ptr<vector<ApiSummarys::ApiSummary>> apiSummary_ {};
    };

    virtual bool empty() const override { return this->apiSummarys_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiSummarys Field Functions 
    bool hasApiSummarys() const { return this->apiSummarys_ != nullptr;};
    void deleteApiSummarys() { this->apiSummarys_ = nullptr;};
    inline const DescribeApisResponseBody::ApiSummarys & getApiSummarys() const { DARABONBA_PTR_GET_CONST(apiSummarys_, DescribeApisResponseBody::ApiSummarys) };
    inline DescribeApisResponseBody::ApiSummarys getApiSummarys() { DARABONBA_PTR_GET(apiSummarys_, DescribeApisResponseBody::ApiSummarys) };
    inline DescribeApisResponseBody& setApiSummarys(const DescribeApisResponseBody::ApiSummarys & apiSummarys) { DARABONBA_PTR_SET_VALUE(apiSummarys_, apiSummarys) };
    inline DescribeApisResponseBody& setApiSummarys(DescribeApisResponseBody::ApiSummarys && apiSummarys) { DARABONBA_PTR_SET_RVALUE(apiSummarys_, apiSummarys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried API definitions.
    shared_ptr<DescribeApisResponseBody::ApiSummarys> apiSummarys_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
