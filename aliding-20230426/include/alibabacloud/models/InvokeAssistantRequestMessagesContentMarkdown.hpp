// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTMARKDOWN_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTMARKDOWN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentMarkdown : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentMarkdown& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentMarkdown& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    InvokeAssistantRequestMessagesContentMarkdown() = default ;
    InvokeAssistantRequestMessagesContentMarkdown(const InvokeAssistantRequestMessagesContentMarkdown &) = default ;
    InvokeAssistantRequestMessagesContentMarkdown(InvokeAssistantRequestMessagesContentMarkdown &&) = default ;
    InvokeAssistantRequestMessagesContentMarkdown(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentMarkdown() = default ;
    InvokeAssistantRequestMessagesContentMarkdown& operator=(const InvokeAssistantRequestMessagesContentMarkdown &) = default ;
    InvokeAssistantRequestMessagesContentMarkdown& operator=(InvokeAssistantRequestMessagesContentMarkdown &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline InvokeAssistantRequestMessagesContentMarkdown& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
