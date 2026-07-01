// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListApiKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListApiKeysResponseBody() = default ;
    ListApiKeysResponseBody(const ListApiKeysResponseBody &) = default ;
    ListApiKeysResponseBody(ListApiKeysResponseBody &&) = default ;
    ListApiKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiKeysResponseBody() = default ;
    ListApiKeysResponseBody& operator=(const ListApiKeysResponseBody &) = default ;
    ListApiKeysResponseBody& operator=(ListApiKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKeys& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_TO_JSON(auth, auth_);
        DARABONBA_PTR_TO_JSON(createdBy, createdBy_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(disabled, disabled_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_FROM_JSON(auth, auth_);
        DARABONBA_PTR_FROM_JSON(createdBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      ApiKeys() = default ;
      ApiKeys(const ApiKeys &) = default ;
      ApiKeys(ApiKeys &&) = default ;
      ApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKeys() = default ;
      ApiKeys& operator=(const ApiKeys &) = default ;
      ApiKeys& operator=(ApiKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Auth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Auth& obj) { 
          DARABONBA_PTR_TO_JSON(accessIps, accessIps_);
          DARABONBA_PTR_TO_JSON(modelAccessScope, modelAccessScope_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Auth& obj) { 
          DARABONBA_PTR_FROM_JSON(accessIps, accessIps_);
          DARABONBA_PTR_FROM_JSON(modelAccessScope, modelAccessScope_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Auth() = default ;
        Auth(const Auth &) = default ;
        Auth(Auth &&) = default ;
        Auth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Auth() = default ;
        Auth& operator=(const Auth &) = default ;
        Auth& operator=(Auth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModelAccessScope : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModelAccessScope& obj) { 
            DARABONBA_PTR_TO_JSON(accessibleModels, accessibleModels_);
            DARABONBA_PTR_TO_JSON(allowAllModels, allowAllModels_);
          };
          friend void from_json(const Darabonba::Json& j, ModelAccessScope& obj) { 
            DARABONBA_PTR_FROM_JSON(accessibleModels, accessibleModels_);
            DARABONBA_PTR_FROM_JSON(allowAllModels, allowAllModels_);
          };
          ModelAccessScope() = default ;
          ModelAccessScope(const ModelAccessScope &) = default ;
          ModelAccessScope(ModelAccessScope &&) = default ;
          ModelAccessScope(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModelAccessScope() = default ;
          ModelAccessScope& operator=(const ModelAccessScope &) = default ;
          ModelAccessScope& operator=(ModelAccessScope &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessibleModels_ == nullptr
        && this->allowAllModels_ == nullptr; };
          // accessibleModels Field Functions 
          bool hasAccessibleModels() const { return this->accessibleModels_ != nullptr;};
          void deleteAccessibleModels() { this->accessibleModels_ = nullptr;};
          inline const vector<string> & getAccessibleModels() const { DARABONBA_PTR_GET_CONST(accessibleModels_, vector<string>) };
          inline vector<string> getAccessibleModels() { DARABONBA_PTR_GET(accessibleModels_, vector<string>) };
          inline ModelAccessScope& setAccessibleModels(const vector<string> & accessibleModels) { DARABONBA_PTR_SET_VALUE(accessibleModels_, accessibleModels) };
          inline ModelAccessScope& setAccessibleModels(vector<string> && accessibleModels) { DARABONBA_PTR_SET_RVALUE(accessibleModels_, accessibleModels) };


          // allowAllModels Field Functions 
          bool hasAllowAllModels() const { return this->allowAllModels_ != nullptr;};
          void deleteAllowAllModels() { this->allowAllModels_ = nullptr;};
          inline bool getAllowAllModels() const { DARABONBA_PTR_GET_DEFAULT(allowAllModels_, false) };
          inline ModelAccessScope& setAllowAllModels(bool allowAllModels) { DARABONBA_PTR_SET_VALUE(allowAllModels_, allowAllModels) };


        protected:
          // The list of accessible models.
          shared_ptr<vector<string>> accessibleModels_ {};
          // Indicates whether access to all models with inference permissions in the workspace is allowed.
          shared_ptr<bool> allowAllModels_ {};
        };

        virtual bool empty() const override { return this->accessIps_ == nullptr
        && this->modelAccessScope_ == nullptr && this->type_ == nullptr; };
        // accessIps Field Functions 
        bool hasAccessIps() const { return this->accessIps_ != nullptr;};
        void deleteAccessIps() { this->accessIps_ = nullptr;};
        inline const vector<string> & getAccessIps() const { DARABONBA_PTR_GET_CONST(accessIps_, vector<string>) };
        inline vector<string> getAccessIps() { DARABONBA_PTR_GET(accessIps_, vector<string>) };
        inline Auth& setAccessIps(const vector<string> & accessIps) { DARABONBA_PTR_SET_VALUE(accessIps_, accessIps) };
        inline Auth& setAccessIps(vector<string> && accessIps) { DARABONBA_PTR_SET_RVALUE(accessIps_, accessIps) };


        // modelAccessScope Field Functions 
        bool hasModelAccessScope() const { return this->modelAccessScope_ != nullptr;};
        void deleteModelAccessScope() { this->modelAccessScope_ = nullptr;};
        inline const Auth::ModelAccessScope & getModelAccessScope() const { DARABONBA_PTR_GET_CONST(modelAccessScope_, Auth::ModelAccessScope) };
        inline Auth::ModelAccessScope getModelAccessScope() { DARABONBA_PTR_GET(modelAccessScope_, Auth::ModelAccessScope) };
        inline Auth& setModelAccessScope(const Auth::ModelAccessScope & modelAccessScope) { DARABONBA_PTR_SET_VALUE(modelAccessScope_, modelAccessScope) };
        inline Auth& setModelAccessScope(Auth::ModelAccessScope && modelAccessScope) { DARABONBA_PTR_SET_RVALUE(modelAccessScope_, modelAccessScope) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Auth& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The IP access whitelist.
        shared_ptr<vector<string>> accessIps_ {};
        // The model access scope.
        shared_ptr<Auth::ModelAccessScope> modelAccessScope_ {};
        // All: all permissions. Custom: custom permissions.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->apiKeyValue_ == nullptr && this->auth_ == nullptr && this->createdBy_ == nullptr && this->description_ == nullptr && this->disabled_ == nullptr
        && this->gmtCreate_ == nullptr && this->workspaceId_ == nullptr; };
      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
      inline ApiKeys& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // apiKeyValue Field Functions 
      bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
      void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
      inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
      inline ApiKeys& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline const ApiKeys::Auth & getAuth() const { DARABONBA_PTR_GET_CONST(auth_, ApiKeys::Auth) };
      inline ApiKeys::Auth getAuth() { DARABONBA_PTR_GET(auth_, ApiKeys::Auth) };
      inline ApiKeys& setAuth(const ApiKeys::Auth & auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };
      inline ApiKeys& setAuth(ApiKeys::Auth && auth) { DARABONBA_PTR_SET_RVALUE(auth_, auth) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline ApiKeys& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline int32_t getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, 0) };
      inline ApiKeys& setDisabled(int32_t disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ApiKeys& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ApiKeys& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // API Key ID。
      shared_ptr<int64_t> apiKeyId_ {};
      // The value of the API key.
      shared_ptr<string> apiKeyValue_ {};
      // The permission settings.
      shared_ptr<ApiKeys::Auth> auth_ {};
      // The creator.
      shared_ptr<string> createdBy_ {};
      // The description.
      shared_ptr<string> description_ {};
      // Indicates whether the API key is disabled. Valid values:
      // 
      // - **0**: Active.
      // - **1**: Disabled.
      shared_ptr<int32_t> disabled_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<ListApiKeysResponseBody::ApiKeys> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<ListApiKeysResponseBody::ApiKeys>) };
    inline vector<ListApiKeysResponseBody::ApiKeys> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<ListApiKeysResponseBody::ApiKeys>) };
    inline ListApiKeysResponseBody& setApiKeys(const vector<ListApiKeysResponseBody::ApiKeys> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline ListApiKeysResponseBody& setApiKeys(vector<ListApiKeysResponseBody::ApiKeys> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApiKeysResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApiKeysResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApiKeysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApiKeysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApiKeysResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApiKeysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of API keys.
    shared_ptr<vector<ListApiKeysResponseBody::ApiKeys>> apiKeys_ {};
    // The response status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The token used to retrieve more results. This parameter is not required for the first query. For subsequent queries, use the token obtained from the previous response.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Valid values:
    // 
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
