// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianControl20240816
{
namespace Models
{
  class GetApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetApiKeyResponseBody() = default ;
    GetApiKeyResponseBody(const GetApiKeyResponseBody &) = default ;
    GetApiKeyResponseBody(GetApiKeyResponseBody &&) = default ;
    GetApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiKeyResponseBody() = default ;
    GetApiKeyResponseBody& operator=(const GetApiKeyResponseBody &) = default ;
    GetApiKeyResponseBody& operator=(GetApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKey& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_TO_JSON(apikeyId, apikeyId_);
        DARABONBA_PTR_TO_JSON(authSetModel, authSetModel_);
        DARABONBA_PTR_TO_JSON(blocked, blocked_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(extData, extData_);
        DARABONBA_PTR_TO_JSON(parentUid, parentUid_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKey& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_FROM_JSON(apikeyId, apikeyId_);
        DARABONBA_PTR_FROM_JSON(authSetModel, authSetModel_);
        DARABONBA_PTR_FROM_JSON(blocked, blocked_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(extData, extData_);
        DARABONBA_PTR_FROM_JSON(parentUid, parentUid_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      ApiKey() = default ;
      ApiKey(const ApiKey &) = default ;
      ApiKey(ApiKey &&) = default ;
      ApiKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKey() = default ;
      ApiKey& operator=(const ApiKey &) = default ;
      ApiKey& operator=(ApiKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthSetModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthSetModel& obj) { 
          DARABONBA_PTR_TO_JSON(accessIps, accessIps_);
          DARABONBA_PTR_TO_JSON(authAppStructure, authAppStructure_);
          DARABONBA_PTR_TO_JSON(authModelStructure, authModelStructure_);
          DARABONBA_PTR_TO_JSON(authSetMode, authSetMode_);
        };
        friend void from_json(const Darabonba::Json& j, AuthSetModel& obj) { 
          DARABONBA_PTR_FROM_JSON(accessIps, accessIps_);
          DARABONBA_PTR_FROM_JSON(authAppStructure, authAppStructure_);
          DARABONBA_PTR_FROM_JSON(authModelStructure, authModelStructure_);
          DARABONBA_PTR_FROM_JSON(authSetMode, authSetMode_);
        };
        AuthSetModel() = default ;
        AuthSetModel(const AuthSetModel &) = default ;
        AuthSetModel(AuthSetModel &&) = default ;
        AuthSetModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthSetModel() = default ;
        AuthSetModel& operator=(const AuthSetModel &) = default ;
        AuthSetModel& operator=(AuthSetModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthModelStructure : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthModelStructure& obj) { 
            DARABONBA_PTR_TO_JSON(defineModels, defineModels_);
            DARABONBA_PTR_TO_JSON(deployments, deployments_);
            DARABONBA_PTR_TO_JSON(isAllowAccessAllModels, isAllowAccessAllModels_);
            DARABONBA_PTR_TO_JSON(models, models_);
          };
          friend void from_json(const Darabonba::Json& j, AuthModelStructure& obj) { 
            DARABONBA_PTR_FROM_JSON(defineModels, defineModels_);
            DARABONBA_PTR_FROM_JSON(deployments, deployments_);
            DARABONBA_PTR_FROM_JSON(isAllowAccessAllModels, isAllowAccessAllModels_);
            DARABONBA_PTR_FROM_JSON(models, models_);
          };
          AuthModelStructure() = default ;
          AuthModelStructure(const AuthModelStructure &) = default ;
          AuthModelStructure(AuthModelStructure &&) = default ;
          AuthModelStructure(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthModelStructure() = default ;
          AuthModelStructure& operator=(const AuthModelStructure &) = default ;
          AuthModelStructure& operator=(AuthModelStructure &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defineModels_ == nullptr
        && this->deployments_ == nullptr && this->isAllowAccessAllModels_ == nullptr && this->models_ == nullptr; };
          // defineModels Field Functions 
          bool hasDefineModels() const { return this->defineModels_ != nullptr;};
          void deleteDefineModels() { this->defineModels_ = nullptr;};
          inline const vector<string> & getDefineModels() const { DARABONBA_PTR_GET_CONST(defineModels_, vector<string>) };
          inline vector<string> getDefineModels() { DARABONBA_PTR_GET(defineModels_, vector<string>) };
          inline AuthModelStructure& setDefineModels(const vector<string> & defineModels) { DARABONBA_PTR_SET_VALUE(defineModels_, defineModels) };
          inline AuthModelStructure& setDefineModels(vector<string> && defineModels) { DARABONBA_PTR_SET_RVALUE(defineModels_, defineModels) };


          // deployments Field Functions 
          bool hasDeployments() const { return this->deployments_ != nullptr;};
          void deleteDeployments() { this->deployments_ = nullptr;};
          inline const vector<string> & getDeployments() const { DARABONBA_PTR_GET_CONST(deployments_, vector<string>) };
          inline vector<string> getDeployments() { DARABONBA_PTR_GET(deployments_, vector<string>) };
          inline AuthModelStructure& setDeployments(const vector<string> & deployments) { DARABONBA_PTR_SET_VALUE(deployments_, deployments) };
          inline AuthModelStructure& setDeployments(vector<string> && deployments) { DARABONBA_PTR_SET_RVALUE(deployments_, deployments) };


          // isAllowAccessAllModels Field Functions 
          bool hasIsAllowAccessAllModels() const { return this->isAllowAccessAllModels_ != nullptr;};
          void deleteIsAllowAccessAllModels() { this->isAllowAccessAllModels_ = nullptr;};
          inline bool getIsAllowAccessAllModels() const { DARABONBA_PTR_GET_DEFAULT(isAllowAccessAllModels_, false) };
          inline AuthModelStructure& setIsAllowAccessAllModels(bool isAllowAccessAllModels) { DARABONBA_PTR_SET_VALUE(isAllowAccessAllModels_, isAllowAccessAllModels) };


          // models Field Functions 
          bool hasModels() const { return this->models_ != nullptr;};
          void deleteModels() { this->models_ = nullptr;};
          inline const vector<string> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<string>) };
          inline vector<string> getModels() { DARABONBA_PTR_GET(models_, vector<string>) };
          inline AuthModelStructure& setModels(const vector<string> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
          inline AuthModelStructure& setModels(vector<string> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


        protected:
          shared_ptr<vector<string>> defineModels_ {};
          shared_ptr<vector<string>> deployments_ {};
          shared_ptr<bool> isAllowAccessAllModels_ {};
          shared_ptr<vector<string>> models_ {};
        };

        class AuthAppStructure : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthAppStructure& obj) { 
            DARABONBA_PTR_TO_JSON(agents, agents_);
            DARABONBA_PTR_TO_JSON(highCodeApps, highCodeApps_);
            DARABONBA_PTR_TO_JSON(isAllowAccessAllApps, isAllowAccessAllApps_);
            DARABONBA_PTR_TO_JSON(workflows, workflows_);
          };
          friend void from_json(const Darabonba::Json& j, AuthAppStructure& obj) { 
            DARABONBA_PTR_FROM_JSON(agents, agents_);
            DARABONBA_PTR_FROM_JSON(highCodeApps, highCodeApps_);
            DARABONBA_PTR_FROM_JSON(isAllowAccessAllApps, isAllowAccessAllApps_);
            DARABONBA_PTR_FROM_JSON(workflows, workflows_);
          };
          AuthAppStructure() = default ;
          AuthAppStructure(const AuthAppStructure &) = default ;
          AuthAppStructure(AuthAppStructure &&) = default ;
          AuthAppStructure(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthAppStructure() = default ;
          AuthAppStructure& operator=(const AuthAppStructure &) = default ;
          AuthAppStructure& operator=(AuthAppStructure &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->agents_ == nullptr
        && this->highCodeApps_ == nullptr && this->isAllowAccessAllApps_ == nullptr && this->workflows_ == nullptr; };
          // agents Field Functions 
          bool hasAgents() const { return this->agents_ != nullptr;};
          void deleteAgents() { this->agents_ = nullptr;};
          inline const vector<string> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<string>) };
          inline vector<string> getAgents() { DARABONBA_PTR_GET(agents_, vector<string>) };
          inline AuthAppStructure& setAgents(const vector<string> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
          inline AuthAppStructure& setAgents(vector<string> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


          // highCodeApps Field Functions 
          bool hasHighCodeApps() const { return this->highCodeApps_ != nullptr;};
          void deleteHighCodeApps() { this->highCodeApps_ = nullptr;};
          inline const vector<string> & getHighCodeApps() const { DARABONBA_PTR_GET_CONST(highCodeApps_, vector<string>) };
          inline vector<string> getHighCodeApps() { DARABONBA_PTR_GET(highCodeApps_, vector<string>) };
          inline AuthAppStructure& setHighCodeApps(const vector<string> & highCodeApps) { DARABONBA_PTR_SET_VALUE(highCodeApps_, highCodeApps) };
          inline AuthAppStructure& setHighCodeApps(vector<string> && highCodeApps) { DARABONBA_PTR_SET_RVALUE(highCodeApps_, highCodeApps) };


          // isAllowAccessAllApps Field Functions 
          bool hasIsAllowAccessAllApps() const { return this->isAllowAccessAllApps_ != nullptr;};
          void deleteIsAllowAccessAllApps() { this->isAllowAccessAllApps_ = nullptr;};
          inline bool getIsAllowAccessAllApps() const { DARABONBA_PTR_GET_DEFAULT(isAllowAccessAllApps_, false) };
          inline AuthAppStructure& setIsAllowAccessAllApps(bool isAllowAccessAllApps) { DARABONBA_PTR_SET_VALUE(isAllowAccessAllApps_, isAllowAccessAllApps) };


          // workflows Field Functions 
          bool hasWorkflows() const { return this->workflows_ != nullptr;};
          void deleteWorkflows() { this->workflows_ = nullptr;};
          inline const vector<string> & getWorkflows() const { DARABONBA_PTR_GET_CONST(workflows_, vector<string>) };
          inline vector<string> getWorkflows() { DARABONBA_PTR_GET(workflows_, vector<string>) };
          inline AuthAppStructure& setWorkflows(const vector<string> & workflows) { DARABONBA_PTR_SET_VALUE(workflows_, workflows) };
          inline AuthAppStructure& setWorkflows(vector<string> && workflows) { DARABONBA_PTR_SET_RVALUE(workflows_, workflows) };


        protected:
          shared_ptr<vector<string>> agents_ {};
          shared_ptr<vector<string>> highCodeApps_ {};
          shared_ptr<bool> isAllowAccessAllApps_ {};
          shared_ptr<vector<string>> workflows_ {};
        };

        virtual bool empty() const override { return this->accessIps_ == nullptr
        && this->authAppStructure_ == nullptr && this->authModelStructure_ == nullptr && this->authSetMode_ == nullptr; };
        // accessIps Field Functions 
        bool hasAccessIps() const { return this->accessIps_ != nullptr;};
        void deleteAccessIps() { this->accessIps_ = nullptr;};
        inline const vector<string> & getAccessIps() const { DARABONBA_PTR_GET_CONST(accessIps_, vector<string>) };
        inline vector<string> getAccessIps() { DARABONBA_PTR_GET(accessIps_, vector<string>) };
        inline AuthSetModel& setAccessIps(const vector<string> & accessIps) { DARABONBA_PTR_SET_VALUE(accessIps_, accessIps) };
        inline AuthSetModel& setAccessIps(vector<string> && accessIps) { DARABONBA_PTR_SET_RVALUE(accessIps_, accessIps) };


        // authAppStructure Field Functions 
        bool hasAuthAppStructure() const { return this->authAppStructure_ != nullptr;};
        void deleteAuthAppStructure() { this->authAppStructure_ = nullptr;};
        inline const AuthSetModel::AuthAppStructure & getAuthAppStructure() const { DARABONBA_PTR_GET_CONST(authAppStructure_, AuthSetModel::AuthAppStructure) };
        inline AuthSetModel::AuthAppStructure getAuthAppStructure() { DARABONBA_PTR_GET(authAppStructure_, AuthSetModel::AuthAppStructure) };
        inline AuthSetModel& setAuthAppStructure(const AuthSetModel::AuthAppStructure & authAppStructure) { DARABONBA_PTR_SET_VALUE(authAppStructure_, authAppStructure) };
        inline AuthSetModel& setAuthAppStructure(AuthSetModel::AuthAppStructure && authAppStructure) { DARABONBA_PTR_SET_RVALUE(authAppStructure_, authAppStructure) };


        // authModelStructure Field Functions 
        bool hasAuthModelStructure() const { return this->authModelStructure_ != nullptr;};
        void deleteAuthModelStructure() { this->authModelStructure_ = nullptr;};
        inline const AuthSetModel::AuthModelStructure & getAuthModelStructure() const { DARABONBA_PTR_GET_CONST(authModelStructure_, AuthSetModel::AuthModelStructure) };
        inline AuthSetModel::AuthModelStructure getAuthModelStructure() { DARABONBA_PTR_GET(authModelStructure_, AuthSetModel::AuthModelStructure) };
        inline AuthSetModel& setAuthModelStructure(const AuthSetModel::AuthModelStructure & authModelStructure) { DARABONBA_PTR_SET_VALUE(authModelStructure_, authModelStructure) };
        inline AuthSetModel& setAuthModelStructure(AuthSetModel::AuthModelStructure && authModelStructure) { DARABONBA_PTR_SET_RVALUE(authModelStructure_, authModelStructure) };


        // authSetMode Field Functions 
        bool hasAuthSetMode() const { return this->authSetMode_ != nullptr;};
        void deleteAuthSetMode() { this->authSetMode_ = nullptr;};
        inline string getAuthSetMode() const { DARABONBA_PTR_GET_DEFAULT(authSetMode_, "") };
        inline AuthSetModel& setAuthSetMode(string authSetMode) { DARABONBA_PTR_SET_VALUE(authSetMode_, authSetMode) };


      protected:
        shared_ptr<vector<string>> accessIps_ {};
        shared_ptr<AuthSetModel::AuthAppStructure> authAppStructure_ {};
        shared_ptr<AuthSetModel::AuthModelStructure> authModelStructure_ {};
        shared_ptr<string> authSetMode_ {};
      };

      virtual bool empty() const override { return this->apiKeyValue_ == nullptr
        && this->apikeyId_ == nullptr && this->authSetModel_ == nullptr && this->blocked_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->extData_ == nullptr && this->parentUid_ == nullptr && this->uid_ == nullptr
        && this->workspaceId_ == nullptr; };
      // apiKeyValue Field Functions 
      bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
      void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
      inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
      inline ApiKey& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


      // apikeyId Field Functions 
      bool hasApikeyId() const { return this->apikeyId_ != nullptr;};
      void deleteApikeyId() { this->apikeyId_ = nullptr;};
      inline string getApikeyId() const { DARABONBA_PTR_GET_DEFAULT(apikeyId_, "") };
      inline ApiKey& setApikeyId(string apikeyId) { DARABONBA_PTR_SET_VALUE(apikeyId_, apikeyId) };


      // authSetModel Field Functions 
      bool hasAuthSetModel() const { return this->authSetModel_ != nullptr;};
      void deleteAuthSetModel() { this->authSetModel_ = nullptr;};
      inline const ApiKey::AuthSetModel & getAuthSetModel() const { DARABONBA_PTR_GET_CONST(authSetModel_, ApiKey::AuthSetModel) };
      inline ApiKey::AuthSetModel getAuthSetModel() { DARABONBA_PTR_GET(authSetModel_, ApiKey::AuthSetModel) };
      inline ApiKey& setAuthSetModel(const ApiKey::AuthSetModel & authSetModel) { DARABONBA_PTR_SET_VALUE(authSetModel_, authSetModel) };
      inline ApiKey& setAuthSetModel(ApiKey::AuthSetModel && authSetModel) { DARABONBA_PTR_SET_RVALUE(authSetModel_, authSetModel) };


      // blocked Field Functions 
      bool hasBlocked() const { return this->blocked_ != nullptr;};
      void deleteBlocked() { this->blocked_ = nullptr;};
      inline string getBlocked() const { DARABONBA_PTR_GET_DEFAULT(blocked_, "") };
      inline ApiKey& setBlocked(string blocked) { DARABONBA_PTR_SET_VALUE(blocked_, blocked) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApiKey& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ApiKey& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiKey& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline ApiKey& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // extData Field Functions 
      bool hasExtData() const { return this->extData_ != nullptr;};
      void deleteExtData() { this->extData_ = nullptr;};
      inline string getExtData() const { DARABONBA_PTR_GET_DEFAULT(extData_, "") };
      inline ApiKey& setExtData(string extData) { DARABONBA_PTR_SET_VALUE(extData_, extData) };


      // parentUid Field Functions 
      bool hasParentUid() const { return this->parentUid_ != nullptr;};
      void deleteParentUid() { this->parentUid_ = nullptr;};
      inline string getParentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, "") };
      inline ApiKey& setParentUid(string parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline ApiKey& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ApiKey& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> apiKeyValue_ {};
      shared_ptr<string> apikeyId_ {};
      shared_ptr<ApiKey::AuthSetModel> authSetModel_ {};
      shared_ptr<string> blocked_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> extData_ {};
      shared_ptr<string> parentUid_ {};
      shared_ptr<string> uid_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline const GetApiKeyResponseBody::ApiKey & getApiKey() const { DARABONBA_PTR_GET_CONST(apiKey_, GetApiKeyResponseBody::ApiKey) };
    inline GetApiKeyResponseBody::ApiKey getApiKey() { DARABONBA_PTR_GET(apiKey_, GetApiKeyResponseBody::ApiKey) };
    inline GetApiKeyResponseBody& setApiKey(const GetApiKeyResponseBody::ApiKey & apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };
    inline GetApiKeyResponseBody& setApiKey(GetApiKeyResponseBody::ApiKey && apiKey) { DARABONBA_PTR_SET_RVALUE(apiKey_, apiKey) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApiKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetApiKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApiKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetApiKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetApiKeyResponseBody::ApiKey> apiKey_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianControl20240816
#endif
