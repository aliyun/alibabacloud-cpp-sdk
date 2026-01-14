// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEWAFSTATUSRESPONSEBODY_HPP_
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
  class UpdateGatewayRouteWafStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteWafStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteWafStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateGatewayRouteWafStatusResponseBody() = default ;
    UpdateGatewayRouteWafStatusResponseBody(const UpdateGatewayRouteWafStatusResponseBody &) = default ;
    UpdateGatewayRouteWafStatusResponseBody(UpdateGatewayRouteWafStatusResponseBody &&) = default ;
    UpdateGatewayRouteWafStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteWafStatusResponseBody() = default ;
    UpdateGatewayRouteWafStatusResponseBody& operator=(const UpdateGatewayRouteWafStatusResponseBody &) = default ;
    UpdateGatewayRouteWafStatusResponseBody& operator=(UpdateGatewayRouteWafStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cors, cors_);
        DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
        DARABONBA_PTR_TO_JSON(DefaultServiceName, defaultServiceName_);
        DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_TO_JSON(DirectResponse, directResponse_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
        DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(HTTPRewrite, HTTPRewrite_);
        DARABONBA_PTR_TO_JSON(HeaderOp, headerOp_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Predicates, predicates_);
        DARABONBA_PTR_TO_JSON(Redirect, redirect_);
        DARABONBA_PTR_TO_JSON(Retry, retry_);
        DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
        DARABONBA_PTR_TO_JSON(RoutePredicates, routePredicates_);
        DARABONBA_PTR_TO_JSON(RouteServices, routeServices_);
        DARABONBA_PTR_TO_JSON(Services, services_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cors, cors_);
        DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
        DARABONBA_PTR_FROM_JSON(DefaultServiceName, defaultServiceName_);
        DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
        DARABONBA_PTR_FROM_JSON(DirectResponse, directResponse_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
        DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(HTTPRewrite, HTTPRewrite_);
        DARABONBA_PTR_FROM_JSON(HeaderOp, headerOp_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
        DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
        DARABONBA_PTR_FROM_JSON(Retry, retry_);
        DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
        DARABONBA_PTR_FROM_JSON(RoutePredicates, routePredicates_);
        DARABONBA_PTR_FROM_JSON(RouteServices, routeServices_);
        DARABONBA_PTR_FROM_JSON(Services, services_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
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
      class Timeout : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timeout& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
          DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
        };
        friend void from_json(const Darabonba::Json& j, Timeout& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
          DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
        };
        Timeout() = default ;
        Timeout(const Timeout &) = default ;
        Timeout(Timeout &&) = default ;
        Timeout(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timeout() = default ;
        Timeout& operator=(const Timeout &) = default ;
        Timeout& operator=(Timeout &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->timeUnit_ == nullptr && this->unitNum_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Timeout& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeUnit Field Functions 
        bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
        void deleteTimeUnit() { this->timeUnit_ = nullptr;};
        inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
        inline Timeout& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


        // unitNum Field Functions 
        bool hasUnitNum() const { return this->unitNum_ != nullptr;};
        void deleteUnitNum() { this->unitNum_ = nullptr;};
        inline int32_t getUnitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0) };
        inline Timeout& setUnitNum(int32_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


      protected:
        // The status.
        shared_ptr<string> status_ {};
        // The time unit.
        shared_ptr<string> timeUnit_ {};
        // The unit number.
        shared_ptr<int32_t> unitNum_ {};
      };

      class RouteServices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteServices& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, RouteServices& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        RouteServices() = default ;
        RouteServices(const RouteServices &) = default ;
        RouteServices(RouteServices &&) = default ;
        RouteServices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteServices() = default ;
        RouteServices& operator=(const RouteServices &) = default ;
        RouteServices& operator=(RouteServices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupName_ == nullptr
        && this->name_ == nullptr && this->namespace_ == nullptr && this->percent_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr
        && this->sourceType_ == nullptr && this->version_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline RouteServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RouteServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline RouteServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
        inline RouteServices& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
        inline RouteServices& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline RouteServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline RouteServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline RouteServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the group to which the service belongs.
        shared_ptr<string> groupName_ {};
        // The name of the service.
        shared_ptr<string> name_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The weight.
        shared_ptr<int32_t> percent_ {};
        // The ID of the service.
        shared_ptr<int64_t> serviceId_ {};
        // The name of the service.
        shared_ptr<string> serviceName_ {};
        // The source type of the service.
        shared_ptr<string> sourceType_ {};
        // The version of the service.
        shared_ptr<string> version_ {};
      };

      class RoutePredicates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoutePredicates& obj) { 
          DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
          DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
          DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
          DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
        };
        friend void from_json(const Darabonba::Json& j, RoutePredicates& obj) { 
          DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
          DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
          DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
          DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
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
        class QueryPredicates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueryPredicates& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, QueryPredicates& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          QueryPredicates() = default ;
          QueryPredicates(const QueryPredicates &) = default ;
          QueryPredicates(QueryPredicates &&) = default ;
          QueryPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueryPredicates() = default ;
          QueryPredicates& operator=(const QueryPredicates &) = default ;
          QueryPredicates& operator=(QueryPredicates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline QueryPredicates& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline QueryPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline QueryPredicates& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the parameter.
          shared_ptr<string> key_ {};
          // The type.
          shared_ptr<string> type_ {};
          // The value of the parameter.
          shared_ptr<string> value_ {};
        };

        class PathPredicates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PathPredicates& obj) { 
            DARABONBA_PTR_TO_JSON(IgnoreCase, ignoreCase_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, PathPredicates& obj) { 
            DARABONBA_PTR_FROM_JSON(IgnoreCase, ignoreCase_);
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
          virtual bool empty() const override { return this->ignoreCase_ == nullptr
        && this->path_ == nullptr && this->type_ == nullptr; };
          // ignoreCase Field Functions 
          bool hasIgnoreCase() const { return this->ignoreCase_ != nullptr;};
          void deleteIgnoreCase() { this->ignoreCase_ = nullptr;};
          inline bool getIgnoreCase() const { DARABONBA_PTR_GET_DEFAULT(ignoreCase_, false) };
          inline PathPredicates& setIgnoreCase(bool ignoreCase) { DARABONBA_PTR_SET_VALUE(ignoreCase_, ignoreCase) };


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
          // Indicates whether case sensitivity is ignored.
          shared_ptr<bool> ignoreCase_ {};
          // The path.
          shared_ptr<string> path_ {};
          // The matching type.
          shared_ptr<string> type_ {};
        };

        class HeaderPredicates : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HeaderPredicates& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HeaderPredicates& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HeaderPredicates() = default ;
          HeaderPredicates(const HeaderPredicates &) = default ;
          HeaderPredicates(HeaderPredicates &&) = default ;
          HeaderPredicates(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HeaderPredicates() = default ;
          HeaderPredicates& operator=(const HeaderPredicates &) = default ;
          HeaderPredicates& operator=(HeaderPredicates &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline HeaderPredicates& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HeaderPredicates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline HeaderPredicates& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key of the request header.
          shared_ptr<string> key_ {};
          // The matching type.
          shared_ptr<string> type_ {};
          // The value of the request header.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->headerPredicates_ == nullptr
        && this->methodPredicates_ == nullptr && this->pathPredicates_ == nullptr && this->queryPredicates_ == nullptr; };
        // headerPredicates Field Functions 
        bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
        void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
        inline const vector<RoutePredicates::HeaderPredicates> & getHeaderPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<RoutePredicates::HeaderPredicates>) };
        inline vector<RoutePredicates::HeaderPredicates> getHeaderPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<RoutePredicates::HeaderPredicates>) };
        inline RoutePredicates& setHeaderPredicates(const vector<RoutePredicates::HeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
        inline RoutePredicates& setHeaderPredicates(vector<RoutePredicates::HeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


        // methodPredicates Field Functions 
        bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
        void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
        inline const vector<string> & getMethodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
        inline vector<string> getMethodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
        inline RoutePredicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
        inline RoutePredicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


        // pathPredicates Field Functions 
        bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
        void deletePathPredicates() { this->pathPredicates_ = nullptr;};
        inline const RoutePredicates::PathPredicates & getPathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, RoutePredicates::PathPredicates) };
        inline RoutePredicates::PathPredicates getPathPredicates() { DARABONBA_PTR_GET(pathPredicates_, RoutePredicates::PathPredicates) };
        inline RoutePredicates& setPathPredicates(const RoutePredicates::PathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
        inline RoutePredicates& setPathPredicates(RoutePredicates::PathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


        // queryPredicates Field Functions 
        bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
        void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
        inline const vector<RoutePredicates::QueryPredicates> & getQueryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<RoutePredicates::QueryPredicates>) };
        inline vector<RoutePredicates::QueryPredicates> getQueryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<RoutePredicates::QueryPredicates>) };
        inline RoutePredicates& setQueryPredicates(const vector<RoutePredicates::QueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
        inline RoutePredicates& setQueryPredicates(vector<RoutePredicates::QueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


      protected:
        // The information about matching based on request headers.
        shared_ptr<vector<RoutePredicates::HeaderPredicates>> headerPredicates_ {};
        // The information about method matching.
        shared_ptr<vector<string>> methodPredicates_ {};
        // The information about route matching.
        shared_ptr<RoutePredicates::PathPredicates> pathPredicates_ {};
        // The parameter matching rules.
        shared_ptr<vector<RoutePredicates::QueryPredicates>> queryPredicates_ {};
      };

      class Retry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Retry& obj) { 
          DARABONBA_PTR_TO_JSON(Attempts, attempts_);
          DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
          DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Retry& obj) { 
          DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
          DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
          DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Retry() = default ;
        Retry(const Retry &) = default ;
        Retry(Retry &&) = default ;
        Retry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Retry() = default ;
        Retry& operator=(const Retry &) = default ;
        Retry& operator=(Retry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attempts_ == nullptr
        && this->httpCodes_ == nullptr && this->retryOn_ == nullptr && this->status_ == nullptr; };
        // attempts Field Functions 
        bool hasAttempts() const { return this->attempts_ != nullptr;};
        void deleteAttempts() { this->attempts_ = nullptr;};
        inline int32_t getAttempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0) };
        inline Retry& setAttempts(int32_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


        // httpCodes Field Functions 
        bool hasHttpCodes() const { return this->httpCodes_ != nullptr;};
        void deleteHttpCodes() { this->httpCodes_ = nullptr;};
        inline const vector<string> & getHttpCodes() const { DARABONBA_PTR_GET_CONST(httpCodes_, vector<string>) };
        inline vector<string> getHttpCodes() { DARABONBA_PTR_GET(httpCodes_, vector<string>) };
        inline Retry& setHttpCodes(const vector<string> & httpCodes) { DARABONBA_PTR_SET_VALUE(httpCodes_, httpCodes) };
        inline Retry& setHttpCodes(vector<string> && httpCodes) { DARABONBA_PTR_SET_RVALUE(httpCodes_, httpCodes) };


        // retryOn Field Functions 
        bool hasRetryOn() const { return this->retryOn_ != nullptr;};
        void deleteRetryOn() { this->retryOn_ = nullptr;};
        inline const vector<string> & getRetryOn() const { DARABONBA_PTR_GET_CONST(retryOn_, vector<string>) };
        inline vector<string> getRetryOn() { DARABONBA_PTR_GET(retryOn_, vector<string>) };
        inline Retry& setRetryOn(const vector<string> & retryOn) { DARABONBA_PTR_SET_VALUE(retryOn_, retryOn) };
        inline Retry& setRetryOn(vector<string> && retryOn) { DARABONBA_PTR_SET_RVALUE(retryOn_, retryOn) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Retry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The number of retries allowed for a request.
        shared_ptr<int32_t> attempts_ {};
        // The HTTP status code.
        shared_ptr<vector<string>> httpCodes_ {};
        // The retry condition.
        shared_ptr<vector<string>> retryOn_ {};
        // The retry status.
        shared_ptr<string> status_ {};
      };

      class Redirect : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Redirect& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, Redirect& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        Redirect() = default ;
        Redirect(const Redirect &) = default ;
        Redirect(Redirect &&) = default ;
        Redirect(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Redirect() = default ;
        Redirect& operator=(const Redirect &) = default ;
        Redirect& operator=(Redirect &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->host_ == nullptr && this->path_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Redirect& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Redirect& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Redirect& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The response code returned.
        shared_ptr<int32_t> code_ {};
        // The hostname.
        shared_ptr<string> host_ {};
        // The path.
        shared_ptr<string> path_ {};
      };

      class HeaderOp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HeaderOp& obj) { 
          DARABONBA_PTR_TO_JSON(HeaderOpItems, headerOpItems_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, HeaderOp& obj) { 
          DARABONBA_PTR_FROM_JSON(HeaderOpItems, headerOpItems_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        HeaderOp() = default ;
        HeaderOp(const HeaderOp &) = default ;
        HeaderOp(HeaderOp &&) = default ;
        HeaderOp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HeaderOp() = default ;
        HeaderOp& operator=(const HeaderOp &) = default ;
        HeaderOp& operator=(HeaderOp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HeaderOpItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HeaderOpItems& obj) { 
            DARABONBA_PTR_TO_JSON(DirectionType, directionType_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(OpType, opType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HeaderOpItems& obj) { 
            DARABONBA_PTR_FROM_JSON(DirectionType, directionType_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(OpType, opType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HeaderOpItems() = default ;
          HeaderOpItems(const HeaderOpItems &) = default ;
          HeaderOpItems(HeaderOpItems &&) = default ;
          HeaderOpItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HeaderOpItems() = default ;
          HeaderOpItems& operator=(const HeaderOpItems &) = default ;
          HeaderOpItems& operator=(HeaderOpItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->directionType_ == nullptr
        && this->key_ == nullptr && this->opType_ == nullptr && this->value_ == nullptr; };
          // directionType Field Functions 
          bool hasDirectionType() const { return this->directionType_ != nullptr;};
          void deleteDirectionType() { this->directionType_ = nullptr;};
          inline string getDirectionType() const { DARABONBA_PTR_GET_DEFAULT(directionType_, "") };
          inline HeaderOpItems& setDirectionType(string directionType) { DARABONBA_PTR_SET_VALUE(directionType_, directionType) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline HeaderOpItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // opType Field Functions 
          bool hasOpType() const { return this->opType_ != nullptr;};
          void deleteOpType() { this->opType_ = nullptr;};
          inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
          inline HeaderOpItems& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline HeaderOpItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The request or response.
          shared_ptr<string> directionType_ {};
          // The header key.
          shared_ptr<string> key_ {};
          // The operation type.
          shared_ptr<string> opType_ {};
          // The header value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->headerOpItems_ == nullptr
        && this->status_ == nullptr; };
        // headerOpItems Field Functions 
        bool hasHeaderOpItems() const { return this->headerOpItems_ != nullptr;};
        void deleteHeaderOpItems() { this->headerOpItems_ = nullptr;};
        inline const vector<HeaderOp::HeaderOpItems> & getHeaderOpItems() const { DARABONBA_PTR_GET_CONST(headerOpItems_, vector<HeaderOp::HeaderOpItems>) };
        inline vector<HeaderOp::HeaderOpItems> getHeaderOpItems() { DARABONBA_PTR_GET(headerOpItems_, vector<HeaderOp::HeaderOpItems>) };
        inline HeaderOp& setHeaderOpItems(const vector<HeaderOp::HeaderOpItems> & headerOpItems) { DARABONBA_PTR_SET_VALUE(headerOpItems_, headerOpItems) };
        inline HeaderOp& setHeaderOpItems(vector<HeaderOp::HeaderOpItems> && headerOpItems) { DARABONBA_PTR_SET_RVALUE(headerOpItems_, headerOpItems) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HeaderOp& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The policy.
        shared_ptr<vector<HeaderOp::HeaderOpItems>> headerOpItems_ {};
        // The status.
        shared_ptr<string> status_ {};
      };

      class HTTPRewrite : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HTTPRewrite& obj) { 
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(PathType, pathType_);
          DARABONBA_PTR_TO_JSON(Pattern, pattern_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Substitution, substitution_);
        };
        friend void from_json(const Darabonba::Json& j, HTTPRewrite& obj) { 
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(PathType, pathType_);
          DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Substitution, substitution_);
        };
        HTTPRewrite() = default ;
        HTTPRewrite(const HTTPRewrite &) = default ;
        HTTPRewrite(HTTPRewrite &&) = default ;
        HTTPRewrite(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HTTPRewrite() = default ;
        HTTPRewrite& operator=(const HTTPRewrite &) = default ;
        HTTPRewrite& operator=(HTTPRewrite &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->path_ == nullptr && this->pathType_ == nullptr && this->pattern_ == nullptr && this->status_ == nullptr && this->substitution_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline HTTPRewrite& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline HTTPRewrite& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // pathType Field Functions 
        bool hasPathType() const { return this->pathType_ != nullptr;};
        void deletePathType() { this->pathType_ = nullptr;};
        inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
        inline HTTPRewrite& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline HTTPRewrite& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HTTPRewrite& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // substitution Field Functions 
        bool hasSubstitution() const { return this->substitution_ != nullptr;};
        void deleteSubstitution() { this->substitution_ = nullptr;};
        inline string getSubstitution() const { DARABONBA_PTR_GET_DEFAULT(substitution_, "") };
        inline HTTPRewrite& setSubstitution(string substitution) { DARABONBA_PTR_SET_VALUE(substitution_, substitution) };


      protected:
        // The domain name.
        shared_ptr<string> host_ {};
        // The HTTP request path.
        shared_ptr<string> path_ {};
        // The path type of the HTTP request.
        shared_ptr<string> pathType_ {};
        // The matching pattern.
        shared_ptr<string> pattern_ {};
        // The HTTP status.
        shared_ptr<string> status_ {};
        // The replacement.
        shared_ptr<string> substitution_ {};
      };

      class DirectResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectResponse& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Code, code_);
        };
        friend void from_json(const Darabonba::Json& j, DirectResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
        };
        DirectResponse() = default ;
        DirectResponse(const DirectResponse &) = default ;
        DirectResponse(DirectResponse &&) = default ;
        DirectResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectResponse() = default ;
        DirectResponse& operator=(const DirectResponse &) = default ;
        DirectResponse& operator=(DirectResponse &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->body_ == nullptr
        && this->code_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
        inline DirectResponse& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline DirectResponse& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      protected:
        // The mock return value.
        shared_ptr<string> body_ {};
        // The return value.
        shared_ptr<int32_t> code_ {};
      };

      class Cors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cors& obj) { 
          DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
          DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
          DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
          DARABONBA_PTR_TO_JSON(AllowOrigins, allowOrigins_);
          DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
          DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
        };
        friend void from_json(const Darabonba::Json& j, Cors& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
          DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
          DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
          DARABONBA_PTR_FROM_JSON(AllowOrigins, allowOrigins_);
          DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
          DARABONBA_PTR_FROM_JSON(UnitNum, unitNum_);
        };
        Cors() = default ;
        Cors(const Cors &) = default ;
        Cors(Cors &&) = default ;
        Cors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cors() = default ;
        Cors& operator=(const Cors &) = default ;
        Cors& operator=(Cors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowCredentials_ == nullptr
        && this->allowHeaders_ == nullptr && this->allowMethods_ == nullptr && this->allowOrigins_ == nullptr && this->exposeHeaders_ == nullptr && this->status_ == nullptr
        && this->timeUnit_ == nullptr && this->unitNum_ == nullptr; };
        // allowCredentials Field Functions 
        bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
        void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
        inline bool getAllowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, false) };
        inline Cors& setAllowCredentials(bool allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


        // allowHeaders Field Functions 
        bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
        void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
        inline string getAllowHeaders() const { DARABONBA_PTR_GET_DEFAULT(allowHeaders_, "") };
        inline Cors& setAllowHeaders(string allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };


        // allowMethods Field Functions 
        bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
        void deleteAllowMethods() { this->allowMethods_ = nullptr;};
        inline string getAllowMethods() const { DARABONBA_PTR_GET_DEFAULT(allowMethods_, "") };
        inline Cors& setAllowMethods(string allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };


        // allowOrigins Field Functions 
        bool hasAllowOrigins() const { return this->allowOrigins_ != nullptr;};
        void deleteAllowOrigins() { this->allowOrigins_ = nullptr;};
        inline string getAllowOrigins() const { DARABONBA_PTR_GET_DEFAULT(allowOrigins_, "") };
        inline Cors& setAllowOrigins(string allowOrigins) { DARABONBA_PTR_SET_VALUE(allowOrigins_, allowOrigins) };


        // exposeHeaders Field Functions 
        bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
        void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
        inline string getExposeHeaders() const { DARABONBA_PTR_GET_DEFAULT(exposeHeaders_, "") };
        inline Cors& setExposeHeaders(string exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Cors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeUnit Field Functions 
        bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
        void deleteTimeUnit() { this->timeUnit_ = nullptr;};
        inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
        inline Cors& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


        // unitNum Field Functions 
        bool hasUnitNum() const { return this->unitNum_ != nullptr;};
        void deleteUnitNum() { this->unitNum_ = nullptr;};
        inline int64_t getUnitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0L) };
        inline Cors& setUnitNum(int64_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


      protected:
        // The credentials allowed.
        shared_ptr<bool> allowCredentials_ {};
        // The headers allowed.
        shared_ptr<string> allowHeaders_ {};
        // The methods allowed.
        shared_ptr<string> allowMethods_ {};
        // The origins allowed.
        shared_ptr<string> allowOrigins_ {};
        // The response headers.
        shared_ptr<string> exposeHeaders_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The time unit.
        shared_ptr<string> timeUnit_ {};
        // The unit number.
        shared_ptr<int64_t> unitNum_ {};
      };

      virtual bool empty() const override { return this->cors_ == nullptr
        && this->defaultServiceId_ == nullptr && this->defaultServiceName_ == nullptr && this->destinationType_ == nullptr && this->directResponse_ == nullptr && this->domainId_ == nullptr
        && this->domainIdList_ == nullptr && this->domainName_ == nullptr && this->domainNameList_ == nullptr && this->enableWaf_ == nullptr && this->gatewayId_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->HTTPRewrite_ == nullptr && this->headerOp_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->predicates_ == nullptr && this->redirect_ == nullptr && this->retry_ == nullptr
        && this->routeOrder_ == nullptr && this->routePredicates_ == nullptr && this->routeServices_ == nullptr && this->services_ == nullptr && this->status_ == nullptr
        && this->timeout_ == nullptr; };
      // cors Field Functions 
      bool hasCors() const { return this->cors_ != nullptr;};
      void deleteCors() { this->cors_ = nullptr;};
      inline const Data::Cors & getCors() const { DARABONBA_PTR_GET_CONST(cors_, Data::Cors) };
      inline Data::Cors getCors() { DARABONBA_PTR_GET(cors_, Data::Cors) };
      inline Data& setCors(const Data::Cors & cors) { DARABONBA_PTR_SET_VALUE(cors_, cors) };
      inline Data& setCors(Data::Cors && cors) { DARABONBA_PTR_SET_RVALUE(cors_, cors) };


      // defaultServiceId Field Functions 
      bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
      void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
      inline int64_t getDefaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
      inline Data& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


      // defaultServiceName Field Functions 
      bool hasDefaultServiceName() const { return this->defaultServiceName_ != nullptr;};
      void deleteDefaultServiceName() { this->defaultServiceName_ = nullptr;};
      inline string getDefaultServiceName() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceName_, "") };
      inline Data& setDefaultServiceName(string defaultServiceName) { DARABONBA_PTR_SET_VALUE(defaultServiceName_, defaultServiceName) };


      // destinationType Field Functions 
      bool hasDestinationType() const { return this->destinationType_ != nullptr;};
      void deleteDestinationType() { this->destinationType_ = nullptr;};
      inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
      inline Data& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


      // directResponse Field Functions 
      bool hasDirectResponse() const { return this->directResponse_ != nullptr;};
      void deleteDirectResponse() { this->directResponse_ = nullptr;};
      inline const Data::DirectResponse & getDirectResponse() const { DARABONBA_PTR_GET_CONST(directResponse_, Data::DirectResponse) };
      inline Data::DirectResponse getDirectResponse() { DARABONBA_PTR_GET(directResponse_, Data::DirectResponse) };
      inline Data& setDirectResponse(const Data::DirectResponse & directResponse) { DARABONBA_PTR_SET_VALUE(directResponse_, directResponse) };
      inline Data& setDirectResponse(Data::DirectResponse && directResponse) { DARABONBA_PTR_SET_RVALUE(directResponse_, directResponse) };


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


      // enableWaf Field Functions 
      bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
      void deleteEnableWaf() { this->enableWaf_ = nullptr;};
      inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
      inline Data& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline Data& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline Data& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // HTTPRewrite Field Functions 
      bool hasHTTPRewrite() const { return this->HTTPRewrite_ != nullptr;};
      void deleteHTTPRewrite() { this->HTTPRewrite_ = nullptr;};
      inline const Data::HTTPRewrite & getHTTPRewrite() const { DARABONBA_PTR_GET_CONST(HTTPRewrite_, Data::HTTPRewrite) };
      inline Data::HTTPRewrite getHTTPRewrite() { DARABONBA_PTR_GET(HTTPRewrite_, Data::HTTPRewrite) };
      inline Data& setHTTPRewrite(const Data::HTTPRewrite & hTTPRewrite) { DARABONBA_PTR_SET_VALUE(HTTPRewrite_, hTTPRewrite) };
      inline Data& setHTTPRewrite(Data::HTTPRewrite && hTTPRewrite) { DARABONBA_PTR_SET_RVALUE(HTTPRewrite_, hTTPRewrite) };


      // headerOp Field Functions 
      bool hasHeaderOp() const { return this->headerOp_ != nullptr;};
      void deleteHeaderOp() { this->headerOp_ = nullptr;};
      inline const Data::HeaderOp & getHeaderOp() const { DARABONBA_PTR_GET_CONST(headerOp_, Data::HeaderOp) };
      inline Data::HeaderOp getHeaderOp() { DARABONBA_PTR_GET(headerOp_, Data::HeaderOp) };
      inline Data& setHeaderOp(const Data::HeaderOp & headerOp) { DARABONBA_PTR_SET_VALUE(headerOp_, headerOp) };
      inline Data& setHeaderOp(Data::HeaderOp && headerOp) { DARABONBA_PTR_SET_RVALUE(headerOp_, headerOp) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // predicates Field Functions 
      bool hasPredicates() const { return this->predicates_ != nullptr;};
      void deletePredicates() { this->predicates_ = nullptr;};
      inline string getPredicates() const { DARABONBA_PTR_GET_DEFAULT(predicates_, "") };
      inline Data& setPredicates(string predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };


      // redirect Field Functions 
      bool hasRedirect() const { return this->redirect_ != nullptr;};
      void deleteRedirect() { this->redirect_ = nullptr;};
      inline const Data::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, Data::Redirect) };
      inline Data::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, Data::Redirect) };
      inline Data& setRedirect(const Data::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
      inline Data& setRedirect(Data::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline const Data::Retry & getRetry() const { DARABONBA_PTR_GET_CONST(retry_, Data::Retry) };
      inline Data::Retry getRetry() { DARABONBA_PTR_GET(retry_, Data::Retry) };
      inline Data& setRetry(const Data::Retry & retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };
      inline Data& setRetry(Data::Retry && retry) { DARABONBA_PTR_SET_RVALUE(retry_, retry) };


      // routeOrder Field Functions 
      bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
      void deleteRouteOrder() { this->routeOrder_ = nullptr;};
      inline int32_t getRouteOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
      inline Data& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


      // routePredicates Field Functions 
      bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
      void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
      inline const Data::RoutePredicates & getRoutePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Data::RoutePredicates) };
      inline Data::RoutePredicates getRoutePredicates() { DARABONBA_PTR_GET(routePredicates_, Data::RoutePredicates) };
      inline Data& setRoutePredicates(const Data::RoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
      inline Data& setRoutePredicates(Data::RoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


      // routeServices Field Functions 
      bool hasRouteServices() const { return this->routeServices_ != nullptr;};
      void deleteRouteServices() { this->routeServices_ = nullptr;};
      inline const vector<Data::RouteServices> & getRouteServices() const { DARABONBA_PTR_GET_CONST(routeServices_, vector<Data::RouteServices>) };
      inline vector<Data::RouteServices> getRouteServices() { DARABONBA_PTR_GET(routeServices_, vector<Data::RouteServices>) };
      inline Data& setRouteServices(const vector<Data::RouteServices> & routeServices) { DARABONBA_PTR_SET_VALUE(routeServices_, routeServices) };
      inline Data& setRouteServices(vector<Data::RouteServices> && routeServices) { DARABONBA_PTR_SET_RVALUE(routeServices_, routeServices) };


      // services Field Functions 
      bool hasServices() const { return this->services_ != nullptr;};
      void deleteServices() { this->services_ = nullptr;};
      inline string getServices() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
      inline Data& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline const Data::Timeout & getTimeout() const { DARABONBA_PTR_GET_CONST(timeout_, Data::Timeout) };
      inline Data::Timeout getTimeout() { DARABONBA_PTR_GET(timeout_, Data::Timeout) };
      inline Data& setTimeout(const Data::Timeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
      inline Data& setTimeout(Data::Timeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


    protected:
      // The configuration for cross-origin resource sharing (CORS).
      shared_ptr<Data::Cors> cors_ {};
      // The default service ID.
      shared_ptr<int64_t> defaultServiceId_ {};
      // The default service name.
      shared_ptr<string> defaultServiceName_ {};
      // The destination service type.
      shared_ptr<string> destinationType_ {};
      // The information about service mocking.
      shared_ptr<Data::DirectResponse> directResponse_ {};
      // The domain ID.
      shared_ptr<int64_t> domainId_ {};
      // The list of domain IDs.
      shared_ptr<vector<int64_t>> domainIdList_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The domain names.
      shared_ptr<vector<string>> domainNameList_ {};
      // Indicates whether WAF is activated.
      shared_ptr<bool> enableWaf_ {};
      // The ID of the gateway.
      shared_ptr<int64_t> gatewayId_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // The information about the rewrite policy.
      shared_ptr<Data::HTTPRewrite> HTTPRewrite_ {};
      // The header settings.
      shared_ptr<Data::HeaderOp> headerOp_ {};
      // The ID of the route.
      shared_ptr<int64_t> id_ {};
      // The name of the route.
      shared_ptr<string> name_ {};
      // The matching rule.
      shared_ptr<string> predicates_ {};
      // The configuration of the redirection.
      shared_ptr<Data::Redirect> redirect_ {};
      // The retry configuration.
      shared_ptr<Data::Retry> retry_ {};
      // The sequence number of the route.
      shared_ptr<int32_t> routeOrder_ {};
      // The information about route matching.
      shared_ptr<Data::RoutePredicates> routePredicates_ {};
      // The information about services.
      shared_ptr<vector<Data::RouteServices>> routeServices_ {};
      // The information about services.
      shared_ptr<string> services_ {};
      // The status of the route.
      shared_ptr<int32_t> status_ {};
      // The timeout configuration.
      shared_ptr<Data::Timeout> timeout_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateGatewayRouteWafStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateGatewayRouteWafStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateGatewayRouteWafStatusResponseBody::Data) };
    inline UpdateGatewayRouteWafStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateGatewayRouteWafStatusResponseBody::Data) };
    inline UpdateGatewayRouteWafStatusResponseBody& setData(const UpdateGatewayRouteWafStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateGatewayRouteWafStatusResponseBody& setData(UpdateGatewayRouteWafStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateGatewayRouteWafStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateGatewayRouteWafStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateGatewayRouteWafStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateGatewayRouteWafStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. A value of 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<UpdateGatewayRouteWafStatusResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
