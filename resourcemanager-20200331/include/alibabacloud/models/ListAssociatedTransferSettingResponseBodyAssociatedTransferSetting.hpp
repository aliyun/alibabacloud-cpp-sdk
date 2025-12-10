// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSOCIATEDTRANSFERSETTINGRESPONSEBODYASSOCIATEDTRANSFERSETTING_HPP_
#define ALIBABACLOUD_MODELS_LISTASSOCIATEDTRANSFERSETTINGRESPONSEBODYASSOCIATEDTRANSFERSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
      DARABONBA_PTR_TO_JSON(RuleSettings, ruleSettings_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
      DARABONBA_PTR_FROM_JSON(RuleSettings, ruleSettings_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting() = default ;
    ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting(const ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting &) = default ;
    ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting(ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting &&) = default ;
    ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting() = default ;
    ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& operator=(const ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting &) = default ;
    ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& operator=(ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->enableExistingResourcesTransfer_ == nullptr && return this->ruleSettings_ == nullptr && return this->status_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // enableExistingResourcesTransfer Field Functions 
    bool hasEnableExistingResourcesTransfer() const { return this->enableExistingResourcesTransfer_ != nullptr;};
    void deleteEnableExistingResourcesTransfer() { this->enableExistingResourcesTransfer_ = nullptr;};
    inline string enableExistingResourcesTransfer() const { DARABONBA_PTR_GET_DEFAULT(enableExistingResourcesTransfer_, "") };
    inline ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& setEnableExistingResourcesTransfer(string enableExistingResourcesTransfer) { DARABONBA_PTR_SET_VALUE(enableExistingResourcesTransfer_, enableExistingResourcesTransfer) };


    // ruleSettings Field Functions 
    bool hasRuleSettings() const { return this->ruleSettings_ != nullptr;};
    void deleteRuleSettings() { this->ruleSettings_ = nullptr;};
    inline const vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings> & ruleSettings() const { DARABONBA_PTR_GET_CONST(ruleSettings_, vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings>) };
    inline vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings> ruleSettings() { DARABONBA_PTR_GET(ruleSettings_, vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings>) };
    inline ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& setRuleSettings(const vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings> & ruleSettings) { DARABONBA_PTR_SET_VALUE(ruleSettings_, ruleSettings) };
    inline ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& setRuleSettings(vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings> && ruleSettings) { DARABONBA_PTR_SET_RVALUE(ruleSettings_, ruleSettings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAssociatedTransferSettingResponseBodyAssociatedTransferSetting& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> accountId_ = nullptr;
    // Indicates whether the Transfer Existing Associated Resources feature is enabled. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<string> enableExistingResourcesTransfer_ = nullptr;
    // The settings of transfer rules.
    std::shared_ptr<vector<Models::ListAssociatedTransferSettingResponseBodyAssociatedTransferSettingRuleSettings>> ruleSettings_ = nullptr;
    // The status of the Transfer Associated Resources feature. Valid values:
    // 
    // *   Enable: enabled
    // *   Disable: disabled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
