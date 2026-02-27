// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateCloudAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountId, payerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountId, payerAccountId_);
    };
    CreateCloudAccountRequest() = default ;
    CreateCloudAccountRequest(const CreateCloudAccountRequest &) = default ;
    CreateCloudAccountRequest(CreateCloudAccountRequest &&) = default ;
    CreateCloudAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountRequest() = default ;
    CreateCloudAccountRequest& operator=(const CreateCloudAccountRequest &) = default ;
    CreateCloudAccountRequest& operator=(CreateCloudAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->email_ == nullptr && this->parentFolderId_ == nullptr && this->payerAccountId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateCloudAccountRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateCloudAccountRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string getParentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline CreateCloudAccountRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // payerAccountId Field Functions 
    bool hasPayerAccountId() const { return this->payerAccountId_ != nullptr;};
    void deletePayerAccountId() { this->payerAccountId_ = nullptr;};
    inline string getPayerAccountId() const { DARABONBA_PTR_GET_DEFAULT(payerAccountId_, "") };
    inline CreateCloudAccountRequest& setPayerAccountId(string payerAccountId) { DARABONBA_PTR_SET_VALUE(payerAccountId_, payerAccountId) };


  protected:
    // The display name of the member account.
    // 
    // The name must be 2 to 50 characters in length and can contain letters, digits, underscores (_), periods (.), and hyphens (-).
    // 
    // The name must be unique in the current resource directory.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The email address used to log on to the cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The ID of the parent folder.
    shared_ptr<string> parentFolderId_ {};
    // The ID of the settlement account. If you do not specify this parameter, the current account is used for settlement.
    shared_ptr<string> payerAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
