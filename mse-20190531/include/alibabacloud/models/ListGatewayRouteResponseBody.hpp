// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTERESPONSEBODY_HPP_
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
  class ListGatewayRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListGatewayRouteResponseBody() = default ;
    ListGatewayRouteResponseBody(const ListGatewayRouteResponseBody &) = default ;
    ListGatewayRouteResponseBody(ListGatewayRouteResponseBody &&) = default ;
    ListGatewayRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteResponseBody() = default ;
    ListGatewayRouteResponseBody& operator=(const ListGatewayRouteResponseBody &) = default ;
    ListGatewayRouteResponseBody& operator=(ListGatewayRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(DefaultServiceId, defaultServiceId_);
          DARABONBA_PTR_TO_JSON(DefaultServiceName, defaultServiceName_);
          DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
          DARABONBA_PTR_TO_JSON(DirectResponse, directResponse_);
          DARABONBA_PTR_TO_JSON(DomainId, domainId_);
          DARABONBA_PTR_TO_JSON(DomainIdList, domainIdList_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
          DARABONBA_PTR_TO_JSON(DynamicRoute, dynamicRoute_);
          DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
          DARABONBA_PTR_TO_JSON(Fallback, fallback_);
          DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServices_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Predicates, predicates_);
          DARABONBA_PTR_TO_JSON(Redirect, redirect_);
          DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
          DARABONBA_PTR_TO_JSON(RoutePredicates, routePredicates_);
          DARABONBA_PTR_TO_JSON(RouteServices, routeServices_);
          DARABONBA_PTR_TO_JSON(Services, services_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(DefaultServiceId, defaultServiceId_);
          DARABONBA_PTR_FROM_JSON(DefaultServiceName, defaultServiceName_);
          DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
          DARABONBA_PTR_FROM_JSON(DirectResponse, directResponse_);
          DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
          DARABONBA_PTR_FROM_JSON(DomainIdList, domainIdList_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
          DARABONBA_PTR_FROM_JSON(DynamicRoute, dynamicRoute_);
          DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
          DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
          DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServices_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
          DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
          DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
          DARABONBA_PTR_FROM_JSON(RoutePredicates, routePredicates_);
          DARABONBA_PTR_FROM_JSON(RouteServices, routeServices_);
          DARABONBA_PTR_FROM_JSON(Services, services_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RouteServices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteServices& obj) { 
            DARABONBA_PTR_TO_JSON(AgreementType, agreementType_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(HealthStatus, healthStatus_);
            DARABONBA_PTR_TO_JSON(HttpDubboTranscoder, httpDubboTranscoder_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Namespace, namespace_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
            DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
            DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
            DARABONBA_PTR_TO_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, RouteServices& obj) { 
            DARABONBA_PTR_FROM_JSON(AgreementType, agreementType_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(HealthStatus, healthStatus_);
            DARABONBA_PTR_FROM_JSON(HttpDubboTranscoder, httpDubboTranscoder_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
            DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
            DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
            DARABONBA_PTR_FROM_JSON(UnhealthyEndpoints, unhealthyEndpoints_);
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
          class HttpDubboTranscoder : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HttpDubboTranscoder& obj) { 
              DARABONBA_PTR_TO_JSON(DubboServiceGroup, dubboServiceGroup_);
              DARABONBA_PTR_TO_JSON(DubboServiceName, dubboServiceName_);
              DARABONBA_PTR_TO_JSON(DubboServiceVersion, dubboServiceVersion_);
              DARABONBA_PTR_TO_JSON(MothedMapList, mothedMapList_);
            };
            friend void from_json(const Darabonba::Json& j, HttpDubboTranscoder& obj) { 
              DARABONBA_PTR_FROM_JSON(DubboServiceGroup, dubboServiceGroup_);
              DARABONBA_PTR_FROM_JSON(DubboServiceName, dubboServiceName_);
              DARABONBA_PTR_FROM_JSON(DubboServiceVersion, dubboServiceVersion_);
              DARABONBA_PTR_FROM_JSON(MothedMapList, mothedMapList_);
            };
            HttpDubboTranscoder() = default ;
            HttpDubboTranscoder(const HttpDubboTranscoder &) = default ;
            HttpDubboTranscoder(HttpDubboTranscoder &&) = default ;
            HttpDubboTranscoder(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HttpDubboTranscoder() = default ;
            HttpDubboTranscoder& operator=(const HttpDubboTranscoder &) = default ;
            HttpDubboTranscoder& operator=(HttpDubboTranscoder &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class MothedMapList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MothedMapList& obj) { 
                DARABONBA_PTR_TO_JSON(DubboMothedName, dubboMothedName_);
                DARABONBA_PTR_TO_JSON(HttpMothed, httpMothed_);
                DARABONBA_PTR_TO_JSON(Mothedpath, mothedpath_);
                DARABONBA_PTR_TO_JSON(ParamMapsList, paramMapsList_);
                DARABONBA_PTR_TO_JSON(PassThroughAllHeaders, passThroughAllHeaders_);
                DARABONBA_PTR_TO_JSON(PassThroughList, passThroughList_);
              };
              friend void from_json(const Darabonba::Json& j, MothedMapList& obj) { 
                DARABONBA_PTR_FROM_JSON(DubboMothedName, dubboMothedName_);
                DARABONBA_PTR_FROM_JSON(HttpMothed, httpMothed_);
                DARABONBA_PTR_FROM_JSON(Mothedpath, mothedpath_);
                DARABONBA_PTR_FROM_JSON(ParamMapsList, paramMapsList_);
                DARABONBA_PTR_FROM_JSON(PassThroughAllHeaders, passThroughAllHeaders_);
                DARABONBA_PTR_FROM_JSON(PassThroughList, passThroughList_);
              };
              MothedMapList() = default ;
              MothedMapList(const MothedMapList &) = default ;
              MothedMapList(MothedMapList &&) = default ;
              MothedMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~MothedMapList() = default ;
              MothedMapList& operator=(const MothedMapList &) = default ;
              MothedMapList& operator=(MothedMapList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ParamMapsList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ParamMapsList& obj) { 
                  DARABONBA_PTR_TO_JSON(ExtractKey, extractKey_);
                  DARABONBA_PTR_TO_JSON(ExtractKeySpec, extractKeySpec_);
                  DARABONBA_PTR_TO_JSON(MappingType, mappingType_);
                };
                friend void from_json(const Darabonba::Json& j, ParamMapsList& obj) { 
                  DARABONBA_PTR_FROM_JSON(ExtractKey, extractKey_);
                  DARABONBA_PTR_FROM_JSON(ExtractKeySpec, extractKeySpec_);
                  DARABONBA_PTR_FROM_JSON(MappingType, mappingType_);
                };
                ParamMapsList() = default ;
                ParamMapsList(const ParamMapsList &) = default ;
                ParamMapsList(ParamMapsList &&) = default ;
                ParamMapsList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ParamMapsList() = default ;
                ParamMapsList& operator=(const ParamMapsList &) = default ;
                ParamMapsList& operator=(ParamMapsList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->extractKey_ == nullptr
        && this->extractKeySpec_ == nullptr && this->mappingType_ == nullptr; };
                // extractKey Field Functions 
                bool hasExtractKey() const { return this->extractKey_ != nullptr;};
                void deleteExtractKey() { this->extractKey_ = nullptr;};
                inline string getExtractKey() const { DARABONBA_PTR_GET_DEFAULT(extractKey_, "") };
                inline ParamMapsList& setExtractKey(string extractKey) { DARABONBA_PTR_SET_VALUE(extractKey_, extractKey) };


                // extractKeySpec Field Functions 
                bool hasExtractKeySpec() const { return this->extractKeySpec_ != nullptr;};
                void deleteExtractKeySpec() { this->extractKeySpec_ = nullptr;};
                inline string getExtractKeySpec() const { DARABONBA_PTR_GET_DEFAULT(extractKeySpec_, "") };
                inline ParamMapsList& setExtractKeySpec(string extractKeySpec) { DARABONBA_PTR_SET_VALUE(extractKeySpec_, extractKeySpec) };


                // mappingType Field Functions 
                bool hasMappingType() const { return this->mappingType_ != nullptr;};
                void deleteMappingType() { this->mappingType_ = nullptr;};
                inline string getMappingType() const { DARABONBA_PTR_GET_DEFAULT(mappingType_, "") };
                inline ParamMapsList& setMappingType(string mappingType) { DARABONBA_PTR_SET_VALUE(mappingType_, mappingType) };


              protected:
                // The key extracted from the input parameter.
                shared_ptr<string> extractKey_ {};
                // The position of the input parameter.
                // 
                // > Valid values:
                // 
                // *   `ALL_QUERY_PARAMETER`: request parameter
                // 
                // *   `ALL_HEADER`: request header
                // 
                // *   `ALL_PATH`: request path
                // 
                // *   `ALL_BODY`: request body
                shared_ptr<string> extractKeySpec_ {};
                // The type of the backend service parameter.
                shared_ptr<string> mappingType_ {};
              };

              virtual bool empty() const override { return this->dubboMothedName_ == nullptr
        && this->httpMothed_ == nullptr && this->mothedpath_ == nullptr && this->paramMapsList_ == nullptr && this->passThroughAllHeaders_ == nullptr && this->passThroughList_ == nullptr; };
              // dubboMothedName Field Functions 
              bool hasDubboMothedName() const { return this->dubboMothedName_ != nullptr;};
              void deleteDubboMothedName() { this->dubboMothedName_ = nullptr;};
              inline string getDubboMothedName() const { DARABONBA_PTR_GET_DEFAULT(dubboMothedName_, "") };
              inline MothedMapList& setDubboMothedName(string dubboMothedName) { DARABONBA_PTR_SET_VALUE(dubboMothedName_, dubboMothedName) };


              // httpMothed Field Functions 
              bool hasHttpMothed() const { return this->httpMothed_ != nullptr;};
              void deleteHttpMothed() { this->httpMothed_ = nullptr;};
              inline string getHttpMothed() const { DARABONBA_PTR_GET_DEFAULT(httpMothed_, "") };
              inline MothedMapList& setHttpMothed(string httpMothed) { DARABONBA_PTR_SET_VALUE(httpMothed_, httpMothed) };


              // mothedpath Field Functions 
              bool hasMothedpath() const { return this->mothedpath_ != nullptr;};
              void deleteMothedpath() { this->mothedpath_ = nullptr;};
              inline string getMothedpath() const { DARABONBA_PTR_GET_DEFAULT(mothedpath_, "") };
              inline MothedMapList& setMothedpath(string mothedpath) { DARABONBA_PTR_SET_VALUE(mothedpath_, mothedpath) };


              // paramMapsList Field Functions 
              bool hasParamMapsList() const { return this->paramMapsList_ != nullptr;};
              void deleteParamMapsList() { this->paramMapsList_ = nullptr;};
              inline const vector<MothedMapList::ParamMapsList> & getParamMapsList() const { DARABONBA_PTR_GET_CONST(paramMapsList_, vector<MothedMapList::ParamMapsList>) };
              inline vector<MothedMapList::ParamMapsList> getParamMapsList() { DARABONBA_PTR_GET(paramMapsList_, vector<MothedMapList::ParamMapsList>) };
              inline MothedMapList& setParamMapsList(const vector<MothedMapList::ParamMapsList> & paramMapsList) { DARABONBA_PTR_SET_VALUE(paramMapsList_, paramMapsList) };
              inline MothedMapList& setParamMapsList(vector<MothedMapList::ParamMapsList> && paramMapsList) { DARABONBA_PTR_SET_RVALUE(paramMapsList_, paramMapsList) };


              // passThroughAllHeaders Field Functions 
              bool hasPassThroughAllHeaders() const { return this->passThroughAllHeaders_ != nullptr;};
              void deletePassThroughAllHeaders() { this->passThroughAllHeaders_ = nullptr;};
              inline string getPassThroughAllHeaders() const { DARABONBA_PTR_GET_DEFAULT(passThroughAllHeaders_, "") };
              inline MothedMapList& setPassThroughAllHeaders(string passThroughAllHeaders) { DARABONBA_PTR_SET_VALUE(passThroughAllHeaders_, passThroughAllHeaders) };


              // passThroughList Field Functions 
              bool hasPassThroughList() const { return this->passThroughList_ != nullptr;};
              void deletePassThroughList() { this->passThroughList_ = nullptr;};
              inline const vector<string> & getPassThroughList() const { DARABONBA_PTR_GET_CONST(passThroughList_, vector<string>) };
              inline vector<string> getPassThroughList() { DARABONBA_PTR_GET(passThroughList_, vector<string>) };
              inline MothedMapList& setPassThroughList(const vector<string> & passThroughList) { DARABONBA_PTR_SET_VALUE(passThroughList_, passThroughList) };
              inline MothedMapList& setPassThroughList(vector<string> && passThroughList) { DARABONBA_PTR_SET_RVALUE(passThroughList_, passThroughList) };


            protected:
              // The method name of the Dubbo service.
              shared_ptr<string> dubboMothedName_ {};
              // The HTTP method.
              // 
              // > Valid values:
              // 
              // *   ALL_GET
              // 
              // *   ALL_POST
              // 
              // *   ALL_PUT
              // 
              // *   ALL_DELETE
              // 
              // *   ALL_PATCH
              shared_ptr<string> httpMothed_ {};
              // The path used for method matching.
              shared_ptr<string> mothedpath_ {};
              // The information about parameter mappings.
              shared_ptr<vector<MothedMapList::ParamMapsList>> paramMapsList_ {};
              // The pass-through type of the header.
              // 
              // > Valid values:
              // 
              // *   PASS_ALL: All headers are passed through.
              // 
              // *   PASS_NOT: All headers are not passed through.
              // 
              // *   PASS_ASSIGN: Specified headers are passed through.
              shared_ptr<string> passThroughAllHeaders_ {};
              // The list of headers to be passed through.
              shared_ptr<vector<string>> passThroughList_ {};
            };

            virtual bool empty() const override { return this->dubboServiceGroup_ == nullptr
        && this->dubboServiceName_ == nullptr && this->dubboServiceVersion_ == nullptr && this->mothedMapList_ == nullptr; };
            // dubboServiceGroup Field Functions 
            bool hasDubboServiceGroup() const { return this->dubboServiceGroup_ != nullptr;};
            void deleteDubboServiceGroup() { this->dubboServiceGroup_ = nullptr;};
            inline string getDubboServiceGroup() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceGroup_, "") };
            inline HttpDubboTranscoder& setDubboServiceGroup(string dubboServiceGroup) { DARABONBA_PTR_SET_VALUE(dubboServiceGroup_, dubboServiceGroup) };


            // dubboServiceName Field Functions 
            bool hasDubboServiceName() const { return this->dubboServiceName_ != nullptr;};
            void deleteDubboServiceName() { this->dubboServiceName_ = nullptr;};
            inline string getDubboServiceName() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceName_, "") };
            inline HttpDubboTranscoder& setDubboServiceName(string dubboServiceName) { DARABONBA_PTR_SET_VALUE(dubboServiceName_, dubboServiceName) };


            // dubboServiceVersion Field Functions 
            bool hasDubboServiceVersion() const { return this->dubboServiceVersion_ != nullptr;};
            void deleteDubboServiceVersion() { this->dubboServiceVersion_ = nullptr;};
            inline string getDubboServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(dubboServiceVersion_, "") };
            inline HttpDubboTranscoder& setDubboServiceVersion(string dubboServiceVersion) { DARABONBA_PTR_SET_VALUE(dubboServiceVersion_, dubboServiceVersion) };


            // mothedMapList Field Functions 
            bool hasMothedMapList() const { return this->mothedMapList_ != nullptr;};
            void deleteMothedMapList() { this->mothedMapList_ = nullptr;};
            inline const vector<HttpDubboTranscoder::MothedMapList> & getMothedMapList() const { DARABONBA_PTR_GET_CONST(mothedMapList_, vector<HttpDubboTranscoder::MothedMapList>) };
            inline vector<HttpDubboTranscoder::MothedMapList> getMothedMapList() { DARABONBA_PTR_GET(mothedMapList_, vector<HttpDubboTranscoder::MothedMapList>) };
            inline HttpDubboTranscoder& setMothedMapList(const vector<HttpDubboTranscoder::MothedMapList> & mothedMapList) { DARABONBA_PTR_SET_VALUE(mothedMapList_, mothedMapList) };
            inline HttpDubboTranscoder& setMothedMapList(vector<HttpDubboTranscoder::MothedMapList> && mothedMapList) { DARABONBA_PTR_SET_RVALUE(mothedMapList_, mothedMapList) };


          protected:
            // The Dubbo service group.
            shared_ptr<string> dubboServiceGroup_ {};
            // The name of the Dubbo service.
            shared_ptr<string> dubboServiceName_ {};
            // The version of the Dubbo service.
            shared_ptr<string> dubboServiceVersion_ {};
            // The forwarding rules of the Dubbo service.
            shared_ptr<vector<HttpDubboTranscoder::MothedMapList>> mothedMapList_ {};
          };

          virtual bool empty() const override { return this->agreementType_ == nullptr
        && this->groupName_ == nullptr && this->healthStatus_ == nullptr && this->httpDubboTranscoder_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->percent_ == nullptr && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->servicePort_ == nullptr && this->sourceType_ == nullptr
        && this->unhealthyEndpoints_ == nullptr && this->version_ == nullptr; };
          // agreementType Field Functions 
          bool hasAgreementType() const { return this->agreementType_ != nullptr;};
          void deleteAgreementType() { this->agreementType_ = nullptr;};
          inline string getAgreementType() const { DARABONBA_PTR_GET_DEFAULT(agreementType_, "") };
          inline RouteServices& setAgreementType(string agreementType) { DARABONBA_PTR_SET_VALUE(agreementType_, agreementType) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline RouteServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // healthStatus Field Functions 
          bool hasHealthStatus() const { return this->healthStatus_ != nullptr;};
          void deleteHealthStatus() { this->healthStatus_ = nullptr;};
          inline string getHealthStatus() const { DARABONBA_PTR_GET_DEFAULT(healthStatus_, "") };
          inline RouteServices& setHealthStatus(string healthStatus) { DARABONBA_PTR_SET_VALUE(healthStatus_, healthStatus) };


          // httpDubboTranscoder Field Functions 
          bool hasHttpDubboTranscoder() const { return this->httpDubboTranscoder_ != nullptr;};
          void deleteHttpDubboTranscoder() { this->httpDubboTranscoder_ = nullptr;};
          inline const RouteServices::HttpDubboTranscoder & getHttpDubboTranscoder() const { DARABONBA_PTR_GET_CONST(httpDubboTranscoder_, RouteServices::HttpDubboTranscoder) };
          inline RouteServices::HttpDubboTranscoder getHttpDubboTranscoder() { DARABONBA_PTR_GET(httpDubboTranscoder_, RouteServices::HttpDubboTranscoder) };
          inline RouteServices& setHttpDubboTranscoder(const RouteServices::HttpDubboTranscoder & httpDubboTranscoder) { DARABONBA_PTR_SET_VALUE(httpDubboTranscoder_, httpDubboTranscoder) };
          inline RouteServices& setHttpDubboTranscoder(RouteServices::HttpDubboTranscoder && httpDubboTranscoder) { DARABONBA_PTR_SET_RVALUE(httpDubboTranscoder_, httpDubboTranscoder) };


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


          // servicePort Field Functions 
          bool hasServicePort() const { return this->servicePort_ != nullptr;};
          void deleteServicePort() { this->servicePort_ = nullptr;};
          inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
          inline RouteServices& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
          inline RouteServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          // unhealthyEndpoints Field Functions 
          bool hasUnhealthyEndpoints() const { return this->unhealthyEndpoints_ != nullptr;};
          void deleteUnhealthyEndpoints() { this->unhealthyEndpoints_ = nullptr;};
          inline const vector<string> & getUnhealthyEndpoints() const { DARABONBA_PTR_GET_CONST(unhealthyEndpoints_, vector<string>) };
          inline vector<string> getUnhealthyEndpoints() { DARABONBA_PTR_GET(unhealthyEndpoints_, vector<string>) };
          inline RouteServices& setUnhealthyEndpoints(const vector<string> & unhealthyEndpoints) { DARABONBA_PTR_SET_VALUE(unhealthyEndpoints_, unhealthyEndpoints) };
          inline RouteServices& setUnhealthyEndpoints(vector<string> && unhealthyEndpoints) { DARABONBA_PTR_SET_RVALUE(unhealthyEndpoints_, unhealthyEndpoints) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline RouteServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The type of the protocol.
          shared_ptr<string> agreementType_ {};
          // The name of the group to which the service belongs.
          shared_ptr<string> groupName_ {};
          shared_ptr<string> healthStatus_ {};
          // The transcoder of the Dubbo protocol.
          shared_ptr<RouteServices::HttpDubboTranscoder> httpDubboTranscoder_ {};
          // The name.
          shared_ptr<string> name_ {};
          // The namespace.
          shared_ptr<string> namespace_ {};
          // The weight in the form of a percentage value.
          shared_ptr<int32_t> percent_ {};
          // The ID of the service.
          shared_ptr<int64_t> serviceId_ {};
          // The name of the service.
          shared_ptr<string> serviceName_ {};
          // The Dubbo port number.
          shared_ptr<int32_t> servicePort_ {};
          // The source type.
          shared_ptr<string> sourceType_ {};
          shared_ptr<vector<string>> unhealthyEndpoints_ {};
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
            // The key.
            shared_ptr<string> key_ {};
            // The matching type.
            shared_ptr<string> type_ {};
            // The value.
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
            // The path of the node.
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
            // The header key.
            shared_ptr<string> key_ {};
            // The matching type.
            shared_ptr<string> type_ {};
            // The value.
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
          // The headers used for route matching.
          shared_ptr<vector<RoutePredicates::HeaderPredicates>> headerPredicates_ {};
          // The HTTP methods used for route matching.
          shared_ptr<vector<string>> methodPredicates_ {};
          // The path used for route matching.
          shared_ptr<RoutePredicates::PathPredicates> pathPredicates_ {};
          // The parameters used for route matching.
          shared_ptr<vector<RoutePredicates::QueryPredicates>> queryPredicates_ {};
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
          // The hostname to be redirected to.
          shared_ptr<string> host_ {};
          // The path.
          shared_ptr<string> path_ {};
        };

        class FallbackServices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FallbackServices& obj) { 
            DARABONBA_PTR_TO_JSON(AgreementType, agreementType_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Namespace, namespace_);
            DARABONBA_PTR_TO_JSON(Percent, percent_);
            DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
            DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
            DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, FallbackServices& obj) { 
            DARABONBA_PTR_FROM_JSON(AgreementType, agreementType_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
            DARABONBA_PTR_FROM_JSON(Percent, percent_);
            DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
            DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
            DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          FallbackServices() = default ;
          FallbackServices(const FallbackServices &) = default ;
          FallbackServices(FallbackServices &&) = default ;
          FallbackServices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FallbackServices() = default ;
          FallbackServices& operator=(const FallbackServices &) = default ;
          FallbackServices& operator=(FallbackServices &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agreementType_ == nullptr
        && this->groupName_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->percent_ == nullptr && this->serviceId_ == nullptr
        && this->serviceName_ == nullptr && this->servicePort_ == nullptr && this->sourceType_ == nullptr && this->version_ == nullptr; };
          // agreementType Field Functions 
          bool hasAgreementType() const { return this->agreementType_ != nullptr;};
          void deleteAgreementType() { this->agreementType_ = nullptr;};
          inline string getAgreementType() const { DARABONBA_PTR_GET_DEFAULT(agreementType_, "") };
          inline FallbackServices& setAgreementType(string agreementType) { DARABONBA_PTR_SET_VALUE(agreementType_, agreementType) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline FallbackServices& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FallbackServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline FallbackServices& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // percent Field Functions 
          bool hasPercent() const { return this->percent_ != nullptr;};
          void deletePercent() { this->percent_ = nullptr;};
          inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
          inline FallbackServices& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


          // serviceId Field Functions 
          bool hasServiceId() const { return this->serviceId_ != nullptr;};
          void deleteServiceId() { this->serviceId_ = nullptr;};
          inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
          inline FallbackServices& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline FallbackServices& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


          // servicePort Field Functions 
          bool hasServicePort() const { return this->servicePort_ != nullptr;};
          void deleteServicePort() { this->servicePort_ = nullptr;};
          inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
          inline FallbackServices& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


          // sourceType Field Functions 
          bool hasSourceType() const { return this->sourceType_ != nullptr;};
          void deleteSourceType() { this->sourceType_ = nullptr;};
          inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
          inline FallbackServices& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline FallbackServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The type of the protocol.
          shared_ptr<string> agreementType_ {};
          // The name of the group to which the service belongs.
          shared_ptr<string> groupName_ {};
          // The name.
          shared_ptr<string> name_ {};
          // The namespace to which the service belongs.
          shared_ptr<string> namespace_ {};
          // The weight in the form of a percentage value.
          shared_ptr<int32_t> percent_ {};
          // The ID of the service.
          shared_ptr<int64_t> serviceId_ {};
          // The name of the service.
          shared_ptr<string> serviceName_ {};
          // The service port number.
          shared_ptr<int32_t> servicePort_ {};
          // The source type.
          shared_ptr<string> sourceType_ {};
          // The version of the service.
          shared_ptr<string> version_ {};
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
          // The return value for service mocking.
          shared_ptr<string> body_ {};
          // The response code returned.
          shared_ptr<int32_t> code_ {};
        };

        class Comment : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Comment& obj) { 
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Comment& obj) { 
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Comment() = default ;
          Comment(const Comment &) = default ;
          Comment(Comment &&) = default ;
          Comment(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Comment() = default ;
          Comment& operator=(const Comment &) = default ;
          Comment& operator=(Comment &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->status_ == nullptr; };
          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Comment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The status.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->comment_ == nullptr
        && this->defaultServiceId_ == nullptr && this->defaultServiceName_ == nullptr && this->destinationType_ == nullptr && this->directResponse_ == nullptr && this->domainId_ == nullptr
        && this->domainIdList_ == nullptr && this->domainName_ == nullptr && this->domainNameList_ == nullptr && this->dynamicRoute_ == nullptr && this->enableWaf_ == nullptr
        && this->fallback_ == nullptr && this->fallbackServices_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->predicates_ == nullptr && this->redirect_ == nullptr
        && this->routeOrder_ == nullptr && this->routePredicates_ == nullptr && this->routeServices_ == nullptr && this->services_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline const Result::Comment & getComment() const { DARABONBA_PTR_GET_CONST(comment_, Result::Comment) };
        inline Result::Comment getComment() { DARABONBA_PTR_GET(comment_, Result::Comment) };
        inline Result& setComment(const Result::Comment & comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };
        inline Result& setComment(Result::Comment && comment) { DARABONBA_PTR_SET_RVALUE(comment_, comment) };


        // defaultServiceId Field Functions 
        bool hasDefaultServiceId() const { return this->defaultServiceId_ != nullptr;};
        void deleteDefaultServiceId() { this->defaultServiceId_ = nullptr;};
        inline int64_t getDefaultServiceId() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceId_, 0L) };
        inline Result& setDefaultServiceId(int64_t defaultServiceId) { DARABONBA_PTR_SET_VALUE(defaultServiceId_, defaultServiceId) };


        // defaultServiceName Field Functions 
        bool hasDefaultServiceName() const { return this->defaultServiceName_ != nullptr;};
        void deleteDefaultServiceName() { this->defaultServiceName_ = nullptr;};
        inline string getDefaultServiceName() const { DARABONBA_PTR_GET_DEFAULT(defaultServiceName_, "") };
        inline Result& setDefaultServiceName(string defaultServiceName) { DARABONBA_PTR_SET_VALUE(defaultServiceName_, defaultServiceName) };


        // destinationType Field Functions 
        bool hasDestinationType() const { return this->destinationType_ != nullptr;};
        void deleteDestinationType() { this->destinationType_ = nullptr;};
        inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
        inline Result& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


        // directResponse Field Functions 
        bool hasDirectResponse() const { return this->directResponse_ != nullptr;};
        void deleteDirectResponse() { this->directResponse_ = nullptr;};
        inline const Result::DirectResponse & getDirectResponse() const { DARABONBA_PTR_GET_CONST(directResponse_, Result::DirectResponse) };
        inline Result::DirectResponse getDirectResponse() { DARABONBA_PTR_GET(directResponse_, Result::DirectResponse) };
        inline Result& setDirectResponse(const Result::DirectResponse & directResponse) { DARABONBA_PTR_SET_VALUE(directResponse_, directResponse) };
        inline Result& setDirectResponse(Result::DirectResponse && directResponse) { DARABONBA_PTR_SET_RVALUE(directResponse_, directResponse) };


        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
        inline Result& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // domainIdList Field Functions 
        bool hasDomainIdList() const { return this->domainIdList_ != nullptr;};
        void deleteDomainIdList() { this->domainIdList_ = nullptr;};
        inline const vector<int64_t> & getDomainIdList() const { DARABONBA_PTR_GET_CONST(domainIdList_, vector<int64_t>) };
        inline vector<int64_t> getDomainIdList() { DARABONBA_PTR_GET(domainIdList_, vector<int64_t>) };
        inline Result& setDomainIdList(const vector<int64_t> & domainIdList) { DARABONBA_PTR_SET_VALUE(domainIdList_, domainIdList) };
        inline Result& setDomainIdList(vector<int64_t> && domainIdList) { DARABONBA_PTR_SET_RVALUE(domainIdList_, domainIdList) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Result& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainNameList Field Functions 
        bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
        void deleteDomainNameList() { this->domainNameList_ = nullptr;};
        inline const vector<string> & getDomainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
        inline vector<string> getDomainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
        inline Result& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
        inline Result& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


        // dynamicRoute Field Functions 
        bool hasDynamicRoute() const { return this->dynamicRoute_ != nullptr;};
        void deleteDynamicRoute() { this->dynamicRoute_ = nullptr;};
        inline bool getDynamicRoute() const { DARABONBA_PTR_GET_DEFAULT(dynamicRoute_, false) };
        inline Result& setDynamicRoute(bool dynamicRoute) { DARABONBA_PTR_SET_VALUE(dynamicRoute_, dynamicRoute) };


        // enableWaf Field Functions 
        bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
        void deleteEnableWaf() { this->enableWaf_ = nullptr;};
        inline string getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, "") };
        inline Result& setEnableWaf(string enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


        // fallback Field Functions 
        bool hasFallback() const { return this->fallback_ != nullptr;};
        void deleteFallback() { this->fallback_ = nullptr;};
        inline bool getFallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
        inline Result& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


        // fallbackServices Field Functions 
        bool hasFallbackServices() const { return this->fallbackServices_ != nullptr;};
        void deleteFallbackServices() { this->fallbackServices_ = nullptr;};
        inline const vector<Result::FallbackServices> & getFallbackServices() const { DARABONBA_PTR_GET_CONST(fallbackServices_, vector<Result::FallbackServices>) };
        inline vector<Result::FallbackServices> getFallbackServices() { DARABONBA_PTR_GET(fallbackServices_, vector<Result::FallbackServices>) };
        inline Result& setFallbackServices(const vector<Result::FallbackServices> & fallbackServices) { DARABONBA_PTR_SET_VALUE(fallbackServices_, fallbackServices) };
        inline Result& setFallbackServices(vector<Result::FallbackServices> && fallbackServices) { DARABONBA_PTR_SET_RVALUE(fallbackServices_, fallbackServices) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline Result& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline Result& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Result& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // predicates Field Functions 
        bool hasPredicates() const { return this->predicates_ != nullptr;};
        void deletePredicates() { this->predicates_ = nullptr;};
        inline string getPredicates() const { DARABONBA_PTR_GET_DEFAULT(predicates_, "") };
        inline Result& setPredicates(string predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };


        // redirect Field Functions 
        bool hasRedirect() const { return this->redirect_ != nullptr;};
        void deleteRedirect() { this->redirect_ = nullptr;};
        inline const Result::Redirect & getRedirect() const { DARABONBA_PTR_GET_CONST(redirect_, Result::Redirect) };
        inline Result::Redirect getRedirect() { DARABONBA_PTR_GET(redirect_, Result::Redirect) };
        inline Result& setRedirect(const Result::Redirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
        inline Result& setRedirect(Result::Redirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


        // routeOrder Field Functions 
        bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
        void deleteRouteOrder() { this->routeOrder_ = nullptr;};
        inline int32_t getRouteOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
        inline Result& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


        // routePredicates Field Functions 
        bool hasRoutePredicates() const { return this->routePredicates_ != nullptr;};
        void deleteRoutePredicates() { this->routePredicates_ = nullptr;};
        inline const Result::RoutePredicates & getRoutePredicates() const { DARABONBA_PTR_GET_CONST(routePredicates_, Result::RoutePredicates) };
        inline Result::RoutePredicates getRoutePredicates() { DARABONBA_PTR_GET(routePredicates_, Result::RoutePredicates) };
        inline Result& setRoutePredicates(const Result::RoutePredicates & routePredicates) { DARABONBA_PTR_SET_VALUE(routePredicates_, routePredicates) };
        inline Result& setRoutePredicates(Result::RoutePredicates && routePredicates) { DARABONBA_PTR_SET_RVALUE(routePredicates_, routePredicates) };


        // routeServices Field Functions 
        bool hasRouteServices() const { return this->routeServices_ != nullptr;};
        void deleteRouteServices() { this->routeServices_ = nullptr;};
        inline const vector<Result::RouteServices> & getRouteServices() const { DARABONBA_PTR_GET_CONST(routeServices_, vector<Result::RouteServices>) };
        inline vector<Result::RouteServices> getRouteServices() { DARABONBA_PTR_GET(routeServices_, vector<Result::RouteServices>) };
        inline Result& setRouteServices(const vector<Result::RouteServices> & routeServices) { DARABONBA_PTR_SET_VALUE(routeServices_, routeServices) };
        inline Result& setRouteServices(vector<Result::RouteServices> && routeServices) { DARABONBA_PTR_SET_RVALUE(routeServices_, routeServices) };


        // services Field Functions 
        bool hasServices() const { return this->services_ != nullptr;};
        void deleteServices() { this->services_ = nullptr;};
        inline string getServices() const { DARABONBA_PTR_GET_DEFAULT(services_, "") };
        inline Result& setServices(string services) { DARABONBA_PTR_SET_VALUE(services_, services) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The route comment (ingress).
        shared_ptr<Result::Comment> comment_ {};
        // The default service ID.
        shared_ptr<int64_t> defaultServiceId_ {};
        // The default service name.
        shared_ptr<string> defaultServiceName_ {};
        // The destination service type.
        shared_ptr<string> destinationType_ {};
        // The information about service mocking.
        shared_ptr<Result::DirectResponse> directResponse_ {};
        // The domain ID.
        shared_ptr<int64_t> domainId_ {};
        // The domain IDs.
        shared_ptr<vector<int64_t>> domainIdList_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The domain names.
        shared_ptr<vector<string>> domainNameList_ {};
        shared_ptr<bool> dynamicRoute_ {};
        // Indicates whether Web Application Firewall (WAF) is activated.
        shared_ptr<string> enableWaf_ {};
        // Indicates whether the Fallback service is enabled.
        shared_ptr<bool> fallback_ {};
        // The information about the Fallback service.
        shared_ptr<vector<Result::FallbackServices>> fallbackServices_ {};
        // The ID of the gateway.
        shared_ptr<int64_t> gatewayId_ {};
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The ID.
        shared_ptr<int64_t> id_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The matching rules.
        shared_ptr<string> predicates_ {};
        // The information about redirection.
        shared_ptr<Result::Redirect> redirect_ {};
        // The order.
        shared_ptr<int32_t> routeOrder_ {};
        // The matching rules.
        shared_ptr<Result::RoutePredicates> routePredicates_ {};
        // The information about services.
        shared_ptr<vector<Result::RouteServices>> routeServices_ {};
        // The information about services.
        shared_ptr<string> services_ {};
        // The status.
        shared_ptr<int32_t> status_ {};
        // The route type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The data structure.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListGatewayRouteResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayRouteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayRouteResponseBody::Data) };
    inline ListGatewayRouteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayRouteResponseBody::Data) };
    inline ListGatewayRouteResponseBody& setData(const ListGatewayRouteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayRouteResponseBody& setData(ListGatewayRouteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayRouteResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayRouteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayRouteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListGatewayRouteResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned if the request failed.
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
