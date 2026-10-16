// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && this->displayName_ == nullptr && this->parentFolderId_ == nullptr && this->payerAccountId_ == nullptr && this->resellAccountType_ == nullptr && this->tag_ == nullptr; };
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
    // The prefix of the account name. If you leave this parameter empty, the system randomly generates a prefix.
    // 
    // <props="china">Length: 2 to 50 characters.
    // 
    // <props="intl">Length: 2 to 37 characters.
    // 
    // Format: Can contain letters, digits, and special characters `_.-`. Must start and end with a letter or digit. Consecutive special characters `_.-` are not allowed.
    // 
    // The full account name is in the format of <AccountNamePrefix>@<ResourceDirectoryId>.aliyunid.com. Example: `alice@rd-3G****.aliyunid.com`.
    // 
    // The account name must be unique within the resource directory.
    shared_ptr<string> accountNamePrefix_ {};
    // The display name of the member.
    // 
    // Length: 2 to 50 characters.
    // 
    // Format: Can contain letters, digits, underscores (_), periods (.), hyphens (-), and spaces.
    // 
    // The display name must be unique within the resource directory.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The ID of the parent folder.
    shared_ptr<string> parentFolderId_ {};
    // The ID of the billing account. If you leave this parameter empty, the newly created member pays for its own resource consumption.
    shared_ptr<string> payerAccountId_ {};
    // The identity type of the member. Valid values:
    // 
    // - resell (default): reseller account. The created member automatically establishes a reseller relationship with your distributor. You must use the management account to pay for the new member.
    // - non_resell: non-reseller account. The created member is a regular Alibaba Cloud account that has no relationship with your current distributor. This account purchases resources directly from Alibaba Cloud and pays for its own resource consumption.
    // 
    // > This parameter is supported only for China site (Chinese mainland) distributor customers.
    shared_ptr<string> resellAccountType_ {};
    // The tags of the member.
    shared_ptr<vector<CreateResourceAccountRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
