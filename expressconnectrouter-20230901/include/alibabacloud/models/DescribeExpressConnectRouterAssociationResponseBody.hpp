// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERASSOCIATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERASSOCIATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterAssociationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterAssociationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AssociationList, associationList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterAssociationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AssociationList, associationList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeExpressConnectRouterAssociationResponseBody() = default ;
    DescribeExpressConnectRouterAssociationResponseBody(const DescribeExpressConnectRouterAssociationResponseBody &) = default ;
    DescribeExpressConnectRouterAssociationResponseBody(DescribeExpressConnectRouterAssociationResponseBody &&) = default ;
    DescribeExpressConnectRouterAssociationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterAssociationResponseBody() = default ;
    DescribeExpressConnectRouterAssociationResponseBody& operator=(const DescribeExpressConnectRouterAssociationResponseBody &) = default ;
    DescribeExpressConnectRouterAssociationResponseBody& operator=(DescribeExpressConnectRouterAssociationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssociationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociationList& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedPrefixes, allowedPrefixes_);
        DARABONBA_PTR_TO_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
        DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
        DARABONBA_PTR_TO_JSON(AssociationNodeType, associationNodeType_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
        DARABONBA_PTR_TO_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
      };
      friend void from_json(const Darabonba::Json& j, AssociationList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedPrefixes, allowedPrefixes_);
        DARABONBA_PTR_FROM_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
        DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
        DARABONBA_PTR_FROM_JSON(AssociationNodeType, associationNodeType_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterOwnerId, transitRouterOwnerId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
      };
      AssociationList() = default ;
      AssociationList(const AssociationList &) = default ;
      AssociationList(AssociationList &&) = default ;
      AssociationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociationList() = default ;
      AssociationList& operator=(const AssociationList &) = default ;
      AssociationList& operator=(AssociationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->allowedPrefixes_ == nullptr
        && this->allowedPrefixesMode_ == nullptr && this->associationId_ == nullptr && this->associationNodeType_ == nullptr && this->cenId_ == nullptr && this->description_ == nullptr
        && this->ecrId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterName_ == nullptr && this->transitRouterOwnerId_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr && this->vpcOwnerId_ == nullptr; };
      // allowedPrefixes Field Functions 
      bool hasAllowedPrefixes() const { return this->allowedPrefixes_ != nullptr;};
      void deleteAllowedPrefixes() { this->allowedPrefixes_ = nullptr;};
      inline const vector<string> & getAllowedPrefixes() const { DARABONBA_PTR_GET_CONST(allowedPrefixes_, vector<string>) };
      inline vector<string> getAllowedPrefixes() { DARABONBA_PTR_GET(allowedPrefixes_, vector<string>) };
      inline AssociationList& setAllowedPrefixes(const vector<string> & allowedPrefixes) { DARABONBA_PTR_SET_VALUE(allowedPrefixes_, allowedPrefixes) };
      inline AssociationList& setAllowedPrefixes(vector<string> && allowedPrefixes) { DARABONBA_PTR_SET_RVALUE(allowedPrefixes_, allowedPrefixes) };


      // allowedPrefixesMode Field Functions 
      bool hasAllowedPrefixesMode() const { return this->allowedPrefixesMode_ != nullptr;};
      void deleteAllowedPrefixesMode() { this->allowedPrefixesMode_ = nullptr;};
      inline string getAllowedPrefixesMode() const { DARABONBA_PTR_GET_DEFAULT(allowedPrefixesMode_, "") };
      inline AssociationList& setAllowedPrefixesMode(string allowedPrefixesMode) { DARABONBA_PTR_SET_VALUE(allowedPrefixesMode_, allowedPrefixesMode) };


      // associationId Field Functions 
      bool hasAssociationId() const { return this->associationId_ != nullptr;};
      void deleteAssociationId() { this->associationId_ = nullptr;};
      inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
      inline AssociationList& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


      // associationNodeType Field Functions 
      bool hasAssociationNodeType() const { return this->associationNodeType_ != nullptr;};
      void deleteAssociationNodeType() { this->associationNodeType_ = nullptr;};
      inline string getAssociationNodeType() const { DARABONBA_PTR_GET_DEFAULT(associationNodeType_, "") };
      inline AssociationList& setAssociationNodeType(string associationNodeType) { DARABONBA_PTR_SET_VALUE(associationNodeType_, associationNodeType) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline AssociationList& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AssociationList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline AssociationList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline AssociationList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline AssociationList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline AssociationList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AssociationList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AssociationList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AssociationList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AssociationList::Tags>) };
      inline vector<AssociationList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AssociationList::Tags>) };
      inline AssociationList& setTags(const vector<AssociationList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AssociationList& setTags(vector<AssociationList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline AssociationList& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterName Field Functions 
      bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
      void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
      inline string getTransitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
      inline AssociationList& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


      // transitRouterOwnerId Field Functions 
      bool hasTransitRouterOwnerId() const { return this->transitRouterOwnerId_ != nullptr;};
      void deleteTransitRouterOwnerId() { this->transitRouterOwnerId_ = nullptr;};
      inline int64_t getTransitRouterOwnerId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterOwnerId_, 0L) };
      inline AssociationList& setTransitRouterOwnerId(int64_t transitRouterOwnerId) { DARABONBA_PTR_SET_VALUE(transitRouterOwnerId_, transitRouterOwnerId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AssociationList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline AssociationList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      // vpcOwnerId Field Functions 
      bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
      void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
      inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
      inline AssociationList& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    protected:
      // The allowed route prefixes.
      shared_ptr<vector<string>> allowedPrefixes_ {};
      // The prefix route mode. Valid values:
      // 
      // *   MatchMode
      // *   IncrementalMode
      shared_ptr<string> allowedPrefixesMode_ {};
      // The ID of the association between the ECR and the VPC or TR.
      shared_ptr<string> associationId_ {};
      // The type of the associated resource. Valid values:
      // 
      // *   **VPC**
      // *   **TR**
      shared_ptr<string> associationNodeType_ {};
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The description of the associated resource.
      shared_ptr<string> description_ {};
      // The ECR ID.
      shared_ptr<string> ecrId_ {};
      // The time when the association was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the association was modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The ID of the Alibaba Cloud account that owns the resource.
      shared_ptr<int64_t> ownerId_ {};
      // The region ID of the resource.
      shared_ptr<string> regionId_ {};
      // The deployment state of the associated resource. Valid values:
      // 
      // *   **CREATING**: The resource is being created.
      // *   **ACTIVE**: The resource is created.
      // *   **INACTIVE**: The TR is pending to be associated with the ECR.
      // *   **ASSOCIATING**: The resource is being associated.
      // *   **DISSOCIATING**: The resource is being disassociated.
      // *   **UPDATING**: The resource is being modified.
      // *   **DELETING**: The resource is being deleted.
      shared_ptr<string> status_ {};
      shared_ptr<vector<AssociationList::Tags>> tags_ {};
      // The TR ID.
      shared_ptr<string> transitRouterId_ {};
      shared_ptr<string> transitRouterName_ {};
      // The ID of the Alibaba Cloud account that owns the TR.
      shared_ptr<int64_t> transitRouterOwnerId_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vpcName_ {};
      // The ID of the Alibaba Cloud account to which the VPC belongs.
      shared_ptr<int64_t> vpcOwnerId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->associationList_ == nullptr && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // associationList Field Functions 
    bool hasAssociationList() const { return this->associationList_ != nullptr;};
    void deleteAssociationList() { this->associationList_ = nullptr;};
    inline const vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList> & getAssociationList() const { DARABONBA_PTR_GET_CONST(associationList_, vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList>) };
    inline vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList> getAssociationList() { DARABONBA_PTR_GET(associationList_, vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList>) };
    inline DescribeExpressConnectRouterAssociationResponseBody& setAssociationList(const vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList> & associationList) { DARABONBA_PTR_SET_VALUE(associationList_, associationList) };
    inline DescribeExpressConnectRouterAssociationResponseBody& setAssociationList(vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList> && associationList) { DARABONBA_PTR_SET_RVALUE(associationList_, associationList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeExpressConnectRouterAssociationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectRouterAssociationResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectRouterAssociationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExpressConnectRouterAssociationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeExpressConnectRouterAssociationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The associated resources.
    shared_ptr<vector<DescribeExpressConnectRouterAssociationResponseBody::AssociationList>> associationList_ {};
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of DynamicMessage is **DtsJobId**, the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The total number of entries returned. Valid values: 1 to 2147483647. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of associated resources.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
