// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERCHILDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERCHILDINSTANCERESPONSEBODY_HPP_
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
  class DescribeExpressConnectRouterChildInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterChildInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(ChildInstanceList, childInstanceList_);
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
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterChildInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceList, childInstanceList_);
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
    DescribeExpressConnectRouterChildInstanceResponseBody() = default ;
    DescribeExpressConnectRouterChildInstanceResponseBody(const DescribeExpressConnectRouterChildInstanceResponseBody &) = default ;
    DescribeExpressConnectRouterChildInstanceResponseBody(DescribeExpressConnectRouterChildInstanceResponseBody &&) = default ;
    DescribeExpressConnectRouterChildInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterChildInstanceResponseBody() = default ;
    DescribeExpressConnectRouterChildInstanceResponseBody& operator=(const DescribeExpressConnectRouterChildInstanceResponseBody &) = default ;
    DescribeExpressConnectRouterChildInstanceResponseBody& operator=(DescribeExpressConnectRouterChildInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChildInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChildInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
        DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
        DARABONBA_PTR_TO_JSON(ChildInstanceName, childInstanceName_);
        DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
        DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
        DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ChildInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
        DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
        DARABONBA_PTR_FROM_JSON(ChildInstanceName, childInstanceName_);
        DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
        DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
        DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ChildInstanceList() = default ;
      ChildInstanceList(const ChildInstanceList &) = default ;
      ChildInstanceList(ChildInstanceList &&) = default ;
      ChildInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChildInstanceList() = default ;
      ChildInstanceList& operator=(const ChildInstanceList &) = default ;
      ChildInstanceList& operator=(ChildInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associationId_ == nullptr
        && this->childInstanceId_ == nullptr && this->childInstanceName_ == nullptr && this->childInstanceOwnerId_ == nullptr && this->childInstanceRegionId_ == nullptr && this->childInstanceType_ == nullptr
        && this->description_ == nullptr && this->ecrId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr; };
      // associationId Field Functions 
      bool hasAssociationId() const { return this->associationId_ != nullptr;};
      void deleteAssociationId() { this->associationId_ = nullptr;};
      inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
      inline ChildInstanceList& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


      // childInstanceId Field Functions 
      bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
      void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
      inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
      inline ChildInstanceList& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


      // childInstanceName Field Functions 
      bool hasChildInstanceName() const { return this->childInstanceName_ != nullptr;};
      void deleteChildInstanceName() { this->childInstanceName_ = nullptr;};
      inline string getChildInstanceName() const { DARABONBA_PTR_GET_DEFAULT(childInstanceName_, "") };
      inline ChildInstanceList& setChildInstanceName(string childInstanceName) { DARABONBA_PTR_SET_VALUE(childInstanceName_, childInstanceName) };


      // childInstanceOwnerId Field Functions 
      bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
      void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
      inline int64_t getChildInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
      inline ChildInstanceList& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


      // childInstanceRegionId Field Functions 
      bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
      void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
      inline string getChildInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
      inline ChildInstanceList& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


      // childInstanceType Field Functions 
      bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
      void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
      inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
      inline ChildInstanceList& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ChildInstanceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline ChildInstanceList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ChildInstanceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ChildInstanceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline ChildInstanceList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ChildInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ChildInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the association between the ECR and the VPC or TR.
      shared_ptr<string> associationId_ {};
      // The VBR ID.
      shared_ptr<string> childInstanceId_ {};
      shared_ptr<string> childInstanceName_ {};
      // The ID of the Alibaba Cloud account that owns the VBR.
      shared_ptr<int64_t> childInstanceOwnerId_ {};
      // The region ID of the VBR.
      shared_ptr<string> childInstanceRegionId_ {};
      // The type of the VBR. The value is **VBR**.
      shared_ptr<string> childInstanceType_ {};
      // The description of the ECR.
      shared_ptr<string> description_ {};
      // The ECR ID.
      shared_ptr<string> ecrId_ {};
      // The time when the association was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the association was modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The ID of the Alibaba Cloud account that owns the VBR.
      shared_ptr<int64_t> ownerId_ {};
      // The region ID of the VBR.
      shared_ptr<string> regionId_ {};
      // The deployment state of the associated resource. Valid values:
      // 
      // - **CREATING**: The resource is being created.
      // - **ACTIVE**: The resource is created.
      // - **ASSOCIATING**: The resource is being associated.
      // - **DISSOCIATING**: The resource is being disassociated.
      // - **UPDATING**: The resource is being modified.
      // - **DELETING**: The resource is being deleted.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->childInstanceList_ == nullptr && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // childInstanceList Field Functions 
    bool hasChildInstanceList() const { return this->childInstanceList_ != nullptr;};
    void deleteChildInstanceList() { this->childInstanceList_ = nullptr;};
    inline const vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList> & getChildInstanceList() const { DARABONBA_PTR_GET_CONST(childInstanceList_, vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList>) };
    inline vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList> getChildInstanceList() { DARABONBA_PTR_GET(childInstanceList_, vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList>) };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setChildInstanceList(const vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList> & childInstanceList) { DARABONBA_PTR_SET_VALUE(childInstanceList_, childInstanceList) };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setChildInstanceList(vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList> && childInstanceList) { DARABONBA_PTR_SET_RVALUE(childInstanceList_, childInstanceList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeExpressConnectRouterChildInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The VBRs.
    shared_ptr<vector<DescribeExpressConnectRouterChildInstanceResponseBody::ChildInstanceList>> childInstanceList_ {};
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the request parameter **DtsJobId** is invalid.
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
