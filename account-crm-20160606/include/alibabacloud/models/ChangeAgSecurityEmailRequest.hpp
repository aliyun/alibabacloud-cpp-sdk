// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAGSECURITYEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAGSECURITYEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ChangeAgSecurityEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAgSecurityEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(SecurityEmail, securityEmail_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAgSecurityEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(SecurityEmail, securityEmail_);
    };
    ChangeAgSecurityEmailRequest() = default ;
    ChangeAgSecurityEmailRequest(const ChangeAgSecurityEmailRequest &) = default ;
    ChangeAgSecurityEmailRequest(ChangeAgSecurityEmailRequest &&) = default ;
    ChangeAgSecurityEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAgSecurityEmailRequest() = default ;
    ChangeAgSecurityEmailRequest& operator=(const ChangeAgSecurityEmailRequest &) = default ;
    ChangeAgSecurityEmailRequest& operator=(ChangeAgSecurityEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->mpk_ == nullptr && this->pk_ == nullptr && this->securityEmail_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ChangeAgSecurityEmailRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline ChangeAgSecurityEmailRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline ChangeAgSecurityEmailRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // securityEmail Field Functions 
    bool hasSecurityEmail() const { return this->securityEmail_ != nullptr;};
    void deleteSecurityEmail() { this->securityEmail_ = nullptr;};
    inline string getSecurityEmail() const { DARABONBA_PTR_GET_DEFAULT(securityEmail_, "") };
    inline ChangeAgSecurityEmailRequest& setSecurityEmail(string securityEmail) { DARABONBA_PTR_SET_VALUE(securityEmail_, securityEmail) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> securityEmail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
