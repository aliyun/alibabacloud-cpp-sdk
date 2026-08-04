// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATEAGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATEAGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AsyncCreateAgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateAgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_TO_JSON(MaserAccountInfo, maserAccountInfo_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateAgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
      DARABONBA_PTR_FROM_JSON(MaserAccountInfo, maserAccountInfo_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
    };
    AsyncCreateAgAccountRequest() = default ;
    AsyncCreateAgAccountRequest(const AsyncCreateAgAccountRequest &) = default ;
    AsyncCreateAgAccountRequest(AsyncCreateAgAccountRequest &&) = default ;
    AsyncCreateAgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateAgAccountRequest() = default ;
    AsyncCreateAgAccountRequest& operator=(const AsyncCreateAgAccountRequest &) = default ;
    AsyncCreateAgAccountRequest& operator=(AsyncCreateAgAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loginEmail_ == nullptr
        && this->maserAccountInfo_ == nullptr && this->mpk_ == nullptr; };
    // loginEmail Field Functions 
    bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
    void deleteLoginEmail() { this->loginEmail_ = nullptr;};
    inline string getLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
    inline AsyncCreateAgAccountRequest& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


    // maserAccountInfo Field Functions 
    bool hasMaserAccountInfo() const { return this->maserAccountInfo_ != nullptr;};
    void deleteMaserAccountInfo() { this->maserAccountInfo_ = nullptr;};
    inline string getMaserAccountInfo() const { DARABONBA_PTR_GET_DEFAULT(maserAccountInfo_, "") };
    inline AsyncCreateAgAccountRequest& setMaserAccountInfo(string maserAccountInfo) { DARABONBA_PTR_SET_VALUE(maserAccountInfo_, maserAccountInfo) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline AsyncCreateAgAccountRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


  protected:
    // This parameter is required.
    shared_ptr<string> loginEmail_ {};
    // This parameter is required.
    shared_ptr<string> maserAccountInfo_ {};
    // This parameter is required.
    shared_ptr<string> mpk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
