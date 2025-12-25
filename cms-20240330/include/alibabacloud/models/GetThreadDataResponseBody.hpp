// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTHREADDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetThreadDataResponseBodyMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetThreadDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetThreadDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, GetThreadDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    GetThreadDataResponseBody() = default ;
    GetThreadDataResponseBody(const GetThreadDataResponseBody &) = default ;
    GetThreadDataResponseBody(GetThreadDataResponseBody &&) = default ;
    GetThreadDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetThreadDataResponseBody() = default ;
    GetThreadDataResponseBody& operator=(const GetThreadDataResponseBody &) = default ;
    GetThreadDataResponseBody& operator=(GetThreadDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digitalEmployeeName_ == nullptr
        && return this->maxResults_ == nullptr && return this->messages_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->threadId_ == nullptr; };
    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string digitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline GetThreadDataResponseBody& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetThreadDataResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<GetThreadDataResponseBodyMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<GetThreadDataResponseBodyMessages>) };
    inline vector<GetThreadDataResponseBodyMessages> messages() { DARABONBA_PTR_GET(messages_, vector<GetThreadDataResponseBodyMessages>) };
    inline GetThreadDataResponseBody& setMessages(const vector<GetThreadDataResponseBodyMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline GetThreadDataResponseBody& setMessages(vector<GetThreadDataResponseBodyMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetThreadDataResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetThreadDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline GetThreadDataResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<string> digitalEmployeeName_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<vector<GetThreadDataResponseBodyMessages>> messages_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
