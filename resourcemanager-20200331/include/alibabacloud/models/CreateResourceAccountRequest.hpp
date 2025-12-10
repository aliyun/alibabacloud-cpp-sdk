// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateResourceAccountRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateResourceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountId, payerAccountId_);
      DARABONBA_PTR_TO_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountId, payerAccountId_);
      DARABONBA_PTR_FROM_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateResourceAccountRequest() = default ;
    CreateResourceAccountRequest(const CreateResourceAccountRequest &) = default ;
    CreateResourceAccountRequest(CreateResourceAccountRequest &&) = default ;
    CreateResourceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceAccountRequest() = default ;
    CreateResourceAccountRequest& operator=(const CreateResourceAccountRequest &) = default ;
    CreateResourceAccountRequest& operator=(CreateResourceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && return this->displayName_ == nullptr && return this->parentFolderId_ == nullptr && return this->payerAccountId_ == nullptr && return this->resellAccountType_ == nullptr && return this->tag_ == nullptr; };
    // accountNamePrefix Field Functions 
    bool hasAccountNamePrefix() const { return this->accountNamePrefix_ != nullptr;};
    void deleteAccountNamePrefix() { this->accountNamePrefix_ = nullptr;};
    inline string accountNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(accountNamePrefix_, "") };
    inline CreateResourceAccountRequest& setAccountNamePrefix(string accountNamePrefix) { DARABONBA_PTR_SET_VALUE(accountNamePrefix_, accountNamePrefix) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateResourceAccountRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline CreateResourceAccountRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // payerAccountId Field Functions 
    bool hasPayerAccountId() const { return this->payerAccountId_ != nullptr;};
    void deletePayerAccountId() { this->payerAccountId_ = nullptr;};
    inline string payerAccountId() const { DARABONBA_PTR_GET_DEFAULT(payerAccountId_, "") };
    inline CreateResourceAccountRequest& setPayerAccountId(string payerAccountId) { DARABONBA_PTR_SET_VALUE(payerAccountId_, payerAccountId) };


    // resellAccountType Field Functions 
    bool hasResellAccountType() const { return this->resellAccountType_ != nullptr;};
    void deleteResellAccountType() { this->resellAccountType_ = nullptr;};
    inline string resellAccountType() const { DARABONBA_PTR_GET_DEFAULT(resellAccountType_, "") };
    inline CreateResourceAccountRequest& setResellAccountType(string resellAccountType) { DARABONBA_PTR_SET_VALUE(resellAccountType_, resellAccountType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateResourceAccountRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateResourceAccountRequestTag>) };
    inline vector<CreateResourceAccountRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateResourceAccountRequestTag>) };
    inline CreateResourceAccountRequest& setTag(const vector<CreateResourceAccountRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateResourceAccountRequest& setTag(vector<CreateResourceAccountRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The prefix for the Alibaba Cloud account name of the member. If you leave this parameter empty, the system randomly generates a prefix.
    // 
    // The prefix must be 2 to 37 characters in length.
    // 
    // The prefix can contain letters, digits, and special characters but cannot contain consecutive special characters. The prefix must start with a letter or digit and end with a letter or digit. Valid special characters include underscores (`_`), periods (`.`), and hyphens (-).
    // 
    // The complete Alibaba Cloud account name of a member is in the @.aliyunid.com format, such as `alice@rd-3G****.aliyunid.com`.
    // 
    // Each name must be unique in the resource directory.
    std::shared_ptr<string> accountNamePrefix_ = nullptr;
    // The display name of the member.
    // 
    // The name must be 2 to 50 characters in length.
    // 
    // The name can contain letters, digits, underscores (_), periods (.), hyphens (-), and spaces.
    // 
    // The name must be unique in the resource directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> parentFolderId_ = nullptr;
    // The ID of the billing account. If you leave this parameter empty, the newly created member is used as its billing account.
    std::shared_ptr<string> payerAccountId_ = nullptr;
    // The identity type of the member. Valid values:
    // 
    // *   resell (default): The member is an account for a reseller. A relationship is automatically established between the member and the reseller. The management account of the resource directory must be used as the billing account of the member.
    // *   non_resell: The member is not an account for a reseller. The member is an account that is not associated with a reseller. You can directly use the account to purchase Alibaba Cloud resources. The member is used as its own billing account.
    // 
    // >  This parameter is available only for resellers at the international site (alibabacloud.com).
    std::shared_ptr<string> resellAccountType_ = nullptr;
    // The tag of the member.
    std::shared_ptr<vector<CreateResourceAccountRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
