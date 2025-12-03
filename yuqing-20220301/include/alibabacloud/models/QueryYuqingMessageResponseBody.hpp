// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYYUQINGMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYYUQINGMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/YuqingMessage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class QueryYuqingMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryYuqingMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(yuqingMessages, yuqingMessages_);
    };
    friend void from_json(const Darabonba::Json& j, QueryYuqingMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(yuqingMessages, yuqingMessages_);
    };
    QueryYuqingMessageResponseBody() = default ;
    QueryYuqingMessageResponseBody(const QueryYuqingMessageResponseBody &) = default ;
    QueryYuqingMessageResponseBody(QueryYuqingMessageResponseBody &&) = default ;
    QueryYuqingMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryYuqingMessageResponseBody() = default ;
    QueryYuqingMessageResponseBody& operator=(const QueryYuqingMessageResponseBody &) = default ;
    QueryYuqingMessageResponseBody& operator=(QueryYuqingMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->yuqingMessages_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryYuqingMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryYuqingMessageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // yuqingMessages Field Functions 
    bool hasYuqingMessages() const { return this->yuqingMessages_ != nullptr;};
    void deleteYuqingMessages() { this->yuqingMessages_ = nullptr;};
    inline const vector<YuqingMessage> & yuqingMessages() const { DARABONBA_PTR_GET_CONST(yuqingMessages_, vector<YuqingMessage>) };
    inline vector<YuqingMessage> yuqingMessages() { DARABONBA_PTR_GET(yuqingMessages_, vector<YuqingMessage>) };
    inline QueryYuqingMessageResponseBody& setYuqingMessages(const vector<YuqingMessage> & yuqingMessages) { DARABONBA_PTR_SET_VALUE(yuqingMessages_, yuqingMessages) };
    inline QueryYuqingMessageResponseBody& setYuqingMessages(vector<YuqingMessage> && yuqingMessages) { DARABONBA_PTR_SET_RVALUE(yuqingMessages_, yuqingMessages) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<YuqingMessage>> yuqingMessages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
