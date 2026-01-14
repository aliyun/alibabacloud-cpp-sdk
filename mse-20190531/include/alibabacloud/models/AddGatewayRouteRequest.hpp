// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYROUTEREQUEST_HPP_
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
  class AddGatewayRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_TO_JSON(DirectResponseJSON, directResponseJSON_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_TO_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_TO_JSON(Fallback, fallback_);
      DARABONBA_PTR_TO_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(Predicates, predicates_);
      DARABONBA_PTR_TO_JSON(RedirectJSON, redirectJSON_);
      DARABONBA_PTR_TO_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationType, destinationType_);
      DARABONBA_PTR_FROM_JSON(DirectResponseJSON, directResponseJSON_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainIdListJSON, domainIdListJSON_);
      DARABONBA_PTR_FROM_JSON(EnableWaf, enableWaf_);
      DARABONBA_PTR_FROM_JSON(Fallback, fallback_);
      DARABONBA_PTR_FROM_JSON(FallbackServices, fallbackServices_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(Predicates, predicates_);
      DARABONBA_PTR_FROM_JSON(RedirectJSON, redirectJSON_);
      DARABONBA_PTR_FROM_JSON(RouteOrder, routeOrder_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    AddGatewayRouteRequest() = default ;
    AddGatewayRouteRequest(const AddGatewayRouteRequest &) = default ;
    AddGatewayRouteRequest(AddGatewayRouteRequest &&) = default ;
    AddGatewayRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayRouteRequest() = default ;
    AddGatewayRouteRequest& operator=(const AddGatewayRouteRequest &) = default ;
    AddGatewayRouteRequest& operator=(AddGatewayRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(AgreementType, agreementType_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(HttpDubboTranscoder, httpDubboTranscoder_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(AgreementType, agreementType_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(HttpDubboTranscoder, httpDubboTranscoder_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
            // *   `ALL_PATH`: request path
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
        // The name of the service group.
        shared_ptr<string> dubboServiceGroup_ {};
        // The name of the Dubbo service.
        shared_ptr<string> dubboServiceName_ {};
        // The version of the Dubbo service.
        shared_ptr<string> dubboServiceVersion_ {};
        // The forwarding rules of the Dubbo service.
        shared_ptr<vector<HttpDubboTranscoder::MothedMapList>> mothedMapList_ {};
      };

      virtual bool empty() const override { return this->agreementType_ == nullptr
        && this->groupName_ == nullptr && this->httpDubboTranscoder_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->percent_ == nullptr
        && this->serviceId_ == nullptr && this->servicePort_ == nullptr && this->sourceType_ == nullptr && this->version_ == nullptr; };
      // agreementType Field Functions 
      bool hasAgreementType() const { return this->agreementType_ != nullptr;};
      void deleteAgreementType() { this->agreementType_ = nullptr;};
      inline string getAgreementType() const { DARABONBA_PTR_GET_DEFAULT(agreementType_, "") };
      inline Services& setAgreementType(string agreementType) { DARABONBA_PTR_SET_VALUE(agreementType_, agreementType) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Services& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // httpDubboTranscoder Field Functions 
      bool hasHttpDubboTranscoder() const { return this->httpDubboTranscoder_ != nullptr;};
      void deleteHttpDubboTranscoder() { this->httpDubboTranscoder_ = nullptr;};
      inline const Services::HttpDubboTranscoder & getHttpDubboTranscoder() const { DARABONBA_PTR_GET_CONST(httpDubboTranscoder_, Services::HttpDubboTranscoder) };
      inline Services::HttpDubboTranscoder getHttpDubboTranscoder() { DARABONBA_PTR_GET(httpDubboTranscoder_, Services::HttpDubboTranscoder) };
      inline Services& setHttpDubboTranscoder(const Services::HttpDubboTranscoder & httpDubboTranscoder) { DARABONBA_PTR_SET_VALUE(httpDubboTranscoder_, httpDubboTranscoder) };
      inline Services& setHttpDubboTranscoder(Services::HttpDubboTranscoder && httpDubboTranscoder) { DARABONBA_PTR_SET_RVALUE(httpDubboTranscoder_, httpDubboTranscoder) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Services& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Services& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
      inline Services& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline int64_t getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, 0L) };
      inline Services& setServiceId(int64_t serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // servicePort Field Functions 
      bool hasServicePort() const { return this->servicePort_ != nullptr;};
      void deleteServicePort() { this->servicePort_ = nullptr;};
      inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
      inline Services& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Services& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Services& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of the protocol.
      shared_ptr<string> agreementType_ {};
      // The name of the group to which the service belongs.
      shared_ptr<string> groupName_ {};
      // The transcoder of the Dubbo protocol.
      shared_ptr<Services::HttpDubboTranscoder> httpDubboTranscoder_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The namespace to which the service belongs.
      shared_ptr<string> namespace_ {};
      // The weight in the form of a percentage value.
      shared_ptr<int32_t> percent_ {};
      // The ID of the service.
      shared_ptr<int64_t> serviceId_ {};
      // The service port number.
      shared_ptr<int32_t> servicePort_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
      // The version of the service.
      shared_ptr<string> version_ {};
    };

    class RedirectJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RedirectJSON& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, RedirectJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      RedirectJSON() = default ;
      RedirectJSON(const RedirectJSON &) = default ;
      RedirectJSON(RedirectJSON &&) = default ;
      RedirectJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RedirectJSON() = default ;
      RedirectJSON& operator=(const RedirectJSON &) = default ;
      RedirectJSON& operator=(RedirectJSON &&) = default ;
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
      inline RedirectJSON& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline RedirectJSON& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline RedirectJSON& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The status code returned.
      shared_ptr<int32_t> code_ {};
      // The hostname to be redirected to.
      shared_ptr<string> host_ {};
      // The path to be redirected to.
      shared_ptr<string> path_ {};
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
        // The matching type.
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
        // Specifies whether to ignore case sensitivity.
        shared_ptr<bool> ignoreCase_ {};
        // The path.
        shared_ptr<string> path_ {};
        // The route matching type. Valid values:
        // 
        // *   PRE: prefix matching
        // *   EQUAL: exact matching
        // *   ERGULAR: regular expression matching
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
      // The information about header matching.
      shared_ptr<vector<Predicates::HeaderPredicates>> headerPredicates_ {};
      // The information about method matching.
      shared_ptr<vector<string>> methodPredicates_ {};
      // The information about route matching.
      shared_ptr<Predicates::PathPredicates> pathPredicates_ {};
      // The information about URL parameter matching.
      shared_ptr<vector<Predicates::QueryPredicates>> queryPredicates_ {};
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
        && this->servicePort_ == nullptr && this->sourceType_ == nullptr && this->version_ == nullptr; };
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
      // The service port number.
      shared_ptr<int32_t> servicePort_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
      // The version of the service.
      shared_ptr<string> version_ {};
    };

    class DirectResponseJSON : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DirectResponseJSON& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
        DARABONBA_PTR_TO_JSON(Code, code_);
      };
      friend void from_json(const Darabonba::Json& j, DirectResponseJSON& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
      };
      DirectResponseJSON() = default ;
      DirectResponseJSON(const DirectResponseJSON &) = default ;
      DirectResponseJSON(DirectResponseJSON &&) = default ;
      DirectResponseJSON(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DirectResponseJSON() = default ;
      DirectResponseJSON& operator=(const DirectResponseJSON &) = default ;
      DirectResponseJSON& operator=(DirectResponseJSON &&) = default ;
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
      inline DirectResponseJSON& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
      inline DirectResponseJSON& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    protected:
      // The mock return value.
      shared_ptr<string> body_ {};
      // The mock return code.
      shared_ptr<int64_t> code_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->description_ == nullptr && this->destinationType_ == nullptr && this->directResponseJSON_ == nullptr && this->domainId_ == nullptr && this->domainIdListJSON_ == nullptr
        && this->enableWaf_ == nullptr && this->fallback_ == nullptr && this->fallbackServices_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr
        && this->name_ == nullptr && this->policies_ == nullptr && this->predicates_ == nullptr && this->redirectJSON_ == nullptr && this->routeOrder_ == nullptr
        && this->routeType_ == nullptr && this->services_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline AddGatewayRouteRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddGatewayRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationType Field Functions 
    bool hasDestinationType() const { return this->destinationType_ != nullptr;};
    void deleteDestinationType() { this->destinationType_ = nullptr;};
    inline string getDestinationType() const { DARABONBA_PTR_GET_DEFAULT(destinationType_, "") };
    inline AddGatewayRouteRequest& setDestinationType(string destinationType) { DARABONBA_PTR_SET_VALUE(destinationType_, destinationType) };


    // directResponseJSON Field Functions 
    bool hasDirectResponseJSON() const { return this->directResponseJSON_ != nullptr;};
    void deleteDirectResponseJSON() { this->directResponseJSON_ = nullptr;};
    inline const AddGatewayRouteRequest::DirectResponseJSON & getDirectResponseJSON() const { DARABONBA_PTR_GET_CONST(directResponseJSON_, AddGatewayRouteRequest::DirectResponseJSON) };
    inline AddGatewayRouteRequest::DirectResponseJSON getDirectResponseJSON() { DARABONBA_PTR_GET(directResponseJSON_, AddGatewayRouteRequest::DirectResponseJSON) };
    inline AddGatewayRouteRequest& setDirectResponseJSON(const AddGatewayRouteRequest::DirectResponseJSON & directResponseJSON) { DARABONBA_PTR_SET_VALUE(directResponseJSON_, directResponseJSON) };
    inline AddGatewayRouteRequest& setDirectResponseJSON(AddGatewayRouteRequest::DirectResponseJSON && directResponseJSON) { DARABONBA_PTR_SET_RVALUE(directResponseJSON_, directResponseJSON) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline AddGatewayRouteRequest& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainIdListJSON Field Functions 
    bool hasDomainIdListJSON() const { return this->domainIdListJSON_ != nullptr;};
    void deleteDomainIdListJSON() { this->domainIdListJSON_ = nullptr;};
    inline string getDomainIdListJSON() const { DARABONBA_PTR_GET_DEFAULT(domainIdListJSON_, "") };
    inline AddGatewayRouteRequest& setDomainIdListJSON(string domainIdListJSON) { DARABONBA_PTR_SET_VALUE(domainIdListJSON_, domainIdListJSON) };


    // enableWaf Field Functions 
    bool hasEnableWaf() const { return this->enableWaf_ != nullptr;};
    void deleteEnableWaf() { this->enableWaf_ = nullptr;};
    inline bool getEnableWaf() const { DARABONBA_PTR_GET_DEFAULT(enableWaf_, false) };
    inline AddGatewayRouteRequest& setEnableWaf(bool enableWaf) { DARABONBA_PTR_SET_VALUE(enableWaf_, enableWaf) };


    // fallback Field Functions 
    bool hasFallback() const { return this->fallback_ != nullptr;};
    void deleteFallback() { this->fallback_ = nullptr;};
    inline bool getFallback() const { DARABONBA_PTR_GET_DEFAULT(fallback_, false) };
    inline AddGatewayRouteRequest& setFallback(bool fallback) { DARABONBA_PTR_SET_VALUE(fallback_, fallback) };


    // fallbackServices Field Functions 
    bool hasFallbackServices() const { return this->fallbackServices_ != nullptr;};
    void deleteFallbackServices() { this->fallbackServices_ = nullptr;};
    inline const vector<AddGatewayRouteRequest::FallbackServices> & getFallbackServices() const { DARABONBA_PTR_GET_CONST(fallbackServices_, vector<AddGatewayRouteRequest::FallbackServices>) };
    inline vector<AddGatewayRouteRequest::FallbackServices> getFallbackServices() { DARABONBA_PTR_GET(fallbackServices_, vector<AddGatewayRouteRequest::FallbackServices>) };
    inline AddGatewayRouteRequest& setFallbackServices(const vector<AddGatewayRouteRequest::FallbackServices> & fallbackServices) { DARABONBA_PTR_SET_VALUE(fallbackServices_, fallbackServices) };
    inline AddGatewayRouteRequest& setFallbackServices(vector<AddGatewayRouteRequest::FallbackServices> && fallbackServices) { DARABONBA_PTR_SET_RVALUE(fallbackServices_, fallbackServices) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline AddGatewayRouteRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline AddGatewayRouteRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddGatewayRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string getPolicies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline AddGatewayRouteRequest& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


    // predicates Field Functions 
    bool hasPredicates() const { return this->predicates_ != nullptr;};
    void deletePredicates() { this->predicates_ = nullptr;};
    inline const AddGatewayRouteRequest::Predicates & getPredicates() const { DARABONBA_PTR_GET_CONST(predicates_, AddGatewayRouteRequest::Predicates) };
    inline AddGatewayRouteRequest::Predicates getPredicates() { DARABONBA_PTR_GET(predicates_, AddGatewayRouteRequest::Predicates) };
    inline AddGatewayRouteRequest& setPredicates(const AddGatewayRouteRequest::Predicates & predicates) { DARABONBA_PTR_SET_VALUE(predicates_, predicates) };
    inline AddGatewayRouteRequest& setPredicates(AddGatewayRouteRequest::Predicates && predicates) { DARABONBA_PTR_SET_RVALUE(predicates_, predicates) };


    // redirectJSON Field Functions 
    bool hasRedirectJSON() const { return this->redirectJSON_ != nullptr;};
    void deleteRedirectJSON() { this->redirectJSON_ = nullptr;};
    inline const AddGatewayRouteRequest::RedirectJSON & getRedirectJSON() const { DARABONBA_PTR_GET_CONST(redirectJSON_, AddGatewayRouteRequest::RedirectJSON) };
    inline AddGatewayRouteRequest::RedirectJSON getRedirectJSON() { DARABONBA_PTR_GET(redirectJSON_, AddGatewayRouteRequest::RedirectJSON) };
    inline AddGatewayRouteRequest& setRedirectJSON(const AddGatewayRouteRequest::RedirectJSON & redirectJSON) { DARABONBA_PTR_SET_VALUE(redirectJSON_, redirectJSON) };
    inline AddGatewayRouteRequest& setRedirectJSON(AddGatewayRouteRequest::RedirectJSON && redirectJSON) { DARABONBA_PTR_SET_RVALUE(redirectJSON_, redirectJSON) };


    // routeOrder Field Functions 
    bool hasRouteOrder() const { return this->routeOrder_ != nullptr;};
    void deleteRouteOrder() { this->routeOrder_ = nullptr;};
    inline int32_t getRouteOrder() const { DARABONBA_PTR_GET_DEFAULT(routeOrder_, 0) };
    inline AddGatewayRouteRequest& setRouteOrder(int32_t routeOrder) { DARABONBA_PTR_SET_VALUE(routeOrder_, routeOrder) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline AddGatewayRouteRequest& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<AddGatewayRouteRequest::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<AddGatewayRouteRequest::Services>) };
    inline vector<AddGatewayRouteRequest::Services> getServices() { DARABONBA_PTR_GET(services_, vector<AddGatewayRouteRequest::Services>) };
    inline AddGatewayRouteRequest& setServices(const vector<AddGatewayRouteRequest::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline AddGatewayRouteRequest& setServices(vector<AddGatewayRouteRequest::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> description_ {};
    // The type of the destination service. Valid values:
    // 
    // *   Single
    // *   Multiple
    // *   VersionOriented
    // *   Mock
    // *   Redirect
    shared_ptr<string> destinationType_ {};
    // The mock response configuration.
    shared_ptr<AddGatewayRouteRequest::DirectResponseJSON> directResponseJSON_ {};
    // The domain ID.
    shared_ptr<int64_t> domainId_ {};
    // The domain IDs.
    shared_ptr<string> domainIdListJSON_ {};
    // Specifies whether to activate Web Application Firewall (WAF).
    shared_ptr<bool> enableWaf_ {};
    // Specifies whether to enable the Fallback service.
    shared_ptr<bool> fallback_ {};
    // The information about the Fallback service.
    shared_ptr<vector<AddGatewayRouteRequest::FallbackServices>> fallbackServices_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The name of the route.
    shared_ptr<string> name_ {};
    // The routing policy in a JSON string.
    shared_ptr<string> policies_ {};
    // The matching rule.
    shared_ptr<AddGatewayRouteRequest::Predicates> predicates_ {};
    // The configuration of the redirection.
    shared_ptr<AddGatewayRouteRequest::RedirectJSON> redirectJSON_ {};
    // The sequence number of the route. (A small value indicates a high priority.)
    shared_ptr<int32_t> routeOrder_ {};
    // The route type. Valid values:
    // 
    // Op: Manage routes.
    shared_ptr<string> routeType_ {};
    // The list of services.
    shared_ptr<vector<AddGatewayRouteRequest::Services>> services_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
