// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERDELEGATEDADMINISTRATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERDELEGATEDADMINISTRATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class RegisterDelegatedAdministratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterDelegatedAdministratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterDelegatedAdministratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
    };
    RegisterDelegatedAdministratorRequest() = default ;
    RegisterDelegatedAdministratorRequest(const RegisterDelegatedAdministratorRequest &) = default ;
    RegisterDelegatedAdministratorRequest(RegisterDelegatedAdministratorRequest &&) = default ;
    RegisterDelegatedAdministratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterDelegatedAdministratorRequest() = default ;
    RegisterDelegatedAdministratorRequest& operator=(const RegisterDelegatedAdministratorRequest &) = default ;
    RegisterDelegatedAdministratorRequest& operator=(RegisterDelegatedAdministratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->servicePrincipal_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline RegisterDelegatedAdministratorRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // servicePrincipal Field Functions 
    bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
    void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
    inline string servicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
    inline RegisterDelegatedAdministratorRequest& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


  protected:
    // The ID of the member in the resource directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The identifier of the trusted service.
    // 
    // For more information, see the `Trusted service identifier` column in [Supported trusted services](https://help.aliyun.com/document_detail/208133.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> servicePrincipal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
