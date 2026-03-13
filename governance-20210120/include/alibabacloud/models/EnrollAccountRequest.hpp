// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENROLLACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENROLLACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class EnrollAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrollAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, EnrollAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    EnrollAccountRequest() = default ;
    EnrollAccountRequest(const EnrollAccountRequest &) = default ;
    EnrollAccountRequest(EnrollAccountRequest &&) = default ;
    EnrollAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrollAccountRequest() = default ;
    EnrollAccountRequest& operator=(const EnrollAccountRequest &) = default ;
    EnrollAccountRequest& operator=(EnrollAccountRequest &&) = default ;
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

    class BaselineItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BaselineItems() = default ;
      BaselineItems(const BaselineItems &) = default ;
      BaselineItems(BaselineItems &&) = default ;
      BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItems() = default ;
      BaselineItems& operator=(const BaselineItems &) = default ;
      BaselineItems& operator=(BaselineItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->skip_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline BaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline BaselineItems& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The configurations of the baseline item.
      shared_ptr<string> config_ {};
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // Whether to skip the baseline item. Valid values:
      // 
      // *   false: The baseline item is not skipped.
      // *   true: The baseline item is skipped.
      shared_ptr<bool> skip_ {};
      // The version of the baseline item.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && this->accountUid_ == nullptr && this->baselineId_ == nullptr && this->baselineItems_ == nullptr && this->displayName_ == nullptr && this->folderId_ == nullptr
        && this->payerAccountUid_ == nullptr && this->regionId_ == nullptr && this->resellAccountType_ == nullptr && this->tag_ == nullptr; };
    // accountNamePrefix Field Functions 
    bool hasAccountNamePrefix() const { return this->accountNamePrefix_ != nullptr;};
    void deleteAccountNamePrefix() { this->accountNamePrefix_ = nullptr;};
    inline string getAccountNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(accountNamePrefix_, "") };
    inline EnrollAccountRequest& setAccountNamePrefix(string accountNamePrefix) { DARABONBA_PTR_SET_VALUE(accountNamePrefix_, accountNamePrefix) };


    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t getAccountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline EnrollAccountRequest& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline EnrollAccountRequest& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<EnrollAccountRequest::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<EnrollAccountRequest::BaselineItems>) };
    inline vector<EnrollAccountRequest::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<EnrollAccountRequest::BaselineItems>) };
    inline EnrollAccountRequest& setBaselineItems(const vector<EnrollAccountRequest::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline EnrollAccountRequest& setBaselineItems(vector<EnrollAccountRequest::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline EnrollAccountRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline EnrollAccountRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // payerAccountUid Field Functions 
    bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
    void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
    inline int64_t getPayerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
    inline EnrollAccountRequest& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnrollAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellAccountType Field Functions 
    bool hasResellAccountType() const { return this->resellAccountType_ != nullptr;};
    void deleteResellAccountType() { this->resellAccountType_ = nullptr;};
    inline string getResellAccountType() const { DARABONBA_PTR_GET_DEFAULT(resellAccountType_, "") };
    inline EnrollAccountRequest& setResellAccountType(string resellAccountType) { DARABONBA_PTR_SET_VALUE(resellAccountType_, resellAccountType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<EnrollAccountRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<EnrollAccountRequest::Tag>) };
    inline vector<EnrollAccountRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<EnrollAccountRequest::Tag>) };
    inline EnrollAccountRequest& setTag(const vector<EnrollAccountRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline EnrollAccountRequest& setTag(vector<EnrollAccountRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The prefix for the account name of the member.
    // 
    // *   If the account baseline is applied to an account that is newly created, you must configure this parameter.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    shared_ptr<string> accountNamePrefix_ {};
    // The account ID.
    // 
    // *   If the account baseline is applied to an account that is newly created, you do not need to configure this parameter.
    // *   If the account baseline is applied to an existing account, you must configure this parameter.
    shared_ptr<int64_t> accountUid_ {};
    // The baseline ID.
    // 
    // If this parameter is left empty, the default baseline is used.
    shared_ptr<string> baselineId_ {};
    // The array that contains baseline items.
    // 
    // If this parameter is specified, the configurations of the baseline items are merged with the baseline applied to the specified account. The configurations of the same baseline items are subject to the configurations of this parameter. We recommend that you leave this parameter empty and configure the `BaselineId` parameter to specify an account baseline and apply the configurations of the account baseline to the account.
    shared_ptr<vector<EnrollAccountRequest::BaselineItems>> baselineItems_ {};
    // The display name of the account.
    // 
    // *   If the account baseline is applied to an account that is newly created, you must configure this parameter.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    shared_ptr<string> displayName_ {};
    // The ID of the parent folder.
    // 
    // *   If the account baseline is applied to an account that is newly created, you need to specify a parent folder. If you do not configure this parameter, the account is created in the Root folder.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    shared_ptr<string> folderId_ {};
    // The ID of the billing account.
    // 
    // *   If the account baseline is applied to an account that is newly created, you need to specify a billing account. If you do not configure this parameter, the self-pay settlement method is used for the account.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    shared_ptr<int64_t> payerAccountUid_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The identity type of the member. Valid values:
    // 
    // *   resell (default): The member is an account for a reseller. A relationship is automatically established between the member and the reseller. The management account of the resource directory must be used as the billing account of the member.
    // *   non_resell: The member is not an account for a reseller. The member is an account that is not associated with a reseller. You can directly use the account to purchase Alibaba Cloud resources. The member is used as its own billing account.
    // 
    // > This parameter is available only for resellers at the international site (alibabacloud.com).
    shared_ptr<string> resellAccountType_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<EnrollAccountRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
