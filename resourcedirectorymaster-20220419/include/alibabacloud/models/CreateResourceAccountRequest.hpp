// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class CreateResourceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountId, payerAccountId_);
      DARABONBA_PTR_TO_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && this->displayName_ == nullptr && this->dryRun_ == nullptr && this->parentFolderId_ == nullptr && this->payerAccountId_ == nullptr && this->resellAccountType_ == nullptr
        && this->tag_ == nullptr; };
    // accountNamePrefix Field Functions 
    bool hasAccountNamePrefix() const { return this->accountNamePrefix_ != nullptr;};
    void deleteAccountNamePrefix() { this->accountNamePrefix_ = nullptr;};
    inline string getAccountNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(accountNamePrefix_, "") };
    inline CreateResourceAccountRequest& setAccountNamePrefix(string accountNamePrefix) { DARABONBA_PTR_SET_VALUE(accountNamePrefix_, accountNamePrefix) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateResourceAccountRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateResourceAccountRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string getParentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline CreateResourceAccountRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // payerAccountId Field Functions 
    bool hasPayerAccountId() const { return this->payerAccountId_ != nullptr;};
    void deletePayerAccountId() { this->payerAccountId_ = nullptr;};
    inline string getPayerAccountId() const { DARABONBA_PTR_GET_DEFAULT(payerAccountId_, "") };
    inline CreateResourceAccountRequest& setPayerAccountId(string payerAccountId) { DARABONBA_PTR_SET_VALUE(payerAccountId_, payerAccountId) };


    // resellAccountType Field Functions 
    bool hasResellAccountType() const { return this->resellAccountType_ != nullptr;};
    void deleteResellAccountType() { this->resellAccountType_ = nullptr;};
    inline string getResellAccountType() const { DARABONBA_PTR_GET_DEFAULT(resellAccountType_, "") };
    inline CreateResourceAccountRequest& setResellAccountType(string resellAccountType) { DARABONBA_PTR_SET_VALUE(resellAccountType_, resellAccountType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateResourceAccountRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateResourceAccountRequest::Tag>) };
    inline vector<CreateResourceAccountRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateResourceAccountRequest::Tag>) };
    inline CreateResourceAccountRequest& setTag(const vector<CreateResourceAccountRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateResourceAccountRequest& setTag(vector<CreateResourceAccountRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The prefix for the Alibaba Cloud account name of the member. If you leave this parameter empty, the system randomly generates a prefix.
    // 
    // The prefix must be 2 to 37 characters in length.
    // 
    // The prefix can contain letters, digits, and special characters but cannot contain consecutive special characters. The prefix must start with a letter or digit and end with a letter or digit. Valid special characters include underscores (`_`), periods (.), and hyphens (`-`).
    // 
    // The complete Alibaba Cloud account name of a member in a resource directory is in the @.aliyunid.com format, such as `alice@rd-3G****.aliyunid.com`.
    // 
    // Each name must be unique in the resource directory.
    shared_ptr<string> accountNamePrefix_ {};
    // The display name of the member.
    // 
    // The name must be 2 to 50 characters in length.
    // 
    // The name can contain letters, digits, underscores (_), periods (.), hyphens (-), and spaces.
    // 
    // The name must be unique in the resource directory.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. The system checks whether an identity type can be specified for the member. If the request does not pass the dry run, an error code is returned.
    // *   false (default): performs a dry run and performs the actual request.
    shared_ptr<bool> dryRun_ {};
    // The ID of the parent folder.
    shared_ptr<string> parentFolderId_ {};
    // The ID of the billing account. If you leave this parameter empty, the newly created member is used as its billing account.
    shared_ptr<string> payerAccountId_ {};
    // The identity type of the member. Valid values:
    // 
    // *   resell: The member is an account for a reseller. This is the default value. A relationship is automatically established between the member and the reseller. The management account of the resource directory must be used as the billing account of the member.
    // *   non_resell: The member is not an account for a reseller. The member is an account that is not associated with a reseller. You can directly use the account to purchase Alibaba Cloud resources. The member is used as its own billing account.
    // 
    // > This parameter is available only for resellers at the international site (alibabacloud.com).
    shared_ptr<string> resellAccountType_ {};
    // The tag of the member.
    shared_ptr<vector<CreateResourceAccountRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
