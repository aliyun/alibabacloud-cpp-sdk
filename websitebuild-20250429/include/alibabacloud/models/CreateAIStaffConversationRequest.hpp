// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAISTAFFCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAISTAFFCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAIStaffConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIStaffConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIStaffConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    CreateAIStaffConversationRequest() = default ;
    CreateAIStaffConversationRequest(const CreateAIStaffConversationRequest &) = default ;
    CreateAIStaffConversationRequest(CreateAIStaffConversationRequest &&) = default ;
    CreateAIStaffConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIStaffConversationRequest() = default ;
    CreateAIStaffConversationRequest& operator=(const CreateAIStaffConversationRequest &) = default ;
    CreateAIStaffConversationRequest& operator=(CreateAIStaffConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline CreateAIStaffConversationRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The user question text. The first 100 characters are truncated as the session title.
    shared_ptr<string> text_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
