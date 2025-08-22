// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDTTSVERIFYLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDTTSVERIFYLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SendTTSVerifyLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendTTSVerifyLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, SendTTSVerifyLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
    };
    SendTTSVerifyLinkRequest() = default ;
    SendTTSVerifyLinkRequest(const SendTTSVerifyLinkRequest &) = default ;
    SendTTSVerifyLinkRequest(SendTTSVerifyLinkRequest &&) = default ;
    SendTTSVerifyLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendTTSVerifyLinkRequest() = default ;
    SendTTSVerifyLinkRequest& operator=(const SendTTSVerifyLinkRequest &) = default ;
    SendTTSVerifyLinkRequest& operator=(SendTTSVerifyLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->phone_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline SendTTSVerifyLinkRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline SendTTSVerifyLinkRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The ID of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> contactId_ = nullptr;
    // The mobile number of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
