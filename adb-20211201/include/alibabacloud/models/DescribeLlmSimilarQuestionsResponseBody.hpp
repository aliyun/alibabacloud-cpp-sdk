// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELLMSIMILARQUESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELLMSIMILARQUESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLLMSimilarQuestionsResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeLLMSimilarQuestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLLMSimilarQuestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLLMSimilarQuestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DescribeLLMSimilarQuestionsResponseBody() = default ;
    DescribeLLMSimilarQuestionsResponseBody(const DescribeLLMSimilarQuestionsResponseBody &) = default ;
    DescribeLLMSimilarQuestionsResponseBody(DescribeLLMSimilarQuestionsResponseBody &&) = default ;
    DescribeLLMSimilarQuestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLLMSimilarQuestionsResponseBody() = default ;
    DescribeLLMSimilarQuestionsResponseBody& operator=(const DescribeLLMSimilarQuestionsResponseBody &) = default ;
    DescribeLLMSimilarQuestionsResponseBody& operator=(DescribeLLMSimilarQuestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr
        && return this->requestId_ == nullptr && return this->sessionId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeLLMSimilarQuestionsResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeLLMSimilarQuestionsResponseBodyItems>) };
    inline vector<DescribeLLMSimilarQuestionsResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeLLMSimilarQuestionsResponseBodyItems>) };
    inline DescribeLLMSimilarQuestionsResponseBody& setItems(const vector<DescribeLLMSimilarQuestionsResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeLLMSimilarQuestionsResponseBody& setItems(vector<DescribeLLMSimilarQuestionsResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLLMSimilarQuestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeLLMSimilarQuestionsResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The queried similar questions.
    std::shared_ptr<vector<DescribeLLMSimilarQuestionsResponseBodyItems>> items_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
