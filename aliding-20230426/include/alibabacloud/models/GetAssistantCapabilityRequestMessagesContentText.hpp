// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTTEXT_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityRequestMessagesContentText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityRequestMessagesContentText& obj) { 
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityRequestMessagesContentText& obj) { 
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetAssistantCapabilityRequestMessagesContentText() = default ;
    GetAssistantCapabilityRequestMessagesContentText(const GetAssistantCapabilityRequestMessagesContentText &) = default ;
    GetAssistantCapabilityRequestMessagesContentText(GetAssistantCapabilityRequestMessagesContentText &&) = default ;
    GetAssistantCapabilityRequestMessagesContentText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityRequestMessagesContentText() = default ;
    GetAssistantCapabilityRequestMessagesContentText& operator=(const GetAssistantCapabilityRequestMessagesContentText &) = default ;
    GetAssistantCapabilityRequestMessagesContentText& operator=(GetAssistantCapabilityRequestMessagesContentText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAssistantCapabilityRequestMessagesContentText& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
