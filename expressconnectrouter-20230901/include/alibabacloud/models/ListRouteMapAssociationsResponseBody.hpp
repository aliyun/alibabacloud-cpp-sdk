// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTEMAPASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTEMAPASSOCIATIONSRESPONSEBODY_HPP_
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
  class ListRouteMapAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteMapAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMapAssociationList, routeMapAssociationList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteMapAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMapAssociationList, routeMapAssociationList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRouteMapAssociationsResponseBody() = default ;
    ListRouteMapAssociationsResponseBody(const ListRouteMapAssociationsResponseBody &) = default ;
    ListRouteMapAssociationsResponseBody(ListRouteMapAssociationsResponseBody &&) = default ;
    ListRouteMapAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteMapAssociationsResponseBody() = default ;
    ListRouteMapAssociationsResponseBody& operator=(const ListRouteMapAssociationsResponseBody &) = default ;
    ListRouteMapAssociationsResponseBody& operator=(ListRouteMapAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteMapAssociationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteMapAssociationList& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RegionIdList, regionIdList_);
        DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, RouteMapAssociationList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RegionIdList, regionIdList_);
        DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      RouteMapAssociationList() = default ;
      RouteMapAssociationList(const RouteMapAssociationList &) = default ;
      RouteMapAssociationList(RouteMapAssociationList &&) = default ;
      RouteMapAssociationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteMapAssociationList() = default ;
      RouteMapAssociationList& operator=(const RouteMapAssociationList &) = default ;
      RouteMapAssociationList& operator=(RouteMapAssociationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associationId_ == nullptr
        && this->direction_ == nullptr && this->ecrId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->priority_ == nullptr
        && this->regionIdList_ == nullptr && this->routeMapId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // associationId Field Functions 
      bool hasAssociationId() const { return this->associationId_ != nullptr;};
      void deleteAssociationId() { this->associationId_ = nullptr;};
      inline string getAssociationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
      inline RouteMapAssociationList& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline RouteMapAssociationList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // ecrId Field Functions 
      bool hasEcrId() const { return this->ecrId_ != nullptr;};
      void deleteEcrId() { this->ecrId_ = nullptr;};
      inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
      inline RouteMapAssociationList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline RouteMapAssociationList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline RouteMapAssociationList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
      inline RouteMapAssociationList& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // regionIdList Field Functions 
      bool hasRegionIdList() const { return this->regionIdList_ != nullptr;};
      void deleteRegionIdList() { this->regionIdList_ = nullptr;};
      inline const vector<string> & getRegionIdList() const { DARABONBA_PTR_GET_CONST(regionIdList_, vector<string>) };
      inline vector<string> getRegionIdList() { DARABONBA_PTR_GET(regionIdList_, vector<string>) };
      inline RouteMapAssociationList& setRegionIdList(const vector<string> & regionIdList) { DARABONBA_PTR_SET_VALUE(regionIdList_, regionIdList) };
      inline RouteMapAssociationList& setRegionIdList(vector<string> && regionIdList) { DARABONBA_PTR_SET_RVALUE(regionIdList_, regionIdList) };


      // routeMapId Field Functions 
      bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
      void deleteRouteMapId() { this->routeMapId_ = nullptr;};
      inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
      inline RouteMapAssociationList& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteMapAssociationList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline RouteMapAssociationList& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The ID of the route map association.
      shared_ptr<string> associationId_ {};
      // The direction in which the routing policy is applied. Valid values:
      // 
      // - **Inbound**: the inbound region gateway direction, indicating the direction in which routing is transmitted to the Express Connect Router (ECR).
      // - **Outbound**: the outbound region gateway direction, indicating the direction in which routing is transmitted from the Express Connect Router (ECR).
      shared_ptr<string> direction_ {};
      // The instance ID of the Express Connect Router (ECR).
      shared_ptr<string> ecrId_ {};
      // The time when the route map association was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the route map association was updated.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The priority of the route map. A smaller value indicates a higher priority.
      shared_ptr<int64_t> priority_ {};
      // The list of region IDs where the route map is distributed and takes effect.
      shared_ptr<vector<string>> regionIdList_ {};
      // The ID of the route map.
      shared_ptr<string> routeMapId_ {};
      // The status of the route map association. Valid values:
      // 
      // - **CREATING**: The association is being created.
      // - **ACTIVE**: The association is in a normal state, and no operations are in progress.
      // - **DELETING**: The association is being deleted.
      // - **UPDATING**: The association is being updated.
      // - **DELETED**: The association is deleted.
      shared_ptr<string> status_ {};
      // The version number of the route map. The version number increments when the route map in the CEN is changed.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr
        && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeMapAssociationList_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListRouteMapAssociationsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRouteMapAssociationsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListRouteMapAssociationsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListRouteMapAssociationsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRouteMapAssociationsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteMapAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRouteMapAssociationsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteMapAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRouteMapAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMapAssociationList Field Functions 
    bool hasRouteMapAssociationList() const { return this->routeMapAssociationList_ != nullptr;};
    void deleteRouteMapAssociationList() { this->routeMapAssociationList_ = nullptr;};
    inline const vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList> & getRouteMapAssociationList() const { DARABONBA_PTR_GET_CONST(routeMapAssociationList_, vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList>) };
    inline vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList> getRouteMapAssociationList() { DARABONBA_PTR_GET(routeMapAssociationList_, vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList>) };
    inline ListRouteMapAssociationsResponseBody& setRouteMapAssociationList(const vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList> & routeMapAssociationList) { DARABONBA_PTR_SET_VALUE(routeMapAssociationList_, routeMapAssociationList) };
    inline ListRouteMapAssociationsResponseBody& setRouteMapAssociationList(vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList> && routeMapAssociationList) { DARABONBA_PTR_SET_RVALUE(routeMapAssociationList_, routeMapAssociationList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRouteMapAssociationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRouteMapAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the access denied error.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code that indicates whether the call is successful. A value of 200 indicates success. Other values indicate failure. For more information about the causes of failure, see error codes.
    shared_ptr<string> code_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message, which is used to replace `%s` in the **ErrMessage** error message.
    // 
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, the **DtsJobId** request parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The message returned for the operation.
    shared_ptr<string> message_ {};
    // The token that is used to start the next query. Valid values:
    // 
    // - If **NextToken** is empty, no next query is to be sent.
    // - If **NextToken** has a return value, the value indicates the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of route map associations.
    shared_ptr<vector<ListRouteMapAssociationsResponseBody::RouteMapAssociationList>> routeMapAssociationList_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // - **True**: The call is successful.
    // - **False**: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of route map associations.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
