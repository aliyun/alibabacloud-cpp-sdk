// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTEONAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRouteOnAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteOnAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteOnAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayRouteOnAuthResponseBody() = default ;
    ListGatewayRouteOnAuthResponseBody(const ListGatewayRouteOnAuthResponseBody &) = default ;
    ListGatewayRouteOnAuthResponseBody(ListGatewayRouteOnAuthResponseBody &&) = default ;
    ListGatewayRouteOnAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteOnAuthResponseBody() = default ;
    ListGatewayRouteOnAuthResponseBody& operator=(const ListGatewayRouteOnAuthResponseBody &) = default ;
    ListGatewayRouteOnAuthResponseBody& operator=(ListGatewayRouteOnAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RoutePredicates, routePredicates_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RoutePredicates, routePredicates_);
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
      class RoutePredicates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoutePredicates& obj) { 
          DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
        };
        friend void from_json(const Darabonba::Json& j, RoutePredicates& obj) { 
          DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
        };
        RoutePredicates() = default ;
        RoutePredicates(const RoutePredicates &) = default ;
        RoutePredicates(RoutePredicates &&) = default ;
        RoutePredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoutePredicates() = default ;
        RoutePredicates& operator=(const RoutePredicates &) = default ;
        RoutePredicates& operator=(RoutePredicates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PathPredicates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PathPredicates& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, PathPredicates& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          PathPredicates() = default ;
          PathPredicates(const PathPredicates &) = default ;
          PathPredicates(PathPredicates &&) = default ;
          PathPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PathPredicates() = default ;
          PathPredicates& operator=(const PathPredicates &) = default ;
          PathPredicates& operator=(PathPredicates &&) = default ;
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
          inline PathPredicates& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline PathPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The path.
          shared_ptr<string> path_ {};
          // The matching type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->pathPredicates_ == nullptr; };
        // pathPredicates Field Functions 
        bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
        void deletePathPredicates() { this->pathPredicates_ = nullptr;};
        inline const RoutePredicates::PathPredicates & getPathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, RoutePredicates::PathPredicates) };
        inline RoutePredicates::PathPredicates getPathPredicates() { DARABONBA_PTR_GET(pathPredicates_, RoutePredicates::PathPredicates) };
        inline RoutePredicates& setPathPredicates(const RoutePredicates::PathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
        inline RoutePredicates& setPathPredicates(RoutePredicates::PathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


      protected:
        // The information about route matching.
        shared_ptr<RoutePredicates::PathPredicates> pathPredicates_ {};
      };

      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->domainIdList_ == nullptr && this->domainName_ == nullptr && this->domainNameList_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->routePredicates_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
      inline Data& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // domainIdList Field Functions 
      bool hasDomainIdList() const { return this->domainIdList_ != nullptr;};
      void deleteDomainIdList() { this->domainIdList_ = nullptr;};
      inline const vector<int64_t> & getDomainIdList() const { DARABONBA_PTR_GET_CONST(domainIdList_, vector<int64_t>) };
      inline vector<int64_t> getDomainIdList() { DARABONBA_PTR_GET(domainIdList_, vector<int64_t>) };
      inline Data& setDomainIdList(const vector<int64_t> & domainIdList) { DARABONBA_PTR_SET_VALUE(domainIdList_, domainIdList) };
      inline Data& setDomainIdList(vector<int64_t> && domainIdList) { DARABONBA_PTR_SET_RVALUE(domainIdList_, domainIdList) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainNameList Field Functions 
      bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
      void deleteDomainNameList() { this->domainNameList_ = nullptr;};
      inline const vector<string> & getDomainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
      inline vector<string> getDomainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
      inline Data& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
      inline Data& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Data& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // routePredicates Field Functions 
      bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
      void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
      inline const Data::RoutePredicates & getRoutePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Data::RoutePredicates) };
      inline Data::RoutePredicates getRoutePredicates() { DARABONBA_PTR_GET(routePredicates_, Data::RoutePredicates) };
      inline Data& setRoutePredicates(const Data::RoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
      inline Data& setRoutePredicates(Data::RoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


    protected:
      // The domain ID.
      shared_ptr<int64_t> domainId_ {};
      // The domain IDs.
      shared_ptr<vector<int64_t>> domainIdList_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The domain names.
      shared_ptr<vector<string>> domainNameList_ {};
      // The gateway ID.
      shared_ptr<string> gatewayId_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The route ID.
      shared_ptr<int32_t> id_ {};
      // The name of the route.
      shared_ptr<string> name_ {};
      // The information about route matching.
      shared_ptr<Data::RoutePredicates> routePredicates_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayRouteOnAuthResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListGatewayRouteOnAuthResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListGatewayRouteOnAuthResponseBody::Data>) };
    inline vector<ListGatewayRouteOnAuthResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListGatewayRouteOnAuthResponseBody::Data>) };
    inline ListGatewayRouteOnAuthResponseBody& setData(const vector<ListGatewayRouteOnAuthResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayRouteOnAuthResponseBody& setData(vector<ListGatewayRouteOnAuthResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayRouteOnAuthResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayRouteOnAuthResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayRouteOnAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayRouteOnAuthResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<vector<ListGatewayRouteOnAuthResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
