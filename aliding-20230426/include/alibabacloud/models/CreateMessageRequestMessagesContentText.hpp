// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTTEXT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageRequestMessagesContentText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageRequestMessagesContentText& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageRequestMessagesContentText& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    CreateMessageRequestMessagesContentText() = default ;
    CreateMessageRequestMessagesContentText(const CreateMessageRequestMessagesContentText &) = default ;
    CreateMessageRequestMessagesContentText(CreateMessageRequestMessagesContentText &&) = default ;
    CreateMessageRequestMessagesContentText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageRequestMessagesContentText() = default ;
    CreateMessageRequestMessagesContentText& operator=(const CreateMessageRequestMessagesContentText &) = default ;
    CreateMessageRequestMessagesContentText& operator=(CreateMessageRequestMessagesContentText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateMessageRequestMessagesContentText& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
