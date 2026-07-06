// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeleteServiceCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceCredentialId, serviceCredentialId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceCredentialId, serviceCredentialId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    DeleteServiceCredentialRequest() = default ;
    DeleteServiceCredentialRequest(const DeleteServiceCredentialRequest &) = default ;
    DeleteServiceCredentialRequest(DeleteServiceCredentialRequest &&) = default ;
    DeleteServiceCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceCredentialRequest() = default ;
    DeleteServiceCredentialRequest& operator=(const DeleteServiceCredentialRequest &) = default ;
    DeleteServiceCredentialRequest& operator=(DeleteServiceCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCredentialId_ == nullptr
        && this->userPrincipalName_ == nullptr; };
    // serviceCredentialId Field Functions 
    bool hasServiceCredentialId() const { return this->serviceCredentialId_ != nullptr;};
    void deleteServiceCredentialId() { this->serviceCredentialId_ = nullptr;};
    inline string getServiceCredentialId() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialId_, "") };
    inline DeleteServiceCredentialRequest& setServiceCredentialId(string serviceCredentialId) { DARABONBA_PTR_SET_VALUE(serviceCredentialId_, serviceCredentialId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DeleteServiceCredentialRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The service credential ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCredentialId_ {};
    // The logon name of the Resource Access Management (RAM) user. If this parameter is not specified, the service credential of the identity that invokes this operation is deleted.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
