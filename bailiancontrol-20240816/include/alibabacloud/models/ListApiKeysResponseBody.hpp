// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
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
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
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
      class AuthSetModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthSetModel& obj) { 
          DARABONBA_PTR_TO_JSON(authSetMode, authSetMode_);
        };
        friend void from_json(const Darabonba::Json& j, AuthSetModel& obj) { 
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
        virtual bool empty() const override { return this->authSetMode_ == nullptr; };
        // authSetMode Field Functions 
        bool hasAuthSetMode() const { return this->authSetMode_ != nullptr;};
        void deleteAuthSetMode() { this->authSetMode_ = nullptr;};
        inline string getAuthSetMode() const { DARABONBA_PTR_GET_DEFAULT(authSetMode_, "") };
        inline AuthSetModel& setAuthSetMode(string authSetMode) { DARABONBA_PTR_SET_VALUE(authSetMode_, authSetMode) };


      protected:
        shared_ptr<string> authSetMode_ {};
      };

      virtual bool empty() const override { return this->apiKeyValue_ == nullptr
        && this->apikeyId_ == nullptr && this->authSetModel_ == nullptr && this->blocked_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr
        && this->description_ == nullptr && this->expireTime_ == nullptr && this->extData_ == nullptr && this->parentUid_ == nullptr && this->type_ == nullptr
        && this->uid_ == nullptr && this->workspaceId_ == nullptr; };
      // apiKeyValue Field Functions 
      bool hasApiKeyValue() const { return this->apiKeyValue_ != nullptr;};
      void deleteApiKeyValue() { this->apiKeyValue_ = nullptr;};
      inline string getApiKeyValue() const { DARABONBA_PTR_GET_DEFAULT(apiKeyValue_, "") };
      inline ApiKeys& setApiKeyValue(string apiKeyValue) { DARABONBA_PTR_SET_VALUE(apiKeyValue_, apiKeyValue) };


      // apikeyId Field Functions 
      bool hasApikeyId() const { return this->apikeyId_ != nullptr;};
      void deleteApikeyId() { this->apikeyId_ = nullptr;};
      inline string getApikeyId() const { DARABONBA_PTR_GET_DEFAULT(apikeyId_, "") };
      inline ApiKeys& setApikeyId(string apikeyId) { DARABONBA_PTR_SET_VALUE(apikeyId_, apikeyId) };


      // authSetModel Field Functions 
      bool hasAuthSetModel() const { return this->authSetModel_ != nullptr;};
      void deleteAuthSetModel() { this->authSetModel_ = nullptr;};
      inline const ApiKeys::AuthSetModel & getAuthSetModel() const { DARABONBA_PTR_GET_CONST(authSetModel_, ApiKeys::AuthSetModel) };
      inline ApiKeys::AuthSetModel getAuthSetModel() { DARABONBA_PTR_GET(authSetModel_, ApiKeys::AuthSetModel) };
      inline ApiKeys& setAuthSetModel(const ApiKeys::AuthSetModel & authSetModel) { DARABONBA_PTR_SET_VALUE(authSetModel_, authSetModel) };
      inline ApiKeys& setAuthSetModel(ApiKeys::AuthSetModel && authSetModel) { DARABONBA_PTR_SET_RVALUE(authSetModel_, authSetModel) };


      // blocked Field Functions 
      bool hasBlocked() const { return this->blocked_ != nullptr;};
      void deleteBlocked() { this->blocked_ = nullptr;};
      inline int32_t getBlocked() const { DARABONBA_PTR_GET_DEFAULT(blocked_, 0) };
      inline ApiKeys& setBlocked(int32_t blocked) { DARABONBA_PTR_SET_VALUE(blocked_, blocked) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApiKeys& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ApiKeys& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline ApiKeys& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // extData Field Functions 
      bool hasExtData() const { return this->extData_ != nullptr;};
      void deleteExtData() { this->extData_ = nullptr;};
      inline string getExtData() const { DARABONBA_PTR_GET_DEFAULT(extData_, "") };
      inline ApiKeys& setExtData(string extData) { DARABONBA_PTR_SET_VALUE(extData_, extData) };


      // parentUid Field Functions 
      bool hasParentUid() const { return this->parentUid_ != nullptr;};
      void deleteParentUid() { this->parentUid_ = nullptr;};
      inline string getParentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, "") };
      inline ApiKeys& setParentUid(string parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline ApiKeys& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline ApiKeys& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ApiKeys& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> apiKeyValue_ {};
      shared_ptr<string> apikeyId_ {};
      shared_ptr<ApiKeys::AuthSetModel> authSetModel_ {};
      shared_ptr<int32_t> blocked_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<string> extData_ {};
      shared_ptr<string> parentUid_ {};
      shared_ptr<int32_t> type_ {};
      shared_ptr<string> uid_ {};
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
    // apiKey
    shared_ptr<vector<ListApiKeysResponseBody::ApiKeys>> apiKeys_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianControl20240816
#endif
