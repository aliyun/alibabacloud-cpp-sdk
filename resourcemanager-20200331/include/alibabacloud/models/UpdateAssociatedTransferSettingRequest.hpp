// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSOCIATEDTRANSFERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAssociatedTransferSettingRequestRuleSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAssociatedTransferSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssociatedTransferSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
      DARABONBA_PTR_TO_JSON(RuleSettings, ruleSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssociatedTransferSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableExistingResourcesTransfer, enableExistingResourcesTransfer_);
      DARABONBA_PTR_FROM_JSON(RuleSettings, ruleSettings_);
    };
    UpdateAssociatedTransferSettingRequest() = default ;
    UpdateAssociatedTransferSettingRequest(const UpdateAssociatedTransferSettingRequest &) = default ;
    UpdateAssociatedTransferSettingRequest(UpdateAssociatedTransferSettingRequest &&) = default ;
    UpdateAssociatedTransferSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssociatedTransferSettingRequest() = default ;
    UpdateAssociatedTransferSettingRequest& operator=(const UpdateAssociatedTransferSettingRequest &) = default ;
    UpdateAssociatedTransferSettingRequest& operator=(UpdateAssociatedTransferSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableExistingResourcesTransfer_ == nullptr
        && return this->ruleSettings_ == nullptr; };
    // enableExistingResourcesTransfer Field Functions 
    bool hasEnableExistingResourcesTransfer() const { return this->enableExistingResourcesTransfer_ != nullptr;};
    void deleteEnableExistingResourcesTransfer() { this->enableExistingResourcesTransfer_ = nullptr;};
    inline string enableExistingResourcesTransfer() const { DARABONBA_PTR_GET_DEFAULT(enableExistingResourcesTransfer_, "") };
    inline UpdateAssociatedTransferSettingRequest& setEnableExistingResourcesTransfer(string enableExistingResourcesTransfer) { DARABONBA_PTR_SET_VALUE(enableExistingResourcesTransfer_, enableExistingResourcesTransfer) };


    // ruleSettings Field Functions 
    bool hasRuleSettings() const { return this->ruleSettings_ != nullptr;};
    void deleteRuleSettings() { this->ruleSettings_ = nullptr;};
    inline const vector<UpdateAssociatedTransferSettingRequestRuleSettings> & ruleSettings() const { DARABONBA_PTR_GET_CONST(ruleSettings_, vector<UpdateAssociatedTransferSettingRequestRuleSettings>) };
    inline vector<UpdateAssociatedTransferSettingRequestRuleSettings> ruleSettings() { DARABONBA_PTR_GET(ruleSettings_, vector<UpdateAssociatedTransferSettingRequestRuleSettings>) };
    inline UpdateAssociatedTransferSettingRequest& setRuleSettings(const vector<UpdateAssociatedTransferSettingRequestRuleSettings> & ruleSettings) { DARABONBA_PTR_SET_VALUE(ruleSettings_, ruleSettings) };
    inline UpdateAssociatedTransferSettingRequest& setRuleSettings(vector<UpdateAssociatedTransferSettingRequestRuleSettings> && ruleSettings) { DARABONBA_PTR_SET_RVALUE(ruleSettings_, ruleSettings) };


  protected:
    // Specifies whether to enable the Transfer Existing Associated Resources feature. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<string> enableExistingResourcesTransfer_ = nullptr;
    // The settings of transfer rules.
    std::shared_ptr<vector<UpdateAssociatedTransferSettingRequestRuleSettings>> ruleSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
