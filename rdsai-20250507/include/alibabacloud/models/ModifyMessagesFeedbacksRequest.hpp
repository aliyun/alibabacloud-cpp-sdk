// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMESSAGESFEEDBACKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMESSAGESFEEDBACKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyMessagesFeedbacksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMessagesFeedbacksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Rating, rating_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMessagesFeedbacksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Rating, rating_);
    };
    ModifyMessagesFeedbacksRequest() = default ;
    ModifyMessagesFeedbacksRequest(const ModifyMessagesFeedbacksRequest &) = default ;
    ModifyMessagesFeedbacksRequest(ModifyMessagesFeedbacksRequest &&) = default ;
    ModifyMessagesFeedbacksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMessagesFeedbacksRequest() = default ;
    ModifyMessagesFeedbacksRequest& operator=(const ModifyMessagesFeedbacksRequest &) = default ;
    ModifyMessagesFeedbacksRequest& operator=(ModifyMessagesFeedbacksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->content_ == nullptr && return this->messageId_ == nullptr && return this->rating_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ModifyMessagesFeedbacksRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ModifyMessagesFeedbacksRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ModifyMessagesFeedbacksRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // rating Field Functions 
    bool hasRating() const { return this->rating_ != nullptr;};
    void deleteRating() { this->rating_ = nullptr;};
    inline string rating() const { DARABONBA_PTR_GET_DEFAULT(rating_, "") };
    inline ModifyMessagesFeedbacksRequest& setRating(string rating) { DARABONBA_PTR_SET_VALUE(rating_, rating) };


  protected:
    std::shared_ptr<string> apiId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> rating_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
