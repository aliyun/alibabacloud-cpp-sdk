// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference.hpp>
#include <alibabacloud/models/GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBodySecurityPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyPreference, accessKeyPreference_);
      DARABONBA_PTR_TO_JSON(LoginProfilePreference, loginProfilePreference_);
      DARABONBA_PTR_TO_JSON(MFAPreference, MFAPreference_);
      DARABONBA_PTR_TO_JSON(MaxIdleDays, maxIdleDays_);
      DARABONBA_PTR_TO_JSON(PersonalInfoPreference, personalInfoPreference_);
      DARABONBA_PTR_TO_JSON(VerificationPreference, verificationPreference_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBodySecurityPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyPreference, accessKeyPreference_);
      DARABONBA_PTR_FROM_JSON(LoginProfilePreference, loginProfilePreference_);
      DARABONBA_PTR_FROM_JSON(MFAPreference, MFAPreference_);
      DARABONBA_PTR_FROM_JSON(MaxIdleDays, maxIdleDays_);
      DARABONBA_PTR_FROM_JSON(PersonalInfoPreference, personalInfoPreference_);
      DARABONBA_PTR_FROM_JSON(VerificationPreference, verificationPreference_);
    };
    GetSecurityPreferenceResponseBodySecurityPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreference(const GetSecurityPreferenceResponseBodySecurityPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreference(GetSecurityPreferenceResponseBodySecurityPreference &&) = default ;
    GetSecurityPreferenceResponseBodySecurityPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBodySecurityPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreference& operator=(const GetSecurityPreferenceResponseBodySecurityPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreference& operator=(GetSecurityPreferenceResponseBodySecurityPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyPreference_ != nullptr
        && this->loginProfilePreference_ != nullptr && this->MFAPreference_ != nullptr && this->maxIdleDays_ != nullptr && this->personalInfoPreference_ != nullptr && this->verificationPreference_ != nullptr; };
    // accessKeyPreference Field Functions 
    bool hasAccessKeyPreference() const { return this->accessKeyPreference_ != nullptr;};
    void deleteAccessKeyPreference() { this->accessKeyPreference_ = nullptr;};
    inline const Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference & accessKeyPreference() const { DARABONBA_PTR_GET_CONST(accessKeyPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference) };
    inline Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference accessKeyPreference() { DARABONBA_PTR_GET(accessKeyPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setAccessKeyPreference(const Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference & accessKeyPreference) { DARABONBA_PTR_SET_VALUE(accessKeyPreference_, accessKeyPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setAccessKeyPreference(Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference && accessKeyPreference) { DARABONBA_PTR_SET_RVALUE(accessKeyPreference_, accessKeyPreference) };


    // loginProfilePreference Field Functions 
    bool hasLoginProfilePreference() const { return this->loginProfilePreference_ != nullptr;};
    void deleteLoginProfilePreference() { this->loginProfilePreference_ = nullptr;};
    inline const Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference & loginProfilePreference() const { DARABONBA_PTR_GET_CONST(loginProfilePreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference) };
    inline Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference loginProfilePreference() { DARABONBA_PTR_GET(loginProfilePreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setLoginProfilePreference(const Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference & loginProfilePreference) { DARABONBA_PTR_SET_VALUE(loginProfilePreference_, loginProfilePreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setLoginProfilePreference(Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference && loginProfilePreference) { DARABONBA_PTR_SET_RVALUE(loginProfilePreference_, loginProfilePreference) };


    // MFAPreference Field Functions 
    bool hasMFAPreference() const { return this->MFAPreference_ != nullptr;};
    void deleteMFAPreference() { this->MFAPreference_ = nullptr;};
    inline const Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference & MFAPreference() const { DARABONBA_PTR_GET_CONST(MFAPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference) };
    inline Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference MFAPreference() { DARABONBA_PTR_GET(MFAPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setMFAPreference(const Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference & MFAPreference) { DARABONBA_PTR_SET_VALUE(MFAPreference_, MFAPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setMFAPreference(Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference && MFAPreference) { DARABONBA_PTR_SET_RVALUE(MFAPreference_, MFAPreference) };


    // maxIdleDays Field Functions 
    bool hasMaxIdleDays() const { return this->maxIdleDays_ != nullptr;};
    void deleteMaxIdleDays() { this->maxIdleDays_ = nullptr;};
    inline const Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays & maxIdleDays() const { DARABONBA_PTR_GET_CONST(maxIdleDays_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays) };
    inline Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays maxIdleDays() { DARABONBA_PTR_GET(maxIdleDays_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setMaxIdleDays(const Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays & maxIdleDays) { DARABONBA_PTR_SET_VALUE(maxIdleDays_, maxIdleDays) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setMaxIdleDays(Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays && maxIdleDays) { DARABONBA_PTR_SET_RVALUE(maxIdleDays_, maxIdleDays) };


    // personalInfoPreference Field Functions 
    bool hasPersonalInfoPreference() const { return this->personalInfoPreference_ != nullptr;};
    void deletePersonalInfoPreference() { this->personalInfoPreference_ = nullptr;};
    inline const Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference & personalInfoPreference() const { DARABONBA_PTR_GET_CONST(personalInfoPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference) };
    inline Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference personalInfoPreference() { DARABONBA_PTR_GET(personalInfoPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setPersonalInfoPreference(const Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference & personalInfoPreference) { DARABONBA_PTR_SET_VALUE(personalInfoPreference_, personalInfoPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setPersonalInfoPreference(Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference && personalInfoPreference) { DARABONBA_PTR_SET_RVALUE(personalInfoPreference_, personalInfoPreference) };


    // verificationPreference Field Functions 
    bool hasVerificationPreference() const { return this->verificationPreference_ != nullptr;};
    void deleteVerificationPreference() { this->verificationPreference_ = nullptr;};
    inline const Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference & verificationPreference() const { DARABONBA_PTR_GET_CONST(verificationPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference) };
    inline Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference verificationPreference() { DARABONBA_PTR_GET(verificationPreference_, Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setVerificationPreference(const Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference & verificationPreference) { DARABONBA_PTR_SET_VALUE(verificationPreference_, verificationPreference) };
    inline GetSecurityPreferenceResponseBodySecurityPreference& setVerificationPreference(Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference && verificationPreference) { DARABONBA_PTR_SET_RVALUE(verificationPreference_, verificationPreference) };


  protected:
    // The AccessKey pair preference.
    std::shared_ptr<Models::GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference_ = nullptr;
    // The logon preference.
    std::shared_ptr<Models::GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference_ = nullptr;
    // The MFA preference.
    std::shared_ptr<Models::GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference_ = nullptr;
    // The maximum idle periods. Unit: days.
    std::shared_ptr<Models::GetSecurityPreferenceResponseBodySecurityPreferenceMaxIdleDays> maxIdleDays_ = nullptr;
    // The personal information preference.
    std::shared_ptr<Models::GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference> personalInfoPreference_ = nullptr;
    // The MFA method preference.
    std::shared_ptr<Models::GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference> verificationPreference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
