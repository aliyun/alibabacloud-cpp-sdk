// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Idcard, idcard_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Idcard, idcard_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    CreateContactRequest() = default ;
    CreateContactRequest(const CreateContactRequest &) = default ;
    CreateContactRequest(CreateContactRequest &&) = default ;
    CreateContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContactRequest() = default ;
    CreateContactRequest& operator=(const CreateContactRequest &) = default ;
    CreateContactRequest& operator=(CreateContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && this->idcard_ == nullptr && this->mobile_ == nullptr && this->name_ == nullptr && this->webhooks_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // idcard Field Functions 
    bool hasIdcard() const { return this->idcard_ != nullptr;};
    void deleteIdcard() { this->idcard_ = nullptr;};
    inline string getIdcard() const { DARABONBA_PTR_GET_DEFAULT(idcard_, "") };
    inline CreateContactRequest& setIdcard(string idcard) { DARABONBA_PTR_SET_VALUE(idcard_, idcard) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreateContactRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateContactRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline string getWebhooks() const { DARABONBA_PTR_GET_DEFAULT(webhooks_, "") };
    inline CreateContactRequest& setWebhooks(string webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };


  protected:
    // The email address of the contact.
    shared_ptr<string> email_ {};
    // The ID card number of the contact. This parameter is required for the CFCA certificate brand and is not required for other brands.
    shared_ptr<string> idcard_ {};
    // The phone number of the contact.
    // 
    // This parameter is required.
    shared_ptr<string> mobile_ {};
    // The name of the certificate contact.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The webhook URLs of DingTalk, WeCom, or Lark chatbots. The value is a string in list format.
    shared_ptr<string> webhooks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
