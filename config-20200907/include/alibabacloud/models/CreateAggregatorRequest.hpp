// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorAccounts, aggregatorAccounts_);
      DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_TO_JSON(AggregatorType, aggregatorType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorAccounts, aggregatorAccounts_);
      DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_FROM_JSON(AggregatorType, aggregatorType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateAggregatorRequest() = default ;
    CreateAggregatorRequest(const CreateAggregatorRequest &) = default ;
    CreateAggregatorRequest(CreateAggregatorRequest &&) = default ;
    CreateAggregatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregatorRequest() = default ;
    CreateAggregatorRequest& operator=(const CreateAggregatorRequest &) = default ;
    CreateAggregatorRequest& operator=(CreateAggregatorRequest &&) = default ;
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
      // The tag key of the resource. You can specify up to 20 tag keys.
      // 
      // The tag key cannot be an empty string. The tag key must be 1 to 64 characters in length and cannot start with `aliyun` or `acs`:. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag values.
      // 
      // The tag values can be an empty string or up to 128 characters in length. The tag values cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      // 
      // Each key-value must be unique. You can specify at most 20 tag values in each call.
      shared_ptr<string> value_ {};
    };

    class AggregatorAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggregatorAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      };
      friend void from_json(const Darabonba::Json& j, AggregatorAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      };
      AggregatorAccounts() = default ;
      AggregatorAccounts(const AggregatorAccounts &) = default ;
      AggregatorAccounts(AggregatorAccounts &&) = default ;
      AggregatorAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggregatorAccounts() = default ;
      AggregatorAccounts& operator=(const AggregatorAccounts &) = default ;
      AggregatorAccounts& operator=(AggregatorAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->accountType_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline AggregatorAccounts& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline AggregatorAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline AggregatorAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    protected:
      // The member account ID. For more information about how to obtain the ID of a member account, see [ListAccounts](https://help.aliyun.com/document_detail/160016.html).
      shared_ptr<int64_t> accountId_ {};
      // The name of the member account. For more information about how to obtain the name of a member account, see [ListAccounts](https://help.aliyun.com/document_detail/160016.html).
      shared_ptr<string> accountName_ {};
      // The type of the member account. Set this parameter to ResourceDirectory.
      shared_ptr<string> accountType_ {};
    };

    virtual bool empty() const override { return this->aggregatorAccounts_ == nullptr
        && this->aggregatorName_ == nullptr && this->aggregatorType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->folderId_ == nullptr
        && this->tag_ == nullptr; };
    // aggregatorAccounts Field Functions 
    bool hasAggregatorAccounts() const { return this->aggregatorAccounts_ != nullptr;};
    void deleteAggregatorAccounts() { this->aggregatorAccounts_ = nullptr;};
    inline const vector<CreateAggregatorRequest::AggregatorAccounts> & getAggregatorAccounts() const { DARABONBA_PTR_GET_CONST(aggregatorAccounts_, vector<CreateAggregatorRequest::AggregatorAccounts>) };
    inline vector<CreateAggregatorRequest::AggregatorAccounts> getAggregatorAccounts() { DARABONBA_PTR_GET(aggregatorAccounts_, vector<CreateAggregatorRequest::AggregatorAccounts>) };
    inline CreateAggregatorRequest& setAggregatorAccounts(const vector<CreateAggregatorRequest::AggregatorAccounts> & aggregatorAccounts) { DARABONBA_PTR_SET_VALUE(aggregatorAccounts_, aggregatorAccounts) };
    inline CreateAggregatorRequest& setAggregatorAccounts(vector<CreateAggregatorRequest::AggregatorAccounts> && aggregatorAccounts) { DARABONBA_PTR_SET_RVALUE(aggregatorAccounts_, aggregatorAccounts) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string getAggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline CreateAggregatorRequest& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // aggregatorType Field Functions 
    bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
    void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
    inline string getAggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
    inline CreateAggregatorRequest& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregatorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregatorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline CreateAggregatorRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAggregatorRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAggregatorRequest::Tag>) };
    inline vector<CreateAggregatorRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAggregatorRequest::Tag>) };
    inline CreateAggregatorRequest& setTag(const vector<CreateAggregatorRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAggregatorRequest& setTag(vector<CreateAggregatorRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The information about the member accounts in the account group. Example:
    // 
    //     [{
    //     	"accountId": 171322098523****,
    //     	"accountType":"ResourceDirectory",
    //                     "accountName":"Alice"
    //     }, {
    //     	"accountId": 100532098349****,
    //     	"accountType":"ResourceDirectory",
    //                     "accountName":"Tom"
    //     }]
    // 
    // >  If `AggregatorType` is set to `RD` or `FOLDER`, this parameter can be left empty, which indicates that all accounts in the resource directory are added to the global account group.
    shared_ptr<vector<CreateAggregatorRequest::AggregatorAccounts>> aggregatorAccounts_ {};
    // The name of the account group.
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorName_ {};
    // The type of the account group. Valid values:
    // 
    // *   RD: global account group.
    // *   FOLDER: account group of the folder.
    // *   CUSTOM (default): custom account group.
    shared_ptr<string> aggregatorType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The description of the account group.
    shared_ptr<string> description_ {};
    // The ID of the folder to which the account group is attached. You must specify this parameter if `AggregatorType` is set to `FOLDER`. Multiple resource folder IDs should be separated by commas (,).
    shared_ptr<string> folderId_ {};
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    shared_ptr<vector<CreateAggregatorRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
