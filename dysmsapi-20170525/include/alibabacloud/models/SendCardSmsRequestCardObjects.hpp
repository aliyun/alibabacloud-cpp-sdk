// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCARDSMSREQUESTCARDOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_SENDCARDSMSREQUESTCARDOBJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendCardSmsRequestCardObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCardSmsRequestCardObjects& obj) { 
      DARABONBA_PTR_TO_JSON(customUrl, customUrl_);
      DARABONBA_PTR_TO_JSON(dyncParams, dyncParams_);
      DARABONBA_PTR_TO_JSON(mobile, mobile_);
    };
    friend void from_json(const Darabonba::Json& j, SendCardSmsRequestCardObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(customUrl, customUrl_);
      DARABONBA_PTR_FROM_JSON(dyncParams, dyncParams_);
      DARABONBA_PTR_FROM_JSON(mobile, mobile_);
    };
    SendCardSmsRequestCardObjects() = default ;
    SendCardSmsRequestCardObjects(const SendCardSmsRequestCardObjects &) = default ;
    SendCardSmsRequestCardObjects(SendCardSmsRequestCardObjects &&) = default ;
    SendCardSmsRequestCardObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCardSmsRequestCardObjects() = default ;
    SendCardSmsRequestCardObjects& operator=(const SendCardSmsRequestCardObjects &) = default ;
    SendCardSmsRequestCardObjects& operator=(SendCardSmsRequestCardObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customUrl_ != nullptr
        && this->dyncParams_ != nullptr && this->mobile_ != nullptr; };
    // customUrl Field Functions 
    bool hasCustomUrl() const { return this->customUrl_ != nullptr;};
    void deleteCustomUrl() { this->customUrl_ = nullptr;};
    inline string customUrl() const { DARABONBA_PTR_GET_DEFAULT(customUrl_, "") };
    inline SendCardSmsRequestCardObjects& setCustomUrl(string customUrl) { DARABONBA_PTR_SET_VALUE(customUrl_, customUrl) };


    // dyncParams Field Functions 
    bool hasDyncParams() const { return this->dyncParams_ != nullptr;};
    void deleteDyncParams() { this->dyncParams_ = nullptr;};
    inline string dyncParams() const { DARABONBA_PTR_GET_DEFAULT(dyncParams_, "") };
    inline SendCardSmsRequestCardObjects& setDyncParams(string dyncParams) { DARABONBA_PTR_SET_VALUE(dyncParams_, dyncParams) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline SendCardSmsRequestCardObjects& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


  protected:
    // The URL to which the message is redirected if the message fails to be rendered.
    std::shared_ptr<string> customUrl_ = nullptr;
    // The variables. Special characters, such as $ and {}, do not need to be entered.
    std::shared_ptr<string> dyncParams_ = nullptr;
    // The mobile phone number.
    std::shared_ptr<string> mobile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
