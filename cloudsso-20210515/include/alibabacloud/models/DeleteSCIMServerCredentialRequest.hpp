// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCIMSERVERCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCIMSERVERCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteSCIMServerCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSCIMServerCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSCIMServerCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
    };
    DeleteSCIMServerCredentialRequest() = default ;
    DeleteSCIMServerCredentialRequest(const DeleteSCIMServerCredentialRequest &) = default ;
    DeleteSCIMServerCredentialRequest(DeleteSCIMServerCredentialRequest &&) = default ;
    DeleteSCIMServerCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSCIMServerCredentialRequest() = default ;
    DeleteSCIMServerCredentialRequest& operator=(const DeleteSCIMServerCredentialRequest &) = default ;
    DeleteSCIMServerCredentialRequest& operator=(DeleteSCIMServerCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->directoryId_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline DeleteSCIMServerCredentialRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteSCIMServerCredentialRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // The ID of the SCIM credential.
    shared_ptr<string> credentialId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
