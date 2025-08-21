// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEPERSONALINFOPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEPERSONALINFOPREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
    };
    SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() = default ;
    SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(const SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &&) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() = default ;
    SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& operator=(const SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& operator=(SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUserToManagePersonalDingTalk_ != nullptr; };
    // allowUserToManagePersonalDingTalk Field Functions 
    bool hasAllowUserToManagePersonalDingTalk() const { return this->allowUserToManagePersonalDingTalk_ != nullptr;};
    void deleteAllowUserToManagePersonalDingTalk() { this->allowUserToManagePersonalDingTalk_ = nullptr;};
    inline bool allowUserToManagePersonalDingTalk() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePersonalDingTalk_, false) };
    inline SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk) { DARABONBA_PTR_SET_VALUE(allowUserToManagePersonalDingTalk_, allowUserToManagePersonalDingTalk) };


  protected:
    // Indicates whether RAM users can manage their personal DingTalk accounts, such as binding and unbinding of the accounts.
    std::shared_ptr<bool> allowUserToManagePersonalDingTalk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
