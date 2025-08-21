// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference.hpp>
#include <alibabacloud/models/SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceResponseBodySecurityPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyPreference, accessKeyPreference_);
      DARABONBA_PTR_TO_JSON(LoginProfilePreference, loginProfilePreference_);
      DARABONBA_PTR_TO_JSON(MFAPreference, MFAPreference_);
      DARABONBA_PTR_TO_JSON(MaxIdleDays, maxIdleDays_);
      DARABONBA_PTR_TO_JSON(PersonalInfoPreference, personalInfoPreference_);
      DARABONBA_PTR_TO_JSON(VerificationPreference, verificationPreference_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceResponseBodySecurityPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyPreference, accessKeyPreference_);
      DARABONBA_PTR_FROM_JSON(LoginProfilePreference, loginProfilePreference_);
      DARABONBA_PTR_FROM_JSON(MFAPreference, MFAPreference_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDays, maxIdleDays_);
      DARABONBA_PTR_FROM_JSON(PersonalInfoPreference, personalInfoPreference_);
      DARABONBA_PTR_FROM_JSON(VerificationPreference, verificationPreference_);
    };
    SetSecurityPreferenceResponseBodySecurityPreference() = default ;
    SetSecurityPreferenceResponseBodySecurityPreference(const SetSecurityPreferenceResponseBodySecurityPreference &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreference(SetSecurityPreferenceResponseBodySecurityPreference &&) = default ;
    SetSecurityPreferenceResponseBodySecurityPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceResponseBodySecurityPreference() = default ;
    SetSecurityPreferenceResponseBodySecurityPreference& operator=(const SetSecurityPreferenceResponseBodySecurityPreference &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreference& operator=(SetSecurityPreferenceResponseBodySecurityPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyPreference_ != nullptr
        && this->loginProfilePreference_ != nullptr && this->MFAPreference_ != nullptr && this->maxIdleDays_ != nullptr && this->personalInfoPreference_ != nullptr && this->verificationPreference_ != nullptr; };
    // accessKeyPreference Field Functions 
    bool hasAccessKeyPreference() const { return this->accessKeyPreference_ != nullptr;};
    void deleteAccessKeyPreference() { this->accessKeyPreference_ = nullptr;};
    inline const Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference & accessKeyPreference() const { DARABONBA_PTR_GET_CONST(accessKeyPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference) };
    inline Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference accessKeyPreference() { DARABONBA_PTR_GET(accessKeyPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setAccessKeyPreference(const Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference & accessKeyPreference) { DARABONBA_PTR_SET_VALUE(accessKeyPreference_, accessKeyPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setAccessKeyPreference(Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference && accessKeyPreference) { DARABONBA_PTR_SET_RVALUE(accessKeyPreference_, accessKeyPreference) };


    // loginProfilePreference Field Functions 
    bool hasLoginProfilePreference() const { return this->loginProfilePreference_ != nullptr;};
    void deleteLoginProfilePreference() { this->loginProfilePreference_ = nullptr;};
    inline const Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference & loginProfilePreference() const { DARABONBA_PTR_GET_CONST(loginProfilePreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference) };
    inline Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference loginProfilePreference() { DARABONBA_PTR_GET(loginProfilePreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setLoginProfilePreference(const Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference & loginProfilePreference) { DARABONBA_PTR_SET_VALUE(loginProfilePreference_, loginProfilePreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setLoginProfilePreference(Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference && loginProfilePreference) { DARABONBA_PTR_SET_RVALUE(loginProfilePreference_, loginProfilePreference) };


    // MFAPreference Field Functions 
    bool hasMFAPreference() const { return this->MFAPreference_ != nullptr;};
    void deleteMFAPreference() { this->MFAPreference_ = nullptr;};
    inline const Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference & MFAPreference() const { DARABONBA_PTR_GET_CONST(MFAPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference) };
    inline Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference MFAPreference() { DARABONBA_PTR_GET(MFAPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setMFAPreference(const Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference & MFAPreference) { DARABONBA_PTR_SET_VALUE(MFAPreference_, MFAPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setMFAPreference(Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference && MFAPreference) { DARABONBA_PTR_SET_RVALUE(MFAPreference_, MFAPreference) };


    // maxIdleDays Field Functions 
    bool hasMaxIdleDays() const { return this->maxIdleDays_ != nullptr;};
    void deleteMaxIdleDays() { this->maxIdleDays_ = nullptr;};
    inline const Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays & maxIdleDays() const { DARABONBA_PTR_GET_CONST(maxIdleDays_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays) };
    inline Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays maxIdleDays() { DARABONBA_PTR_GET(maxIdleDays_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setMaxIdleDays(const Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays & maxIdleDays) { DARABONBA_PTR_SET_VALUE(maxIdleDays_, maxIdleDays) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setMaxIdleDays(Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays && maxIdleDays) { DARABONBA_PTR_SET_RVALUE(maxIdleDays_, maxIdleDays) };


    // personalInfoPreference Field Functions 
    bool hasPersonalInfoPreference() const { return this->personalInfoPreference_ != nullptr;};
    void deletePersonalInfoPreference() { this->personalInfoPreference_ = nullptr;};
    inline const Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference & personalInfoPreference() const { DARABONBA_PTR_GET_CONST(personalInfoPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference) };
    inline Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference personalInfoPreference() { DARABONBA_PTR_GET(personalInfoPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setPersonalInfoPreference(const Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference & personalInfoPreference) { DARABONBA_PTR_SET_VALUE(personalInfoPreference_, personalInfoPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setPersonalInfoPreference(Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference && personalInfoPreference) { DARABONBA_PTR_SET_RVALUE(personalInfoPreference_, personalInfoPreference) };


    // verificationPreference Field Functions 
    bool hasVerificationPreference() const { return this->verificationPreference_ != nullptr;};
    void deleteVerificationPreference() { this->verificationPreference_ = nullptr;};
    inline const Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference & verificationPreference() const { DARABONBA_PTR_GET_CONST(verificationPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference) };
    inline Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference verificationPreference() { DARABONBA_PTR_GET(verificationPreference_, Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setVerificationPreference(const Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference & verificationPreference) { DARABONBA_PTR_SET_VALUE(verificationPreference_, verificationPreference) };
    inline SetSecurityPreferenceResponseBodySecurityPreference& setVerificationPreference(Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference && verificationPreference) { DARABONBA_PTR_SET_RVALUE(verificationPreference_, verificationPreference) };


  protected:
    // The AccessKey pair preference.
    std::shared_ptr<Models::SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference_ = nullptr;
    // The logon preference.
    std::shared_ptr<Models::SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference_ = nullptr;
    // The MFA preference.
    std::shared_ptr<Models::SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference_ = nullptr;
    // The maximum idle periods. Unit: days.
    std::shared_ptr<Models::SetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays> maxIdleDays_ = nullptr;
    // The personal information preference.
    std::shared_ptr<Models::SetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference> personalInfoPreference_ = nullptr;
    // The MFA method preference.
    std::shared_ptr<Models::SetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference> verificationPreference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
