// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISABLEDEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISABLEDEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODY_HPP_
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
  class DescribeDisabledExpressConnectRouterRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DisabledRouteEntryList, disabledRouteEntryList_);
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
    friend void from_json(const Darabonba::Json& j, DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DisabledRouteEntryList, disabledRouteEntryList_);
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
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBody() = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBody(const DescribeDisabledExpressConnectRouterRouteEntriesResponseBody &) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBody(DescribeDisabledExpressConnectRouterRouteEntriesResponseBody &&) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisabledExpressConnectRouterRouteEntriesResponseBody() = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& operator=(const DescribeDisabledExpressConnectRouterRouteEntriesResponseBody &) = default ;
    DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& operator=(DescribeDisabledExpressConnectRouterRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DisabledRouteEntryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DisabledRouteEntryList& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(NexthopInstanceId, nexthopInstanceId_);
        DARABONBA_PTR_TO_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, DisabledRouteEntryList& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(NexthopInstanceId, nexthopInstanceId_);
        DARABONBA_PTR_FROM_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
      };
      DisabledRouteEntryList() = default ;
      DisabledRouteEntryList(const DisabledRouteEntryList &) = default ;
      DisabledRouteEntryList(DisabledRouteEntryList &&) = default ;
      DisabledRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DisabledRouteEntryList() = default ;
      DisabledRouteEntryList& operator=(const DisabledRouteEntryList &) = default ;
      DisabledRouteEntryList& operator=(DisabledRouteEntryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->ecrId_ == nullptr && this->gmtCreate_ == nullptr && this->nexthopInstanceId_ == nullptr && this->nexthopInstanceRegionId_ == nullptr; };
      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline DisabledRouteEntryList& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline DisabledRouteEntryList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline DisabledRouteEntryList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // nexthopInstanceId Field Functions 
      bool hasNexthopInstanceId() const { return this->nexthopInstanceId_ != nullptr;};
      void deleteNexthopInstanceId() { this->nexthopInstanceId_ = nullptr;};
      inline string getNexthopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceId_, "") };
      inline DisabledRouteEntryList& setNexthopInstanceId(string nexthopInstanceId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceId_, nexthopInstanceId) };


      // nexthopInstanceRegionId Field Functions 
      bool hasNexthopInstanceRegionId() const { return this->nexthopInstanceRegionId_ != nullptr;};
      void deleteNexthopInstanceRegionId() { this->nexthopInstanceRegionId_ = nullptr;};
      inline string getNexthopInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceRegionId_, "") };
      inline DisabledRouteEntryList& setNexthopInstanceRegionId(string nexthopInstanceRegionId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceRegionId_, nexthopInstanceRegionId) };


    protected:
      // The destination CIDR block of the route.
      shared_ptr<string> destinationCidrBlock_ {};
      // The ECR ID.
      shared_ptr<string> ecrId_ {};
      // The time when the route entry was created.
      shared_ptr<string> gmtCreate_ {};
      // The ID of the next-hop instance.
      shared_ptr<string> nexthopInstanceId_ {};
      // The region ID of the next-hop instance.
      shared_ptr<string> nexthopInstanceRegionId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->disabledRouteEntryList_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // disabledRouteEntryList Field Functions 
    bool hasDisabledRouteEntryList() const { return this->disabledRouteEntryList_ != nullptr;};
    void deleteDisabledRouteEntryList() { this->disabledRouteEntryList_ = nullptr;};
    inline const vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList> & getDisabledRouteEntryList() const { DARABONBA_PTR_GET_CONST(disabledRouteEntryList_, vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList>) };
    inline vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList> getDisabledRouteEntryList() { DARABONBA_PTR_GET(disabledRouteEntryList_, vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList>) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setDisabledRouteEntryList(const vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList> & disabledRouteEntryList) { DARABONBA_PTR_SET_VALUE(disabledRouteEntryList_, disabledRouteEntryList) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setDisabledRouteEntryList(vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList> && disabledRouteEntryList) { DARABONBA_PTR_SET_RVALUE(disabledRouteEntryList_, disabledRouteEntryList) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDisabledExpressConnectRouterRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The routes that are queried.
    shared_ptr<vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody::DisabledRouteEntryList>> disabledRouteEntryList_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsInstanceId**, the request parameter **DtsInstanceId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The total number of entries returned. Valid values: 1 to 2147483647. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If NextToken is empty, no next page exists.
    // *   If a value of NextToken is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether routes are disabled by the ECR. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of routes.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
