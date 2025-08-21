// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEACCESSKEYPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEACCESSKEYPREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToManageAccessKeys, allowUserToManageAccessKeys_);
    };
    SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &&) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& operator=(const SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &) = default ;
    SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& operator=(SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUserToManageAccessKeys_ != nullptr; };
    // allowUserToManageAccessKeys Field Functions 
    bool hasAllowUserToManageAccessKeys() const { return this->allowUserToManageAccessKeys_ != nullptr;};
    void deleteAllowUserToManageAccessKeys() { this->allowUserToManageAccessKeys_ = nullptr;};
    inline bool allowUserToManageAccessKeys() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManageAccessKeys_, false) };
    inline SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference& setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys) { DARABONBA_PTR_SET_VALUE(allowUserToManageAccessKeys_, allowUserToManageAccessKeys) };


  protected:
    // Indicates whether RAM users can manage their AccessKey pairs.
    std::shared_ptr<bool> allowUserToManageAccessKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
