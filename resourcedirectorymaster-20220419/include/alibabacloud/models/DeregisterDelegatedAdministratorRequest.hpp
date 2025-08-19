// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEREGISTERDELEGATEDADMINISTRATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEREGISTERDELEGATEDADMINISTRATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DeregisterDelegatedAdministratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeregisterDelegatedAdministratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, DeregisterDelegatedAdministratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
    };
    DeregisterDelegatedAdministratorRequest() = default ;
    DeregisterDelegatedAdministratorRequest(const DeregisterDelegatedAdministratorRequest &) = default ;
    DeregisterDelegatedAdministratorRequest(DeregisterDelegatedAdministratorRequest &&) = default ;
    DeregisterDelegatedAdministratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeregisterDelegatedAdministratorRequest() = default ;
    DeregisterDelegatedAdministratorRequest& operator=(const DeregisterDelegatedAdministratorRequest &) = default ;
    DeregisterDelegatedAdministratorRequest& operator=(DeregisterDelegatedAdministratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->servicePrincipal_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DeregisterDelegatedAdministratorRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // servicePrincipal Field Functions 
    bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
    void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
    inline string servicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
    inline DeregisterDelegatedAdministratorRequest& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


  protected:
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The identifier of the trusted service.
    // 
    // This parameter is required.
    std::shared_ptr<string> servicePrincipal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
