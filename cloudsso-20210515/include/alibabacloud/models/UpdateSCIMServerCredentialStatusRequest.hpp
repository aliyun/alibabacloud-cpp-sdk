// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCIMSERVERCREDENTIALSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCIMSERVERCREDENTIALSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateSCIMServerCredentialStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSCIMServerCredentialStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewStatus, newStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSCIMServerCredentialStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewStatus, newStatus_);
    };
    UpdateSCIMServerCredentialStatusRequest() = default ;
    UpdateSCIMServerCredentialStatusRequest(const UpdateSCIMServerCredentialStatusRequest &) = default ;
    UpdateSCIMServerCredentialStatusRequest(UpdateSCIMServerCredentialStatusRequest &&) = default ;
    UpdateSCIMServerCredentialStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSCIMServerCredentialStatusRequest() = default ;
    UpdateSCIMServerCredentialStatusRequest& operator=(const UpdateSCIMServerCredentialStatusRequest &) = default ;
    UpdateSCIMServerCredentialStatusRequest& operator=(UpdateSCIMServerCredentialStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->directoryId_ == nullptr && this->newStatus_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline UpdateSCIMServerCredentialStatusRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateSCIMServerCredentialStatusRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newStatus Field Functions 
    bool hasNewStatus() const { return this->newStatus_ != nullptr;};
    void deleteNewStatus() { this->newStatus_ = nullptr;};
    inline string getNewStatus() const { DARABONBA_PTR_GET_DEFAULT(newStatus_, "") };
    inline UpdateSCIMServerCredentialStatusRequest& setNewStatus(string newStatus) { DARABONBA_PTR_SET_VALUE(newStatus_, newStatus) };


  protected:
    // The ID of the SCIM credential.
    shared_ptr<string> credentialId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The new status of the SCIM credential. Valid values:
    // 
    // - Enabled: The SCIM credential is enabled.
    // 
    // - Disabled: The SCIM credential is disabled.
    shared_ptr<string> newStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
