// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSWIMMINGLANEGATEWAYROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSwimmingLaneGatewayRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSwimmingLaneGatewayRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSwimmingLaneGatewayRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListSwimmingLaneGatewayRoutesResponseBody() = default ;
    ListSwimmingLaneGatewayRoutesResponseBody(const ListSwimmingLaneGatewayRoutesResponseBody &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBody(ListSwimmingLaneGatewayRoutesResponseBody &&) = default ;
    ListSwimmingLaneGatewayRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSwimmingLaneGatewayRoutesResponseBody() = default ;
    ListSwimmingLaneGatewayRoutesResponseBody& operator=(const ListSwimmingLaneGatewayRoutesResponseBody &) = default ;
    ListSwimmingLaneGatewayRoutesResponseBody& operator=(ListSwimmingLaneGatewayRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RouteId, routeId_);
        DARABONBA_PTR_TO_JSON(RouteName, routeName_);
        DARABONBA_PTR_TO_JSON(RoutePredicate, routePredicate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
        DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
        DARABONBA_PTR_FROM_JSON(RoutePredicate, routePredicate_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoutePredicate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoutePredicate& obj) { 
          DARABONBA_PTR_TO_JSON(PathPredicate, pathPredicate_);
        };
        friend void from_json(const Darabonba::Json& j, RoutePredicate& obj) { 
          DARABONBA_PTR_FROM_JSON(PathPredicate, pathPredicate_);
        };
        RoutePredicate() = default ;
        RoutePredicate(const RoutePredicate &) = default ;
        RoutePredicate(RoutePredicate &&) = default ;
        RoutePredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoutePredicate() = default ;
        RoutePredicate& operator=(const RoutePredicate &) = default ;
        RoutePredicate& operator=(RoutePredicate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PathPredicate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PathPredicate& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, PathPredicate& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          PathPredicate() = default ;
          PathPredicate(const PathPredicate &) = default ;
          PathPredicate(PathPredicate &&) = default ;
          PathPredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PathPredicate() = default ;
          PathPredicate& operator=(const PathPredicate &) = default ;
          PathPredicate& operator=(PathPredicate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline PathPredicate& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline PathPredicate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The route URL.
          shared_ptr<string> path_ {};
          // The type of the protection rule.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->pathPredicate_ == nullptr; };
        // pathPredicate Field Functions 
        bool hasPathPredicate() const { return this->pathPredicate_ != nullptr;};
        void deletePathPredicate() { this->pathPredicate_ = nullptr;};
        inline const RoutePredicate::PathPredicate & getPathPredicate() const { DARABONBA_PTR_GET_CONST(pathPredicate_, RoutePredicate::PathPredicate) };
        inline RoutePredicate::PathPredicate getPathPredicate() { DARABONBA_PTR_GET(pathPredicate_, RoutePredicate::PathPredicate) };
        inline RoutePredicate& setPathPredicate(const RoutePredicate::PathPredicate & pathPredicate) { DARABONBA_PTR_SET_VALUE(pathPredicate_, pathPredicate) };
        inline RoutePredicate& setPathPredicate(RoutePredicate::PathPredicate && pathPredicate) { DARABONBA_PTR_SET_RVALUE(pathPredicate_, pathPredicate) };


      protected:
        // The path matching rule.
        shared_ptr<RoutePredicate::PathPredicate> pathPredicate_ {};
      };

      virtual bool empty() const override { return this->routeId_ == nullptr
        && this->routeName_ == nullptr && this->routePredicate_ == nullptr; };
      // routeId Field Functions 
      bool hasRouteId() const { return this->routeId_ != nullptr;};
      void deleteRouteId() { this->routeId_ = nullptr;};
      inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
      inline Data& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


      // routeName Field Functions 
      bool hasRouteName() const { return this->routeName_ != nullptr;};
      void deleteRouteName() { this->routeName_ = nullptr;};
      inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
      inline Data& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


      // routePredicate Field Functions 
      bool hasRoutePredicate() const { return this->routePredicate_ != nullptr;};
      void deleteRoutePredicate() { this->routePredicate_ = nullptr;};
      inline const Data::RoutePredicate & getRoutePredicate() const { DARABONBA_PTR_GET_CONST(routePredicate_, Data::RoutePredicate) };
      inline Data::RoutePredicate getRoutePredicate() { DARABONBA_PTR_GET(routePredicate_, Data::RoutePredicate) };
      inline Data& setRoutePredicate(const Data::RoutePredicate & routePredicate) { DARABONBA_PTR_SET_VALUE(routePredicate_, routePredicate) };
      inline Data& setRoutePredicate(Data::RoutePredicate && routePredicate) { DARABONBA_PTR_SET_RVALUE(routePredicate_, routePredicate) };


    protected:
      // The ID of the route.
      shared_ptr<int64_t> routeId_ {};
      // The name of the route.
      shared_ptr<string> routeName_ {};
      // The routing rule.
      shared_ptr<Data::RoutePredicate> routePredicate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSwimmingLaneGatewayRoutesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSwimmingLaneGatewayRoutesResponseBody::Data>) };
    inline vector<ListSwimmingLaneGatewayRoutesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSwimmingLaneGatewayRoutesResponseBody::Data>) };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setData(const vector<ListSwimmingLaneGatewayRoutesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setData(vector<ListSwimmingLaneGatewayRoutesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListSwimmingLaneGatewayRoutesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // Responses.
    shared_ptr<vector<ListSwimmingLaneGatewayRoutesResponseBody::Data>> data_ {};
    // The status code. Value values:
    // 
    // *   If the request was successful, **ErrorCode** is not returned.
    // *   If the request failed, **ErrorCode** is returned. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // Additional information. Valid values:
    // 
    // *   The error message returned because the request is normal and **success** is returned.
    // *   If the request is abnormal, the specific exception error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   **true**: The configurations were obtained.
    // *   **false**: The configurations failed to be queried.
    shared_ptr<bool> success_ {};
    // The ID of the trace. This parameter is used to query the exact call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
