// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEVERIFICATIONPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEVERIFICATIONPREFERENCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference& obj) { 
      DARABONBA_PTR_TO_JSON(VerificationTypes, verificationTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(VerificationTypes, verificationTypes_);
    };
    GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference(const GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference(GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference &&) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference& operator=(const GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference& operator=(GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->verificationTypes_ != nullptr; };
    // verificationTypes Field Functions 
    bool hasVerificationTypes() const { return this->verificationTypes_ != nullptr;};
    void deleteVerificationTypes() { this->verificationTypes_ = nullptr;};
    inline const vector<string> & verificationTypes() const { DARABONBA_PTR_GET_CONST(verificationTypes_, vector<string>) };
    inline vector<string> verificationTypes() { DARABONBA_PTR_GET(verificationTypes_, vector<string>) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference& setVerificationTypes(const vector<string> & verificationTypes) { DARABONBA_PTR_SET_VALUE(verificationTypes_, verificationTypes) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceVerificationPreference& setVerificationTypes(vector<string> && verificationTypes) { DARABONBA_PTR_SET_RVALUE(verificationTypes_, verificationTypes) };


  protected:
    // The MFA methods.
    std::shared_ptr<vector<string>> verificationTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
