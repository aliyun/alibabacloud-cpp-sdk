// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAGSECURITYMOBILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAGSECURITYMOBILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ChangeAgSecurityMobileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAgSecurityMobileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(SecurityMobile, securityMobile_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAgSecurityMobileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(SecurityMobile, securityMobile_);
    };
    ChangeAgSecurityMobileRequest() = default ;
    ChangeAgSecurityMobileRequest(const ChangeAgSecurityMobileRequest &) = default ;
    ChangeAgSecurityMobileRequest(ChangeAgSecurityMobileRequest &&) = default ;
    ChangeAgSecurityMobileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAgSecurityMobileRequest() = default ;
    ChangeAgSecurityMobileRequest& operator=(const ChangeAgSecurityMobileRequest &) = default ;
    ChangeAgSecurityMobileRequest& operator=(ChangeAgSecurityMobileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->mpk_ == nullptr && this->pk_ == nullptr && this->securityMobile_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ChangeAgSecurityMobileRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline ChangeAgSecurityMobileRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline ChangeAgSecurityMobileRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // securityMobile Field Functions 
    bool hasSecurityMobile() const { return this->securityMobile_ != nullptr;};
    void deleteSecurityMobile() { this->securityMobile_ = nullptr;};
    inline string getSecurityMobile() const { DARABONBA_PTR_GET_DEFAULT(securityMobile_, "") };
    inline ChangeAgSecurityMobileRequest& setSecurityMobile(string securityMobile) { DARABONBA_PTR_SET_VALUE(securityMobile_, securityMobile) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
    // This parameter is required.
    shared_ptr<string> securityMobile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
