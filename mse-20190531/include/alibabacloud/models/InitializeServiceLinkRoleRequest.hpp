// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZESERVICELINKROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZESERVICELINKROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class InitializeServiceLinkRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeServiceLinkRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeServiceLinkRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    InitializeServiceLinkRoleRequest() = default ;
    InitializeServiceLinkRoleRequest(const InitializeServiceLinkRoleRequest &) = default ;
    InitializeServiceLinkRoleRequest(InitializeServiceLinkRoleRequest &&) = default ;
    InitializeServiceLinkRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeServiceLinkRoleRequest() = default ;
    InitializeServiceLinkRoleRequest& operator=(const InitializeServiceLinkRoleRequest &) = default ;
    InitializeServiceLinkRoleRequest& operator=(InitializeServiceLinkRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->roleName_ == nullptr && this->token_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline InitializeServiceLinkRoleRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline InitializeServiceLinkRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline InitializeServiceLinkRoleRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> roleName_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
