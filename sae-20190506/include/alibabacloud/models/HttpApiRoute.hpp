// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIROUTE_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIROUTE_HPP_
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
  class HttpApiRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRoute& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(HttpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(HttpApiName, httpApiName_);
      DARABONBA_PTR_TO_JSON(HttpApiType, httpApiType_);
      DARABONBA_PTR_TO_JSON(IngressId, ingressId_);
      DARABONBA_PTR_TO_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_TO_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(RouteId, routeId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(HttpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(HttpApiName, httpApiName_);
      DARABONBA_PTR_FROM_JSON(HttpApiType, httpApiType_);
      DARABONBA_PTR_FROM_JSON(IngressId, ingressId_);
      DARABONBA_PTR_FROM_JSON(NacosInstanceId, nacosInstanceId_);
      DARABONBA_PTR_FROM_JSON(NacosNamespaceId, nacosNamespaceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    HttpApiRoute() = default ;
    HttpApiRoute(const HttpApiRoute &) = default ;
    HttpApiRoute(HttpApiRoute &&) = default ;
    HttpApiRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRoute() = default ;
    HttpApiRoute& operator=(const HttpApiRoute &) = default ;
    HttpApiRoute& operator=(HttpApiRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_TO_JSON(ServiceWeight, serviceWeight_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_FROM_JSON(ServiceWeight, serviceWeight_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->servicePort_ == nullptr && this->serviceProtocol_ == nullptr
        && this->serviceWeight_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Services& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Services& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Services& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline int64_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
      inline Services& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline Services& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


      // serviceWeight Field Functions 
      bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
      void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
      inline int64_t getServiceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0L) };
      inline Services& setServiceWeight(int64_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> serviceId_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<int64_t> servicePort_ {};
      shared_ptr<string> serviceProtocol_ {};
      shared_ptr<int64_t> serviceWeight_ {};
    };

    class Predicates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Predicates& obj) { 
        DARABONBA_PTR_TO_JSON(HeaderPredicates, headerPredicates_);
        DARABONBA_PTR_TO_JSON(MethodPredicates, methodPredicates_);
        DARABONBA_PTR_TO_JSON(PathPredicates, pathPredicates_);
        DARABONBA_PTR_TO_JSON(QueryPredicates, queryPredicates_);
      };
      friend void from_json(const Darabonba::Json& j, Predicates& obj) { 
        DARABONBA_PTR_FROM_JSON(HeaderPredicates, headerPredicates_);
        DARABONBA_PTR_FROM_JSON(MethodPredicates, methodPredicates_);
        DARABONBA_PTR_FROM_JSON(PathPredicates, pathPredicates_);
        DARABONBA_PTR_FROM_JSON(QueryPredicates, queryPredicates_);
      };
      Predicates() = default ;
      Predicates(const Predicates &) = default ;
      Predicates(Predicates &&) = default ;
      Predicates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Predicates() = default ;
      Predicates& operator=(const Predicates &) = default ;
      Predicates& operator=(Predicates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QueryPredicates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QueryPredicates& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, QueryPredicates& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QueryPredicates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
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
        shared_ptr<bool> ignoreCase_ {};
        shared_ptr<string> path_ {};
        shared_ptr<string> type_ {};
      };

      class HeaderPredicates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HeaderPredicates& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, HeaderPredicates& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HeaderPredicates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
        shared_ptr<string> name_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->headerPredicates_ == nullptr
        && this->methodPredicates_ == nullptr && this->pathPredicates_ == nullptr && this->queryPredicates_ == nullptr; };
      // headerPredicates Field Functions 
      bool hasHeaderPredicates() const { return this->headerPredicates_ != nullptr;};
      void deleteHeaderPredicates() { this->headerPredicates_ = nullptr;};
      inline const vector<Predicates::HeaderPredicates> & getHeaderPredicates() const { DARABONBA_PTR_GET_CONST(headerPredicates_, vector<Predicates::HeaderPredicates>) };
      inline vector<Predicates::HeaderPredicates> getHeaderPredicates() { DARABONBA_PTR_GET(headerPredicates_, vector<Predicates::HeaderPredicates>) };
      inline Predicates& setHeaderPredicates(const vector<Predicates::HeaderPredicates> & headerPredicates) { DARABONBA_PTR_SET_VALUE(headerPredicates_, headerPredicates) };
      inline Predicates& setHeaderPredicates(vector<Predicates::HeaderPredicates> && headerPredicates) { DARABONBA_PTR_SET_RVALUE(headerPredicates_, headerPredicates) };


      // methodPredicates Field Functions 
      bool hasMethodPredicates() const { return this->methodPredicates_ != nullptr;};
      void deleteMethodPredicates() { this->methodPredicates_ = nullptr;};
      inline const vector<string> & getMethodPredicates() const { DARABONBA_PTR_GET_CONST(methodPredicates_, vector<string>) };
      inline vector<string> getMethodPredicates() { DARABONBA_PTR_GET(methodPredicates_, vector<string>) };
      inline Predicates& setMethodPredicates(const vector<string> & methodPredicates) { DARABONBA_PTR_SET_VALUE(methodPredicates_, methodPredicates) };
      inline Predicates& setMethodPredicates(vector<string> && methodPredicates) { DARABONBA_PTR_SET_RVALUE(methodPredicates_, methodPredicates) };


      // pathPredicates Field Functions 
      bool hasPathPredicates() const { return this->pathPredicates_ != nullptr;};
      void deletePathPredicates() { this->pathPredicates_ = nullptr;};
      inline const Predicates::PathPredicates & getPathPredicates() const { DARABONBA_PTR_GET_CONST(pathPredicates_, Predicates::PathPredicates) };
      inline Predicates::PathPredicates getPathPredicates() { DARABONBA_PTR_GET(pathPredicates_, Predicates::PathPredicates) };
      inline Predicates& setPathPredicates(const Predicates::PathPredicates & pathPredicates) { DARABONBA_PTR_SET_VALUE(pathPredicates_, pathPredicates) };
      inline Predicates& setPathPredicates(Predicates::PathPredicates && pathPredicates) { DARABONBA_PTR_SET_RVALUE(pathPredicates_, pathPredicates) };


      // queryPredicates Field Functions 
      bool hasQueryPredicates() const { return this->queryPredicates_ != nullptr;};
      void deleteQueryPredicates() { this->queryPredicates_ = nullptr;};
      inline const vector<Predicates::QueryPredicates> & getQueryPredicates() const { DARABONBA_PTR_GET_CONST(queryPredicates_, vector<Predicates::QueryPredicates>) };
      inline vector<Predicates::QueryPredicates> getQueryPredicates() { DARABONBA_PTR_GET(queryPredicates_, vector<Predicates::QueryPredicates>) };
      inline Predicates& setQueryPredicates(const vector<Predicates::QueryPredicates> & queryPredicates) { DARABONBA_PTR_SET_VALUE(queryPredicates_, queryPredicates) };
      inline Predicates& setQueryPredicates(vector<Predicates::QueryPredicates> && queryPredicates) { DARABONBA_PTR_SET_RVALUE(queryPredicates_, queryPredicates) };


    protected:
      shared_ptr<vector<Predicates::HeaderPredicates>> headerPredicates_ {};
      shared_ptr<vector<string>> methodPredicates_ {};
      shared_ptr<Predicates::PathPredicates> pathPredicates_ {};
      shared_ptr<vector<Predicates::QueryPredicates>> queryPredicates_ {};
    };

    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Fallback, fallback_);
        DARABONBA_PTR_TO_JSON(Retry, retry_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
        DARABONBA_PTR_FROM_JSON(Retry, retry_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Timeout : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timeout& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
          DARABONBA_PTR_TO_JSON(UnitNum, unitNum_);
        };
        friend void from_json(const Darabonba::Json& j, Timeout& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
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
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->timeUnit_ == nullptr && this->unitNum_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Timeout& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // timeUnit Field Functions 
        bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
        void deleteTimeUnit() { this->timeUnit_ = nullptr;};
        inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
        inline Timeout& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


        // unitNum Field Functions 
        bool hasUnitNum() const { return this->unitNum_ != nullptr;};
        void deleteUnitNum() { this->unitNum_ = nullptr;};
        inline int64_t getUnitNum() const { DARABONBA_PTR_GET_DEFAULT(unitNum_, 0L) };
        inline Timeout& setUnitNum(int64_t unitNum) { DARABONBA_PTR_SET_VALUE(unitNum_, unitNum) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<string> timeUnit_ {};
        shared_ptr<int64_t> unitNum_ {};
      };

      class Retry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Retry& obj) { 
          DARABONBA_PTR_TO_JSON(Attempts, attempts_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(HttpCodes, httpCodes_);
          DARABONBA_PTR_TO_JSON(RetryOn, retryOn_);
        };
        friend void from_json(const Darabonba::Json& j, Retry& obj) { 
          DARABONBA_PTR_FROM_JSON(Attempts, attempts_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(HttpCodes, httpCodes_);
          DARABONBA_PTR_FROM_JSON(RetryOn, retryOn_);
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
        && this->enable_ == nullptr && this->httpCodes_ == nullptr && this->retryOn_ == nullptr; };
        // attempts Field Functions 
        bool hasAttempts() const { return this->attempts_ != nullptr;};
        void deleteAttempts() { this->attempts_ = nullptr;};
        inline int64_t getAttempts() const { DARABONBA_PTR_GET_DEFAULT(attempts_, 0L) };
        inline Retry& setAttempts(int64_t attempts) { DARABONBA_PTR_SET_VALUE(attempts_, attempts) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Retry& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


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


      protected:
        shared_ptr<int64_t> attempts_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<vector<string>> httpCodes_ {};
        shared_ptr<vector<string>> retryOn_ {};
      };

      class Fallback : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fallback& obj) { 
          DARABONBA_PTR_TO_JSON(Destinations, destinations_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, Fallback& obj) { 
          DARABONBA_PTR_FROM_JSON(Destinations, destinations_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
        };
        Fallback() = default ;
        Fallback(const Fallback &) = default ;
        Fallback(Fallback &&) = default ;
        Fallback(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fallback() = default ;
        Fallback& operator=(const Fallback &) = default ;
        Fallback& operator=(Fallback &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Destinations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Destinations& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
            DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
            DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
            DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
          };
          friend void from_json(const Darabonba::Json& j, Destinations& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
            DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
            DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
            DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
          };
          Destinations() = default ;
          Destinations(const Destinations &) = default ;
          Destinations(Destinations &&) = default ;
          Destinations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Destinations() = default ;
          Destinations& operator=(const Destinations &) = default ;
          Destinations& operator=(Destinations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->servicePort_ == nullptr && this->serviceProtocol_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Destinations& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline Destinations& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
          inline Destinations& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline Destinations& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


          // servicePort Field Functions 
          bool hasServicePort() const { return this->servicePort_ != nullptr;};
          void deleteServicePort() { this->servicePort_ = nullptr;};
          inline int64_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0L) };
          inline Destinations& setServicePort(int64_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


          // serviceProtocol Field Functions 
          bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
          void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
          inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
          inline Destinations& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> appName_ {};
          shared_ptr<string> serviceId_ {};
          shared_ptr<string> serviceName_ {};
          shared_ptr<int64_t> servicePort_ {};
          shared_ptr<string> serviceProtocol_ {};
        };

        virtual bool empty() const override { return this->destinations_ == nullptr
        && this->enable_ == nullptr; };
        // destinations Field Functions 
        bool hasDestinations() const { return this->destinations_ != nullptr;};
        void deleteDestinations() { this->destinations_ = nullptr;};
        inline const vector<Fallback::Destinations> & getDestinations() const { DARABONBA_PTR_GET_CONST(destinations_, vector<Fallback::Destinations>) };
        inline vector<Fallback::Destinations> getDestinations() { DARABONBA_PTR_GET(destinations_, vector<Fallback::Destinations>) };
        inline Fallback& setDestinations(const vector<Fallback::Destinations> & destinations) { DARABONBA_PTR_SET_VALUE(destinations_, destinations) };
        inline Fallback& setDestinations(vector<Fallback::Destinations> && destinations) { DARABONBA_PTR_SET_RVALUE(destinations_, destinations) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Fallback& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        shared_ptr<vector<Fallback::Destinations>> destinations_ {};
        shared_ptr<bool> enable_ {};
      };

      virtual bool empty() const override { return this->fallback_ == nullptr
        && this->retry_ == nullptr && this->timeout_ == nullptr; };
      // fallback Field Functions 
      bool hasFallback() const { return this->fallback_ != nullptr;};
      void deleteFallback() { this->fallback_ = nullptr;};
      inline const Policies::Fallback & getFallback() const { DARABONBA_PTR_GET_CONST(fallback_, Policies::Fallback) };
      inline Policies::Fallback getFallback() { DARABONBA_PTR_GET(fallback_, Policies::Fallback) };
      inline Policies& setFallback(const Policies::Fallback & fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };
      inline Policies& setFallback(Policies::Fallback && fallback) { DARABONBA_PTR_SET_RVALUE(fallback_, fallback) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline const Policies::Retry & getRetry() const { DARABONBA_PTR_GET_CONST(retry_, Policies::Retry) };
      inline Policies::Retry getRetry() { DARABONBA_PTR_GET(retry_, Policies::Retry) };
      inline Policies& setRetry(const Policies::Retry & retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };
      inline Policies& setRetry(Policies::Retry && retry) { DARABONBA_PTR_SET_RVALUE(retry_, retry) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline const Policies::Timeout & getTimeout() const { DARABONBA_PTR_GET_CONST(timeout_, Policies::Timeout) };
      inline Policies::Timeout getTimeout() { DARABONBA_PTR_GET(timeout_, Policies::Timeout) };
      inline Policies& setTimeout(const Policies::Timeout & timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };
      inline Policies& setTimeout(Policies::Timeout && timeout) { DARABONBA_PTR_SET_RVALUE(timeout_, timeout) };


    protected:
      shared_ptr<Policies::Fallback> fallback_ {};
      shared_ptr<Policies::Retry> retry_ {};
      shared_ptr<Policies::Timeout> timeout_ {};
    };

    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainId_ == nullptr
        && this->domainName_ == nullptr; };
      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Domains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Domains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      shared_ptr<string> domainId_ {};
      shared_ptr<string> domainName_ {};
    };

    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->deployStatus_ == nullptr && this->destinationType_ == nullptr && this->domains_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr
        && this->httpApiId_ == nullptr && this->httpApiName_ == nullptr && this->httpApiType_ == nullptr && this->ingressId_ == nullptr && this->nacosInstanceId_ == nullptr
        && this->nacosNamespaceId_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr && this->policies_ == nullptr && this->predicates_ == nullptr
        && this->routeId_ == nullptr && this->services_ == nullptr && this->sourceType_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline HttpApiRoute& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline HttpApiRoute& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline HttpApiRoute& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<HttpApiRoute::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<HttpApiRoute::Domains>) };
    inline vector<HttpApiRoute::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<HttpApiRoute::Domains>) };
    inline HttpApiRoute& setDomains(const vector<HttpApiRoute::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline HttpApiRoute& setDomains(vector<HttpApiRoute::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiRoute& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiRoute& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline HttpApiRoute& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // httpApiName Field Functions 
    bool hasHttpApiName() const { return this->httpApiName_ != nullptr;};
    void deleteHttpApiName() { this->httpApiName_ = nullptr;};
    inline string getHttpApiName() const { DARABONBA_PTR_GET_DEFAULT(httpApiName_, "") };
    inline HttpApiRoute& setHttpApiName(string httpApiName) { DARABONBA_PTR_SET_VALUE(httpApiName_, httpApiName) };


    // httpApiType Field Functions 
    bool hasHttpApiType() const { return this->httpApiType_ != nullptr;};
    void deleteHttpApiType() { this->httpApiType_ = nullptr;};
    inline string getHttpApiType() const { DARABONBA_PTR_GET_DEFAULT(httpApiType_, "") };
    inline HttpApiRoute& setHttpApiType(string httpApiType) { DARABONBA_PTR_SET_VALUE(httpApiType_, httpApiType) };


    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t getIngressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline HttpApiRoute& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


    // nacosInstanceId Field Functions 
    bool hasNacosInstanceId() const { return this->nacosInstanceId_ != nullptr;};
    void deleteNacosInstanceId() { this->nacosInstanceId_ = nullptr;};
    inline string getNacosInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nacosInstanceId_, "") };
    inline HttpApiRoute& setNacosInstanceId(string nacosInstanceId) { DARABONBA_PTR_SET_VALUE(nacosInstanceId_, nacosInstanceId) };


    // nacosNamespaceId Field Functions 
    bool hasNacosNamespaceId() const { return this->nacosNamespaceId_ != nullptr;};
    void deleteNacosNamespaceId() { this->nacosNamespaceId_ = nullptr;};
    inline string getNacosNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(nacosNamespaceId_, "") };
    inline HttpApiRoute& setNacosNamespaceId(string nacosNamespaceId) { DARABONBA_PTR_SET_VALUE(nacosNamespaceId_, nacosNamespaceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiRoute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline HttpApiRoute& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const HttpApiRoute::Policies & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, HttpApiRoute::Policies) };
    inline HttpApiRoute::Policies getPolicies() { DARABONBA_PTR_GET(policies_, HttpApiRoute::Policies) };
    inline HttpApiRoute& setPolicies(const HttpApiRoute::Policies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline HttpApiRoute& setPolicies(HttpApiRoute::Policies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline const HttpApiRoute::Predicates & getPredicates() const { DARABONBA_PTR_GET_CONST(predicates_, HttpApiRoute::Predicates) };
    inline HttpApiRoute::Predicates getPredicates() { DARABONBA_PTR_GET(predicates_, HttpApiRoute::Predicates) };
    inline HttpApiRoute& setPredicates(const HttpApiRoute::Predicates & predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };
    inline HttpApiRoute& setPredicates(HttpApiRoute::Predicates && predicates) { DARABONBA_PTR_SET_RVALUE(predicates_, predicates) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline HttpApiRoute& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<HttpApiRoute::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<HttpApiRoute::Services>) };
    inline vector<HttpApiRoute::Services> getServices() { DARABONBA_PTR_GET(services_, vector<HttpApiRoute::Services>) };
    inline HttpApiRoute& setServices(const vector<HttpApiRoute::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline HttpApiRoute& setServices(vector<HttpApiRoute::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline HttpApiRoute& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<string> addressType_ {};
    shared_ptr<string> deployStatus_ {};
    shared_ptr<string> destinationType_ {};
    shared_ptr<vector<HttpApiRoute::Domains>> domains_ {};
    shared_ptr<string> environmentId_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> httpApiId_ {};
    shared_ptr<string> httpApiName_ {};
    shared_ptr<string> httpApiType_ {};
    shared_ptr<int64_t> ingressId_ {};
    shared_ptr<string> nacosInstanceId_ {};
    shared_ptr<string> nacosNamespaceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> namespaceId_ {};
    shared_ptr<HttpApiRoute::Policies> policies_ {};
    shared_ptr<HttpApiRoute::Predicates> predicates_ {};
    shared_ptr<string> routeId_ {};
    shared_ptr<vector<HttpApiRoute::Services>> services_ {};
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
