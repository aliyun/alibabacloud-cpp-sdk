// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContentText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContentText& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContentText& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateMessageResponseBodyMessagesContentText() = default ;
    CreateMessageResponseBodyMessagesContentText(const CreateMessageResponseBodyMessagesContentText &) = default ;
    CreateMessageResponseBodyMessagesContentText(CreateMessageResponseBodyMessagesContentText &&) = default ;
    CreateMessageResponseBodyMessagesContentText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContentText() = default ;
    CreateMessageResponseBodyMessagesContentText& operator=(const CreateMessageResponseBodyMessagesContentText &) = default ;
    CreateMessageResponseBodyMessagesContentText& operator=(CreateMessageResponseBodyMessagesContentText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateMessageResponseBodyMessagesContentText& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
