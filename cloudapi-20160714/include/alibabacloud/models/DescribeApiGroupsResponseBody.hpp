// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODY_HPP_
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
  class DescribeApiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiGroupAttributes, apiGroupAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiGroupAttributes, apiGroupAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiGroupsResponseBody() = default ;
    DescribeApiGroupsResponseBody(const DescribeApiGroupsResponseBody &) = default ;
    DescribeApiGroupsResponseBody(DescribeApiGroupsResponseBody &&) = default ;
    DescribeApiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupsResponseBody() = default ;
    DescribeApiGroupsResponseBody& operator=(const DescribeApiGroupsResponseBody &) = default ;
    DescribeApiGroupsResponseBody& operator=(DescribeApiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiGroupAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiGroupAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(ApiGroupAttribute, apiGroupAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, ApiGroupAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiGroupAttribute, apiGroupAttribute_);
      };
      ApiGroupAttributes() = default ;
      ApiGroupAttributes(const ApiGroupAttributes &) = default ;
      ApiGroupAttributes(ApiGroupAttributes &&) = default ;
      ApiGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiGroupAttributes() = default ;
      ApiGroupAttributes& operator=(const ApiGroupAttributes &) = default ;
      ApiGroupAttributes& operator=(ApiGroupAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiGroupAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiGroupAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(BasePath, basePath_);
          DARABONBA_PTR_TO_JSON(BillingStatus, billingStatus_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
          DARABONBA_PTR_TO_JSON(IllegalStatus, illegalStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TrafficLimit, trafficLimit_);
        };
        friend void from_json(const Darabonba::Json& j, ApiGroupAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
          DARABONBA_PTR_FROM_JSON(BillingStatus, billingStatus_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
          DARABONBA_PTR_FROM_JSON(IllegalStatus, illegalStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TrafficLimit, trafficLimit_);
        };
        ApiGroupAttribute() = default ;
        ApiGroupAttribute(const ApiGroupAttribute &) = default ;
        ApiGroupAttribute(ApiGroupAttribute &&) = default ;
        ApiGroupAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiGroupAttribute() = default ;
        ApiGroupAttribute& operator=(const ApiGroupAttribute &) = default ;
        ApiGroupAttribute& operator=(ApiGroupAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
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
          class TagInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagInfo() = default ;
            TagInfo(const TagInfo &) = default ;
            TagInfo(TagInfo &&) = default ;
            TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagInfo() = default ;
            TagInfo& operator=(const TagInfo &) = default ;
            TagInfo& operator=(TagInfo &&) = default ;
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
            inline TagInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of the tag.
            shared_ptr<string> key_ {};
            // The value of the tag.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagInfo_ == nullptr; };
          // tagInfo Field Functions 
          bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
          void deleteTagInfo() { this->tagInfo_ = nullptr;};
          inline const vector<Tags::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<Tags::TagInfo>) };
          inline vector<Tags::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<Tags::TagInfo>) };
          inline Tags& setTagInfo(const vector<Tags::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
          inline Tags& setTagInfo(vector<Tags::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


        protected:
          shared_ptr<vector<Tags::TagInfo>> tagInfo_ {};
        };

        virtual bool empty() const override { return this->basePath_ == nullptr
        && this->billingStatus_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->httpsPolicy_ == nullptr && this->illegalStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->modifiedTime_ == nullptr
        && this->regionId_ == nullptr && this->subDomain_ == nullptr && this->tags_ == nullptr && this->trafficLimit_ == nullptr; };
        // basePath Field Functions 
        bool hasBasePath() const { return this->basePath_ != nullptr;};
        void deleteBasePath() { this->basePath_ = nullptr;};
        inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
        inline ApiGroupAttribute& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


        // billingStatus Field Functions 
        bool hasBillingStatus() const { return this->billingStatus_ != nullptr;};
        void deleteBillingStatus() { this->billingStatus_ = nullptr;};
        inline string getBillingStatus() const { DARABONBA_PTR_GET_DEFAULT(billingStatus_, "") };
        inline ApiGroupAttribute& setBillingStatus(string billingStatus) { DARABONBA_PTR_SET_VALUE(billingStatus_, billingStatus) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline ApiGroupAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiGroupAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiGroupAttribute& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ApiGroupAttribute& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // httpsPolicy Field Functions 
        bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
        void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
        inline string getHttpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
        inline ApiGroupAttribute& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


        // illegalStatus Field Functions 
        bool hasIllegalStatus() const { return this->illegalStatus_ != nullptr;};
        void deleteIllegalStatus() { this->illegalStatus_ = nullptr;};
        inline string getIllegalStatus() const { DARABONBA_PTR_GET_DEFAULT(illegalStatus_, "") };
        inline ApiGroupAttribute& setIllegalStatus(string illegalStatus) { DARABONBA_PTR_SET_VALUE(illegalStatus_, illegalStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ApiGroupAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ApiGroupAttribute& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline ApiGroupAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ApiGroupAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // subDomain Field Functions 
        bool hasSubDomain() const { return this->subDomain_ != nullptr;};
        void deleteSubDomain() { this->subDomain_ = nullptr;};
        inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
        inline ApiGroupAttribute& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ApiGroupAttribute::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ApiGroupAttribute::Tags) };
        inline ApiGroupAttribute::Tags getTags() { DARABONBA_PTR_GET(tags_, ApiGroupAttribute::Tags) };
        inline ApiGroupAttribute& setTags(const ApiGroupAttribute::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ApiGroupAttribute& setTags(ApiGroupAttribute::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // trafficLimit Field Functions 
        bool hasTrafficLimit() const { return this->trafficLimit_ != nullptr;};
        void deleteTrafficLimit() { this->trafficLimit_ = nullptr;};
        inline int32_t getTrafficLimit() const { DARABONBA_PTR_GET_DEFAULT(trafficLimit_, 0) };
        inline ApiGroupAttribute& setTrafficLimit(int32_t trafficLimit) { DARABONBA_PTR_SET_VALUE(trafficLimit_, trafficLimit) };


      protected:
        // The basepath.
        shared_ptr<string> basePath_ {};
        // The billing status of the API group. Valid values:
        // 
        // *   **NORMAL**: The instance is normal.
        // *   **LOCKED**: The API group is locked due to overdue payments.
        shared_ptr<string> billingStatus_ {};
        // The creation time (UTC) of the API group.
        shared_ptr<string> createdTime_ {};
        // Group Description
        shared_ptr<string> description_ {};
        // The ID of the API group. This ID is generated by the system and globally unique.
        shared_ptr<string> groupId_ {};
        // The name of the API group.
        shared_ptr<string> groupName_ {};
        // The HTTPS security policy
        shared_ptr<string> httpsPolicy_ {};
        // The validity status of the API group. Valid values:
        // 
        // *   **NORMAL**: The instance is normal.
        // *   **LOCKED**: The API group is locked because it is not valid.
        shared_ptr<string> illegalStatus_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The type of the instance.
        shared_ptr<string> instanceType_ {};
        // The last modification time (UTC) of the API group.
        shared_ptr<string> modifiedTime_ {};
        // The region to which the API group belongs.
        shared_ptr<string> regionId_ {};
        // The second-level domain name that corresponds to the API group and is used by the CNAME of the custom domain name.
        shared_ptr<string> subDomain_ {};
        // The list of tags.
        shared_ptr<ApiGroupAttribute::Tags> tags_ {};
        // The upper QPS limit of the API group. The default value is 500. You can increase the upper limit by submitting an application.
        shared_ptr<int32_t> trafficLimit_ {};
      };

      virtual bool empty() const override { return this->apiGroupAttribute_ == nullptr; };
      // apiGroupAttribute Field Functions 
      bool hasApiGroupAttribute() const { return this->apiGroupAttribute_ != nullptr;};
      void deleteApiGroupAttribute() { this->apiGroupAttribute_ = nullptr;};
      inline const vector<ApiGroupAttributes::ApiGroupAttribute> & getApiGroupAttribute() const { DARABONBA_PTR_GET_CONST(apiGroupAttribute_, vector<ApiGroupAttributes::ApiGroupAttribute>) };
      inline vector<ApiGroupAttributes::ApiGroupAttribute> getApiGroupAttribute() { DARABONBA_PTR_GET(apiGroupAttribute_, vector<ApiGroupAttributes::ApiGroupAttribute>) };
      inline ApiGroupAttributes& setApiGroupAttribute(const vector<ApiGroupAttributes::ApiGroupAttribute> & apiGroupAttribute) { DARABONBA_PTR_SET_VALUE(apiGroupAttribute_, apiGroupAttribute) };
      inline ApiGroupAttributes& setApiGroupAttribute(vector<ApiGroupAttributes::ApiGroupAttribute> && apiGroupAttribute) { DARABONBA_PTR_SET_RVALUE(apiGroupAttribute_, apiGroupAttribute) };


    protected:
      shared_ptr<vector<ApiGroupAttributes::ApiGroupAttribute>> apiGroupAttribute_ {};
    };

    virtual bool empty() const override { return this->apiGroupAttributes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // apiGroupAttributes Field Functions 
    bool hasApiGroupAttributes() const { return this->apiGroupAttributes_ != nullptr;};
    void deleteApiGroupAttributes() { this->apiGroupAttributes_ = nullptr;};
    inline const DescribeApiGroupsResponseBody::ApiGroupAttributes & getApiGroupAttributes() const { DARABONBA_PTR_GET_CONST(apiGroupAttributes_, DescribeApiGroupsResponseBody::ApiGroupAttributes) };
    inline DescribeApiGroupsResponseBody::ApiGroupAttributes getApiGroupAttributes() { DARABONBA_PTR_GET(apiGroupAttributes_, DescribeApiGroupsResponseBody::ApiGroupAttributes) };
    inline DescribeApiGroupsResponseBody& setApiGroupAttributes(const DescribeApiGroupsResponseBody::ApiGroupAttributes & apiGroupAttributes) { DARABONBA_PTR_SET_VALUE(apiGroupAttributes_, apiGroupAttributes) };
    inline DescribeApiGroupsResponseBody& setApiGroupAttributes(DescribeApiGroupsResponseBody::ApiGroupAttributes && apiGroupAttributes) { DARABONBA_PTR_SET_RVALUE(apiGroupAttributes_, apiGroupAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned group set.
    shared_ptr<DescribeApiGroupsResponseBody::ApiGroupAttributes> apiGroupAttributes_ {};
    // The number of pages to return the results on.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
