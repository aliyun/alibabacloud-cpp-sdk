// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATREQUESTMESSAGESCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATREQUESTMESSAGESCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateChatRequestMessagesContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatRequestMessagesContents& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatRequestMessagesContents& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateChatRequestMessagesContents() = default ;
    CreateChatRequestMessagesContents(const CreateChatRequestMessagesContents &) = default ;
    CreateChatRequestMessagesContents(CreateChatRequestMessagesContents &&) = default ;
    CreateChatRequestMessagesContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatRequestMessagesContents() = default ;
    CreateChatRequestMessagesContents& operator=(const CreateChatRequestMessagesContents &) = default ;
    CreateChatRequestMessagesContents& operator=(CreateChatRequestMessagesContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->value_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateChatRequestMessagesContents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateChatRequestMessagesContents& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
