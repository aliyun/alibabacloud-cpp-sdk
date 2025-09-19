// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LoginInstanceRequestInstanceLoginInfo.hpp>
#include <alibabacloud/models/LoginInstanceRequestPartnerInfo.hpp>
#include <alibabacloud/models/LoginInstanceRequestUserAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceLoginInfo, instanceLoginInfo_);
      DARABONBA_PTR_TO_JSON(PartnerInfo, partnerInfo_);
      DARABONBA_PTR_TO_JSON(UserAccount, userAccount_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceLoginInfo, instanceLoginInfo_);
      DARABONBA_PTR_FROM_JSON(PartnerInfo, partnerInfo_);
      DARABONBA_PTR_FROM_JSON(UserAccount, userAccount_);
    };
    LoginInstanceRequest() = default ;
    LoginInstanceRequest(const LoginInstanceRequest &) = default ;
    LoginInstanceRequest(LoginInstanceRequest &&) = default ;
    LoginInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequest() = default ;
    LoginInstanceRequest& operator=(const LoginInstanceRequest &) = default ;
    LoginInstanceRequest& operator=(LoginInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceLoginInfo_ != nullptr
        && this->partnerInfo_ != nullptr && this->userAccount_ != nullptr; };
    // instanceLoginInfo Field Functions 
    bool hasInstanceLoginInfo() const { return this->instanceLoginInfo_ != nullptr;};
    void deleteInstanceLoginInfo() { this->instanceLoginInfo_ = nullptr;};
    inline const LoginInstanceRequestInstanceLoginInfo & instanceLoginInfo() const { DARABONBA_PTR_GET_CONST(instanceLoginInfo_, LoginInstanceRequestInstanceLoginInfo) };
    inline LoginInstanceRequestInstanceLoginInfo instanceLoginInfo() { DARABONBA_PTR_GET(instanceLoginInfo_, LoginInstanceRequestInstanceLoginInfo) };
    inline LoginInstanceRequest& setInstanceLoginInfo(const LoginInstanceRequestInstanceLoginInfo & instanceLoginInfo) { DARABONBA_PTR_SET_VALUE(instanceLoginInfo_, instanceLoginInfo) };
    inline LoginInstanceRequest& setInstanceLoginInfo(LoginInstanceRequestInstanceLoginInfo && instanceLoginInfo) { DARABONBA_PTR_SET_RVALUE(instanceLoginInfo_, instanceLoginInfo) };


    // partnerInfo Field Functions 
    bool hasPartnerInfo() const { return this->partnerInfo_ != nullptr;};
    void deletePartnerInfo() { this->partnerInfo_ = nullptr;};
    inline const LoginInstanceRequestPartnerInfo & partnerInfo() const { DARABONBA_PTR_GET_CONST(partnerInfo_, LoginInstanceRequestPartnerInfo) };
    inline LoginInstanceRequestPartnerInfo partnerInfo() { DARABONBA_PTR_GET(partnerInfo_, LoginInstanceRequestPartnerInfo) };
    inline LoginInstanceRequest& setPartnerInfo(const LoginInstanceRequestPartnerInfo & partnerInfo) { DARABONBA_PTR_SET_VALUE(partnerInfo_, partnerInfo) };
    inline LoginInstanceRequest& setPartnerInfo(LoginInstanceRequestPartnerInfo && partnerInfo) { DARABONBA_PTR_SET_RVALUE(partnerInfo_, partnerInfo) };


    // userAccount Field Functions 
    bool hasUserAccount() const { return this->userAccount_ != nullptr;};
    void deleteUserAccount() { this->userAccount_ = nullptr;};
    inline const LoginInstanceRequestUserAccount & userAccount() const { DARABONBA_PTR_GET_CONST(userAccount_, LoginInstanceRequestUserAccount) };
    inline LoginInstanceRequestUserAccount userAccount() { DARABONBA_PTR_GET(userAccount_, LoginInstanceRequestUserAccount) };
    inline LoginInstanceRequest& setUserAccount(const LoginInstanceRequestUserAccount & userAccount) { DARABONBA_PTR_SET_VALUE(userAccount_, userAccount) };
    inline LoginInstanceRequest& setUserAccount(LoginInstanceRequestUserAccount && userAccount) { DARABONBA_PTR_SET_RVALUE(userAccount_, userAccount) };


  protected:
    std::shared_ptr<LoginInstanceRequestInstanceLoginInfo> instanceLoginInfo_ = nullptr;
    std::shared_ptr<LoginInstanceRequestPartnerInfo> partnerInfo_ = nullptr;
    std::shared_ptr<LoginInstanceRequestUserAccount> userAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
