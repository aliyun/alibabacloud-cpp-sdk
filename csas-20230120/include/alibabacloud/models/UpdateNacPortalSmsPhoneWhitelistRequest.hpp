// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACPORTALSMSPHONEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACPORTALSMSPHONEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateNacPortalSmsPhoneWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacPortalSmsPhoneWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Phones, phones_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacPortalSmsPhoneWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Phones, phones_);
    };
    UpdateNacPortalSmsPhoneWhitelistRequest() = default ;
    UpdateNacPortalSmsPhoneWhitelistRequest(const UpdateNacPortalSmsPhoneWhitelistRequest &) = default ;
    UpdateNacPortalSmsPhoneWhitelistRequest(UpdateNacPortalSmsPhoneWhitelistRequest &&) = default ;
    UpdateNacPortalSmsPhoneWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacPortalSmsPhoneWhitelistRequest() = default ;
    UpdateNacPortalSmsPhoneWhitelistRequest& operator=(const UpdateNacPortalSmsPhoneWhitelistRequest &) = default ;
    UpdateNacPortalSmsPhoneWhitelistRequest& operator=(UpdateNacPortalSmsPhoneWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phones_ == nullptr; };
    // phones Field Functions 
    bool hasPhones() const { return this->phones_ != nullptr;};
    void deletePhones() { this->phones_ = nullptr;};
    inline const vector<string> & getPhones() const { DARABONBA_PTR_GET_CONST(phones_, vector<string>) };
    inline vector<string> getPhones() { DARABONBA_PTR_GET(phones_, vector<string>) };
    inline UpdateNacPortalSmsPhoneWhitelistRequest& setPhones(const vector<string> & phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };
    inline UpdateNacPortalSmsPhoneWhitelistRequest& setPhones(vector<string> && phones) { DARABONBA_PTR_SET_RVALUE(phones_, phones) };


  protected:
    // The list of phone numbers.
    shared_ptr<vector<string>> phones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
