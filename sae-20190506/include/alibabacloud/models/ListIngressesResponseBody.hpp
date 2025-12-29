// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODY_HPP_
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
  class ListIngressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIngressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIngressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListIngressesResponseBody() = default ;
    ListIngressesResponseBody(const ListIngressesResponseBody &) = default ;
    ListIngressesResponseBody(ListIngressesResponseBody &&) = default ;
    ListIngressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIngressesResponseBody() = default ;
    ListIngressesResponseBody& operator=(const ListIngressesResponseBody &) = default ;
    ListIngressesResponseBody& operator=(ListIngressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(IngressList, ingressList_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(IngressList, ingressList_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class IngressList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngressList& obj) { 
          DARABONBA_PTR_TO_JSON(CertId, certId_);
          DARABONBA_PTR_TO_JSON(CertIds, certIds_);
          DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_TO_JSON(LoadBalanceType, loadBalanceType_);
          DARABONBA_PTR_TO_JSON(MseGatewayId, mseGatewayId_);
          DARABONBA_PTR_TO_JSON(MseGatewayPort, mseGatewayPort_);
          DARABONBA_PTR_TO_JSON(MseGatewayProtocol, mseGatewayProtocol_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(SlbId, slbId_);
          DARABONBA_PTR_TO_JSON(SlbType, slbType_);
        };
        friend void from_json(const Darabonba::Json& j, IngressList& obj) { 
          DARABONBA_PTR_FROM_JSON(CertId, certId_);
          DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
          DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
          DARABONBA_PTR_FROM_JSON(LoadBalanceType, loadBalanceType_);
          DARABONBA_PTR_FROM_JSON(MseGatewayId, mseGatewayId_);
          DARABONBA_PTR_FROM_JSON(MseGatewayPort, mseGatewayPort_);
          DARABONBA_PTR_FROM_JSON(MseGatewayProtocol, mseGatewayProtocol_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
          DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
        };
        IngressList() = default ;
        IngressList(const IngressList &) = default ;
        IngressList(IngressList &&) = default ;
        IngressList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IngressList() = default ;
        IngressList& operator=(const IngressList &) = default ;
        IngressList& operator=(IngressList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
            DARABONBA_PTR_TO_JSON(BackendProtocol, backendProtocol_);
            DARABONBA_PTR_TO_JSON(ContainerPort, containerPort_);
            DARABONBA_PTR_TO_JSON(Domain, domain_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(RewritePath, rewritePath_);
            DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
            DARABONBA_PTR_FROM_JSON(BackendProtocol, backendProtocol_);
            DARABONBA_PTR_FROM_JSON(ContainerPort, containerPort_);
            DARABONBA_PTR_FROM_JSON(Domain, domain_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(RewritePath, rewritePath_);
            DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RuleActions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleActions& obj) { 
              DARABONBA_PTR_TO_JSON(ActionConfig, actionConfig_);
              DARABONBA_PTR_TO_JSON(ActionType, actionType_);
            };
            friend void from_json(const Darabonba::Json& j, RuleActions& obj) { 
              DARABONBA_PTR_FROM_JSON(ActionConfig, actionConfig_);
              DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
            };
            RuleActions() = default ;
            RuleActions(const RuleActions &) = default ;
            RuleActions(RuleActions &&) = default ;
            RuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleActions() = default ;
            RuleActions& operator=(const RuleActions &) = default ;
            RuleActions& operator=(RuleActions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->actionConfig_ == nullptr
        && this->actionType_ == nullptr; };
            // actionConfig Field Functions 
            bool hasActionConfig() const { return this->actionConfig_ != nullptr;};
            void deleteActionConfig() { this->actionConfig_ = nullptr;};
            inline string getActionConfig() const { DARABONBA_PTR_GET_DEFAULT(actionConfig_, "") };
            inline RuleActions& setActionConfig(string actionConfig) { DARABONBA_PTR_SET_VALUE(actionConfig_, actionConfig) };


            // actionType Field Functions 
            bool hasActionType() const { return this->actionType_ != nullptr;};
            void deleteActionType() { this->actionType_ = nullptr;};
            inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
            inline RuleActions& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


          protected:
            shared_ptr<string> actionConfig_ {};
            shared_ptr<string> actionType_ {};
          };

          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->backendProtocol_ == nullptr && this->containerPort_ == nullptr && this->domain_ == nullptr && this->path_ == nullptr
        && this->rewritePath_ == nullptr && this->ruleActions_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline Rules& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline Rules& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          // backendProtocol Field Functions 
          bool hasBackendProtocol() const { return this->backendProtocol_ != nullptr;};
          void deleteBackendProtocol() { this->backendProtocol_ = nullptr;};
          inline string getBackendProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendProtocol_, "") };
          inline Rules& setBackendProtocol(string backendProtocol) { DARABONBA_PTR_SET_VALUE(backendProtocol_, backendProtocol) };


          // containerPort Field Functions 
          bool hasContainerPort() const { return this->containerPort_ != nullptr;};
          void deleteContainerPort() { this->containerPort_ = nullptr;};
          inline int32_t getContainerPort() const { DARABONBA_PTR_GET_DEFAULT(containerPort_, 0) };
          inline Rules& setContainerPort(int32_t containerPort) { DARABONBA_PTR_SET_VALUE(containerPort_, containerPort) };


          // domain Field Functions 
          bool hasDomain() const { return this->domain_ != nullptr;};
          void deleteDomain() { this->domain_ = nullptr;};
          inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
          inline Rules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline Rules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // rewritePath Field Functions 
          bool hasRewritePath() const { return this->rewritePath_ != nullptr;};
          void deleteRewritePath() { this->rewritePath_ = nullptr;};
          inline string getRewritePath() const { DARABONBA_PTR_GET_DEFAULT(rewritePath_, "") };
          inline Rules& setRewritePath(string rewritePath) { DARABONBA_PTR_SET_VALUE(rewritePath_, rewritePath) };


          // ruleActions Field Functions 
          bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
          void deleteRuleActions() { this->ruleActions_ = nullptr;};
          inline const vector<Rules::RuleActions> & getRuleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<Rules::RuleActions>) };
          inline vector<Rules::RuleActions> getRuleActions() { DARABONBA_PTR_GET(ruleActions_, vector<Rules::RuleActions>) };
          inline Rules& setRuleActions(const vector<Rules::RuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
          inline Rules& setRuleActions(vector<Rules::RuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> appName_ {};
          shared_ptr<string> backendProtocol_ {};
          shared_ptr<int32_t> containerPort_ {};
          shared_ptr<string> domain_ {};
          shared_ptr<string> path_ {};
          shared_ptr<string> rewritePath_ {};
          shared_ptr<vector<Rules::RuleActions>> ruleActions_ {};
        };

        class DefaultRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DefaultRule& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(AppName, appName_);
            DARABONBA_PTR_TO_JSON(BackendProtocol, backendProtocol_);
            DARABONBA_PTR_TO_JSON(ContainerPort, containerPort_);
          };
          friend void from_json(const Darabonba::Json& j, DefaultRule& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
            DARABONBA_PTR_FROM_JSON(BackendProtocol, backendProtocol_);
            DARABONBA_PTR_FROM_JSON(ContainerPort, containerPort_);
          };
          DefaultRule() = default ;
          DefaultRule(const DefaultRule &) = default ;
          DefaultRule(DefaultRule &&) = default ;
          DefaultRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DefaultRule() = default ;
          DefaultRule& operator=(const DefaultRule &) = default ;
          DefaultRule& operator=(DefaultRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->backendProtocol_ == nullptr && this->containerPort_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline DefaultRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline DefaultRule& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          // backendProtocol Field Functions 
          bool hasBackendProtocol() const { return this->backendProtocol_ != nullptr;};
          void deleteBackendProtocol() { this->backendProtocol_ = nullptr;};
          inline string getBackendProtocol() const { DARABONBA_PTR_GET_DEFAULT(backendProtocol_, "") };
          inline DefaultRule& setBackendProtocol(string backendProtocol) { DARABONBA_PTR_SET_VALUE(backendProtocol_, backendProtocol) };


          // containerPort Field Functions 
          bool hasContainerPort() const { return this->containerPort_ != nullptr;};
          void deleteContainerPort() { this->containerPort_ = nullptr;};
          inline int32_t getContainerPort() const { DARABONBA_PTR_GET_DEFAULT(containerPort_, 0) };
          inline DefaultRule& setContainerPort(int32_t containerPort) { DARABONBA_PTR_SET_VALUE(containerPort_, containerPort) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> appName_ {};
          shared_ptr<string> backendProtocol_ {};
          shared_ptr<int32_t> containerPort_ {};
        };

        class CorsConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CorsConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AllowCredentials, allowCredentials_);
            DARABONBA_PTR_TO_JSON(AllowHeaders, allowHeaders_);
            DARABONBA_PTR_TO_JSON(AllowMethods, allowMethods_);
            DARABONBA_PTR_TO_JSON(AllowOrigin, allowOrigin_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(ExposeHeaders, exposeHeaders_);
            DARABONBA_PTR_TO_JSON(MaxAge, maxAge_);
          };
          friend void from_json(const Darabonba::Json& j, CorsConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AllowCredentials, allowCredentials_);
            DARABONBA_PTR_FROM_JSON(AllowHeaders, allowHeaders_);
            DARABONBA_PTR_FROM_JSON(AllowMethods, allowMethods_);
            DARABONBA_PTR_FROM_JSON(AllowOrigin, allowOrigin_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(ExposeHeaders, exposeHeaders_);
            DARABONBA_PTR_FROM_JSON(MaxAge, maxAge_);
          };
          CorsConfig() = default ;
          CorsConfig(const CorsConfig &) = default ;
          CorsConfig(CorsConfig &&) = default ;
          CorsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CorsConfig() = default ;
          CorsConfig& operator=(const CorsConfig &) = default ;
          CorsConfig& operator=(CorsConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allowCredentials_ == nullptr
        && this->allowHeaders_ == nullptr && this->allowMethods_ == nullptr && this->allowOrigin_ == nullptr && this->enable_ == nullptr && this->exposeHeaders_ == nullptr
        && this->maxAge_ == nullptr; };
          // allowCredentials Field Functions 
          bool hasAllowCredentials() const { return this->allowCredentials_ != nullptr;};
          void deleteAllowCredentials() { this->allowCredentials_ = nullptr;};
          inline string getAllowCredentials() const { DARABONBA_PTR_GET_DEFAULT(allowCredentials_, "") };
          inline CorsConfig& setAllowCredentials(string allowCredentials) { DARABONBA_PTR_SET_VALUE(allowCredentials_, allowCredentials) };


          // allowHeaders Field Functions 
          bool hasAllowHeaders() const { return this->allowHeaders_ != nullptr;};
          void deleteAllowHeaders() { this->allowHeaders_ = nullptr;};
          inline string getAllowHeaders() const { DARABONBA_PTR_GET_DEFAULT(allowHeaders_, "") };
          inline CorsConfig& setAllowHeaders(string allowHeaders) { DARABONBA_PTR_SET_VALUE(allowHeaders_, allowHeaders) };


          // allowMethods Field Functions 
          bool hasAllowMethods() const { return this->allowMethods_ != nullptr;};
          void deleteAllowMethods() { this->allowMethods_ = nullptr;};
          inline string getAllowMethods() const { DARABONBA_PTR_GET_DEFAULT(allowMethods_, "") };
          inline CorsConfig& setAllowMethods(string allowMethods) { DARABONBA_PTR_SET_VALUE(allowMethods_, allowMethods) };


          // allowOrigin Field Functions 
          bool hasAllowOrigin() const { return this->allowOrigin_ != nullptr;};
          void deleteAllowOrigin() { this->allowOrigin_ = nullptr;};
          inline string getAllowOrigin() const { DARABONBA_PTR_GET_DEFAULT(allowOrigin_, "") };
          inline CorsConfig& setAllowOrigin(string allowOrigin) { DARABONBA_PTR_SET_VALUE(allowOrigin_, allowOrigin) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
          inline CorsConfig& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // exposeHeaders Field Functions 
          bool hasExposeHeaders() const { return this->exposeHeaders_ != nullptr;};
          void deleteExposeHeaders() { this->exposeHeaders_ = nullptr;};
          inline string getExposeHeaders() const { DARABONBA_PTR_GET_DEFAULT(exposeHeaders_, "") };
          inline CorsConfig& setExposeHeaders(string exposeHeaders) { DARABONBA_PTR_SET_VALUE(exposeHeaders_, exposeHeaders) };


          // maxAge Field Functions 
          bool hasMaxAge() const { return this->maxAge_ != nullptr;};
          void deleteMaxAge() { this->maxAge_ = nullptr;};
          inline string getMaxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, "") };
          inline CorsConfig& setMaxAge(string maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


        protected:
          shared_ptr<string> allowCredentials_ {};
          shared_ptr<string> allowHeaders_ {};
          shared_ptr<string> allowMethods_ {};
          shared_ptr<string> allowOrigin_ {};
          shared_ptr<string> enable_ {};
          shared_ptr<string> exposeHeaders_ {};
          shared_ptr<string> maxAge_ {};
        };

        virtual bool empty() const override { return this->certId_ == nullptr
        && this->certIds_ == nullptr && this->corsConfig_ == nullptr && this->createTime_ == nullptr && this->defaultRule_ == nullptr && this->description_ == nullptr
        && this->id_ == nullptr && this->idleTimeout_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalanceType_ == nullptr
        && this->mseGatewayId_ == nullptr && this->mseGatewayPort_ == nullptr && this->mseGatewayProtocol_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr
        && this->requestTimeout_ == nullptr && this->rules_ == nullptr && this->slbId_ == nullptr && this->slbType_ == nullptr; };
        // certId Field Functions 
        bool hasCertId() const { return this->certId_ != nullptr;};
        void deleteCertId() { this->certId_ = nullptr;};
        inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
        inline IngressList& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


        // certIds Field Functions 
        bool hasCertIds() const { return this->certIds_ != nullptr;};
        void deleteCertIds() { this->certIds_ = nullptr;};
        inline string getCertIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
        inline IngressList& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


        // corsConfig Field Functions 
        bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
        void deleteCorsConfig() { this->corsConfig_ = nullptr;};
        inline const IngressList::CorsConfig & getCorsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, IngressList::CorsConfig) };
        inline IngressList::CorsConfig getCorsConfig() { DARABONBA_PTR_GET(corsConfig_, IngressList::CorsConfig) };
        inline IngressList& setCorsConfig(const IngressList::CorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
        inline IngressList& setCorsConfig(IngressList::CorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline IngressList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // defaultRule Field Functions 
        bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
        void deleteDefaultRule() { this->defaultRule_ = nullptr;};
        inline const IngressList::DefaultRule & getDefaultRule() const { DARABONBA_PTR_GET_CONST(defaultRule_, IngressList::DefaultRule) };
        inline IngressList::DefaultRule getDefaultRule() { DARABONBA_PTR_GET(defaultRule_, IngressList::DefaultRule) };
        inline IngressList& setDefaultRule(const IngressList::DefaultRule & defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };
        inline IngressList& setDefaultRule(IngressList::DefaultRule && defaultRule) { DARABONBA_PTR_SET_RVALUE(defaultRule_, defaultRule) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline IngressList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline IngressList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idleTimeout Field Functions 
        bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
        void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
        inline int64_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0L) };
        inline IngressList& setIdleTimeout(int64_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline string getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
        inline IngressList& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // listenerProtocol Field Functions 
        bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
        void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
        inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
        inline IngressList& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


        // loadBalanceType Field Functions 
        bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
        void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
        inline string getLoadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
        inline IngressList& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


        // mseGatewayId Field Functions 
        bool hasMseGatewayId() const { return this->mseGatewayId_ != nullptr;};
        void deleteMseGatewayId() { this->mseGatewayId_ = nullptr;};
        inline string getMseGatewayId() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayId_, "") };
        inline IngressList& setMseGatewayId(string mseGatewayId) { DARABONBA_PTR_SET_VALUE(mseGatewayId_, mseGatewayId) };


        // mseGatewayPort Field Functions 
        bool hasMseGatewayPort() const { return this->mseGatewayPort_ != nullptr;};
        void deleteMseGatewayPort() { this->mseGatewayPort_ = nullptr;};
        inline string getMseGatewayPort() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayPort_, "") };
        inline IngressList& setMseGatewayPort(string mseGatewayPort) { DARABONBA_PTR_SET_VALUE(mseGatewayPort_, mseGatewayPort) };


        // mseGatewayProtocol Field Functions 
        bool hasMseGatewayProtocol() const { return this->mseGatewayProtocol_ != nullptr;};
        void deleteMseGatewayProtocol() { this->mseGatewayProtocol_ = nullptr;};
        inline string getMseGatewayProtocol() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayProtocol_, "") };
        inline IngressList& setMseGatewayProtocol(string mseGatewayProtocol) { DARABONBA_PTR_SET_VALUE(mseGatewayProtocol_, mseGatewayProtocol) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IngressList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline IngressList& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // requestTimeout Field Functions 
        bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
        void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
        inline int64_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0L) };
        inline IngressList& setRequestTimeout(int64_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<IngressList::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<IngressList::Rules>) };
        inline vector<IngressList::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<IngressList::Rules>) };
        inline IngressList& setRules(const vector<IngressList::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline IngressList& setRules(vector<IngressList::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // slbId Field Functions 
        bool hasSlbId() const { return this->slbId_ != nullptr;};
        void deleteSlbId() { this->slbId_ = nullptr;};
        inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
        inline IngressList& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


        // slbType Field Functions 
        bool hasSlbType() const { return this->slbType_ != nullptr;};
        void deleteSlbType() { this->slbType_ = nullptr;};
        inline string getSlbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
        inline IngressList& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


      protected:
        // The ID of the certificate that is associated with a Classic Load Balancer (**CLB**) instance.
        shared_ptr<string> certId_ {};
        // The ID of the certificate that is associated with an Application Load Balancer **ALB** instance.
        shared_ptr<string> certIds_ {};
        shared_ptr<IngressList::CorsConfig> corsConfig_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<IngressList::DefaultRule> defaultRule_ {};
        // The name of a routing rule.
        shared_ptr<string> description_ {};
        // The ID of a routing rule.
        shared_ptr<int64_t> id_ {};
        shared_ptr<int64_t> idleTimeout_ {};
        // The listener ports for an SLB instance.
        shared_ptr<string> listenerPort_ {};
        // The protocol that is supported by SLB to forward requests. Valid values:
        // 
        // *   **HTTP**: HTTP is suitable for applications that need to identify the transmitted data.
        // *   **HTTPS**: HTTPS is suitable for applications that require encrypted data transmission.
        // 
        // This parameter is optional in the **CreateIngress** and **UpadateIngress** operations. If you do not configure this parameter when you call the CreateIngress or UpdateIngress operation to create or update a gateway routing rule, this parameter is not returned for the corresponding response.
        shared_ptr<string> listenerProtocol_ {};
        // The type of SLB instances. Valid values:
        // 
        // *   **clb**: Classic Load Balancer (formerly known as SLB).
        // *   **alb**: Application Load Balancer.
        shared_ptr<string> loadBalanceType_ {};
        // The ID of an MSE cloud-native gateway.
        shared_ptr<string> mseGatewayId_ {};
        // The port of a service.
        shared_ptr<string> mseGatewayPort_ {};
        // The protocol that is supported by an MSE cloud-native gateway to forward requests. Valid values:
        // 
        // *   **HTTP**: HTTP is suitable for applications that need to identify transmitted data.
        // *   **HTTPS**: HTTPS is suitable for applications that require encrypted data transmission.
        shared_ptr<string> mseGatewayProtocol_ {};
        // The name of a routing rule.
        shared_ptr<string> name_ {};
        // The ID of a namespace.
        shared_ptr<string> namespaceId_ {};
        shared_ptr<int64_t> requestTimeout_ {};
        shared_ptr<vector<IngressList::Rules>> rules_ {};
        // The ID of a Server Load Balancer (SLB) instance.
        shared_ptr<string> slbId_ {};
        // The type of SLB instances. Valid values:
        // 
        // *   **internet**: an Internet-facing SLB instance
        // *   **intranet**: an Intranet-facing SLB instance
        shared_ptr<string> slbType_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ingressList_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // ingressList Field Functions 
      bool hasIngressList() const { return this->ingressList_ != nullptr;};
      void deleteIngressList() { this->ingressList_ = nullptr;};
      inline const vector<Data::IngressList> & getIngressList() const { DARABONBA_PTR_GET_CONST(ingressList_, vector<Data::IngressList>) };
      inline vector<Data::IngressList> getIngressList() { DARABONBA_PTR_GET(ingressList_, vector<Data::IngressList>) };
      inline Data& setIngressList(const vector<Data::IngressList> & ingressList) { DARABONBA_PTR_SET_VALUE(ingressList_, ingressList) };
      inline Data& setIngressList(vector<Data::IngressList> && ingressList) { DARABONBA_PTR_SET_RVALUE(ingressList_, ingressList) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      // The list of routing rules.
      shared_ptr<vector<Data::IngressList>> ingressList_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIngressesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListIngressesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListIngressesResponseBody::Data) };
    inline ListIngressesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListIngressesResponseBody::Data) };
    inline ListIngressesResponseBody& setData(const ListIngressesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIngressesResponseBody& setData(ListIngressesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListIngressesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIngressesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIngressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIngressesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListIngressesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: The request was redirected.
    // *   **4xx**: The request failed.
    // *   **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The result returned.
    shared_ptr<ListIngressesResponseBody::Data> data_ {};
    // The error code returned if the request failed. Valid values:
    // 
    // *   **ErrorCode** is not returned if a request is successful.
    // *   **ErrorCode** is returned if a request failed. For more information, see **Error codes**.
    shared_ptr<string> errorCode_ {};
    // The message returned. Valid values:
    // 
    // *   **success** is returned when a request is successful.
    // *   An error code is returned when a request failed.
    shared_ptr<string> message_ {};
    // The ID of a request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the list of Ingresses was obtained. Valid values:
    // 
    // *   **true**: The list were obtained.
    // *   **false**: The list failed to be queried.
    shared_ptr<bool> success_ {};
    // The ID of a trace. The ID is used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
