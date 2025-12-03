// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(FirstId, firstId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(FirstId, firstId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
    };
    GetMessagesRequest() = default ;
    GetMessagesRequest(const GetMessagesRequest &) = default ;
    GetMessagesRequest(GetMessagesRequest &&) = default ;
    GetMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessagesRequest() = default ;
    GetMessagesRequest& operator=(const GetMessagesRequest &) = default ;
    GetMessagesRequest& operator=(GetMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->conversationId_ == nullptr && return this->firstId_ == nullptr && return this->limit_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline GetMessagesRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string conversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // firstId Field Functions 
    bool hasFirstId() const { return this->firstId_ != nullptr;};
    void deleteFirstId() { this->firstId_ = nullptr;};
    inline string firstId() const { DARABONBA_PTR_GET_DEFAULT(firstId_, "") };
    inline GetMessagesRequest& setFirstId(string firstId) { DARABONBA_PTR_SET_VALUE(firstId_, firstId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline GetMessagesRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    std::shared_ptr<string> apiId_ = nullptr;
    std::shared_ptr<string> conversationId_ = nullptr;
    std::shared_ptr<string> firstId_ = nullptr;
    std::shared_ptr<int64_t> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
