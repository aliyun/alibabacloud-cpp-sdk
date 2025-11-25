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
        && return this->isConfirmed_ == nullptr && return this->isImmediate_ == nullptr && return this->lang_ == nullptr && return this->type_ == nullptr; };
    // isAgree Field Functions 
    bool hasIsAgree() const { return this->isAgree_ != nullptr;};
    void deleteIsAgree() { this->isAgree_ = nullptr;};
    inline bool isAgree() const { DARABONBA_PTR_GET_DEFAULT(isAgree_, false) };
    inline GrantSwitchAgreementRequest& setIsAgree(bool isAgree) { DARABONBA_PTR_SET_VALUE(isAgree_, isAgree) };


    // isConfirmed Field Functions 
    bool hasIsConfirmed() const { return this->isConfirmed_ != nullptr;};
    void deleteIsConfirmed() { this->isConfirmed_ = nullptr;};
    inline bool isConfirmed() const { DARABONBA_PTR_GET_DEFAULT(isConfirmed_, false) };
    inline GrantSwitchAgreementRequest& setIsConfirmed(bool isConfirmed) { DARABONBA_PTR_SET_VALUE(isConfirmed_, isConfirmed) };


    // isImmediate Field Functions 
    bool hasIsImmediate() const { return this->isImmediate_ != nullptr;};
    void deleteIsImmediate() { this->isImmediate_ = nullptr;};
    inline bool isImmediate() const { DARABONBA_PTR_GET_DEFAULT(isImmediate_, false) };
    inline GrantSwitchAgreementRequest& setIsImmediate(bool isImmediate) { DARABONBA_PTR_SET_VALUE(isImmediate_, isImmediate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GrantSwitchAgreementRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrantSwitchAgreementRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether to agree to migrate the client connections from overseas servers to the Singapore center.
    std::shared_ptr<bool> isAgree_ = nullptr;
    // Has the user confirmed the migration of Hong Kong region data to Singapore data center
    // 
    // - **true:** The user has confirmed that Hong Kong region data has been migrated to the Singapore data center. No notification popup needs to be displayed subsequently.
    // 
    // - **false**:The user has not confirmed that Hong Kong region data has been migrated to the Singapore data center. Notification popup still needs to be displayed subsequently.
    std::shared_ptr<bool> isConfirmed_ = nullptr;
    // Whether to schedule the migration of data from the Hong Kong region to the Singapore data center within 24 hours. Values:
    // - **true**: Schedule the switch within 24 hours.
    // - **false**: Do not schedule. Users with cloud products in the Hong Kong region will be automatically migrated on March 5, 2026; users without cloud products in the Hong Kong region will be automatically migrated on November 17, 2025.
    std::shared_ptr<bool> isImmediate_ = nullptr;
    // The language type for requests and responses. The default value is **zh**. Possible values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Switching type. Possible values:
    // 
    // - **sg_switch**: Migrate client connections from overseas servers to Singapore
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
