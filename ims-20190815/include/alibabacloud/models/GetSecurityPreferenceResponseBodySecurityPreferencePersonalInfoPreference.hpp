// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEPERSONALINFOPREFERENCE_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYPREFERENCERESPONSEBODYSECURITYPREFERENCEPERSONALINFOPREFERENCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUserToManagePersonalDingTalk, allowUserToManagePersonalDingTalk_);
    };
    GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(const GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &&) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference() = default ;
    GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& operator=(const GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &) = default ;
    GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& operator=(GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowUserToManagePersonalDingTalk_ != nullptr; };
    // allowUserToManagePersonalDingTalk Field Functions 
    bool hasAllowUserToManagePersonalDingTalk() const { return this->allowUserToManagePersonalDingTalk_ != nullptr;};
    void deleteAllowUserToManagePersonalDingTalk() { this->allowUserToManagePersonalDingTalk_ = nullptr;};
    inline bool allowUserToManagePersonalDingTalk() const { DARABONBA_PTR_GET_DEFAULT(allowUserToManagePersonalDingTalk_, false) };
    inline GetSecurityPreferenceResponseBodySecurityPreferencePersonalInfoPreference& setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk) { DARABONBA_PTR_SET_VALUE(allowUserToManagePersonalDingTalk_, allowUserToManagePersonalDingTalk) };


  protected:
    // Indicates whether RAM users can manage their personal DingTalk accounts, such as binding and unbinding of the accounts. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> allowUserToManagePersonalDingTalk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
