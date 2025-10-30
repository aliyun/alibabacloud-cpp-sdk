// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENROLLACCOUNTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENROLLACCOUNTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnrollAccountShrinkRequestBaselineItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class EnrollAccountShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrollAccountShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, EnrollAccountShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNamePrefix, accountNamePrefix_);
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellAccountType, resellAccountType_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    EnrollAccountShrinkRequest() = default ;
    EnrollAccountShrinkRequest(const EnrollAccountShrinkRequest &) = default ;
    EnrollAccountShrinkRequest(EnrollAccountShrinkRequest &&) = default ;
    EnrollAccountShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrollAccountShrinkRequest() = default ;
    EnrollAccountShrinkRequest& operator=(const EnrollAccountShrinkRequest &) = default ;
    EnrollAccountShrinkRequest& operator=(EnrollAccountShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && return this->accountUid_ == nullptr && return this->baselineId_ == nullptr && return this->baselineItems_ == nullptr && return this->displayName_ == nullptr && return this->folderId_ == nullptr
        && return this->payerAccountUid_ == nullptr && return this->regionId_ == nullptr && return this->resellAccountType_ == nullptr && return this->tagShrink_ == nullptr; };
    // accountNamePrefix Field Functions 
    bool hasAccountNamePrefix() const { return this->accountNamePrefix_ != nullptr;};
    void deleteAccountNamePrefix() { this->accountNamePrefix_ = nullptr;};
    inline string accountNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(accountNamePrefix_, "") };
    inline EnrollAccountShrinkRequest& setAccountNamePrefix(string accountNamePrefix) { DARABONBA_PTR_SET_VALUE(accountNamePrefix_, accountNamePrefix) };


    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t accountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline EnrollAccountShrinkRequest& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline EnrollAccountShrinkRequest& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<EnrollAccountShrinkRequestBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<EnrollAccountShrinkRequestBaselineItems>) };
    inline vector<EnrollAccountShrinkRequestBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<EnrollAccountShrinkRequestBaselineItems>) };
    inline EnrollAccountShrinkRequest& setBaselineItems(const vector<EnrollAccountShrinkRequestBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline EnrollAccountShrinkRequest& setBaselineItems(vector<EnrollAccountShrinkRequestBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline EnrollAccountShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline EnrollAccountShrinkRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // payerAccountUid Field Functions 
    bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
    void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
    inline int64_t payerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
    inline EnrollAccountShrinkRequest& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnrollAccountShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellAccountType Field Functions 
    bool hasResellAccountType() const { return this->resellAccountType_ != nullptr;};
    void deleteResellAccountType() { this->resellAccountType_ = nullptr;};
    inline string resellAccountType() const { DARABONBA_PTR_GET_DEFAULT(resellAccountType_, "") };
    inline EnrollAccountShrinkRequest& setResellAccountType(string resellAccountType) { DARABONBA_PTR_SET_VALUE(resellAccountType_, resellAccountType) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline EnrollAccountShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The prefix for the account name of the member.
    // 
    // *   If the account baseline is applied to an account that is newly created, you must configure this parameter.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    std::shared_ptr<string> accountNamePrefix_ = nullptr;
    // The account ID.
    // 
    // *   If the account baseline is applied to an account that is newly created, you do not need to configure this parameter.
    // *   If the account baseline is applied to an existing account, you must configure this parameter.
    std::shared_ptr<int64_t> accountUid_ = nullptr;
    // The baseline ID.
    // 
    // If this parameter is left empty, the default baseline is used.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The array that contains baseline items.
    // 
    // If this parameter is specified, the configurations of the baseline items are merged with the baseline applied to the specified account. The configurations of the same baseline items are subject to the configurations of this parameter. We recommend that you leave this parameter empty and configure the `BaselineId` parameter to specify an account baseline and apply the configurations of the account baseline to the account.
    std::shared_ptr<vector<EnrollAccountShrinkRequestBaselineItems>> baselineItems_ = nullptr;
    // The display name of the account.
    // 
    // *   If the account baseline is applied to an account that is newly created, you must configure this parameter.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the parent folder.
    // 
    // *   If the account baseline is applied to an account that is newly created, you need to specify a parent folder. If you do not configure this parameter, the account is created in the Root folder.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    std::shared_ptr<string> folderId_ = nullptr;
    // The ID of the billing account.
    // 
    // *   If the account baseline is applied to an account that is newly created, you need to specify a billing account. If you do not configure this parameter, the self-pay settlement method is used for the account.
    // *   If the account baseline is applied to an existing account, you do not need to configure this parameter.
    std::shared_ptr<int64_t> payerAccountUid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The identity type of the member. Valid values:
    // 
    // *   resell (default): The member is an account for a reseller. A relationship is automatically established between the member and the reseller. The management account of the resource directory must be used as the billing account of the member.
    // *   non_resell: The member is not an account for a reseller. The member is an account that is not associated with a reseller. You can directly use the account to purchase Alibaba Cloud resources. The member is used as its own billing account.
    // 
    // > This parameter is available only for resellers at the international site (alibabacloud.com).
    std::shared_ptr<string> resellAccountType_ = nullptr;
    // The tags. You can specify up to 20 tags.
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
