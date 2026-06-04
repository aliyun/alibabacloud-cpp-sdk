// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERRESPONSEBODY_HPP_
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
  class DescribeInstanceGrantedToExpressConnectRouterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceGrantedToExpressConnectRouterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(EcrGrantedInstanceList, ecrGrantedInstanceList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceGrantedToExpressConnectRouterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(EcrGrantedInstanceList, ecrGrantedInstanceList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceGrantedToExpressConnectRouterResponseBody() = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBody(const DescribeInstanceGrantedToExpressConnectRouterResponseBody &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBody(DescribeInstanceGrantedToExpressConnectRouterResponseBody &&) = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceGrantedToExpressConnectRouterResponseBody() = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBody& operator=(const DescribeInstanceGrantedToExpressConnectRouterResponseBody &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterResponseBody& operator=(DescribeInstanceGrantedToExpressConnectRouterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcrGrantedInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcrGrantedInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(EcrOwnerAliUid, ecrOwnerAliUid_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GrantId, grantId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeOwnerBid, nodeOwnerBid_);
        DARABONBA_PTR_TO_JSON(NodeOwnerUid, nodeOwnerUid_);
        DARABONBA_PTR_TO_JSON(NodeRegionId, nodeRegionId_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, EcrGrantedInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(EcrOwnerAliUid, ecrOwnerAliUid_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GrantId, grantId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeOwnerBid, nodeOwnerBid_);
        DARABONBA_PTR_FROM_JSON(NodeOwnerUid, nodeOwnerUid_);
        DARABONBA_PTR_FROM_JSON(NodeRegionId, nodeRegionId_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      EcrGrantedInstanceList() = default ;
      EcrGrantedInstanceList(const EcrGrantedInstanceList &) = default ;
      EcrGrantedInstanceList(EcrGrantedInstanceList &&) = default ;
      EcrGrantedInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcrGrantedInstanceList() = default ;
      EcrGrantedInstanceList& operator=(const EcrGrantedInstanceList &) = default ;
      EcrGrantedInstanceList& operator=(EcrGrantedInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ecrId_ == nullptr
        && this->ecrOwnerAliUid_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->grantId_ == nullptr && this->nodeId_ == nullptr
        && this->nodeOwnerBid_ == nullptr && this->nodeOwnerUid_ == nullptr && this->nodeRegionId_ == nullptr && this->nodeType_ == nullptr && this->status_ == nullptr; };
      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline EcrGrantedInstanceList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // ecrOwnerAliUid Field Functions 
      bool hasEcrOwnerAliUid() const { return this->ecrOwnerAliUid_ != nullptr;};
      void deleteEcrOwnerAliUid() { this->ecrOwnerAliUid_ = nullptr;};
      inline string getEcrOwnerAliUid() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerAliUid_, "") };
      inline EcrGrantedInstanceList& setEcrOwnerAliUid(string ecrOwnerAliUid) { DARABONBA_PTR_SET_VALUE(ecrOwnerAliUid_, ecrOwnerAliUid) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline EcrGrantedInstanceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline EcrGrantedInstanceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // grantId Field Functions 
      bool hasGrantId() const { return this->grantId_ != nullptr;};
      void deleteGrantId() { this->grantId_ = nullptr;};
      inline string getGrantId() const { DARABONBA_PTR_GET_DEFAULT(grantId_, "") };
      inline EcrGrantedInstanceList& setGrantId(string grantId) { DARABONBA_PTR_SET_VALUE(grantId_, grantId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline EcrGrantedInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeOwnerBid Field Functions 
      bool hasNodeOwnerBid() const { return this->nodeOwnerBid_ != nullptr;};
      void deleteNodeOwnerBid() { this->nodeOwnerBid_ = nullptr;};
      inline string getNodeOwnerBid() const { DARABONBA_PTR_GET_DEFAULT(nodeOwnerBid_, "") };
      inline EcrGrantedInstanceList& setNodeOwnerBid(string nodeOwnerBid) { DARABONBA_PTR_SET_VALUE(nodeOwnerBid_, nodeOwnerBid) };


      // nodeOwnerUid Field Functions 
      bool hasNodeOwnerUid() const { return this->nodeOwnerUid_ != nullptr;};
      void deleteNodeOwnerUid() { this->nodeOwnerUid_ = nullptr;};
      inline int64_t getNodeOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(nodeOwnerUid_, 0L) };
      inline EcrGrantedInstanceList& setNodeOwnerUid(int64_t nodeOwnerUid) { DARABONBA_PTR_SET_VALUE(nodeOwnerUid_, nodeOwnerUid) };


      // nodeRegionId Field Functions 
      bool hasNodeRegionId() const { return this->nodeRegionId_ != nullptr;};
      void deleteNodeRegionId() { this->nodeRegionId_ = nullptr;};
      inline string getNodeRegionId() const { DARABONBA_PTR_GET_DEFAULT(nodeRegionId_, "") };
      inline EcrGrantedInstanceList& setNodeRegionId(string nodeRegionId) { DARABONBA_PTR_SET_VALUE(nodeRegionId_, nodeRegionId) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline EcrGrantedInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EcrGrantedInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ECR ID.
      shared_ptr<string> ecrId_ {};
      // The ID of the Alibaba Cloud account that owns the ECR to which you want to grant permissions.
      shared_ptr<string> ecrOwnerAliUid_ {};
      // The time when the network instance was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the network instance was modified.
      shared_ptr<string> gmtModified_ {};
      // The authorization ID.
      shared_ptr<string> grantId_ {};
      // The ID of the network instance.
      shared_ptr<string> nodeId_ {};
      // The ID of the Alibaba Cloud enterprise account that owns the network instance.
      shared_ptr<string> nodeOwnerBid_ {};
      // The ID of the Alibaba Cloud account that owns the network instance.
      shared_ptr<int64_t> nodeOwnerUid_ {};
      // The region ID of the network instance.
      shared_ptr<string> nodeRegionId_ {};
      // The type of the network instance. Valid values:
      // 
      // *   **VBR**
      // *   **VPC**
      shared_ptr<string> nodeType_ {};
      // The state of the network instance.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->ecrGrantedInstanceList_ == nullptr && this->httpStatusCode_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // ecrGrantedInstanceList Field Functions 
    bool hasEcrGrantedInstanceList() const { return this->ecrGrantedInstanceList_ != nullptr;};
    void deleteEcrGrantedInstanceList() { this->ecrGrantedInstanceList_ = nullptr;};
    inline const vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList> & getEcrGrantedInstanceList() const { DARABONBA_PTR_GET_CONST(ecrGrantedInstanceList_, vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList>) };
    inline vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList> getEcrGrantedInstanceList() { DARABONBA_PTR_GET(ecrGrantedInstanceList_, vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList>) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setEcrGrantedInstanceList(const vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList> & ecrGrantedInstanceList) { DARABONBA_PTR_SET_VALUE(ecrGrantedInstanceList_, ecrGrantedInstanceList) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setEcrGrantedInstanceList(vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList> && ecrGrantedInstanceList) { DARABONBA_PTR_SET_RVALUE(ecrGrantedInstanceList_, ecrGrantedInstanceList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceGrantedToExpressConnectRouterResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsJobId**, the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The network instances whose permissions are granted to the ECR.
    shared_ptr<vector<DescribeInstanceGrantedToExpressConnectRouterResponseBody::EcrGrantedInstanceList>> ecrGrantedInstanceList_ {};
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
    // The total number of network instances whose permissions are granted to the ECR.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
