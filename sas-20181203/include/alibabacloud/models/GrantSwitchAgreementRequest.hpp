// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTSWITCHAGREEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTSWITCHAGREEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GrantSwitchAgreementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantSwitchAgreementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsAgree, isAgree_);
      DARABONBA_PTR_TO_JSON(IsConfirmed, isConfirmed_);
      DARABONBA_PTR_TO_JSON(IsImmediate, isImmediate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GrantSwitchAgreementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsAgree, isAgree_);
      DARABONBA_PTR_FROM_JSON(IsConfirmed, isConfirmed_);
      DARABONBA_PTR_FROM_JSON(IsImmediate, isImmediate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GrantSwitchAgreementRequest() = default ;
    GrantSwitchAgreementRequest(const GrantSwitchAgreementRequest &) = default ;
    GrantSwitchAgreementRequest(GrantSwitchAgreementRequest &&) = default ;
    GrantSwitchAgreementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantSwitchAgreementRequest() = default ;
    GrantSwitchAgreementRequest& operator=(const GrantSwitchAgreementRequest &) = default ;
    GrantSwitchAgreementRequest& operator=(GrantSwitchAgreementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isAgree_ == nullptr
        && this->isConfirmed_ == nullptr && this->isImmediate_ == nullptr && this->lang_ == nullptr && this->type_ == nullptr; };
    // isAgree Field Functions 
    bool hasIsAgree() const { return this->isAgree_ != nullptr;};
    void deleteIsAgree() { this->isAgree_ = nullptr;};
    inline bool getIsAgree() const { DARABONBA_PTR_GET_DEFAULT(isAgree_, false) };
    inline GrantSwitchAgreementRequest& setIsAgree(bool isAgree) { DARABONBA_PTR_SET_VALUE(isAgree_, isAgree) };


    // isConfirmed Field Functions 
    bool hasIsConfirmed() const { return this->isConfirmed_ != nullptr;};
    void deleteIsConfirmed() { this->isConfirmed_ = nullptr;};
    inline bool getIsConfirmed() const { DARABONBA_PTR_GET_DEFAULT(isConfirmed_, false) };
    inline GrantSwitchAgreementRequest& setIsConfirmed(bool isConfirmed) { DARABONBA_PTR_SET_VALUE(isConfirmed_, isConfirmed) };


    // isImmediate Field Functions 
    bool hasIsImmediate() const { return this->isImmediate_ != nullptr;};
    void deleteIsImmediate() { this->isImmediate_ = nullptr;};
    inline bool getIsImmediate() const { DARABONBA_PTR_GET_DEFAULT(isImmediate_, false) };
    inline GrantSwitchAgreementRequest& setIsImmediate(bool isImmediate) { DARABONBA_PTR_SET_VALUE(isImmediate_, isImmediate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GrantSwitchAgreementRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrantSwitchAgreementRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether you agree to the data migration from the Hong Kong (China) region to the Singapore data center. Valid values:
    // 
    // - **true**: Agree.
    // 
    // - **false**: Disagree.
    shared_ptr<bool> isAgree_ {};
    // Specifies whether the user confirms that the data migration from the Hong Kong (China) region to the Singapore data center has been completed.
    // 
    // - **true**: Confirmed. The user has confirmed that the data migration from the Hong Kong (China) region to the Singapore data center has been completed, and the notification pop-up window no longer needs to be displayed.
    // - **false**: Not confirmed. The user has not confirmed that the data migration from the Hong Kong (China) region to the Singapore data center has been completed, and the notification pop-up window still needs to be displayed.
    shared_ptr<bool> isConfirmed_ {};
    // Specifies whether to schedule data migration of data from the Hong Kong (China) region to the Singapore data center within 24 hours. Valid values:
    // 
    // - **true**: Schedule the switch within 24 hours.
    // 
    // - **false**: Do not schedule. For users who have cloud services in the Hong Kong (China) region, data migration will be automatically completed on March 5, 2026. For users who do not have cloud services in the Hong Kong (China) region, data migration will be automatically completed on November 17, 2025.
    shared_ptr<bool> isImmediate_ {};
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The switch type. Valid values:
    // 
    // - **sg_switch**: data migration from the Hong Kong (China) region to the Singapore data center.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
