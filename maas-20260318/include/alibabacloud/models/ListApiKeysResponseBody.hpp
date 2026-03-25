// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaaS20260318
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
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(isBlocked, isBlocked_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(apiKeyValue, apiKeyValue_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(isBlocked, isBlocked_);
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
      virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->apiKeyValue_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->isBlocked_ == nullptr
        && this->workspaceId_ == nullptr; };
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


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ApiKeys& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // isBlocked Field Functions 
      bool hasIsBlocked() const { return this->isBlocked_ != nullptr;};
      void deleteIsBlocked() { this->isBlocked_ = nullptr;};
      inline int32_t getIsBlocked() const { DARABONBA_PTR_GET_DEFAULT(isBlocked_, 0) };
      inline ApiKeys& setIsBlocked(int32_t isBlocked) { DARABONBA_PTR_SET_VALUE(isBlocked_, isBlocked) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ApiKeys& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // API Key ID。
      shared_ptr<int64_t> apiKeyId_ {};
      // API Key Value。
      shared_ptr<string> apiKeyValue_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int32_t> isBlocked_ {};
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
    // API Key。
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
} // namespace MaaS20260318
#endif
