// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEMFAPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEMFAPREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToManageMFADevices, allowUserToManageMFADevices_);
    };
    GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(const GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference &&) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference& operator=(const GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference& operator=(GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUserToManageMFADevices_ != nullptr; };
    // allowUserToManageMFADevices Field Functions 
    bool hasAllowUserToManageMFADevices() const { return this->allowUserToManageMFADevices_ != nullptr;};
    void deleteAllowUserToManageMFADevices() { this->allowUserToManageMFADevices_ = nullptr;};
    inline bool allowUserToManageMFADevices() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageMFADevices_, false) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference& setAllowUserToManageMFADevices(bool allowUserToManageMFADevices) { DARABONBA_PTR_SET_VALUE(allowUserToManageMFADevices_, allowUserToManageMFADevices) };


  protected:
    // Indicates whether RAM users can manage their MFA devices. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> allowUserToManageMFADevices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
