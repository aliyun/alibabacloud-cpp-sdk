// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEACCESSKEYPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEACCESSKEYPREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
    };
    GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &&) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& operator=(const GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& operator=(GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUserToManageAccessKeys_ != nullptr; };
    // allowUserToManageAccessKeys Field Functions 
    bool hasAllowUserToManageAccessKeys() const { return this->allowUserToManageAccessKeys_ != nullptr;};
    void deleteAllowUserToManageAccessKeys() { this->allowUserToManageAccessKeys_ = nullptr;};
    inline bool allowUserToManageAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageAccessKeys_, false) };
    inline GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManageAccessKeys_, allowUserToManageAccessKeys) };


  protected:
    // Indicates whether RAM users can manage their AccessKey pairs. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> allowUserToManageAccessKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
