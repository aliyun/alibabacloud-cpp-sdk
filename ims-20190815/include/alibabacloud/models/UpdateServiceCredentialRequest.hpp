// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateServiceCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceCredentialId, serviceCredentialId_);
      DARABONBA_PTR_TO_JSON(ServiceCredentialName, serviceCredentialName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceCredentialId, serviceCredentialId_);
      DARABONBA_PTR_FROM_JSON(ServiceCredentialName, serviceCredentialName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    UpdateServiceCredentialRequest() = default ;
    UpdateServiceCredentialRequest(const UpdateServiceCredentialRequest &) = default ;
    UpdateServiceCredentialRequest(UpdateServiceCredentialRequest &&) = default ;
    UpdateServiceCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceCredentialRequest() = default ;
    UpdateServiceCredentialRequest& operator=(const UpdateServiceCredentialRequest &) = default ;
    UpdateServiceCredentialRequest& operator=(UpdateServiceCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCredentialId_ == nullptr
        && this->serviceCredentialName_ == nullptr && this->status_ == nullptr && this->userPrincipalName_ == nullptr; };
    // serviceCredentialId Field Functions 
    bool hasServiceCredentialId() const { return this->serviceCredentialId_ != nullptr;};
    void deleteServiceCredentialId() { this->serviceCredentialId_ = nullptr;};
    inline string getServiceCredentialId() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialId_, "") };
    inline UpdateServiceCredentialRequest& setServiceCredentialId(string serviceCredentialId) { DARABONBA_PTR_SET_VALUE(serviceCredentialId_, serviceCredentialId) };


    // serviceCredentialName Field Functions 
    bool hasServiceCredentialName() const { return this->serviceCredentialName_ != nullptr;};
    void deleteServiceCredentialName() { this->serviceCredentialName_ = nullptr;};
    inline string getServiceCredentialName() const { DARABONBA_PTR_GET_DEFAULT(serviceCredentialName_, "") };
    inline UpdateServiceCredentialRequest& setServiceCredentialName(string serviceCredentialName) { DARABONBA_PTR_SET_VALUE(serviceCredentialName_, serviceCredentialName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateServiceCredentialRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline UpdateServiceCredentialRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The service credential ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceCredentialId_ {};
    // The name of the service credential. The name must be 1 to 128 characters in length and can contain letters, digits, periods (.), hyphens (-), and underscores (_). Specify at least one of Status and ServiceCredentialName.
    shared_ptr<string> serviceCredentialName_ {};
    // The status of the service credential. Valid values:
    // - Active
    // - Inactive
    // 
    // Specify at least one of Status and ServiceCredentialName.
    shared_ptr<string> status_ {};
    // The logon name of the Resource Access Management (RAM) user. If this parameter is not specified, the service credential of the identity that invokes this operation is modified.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
