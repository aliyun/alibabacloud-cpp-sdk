// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERROUTEENTRIESRESPONSEBODY_HPP_
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
  class DescribeExpressConnectRouterRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntriesList, routeEntriesList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntriesList, routeEntriesList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeExpressConnectRouterRouteEntriesResponseBody() = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBody(const DescribeExpressConnectRouterRouteEntriesResponseBody &) = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBody(DescribeExpressConnectRouterRouteEntriesResponseBody &&) = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterRouteEntriesResponseBody() = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBody& operator=(const DescribeExpressConnectRouterRouteEntriesResponseBody &) = default ;
    DescribeExpressConnectRouterRouteEntriesResponseBody& operator=(DescribeExpressConnectRouterRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntriesList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntriesList& obj) { 
        DARABONBA_PTR_TO_JSON(AsPath, asPath_);
        DARABONBA_PTR_TO_JSON(Community, community_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(Med, med_);
        DARABONBA_PTR_TO_JSON(NexthopInstanceId, nexthopInstanceId_);
        DARABONBA_PTR_TO_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntriesList& obj) { 
        DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
        DARABONBA_PTR_FROM_JSON(Community, community_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(Med, med_);
        DARABONBA_PTR_FROM_JSON(NexthopInstanceId, nexthopInstanceId_);
        DARABONBA_PTR_FROM_JSON(NexthopInstanceRegionId, nexthopInstanceRegionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RouteEntriesList() = default ;
      RouteEntriesList(const RouteEntriesList &) = default ;
      RouteEntriesList(RouteEntriesList &&) = default ;
      RouteEntriesList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntriesList() = default ;
      RouteEntriesList& operator=(const RouteEntriesList &) = default ;
      RouteEntriesList& operator=(RouteEntriesList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asPath_ == nullptr
        && this->community_ == nullptr && this->destinationCidrBlock_ == nullptr && this->med_ == nullptr && this->nexthopInstanceId_ == nullptr && this->nexthopInstanceRegionId_ == nullptr
        && this->status_ == nullptr; };
      // asPath Field Functions 
      bool hasAsPath() const { return this->asPath_ != nullptr;};
      void deleteAsPath() { this->asPath_ = nullptr;};
      inline string getAsPath() const { DARABONBA_PTR_GET_DEFAULT(asPath_, "") };
      inline RouteEntriesList& setAsPath(string asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };


      // community Field Functions 
      bool hasCommunity() const { return this->community_ != nullptr;};
      void deleteCommunity() { this->community_ = nullptr;};
      inline string getCommunity() const { DARABONBA_PTR_GET_DEFAULT(community_, "") };
      inline RouteEntriesList& setCommunity(string community) { DARABONBA_PTR_SET_VALUE(community_, community) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline RouteEntriesList& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // med Field Functions 
      bool hasMed() const { return this->med_ != nullptr;};
      void deleteMed() { this->med_ = nullptr;};
      inline int64_t getMed() const { DARABONBA_PTR_GET_DEFAULT(med_, 0L) };
      inline RouteEntriesList& setMed(int64_t med) { DARABONBA_PTR_SET_VALUE(med_, med) };


      // nexthopInstanceId Field Functions 
      bool hasNexthopInstanceId() const { return this->nexthopInstanceId_ != nullptr;};
      void deleteNexthopInstanceId() { this->nexthopInstanceId_ = nullptr;};
      inline string getNexthopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceId_, "") };
      inline RouteEntriesList& setNexthopInstanceId(string nexthopInstanceId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceId_, nexthopInstanceId) };


      // nexthopInstanceRegionId Field Functions 
      bool hasNexthopInstanceRegionId() const { return this->nexthopInstanceRegionId_ != nullptr;};
      void deleteNexthopInstanceRegionId() { this->nexthopInstanceRegionId_ = nullptr;};
      inline string getNexthopInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(nexthopInstanceRegionId_, "") };
      inline RouteEntriesList& setNexthopInstanceRegionId(string nexthopInstanceRegionId) { DARABONBA_PTR_SET_VALUE(nexthopInstanceRegionId_, nexthopInstanceRegionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteEntriesList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The AS path of the route.
      shared_ptr<string> asPath_ {};
      // The community value that is carried in the BGP route.
      shared_ptr<string> community_ {};
      // The destination CIDR block of the route.
      shared_ptr<string> destinationCidrBlock_ {};
      // The MED value of the BGP route, which is used between the ECR and the transit router.
      // 
      // *   You can set the MED value to 2000. In this case, the transit router and the ECR are used as default paths.
      // *   If a non-default path is used, the MED value is empty.
      // *   You can set the MED value to 2000 only for one object associated with a transit router of a CEN instance.
      shared_ptr<int64_t> med_ {};
      // The ID of the next-hop instance.
      shared_ptr<string> nexthopInstanceId_ {};
      // The region ID of the next-hop instance.
      shared_ptr<string> nexthopInstanceRegionId_ {};
      // The state of the ECR.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr
        && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeEntriesList_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntriesList Field Functions 
    bool hasRouteEntriesList() const { return this->routeEntriesList_ != nullptr;};
    void deleteRouteEntriesList() { this->routeEntriesList_ = nullptr;};
    inline const vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList> & getRouteEntriesList() const { DARABONBA_PTR_GET_CONST(routeEntriesList_, vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList>) };
    inline vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList> getRouteEntriesList() { DARABONBA_PTR_GET(routeEntriesList_, vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList>) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setRouteEntriesList(const vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList> & routeEntriesList) { DARABONBA_PTR_SET_VALUE(routeEntriesList_, routeEntriesList) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setRouteEntriesList(vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList> && routeEntriesList) { DARABONBA_PTR_SET_RVALUE(routeEntriesList_, routeEntriesList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeExpressConnectRouterRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


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
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The total number of entries returned. Valid values: 1 to 2147483647. Default value: 10
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
    // The routes.
    shared_ptr<vector<DescribeExpressConnectRouterRouteEntriesResponseBody::RouteEntriesList>> routeEntriesList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of route entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
