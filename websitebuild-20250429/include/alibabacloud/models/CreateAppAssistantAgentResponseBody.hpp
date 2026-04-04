// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPASSISTANTAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPASSISTANTAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppAssistantAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAssistantAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAssistantAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    CreateAppAssistantAgentResponseBody() = default ;
    CreateAppAssistantAgentResponseBody(const CreateAppAssistantAgentResponseBody &) = default ;
    CreateAppAssistantAgentResponseBody(CreateAppAssistantAgentResponseBody &&) = default ;
    CreateAppAssistantAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAssistantAgentResponseBody() = default ;
    CreateAppAssistantAgentResponseBody& operator=(const CreateAppAssistantAgentResponseBody &) = default ;
    CreateAppAssistantAgentResponseBody& operator=(CreateAppAssistantAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(Credential, credential_);
        DARABONBA_PTR_TO_JSON(EmbedConfig, embedConfig_);
        DARABONBA_PTR_TO_JSON(ExtraParams, extraParams_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(PlatformAppId, platformAppId_);
        DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(Credential, credential_);
        DARABONBA_PTR_FROM_JSON(EmbedConfig, embedConfig_);
        DARABONBA_PTR_FROM_JSON(ExtraParams, extraParams_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(PlatformAppId, platformAppId_);
        DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EmbedConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EmbedConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(RawScript, rawScript_);
        };
        friend void from_json(const Darabonba::Json& j, EmbedConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(RawScript, rawScript_);
        };
        EmbedConfig() = default ;
        EmbedConfig(const EmbedConfig &) = default ;
        EmbedConfig(EmbedConfig &&) = default ;
        EmbedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EmbedConfig() = default ;
        EmbedConfig& operator=(const EmbedConfig &) = default ;
        EmbedConfig& operator=(EmbedConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extra_ == nullptr
        && this->rawScript_ == nullptr; };
        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline const map<string, string> & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
        inline map<string, string> getExtra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
        inline EmbedConfig& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
        inline EmbedConfig& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


        // rawScript Field Functions 
        bool hasRawScript() const { return this->rawScript_ != nullptr;};
        void deleteRawScript() { this->rawScript_ = nullptr;};
        inline string getRawScript() const { DARABONBA_PTR_GET_DEFAULT(rawScript_, "") };
        inline EmbedConfig& setRawScript(string rawScript) { DARABONBA_PTR_SET_VALUE(rawScript_, rawScript) };


      protected:
        shared_ptr<map<string, string>> extra_ {};
        shared_ptr<string> rawScript_ {};
      };

      class Credential : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Credential& obj) { 
          DARABONBA_PTR_TO_JSON(Extra, extra_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, Credential& obj) { 
          DARABONBA_PTR_FROM_JSON(Extra, extra_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        Credential() = default ;
        Credential(const Credential &) = default ;
        Credential(Credential &&) = default ;
        Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Credential() = default ;
        Credential& operator=(const Credential &) = default ;
        Credential& operator=(Credential &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extra_ == nullptr
        && this->username_ == nullptr; };
        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline const map<string, string> & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
        inline map<string, string> getExtra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
        inline Credential& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
        inline Credential& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Credential& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<map<string, string>> extra_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->bizId_ == nullptr && this->credential_ == nullptr && this->embedConfig_ == nullptr && this->extraParams_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->platformAppId_ == nullptr && this->platformType_ == nullptr && this->status_ == nullptr
        && this->userId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Module& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Module& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Module& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // credential Field Functions 
      bool hasCredential() const { return this->credential_ != nullptr;};
      void deleteCredential() { this->credential_ = nullptr;};
      inline const Module::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, Module::Credential) };
      inline Module::Credential getCredential() { DARABONBA_PTR_GET(credential_, Module::Credential) };
      inline Module& setCredential(const Module::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
      inline Module& setCredential(Module::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


      // embedConfig Field Functions 
      bool hasEmbedConfig() const { return this->embedConfig_ != nullptr;};
      void deleteEmbedConfig() { this->embedConfig_ = nullptr;};
      inline const Module::EmbedConfig & getEmbedConfig() const { DARABONBA_PTR_GET_CONST(embedConfig_, Module::EmbedConfig) };
      inline Module::EmbedConfig getEmbedConfig() { DARABONBA_PTR_GET(embedConfig_, Module::EmbedConfig) };
      inline Module& setEmbedConfig(const Module::EmbedConfig & embedConfig) { DARABONBA_PTR_SET_VALUE(embedConfig_, embedConfig) };
      inline Module& setEmbedConfig(Module::EmbedConfig && embedConfig) { DARABONBA_PTR_SET_RVALUE(embedConfig_, embedConfig) };


      // extraParams Field Functions 
      bool hasExtraParams() const { return this->extraParams_ != nullptr;};
      void deleteExtraParams() { this->extraParams_ = nullptr;};
      inline const map<string, string> & getExtraParams() const { DARABONBA_PTR_GET_CONST(extraParams_, map<string, string>) };
      inline map<string, string> getExtraParams() { DARABONBA_PTR_GET(extraParams_, map<string, string>) };
      inline Module& setExtraParams(const map<string, string> & extraParams) { DARABONBA_PTR_SET_VALUE(extraParams_, extraParams) };
      inline Module& setExtraParams(map<string, string> && extraParams) { DARABONBA_PTR_SET_RVALUE(extraParams_, extraParams) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // platformAppId Field Functions 
      bool hasPlatformAppId() const { return this->platformAppId_ != nullptr;};
      void deletePlatformAppId() { this->platformAppId_ = nullptr;};
      inline string getPlatformAppId() const { DARABONBA_PTR_GET_DEFAULT(platformAppId_, "") };
      inline Module& setPlatformAppId(string platformAppId) { DARABONBA_PTR_SET_VALUE(platformAppId_, platformAppId) };


      // platformType Field Functions 
      bool hasPlatformType() const { return this->platformType_ != nullptr;};
      void deletePlatformType() { this->platformType_ = nullptr;};
      inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
      inline Module& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> agentId_ {};
      shared_ptr<string> agentName_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<Module::Credential> credential_ {};
      shared_ptr<Module::EmbedConfig> embedConfig_ {};
      shared_ptr<map<string, string>> extraParams_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> platformAppId_ {};
      shared_ptr<string> platformType_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateAppAssistantAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline CreateAppAssistantAgentResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppAssistantAgentResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline CreateAppAssistantAgentResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline CreateAppAssistantAgentResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline CreateAppAssistantAgentResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline CreateAppAssistantAgentResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateAppAssistantAgentResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateAppAssistantAgentResponseBody::Module) };
    inline CreateAppAssistantAgentResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateAppAssistantAgentResponseBody::Module) };
    inline CreateAppAssistantAgentResponseBody& setModule(const CreateAppAssistantAgentResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateAppAssistantAgentResponseBody& setModule(CreateAppAssistantAgentResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppAssistantAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline CreateAppAssistantAgentResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline CreateAppAssistantAgentResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline CreateAppAssistantAgentResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<CreateAppAssistantAgentResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootErrorCode_ {};
    shared_ptr<string> rootErrorMsg_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
