// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTTEXT_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentText& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentText& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    InvokeAssistantRequestMessagesContentText() = default ;
    InvokeAssistantRequestMessagesContentText(const InvokeAssistantRequestMessagesContentText &) = default ;
    InvokeAssistantRequestMessagesContentText(InvokeAssistantRequestMessagesContentText &&) = default ;
    InvokeAssistantRequestMessagesContentText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentText() = default ;
    InvokeAssistantRequestMessagesContentText& operator=(const InvokeAssistantRequestMessagesContentText &) = default ;
    InvokeAssistantRequestMessagesContentText& operator=(InvokeAssistantRequestMessagesContentText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline InvokeAssistantRequestMessagesContentText& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
