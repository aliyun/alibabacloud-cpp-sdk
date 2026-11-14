// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARMPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWARMPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PublicWarmPoolConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class ListWarmPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarmPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(warmPools, warmPools_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarmPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(warmPools, warmPools_);
    };
    ListWarmPoolsResponseBody() = default ;
    ListWarmPoolsResponseBody(const ListWarmPoolsResponseBody &) = default ;
    ListWarmPoolsResponseBody(ListWarmPoolsResponseBody &&) = default ;
    ListWarmPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarmPoolsResponseBody() = default ;
    ListWarmPoolsResponseBody& operator=(const ListWarmPoolsResponseBody &) = default ;
    ListWarmPoolsResponseBody& operator=(ListWarmPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->warmPools_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWarmPoolsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWarmPoolsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWarmPoolsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWarmPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWarmPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warmPools Field Functions 
    bool hasWarmPools() const { return this->warmPools_ != nullptr;};
    void deleteWarmPools() { this->warmPools_ = nullptr;};
    inline const vector<PublicWarmPoolConfig> & getWarmPools() const { DARABONBA_PTR_GET_CONST(warmPools_, vector<PublicWarmPoolConfig>) };
    inline vector<PublicWarmPoolConfig> getWarmPools() { DARABONBA_PTR_GET(warmPools_, vector<PublicWarmPoolConfig>) };
    inline ListWarmPoolsResponseBody& setWarmPools(const vector<PublicWarmPoolConfig> & warmPools) { DARABONBA_PTR_SET_VALUE(warmPools_, warmPools) };
    inline ListWarmPoolsResponseBody& setWarmPools(vector<PublicWarmPoolConfig> && warmPools) { DARABONBA_PTR_SET_RVALUE(warmPools_, warmPools) };


  protected:
    // The business code in the response.
    shared_ptr<string> code_ {};
    // The actual maximum number of results returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pagination token. An empty value indicates that no more results are available.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of warm pools.
    shared_ptr<vector<PublicWarmPoolConfig>> warmPools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
