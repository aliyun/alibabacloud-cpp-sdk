// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateAppCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
    };
    UpdateAppCodeRequest() = default ;
    UpdateAppCodeRequest(const UpdateAppCodeRequest &) = default ;
    UpdateAppCodeRequest(UpdateAppCodeRequest &&) = default ;
    UpdateAppCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppCodeRequest() = default ;
    UpdateAppCodeRequest& operator=(const UpdateAppCodeRequest &) = default ;
    UpdateAppCodeRequest& operator=(UpdateAppCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->conversationId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateAppCodeRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline UpdateAppCodeRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


  protected:
    // Edit operation Content (JSON)
    shared_ptr<string> content_ {};
    // session ID
    shared_ptr<string> conversationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
