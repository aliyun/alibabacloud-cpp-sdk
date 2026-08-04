// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOWAGACCOUNTLOGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOWAGACCOUNTLOGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AllowAgAccountLoginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllowAgAccountLoginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, AllowAgAccountLoginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgAccountType, agAccountType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    AllowAgAccountLoginRequest() = default ;
    AllowAgAccountLoginRequest(const AllowAgAccountLoginRequest &) = default ;
    AllowAgAccountLoginRequest(AllowAgAccountLoginRequest &&) = default ;
    AllowAgAccountLoginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllowAgAccountLoginRequest() = default ;
    AllowAgAccountLoginRequest& operator=(const AllowAgAccountLoginRequest &) = default ;
    AllowAgAccountLoginRequest& operator=(AllowAgAccountLoginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agAccountType_ == nullptr
        && this->appName_ == nullptr && this->mpk_ == nullptr && this->pk_ == nullptr; };
    // agAccountType Field Functions 
    bool hasAgAccountType() const { return this->agAccountType_ != nullptr;};
    void deleteAgAccountType() { this->agAccountType_ = nullptr;};
    inline string getAgAccountType() const { DARABONBA_PTR_GET_DEFAULT(agAccountType_, "") };
    inline AllowAgAccountLoginRequest& setAgAccountType(string agAccountType) { DARABONBA_PTR_SET_VALUE(agAccountType_, agAccountType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AllowAgAccountLoginRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline AllowAgAccountLoginRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline AllowAgAccountLoginRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> agAccountType_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
