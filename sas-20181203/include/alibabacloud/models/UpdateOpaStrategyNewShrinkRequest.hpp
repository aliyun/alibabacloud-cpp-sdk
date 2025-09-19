// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateOpaStrategyNewShrinkRequestScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateOpaStrategyNewShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetailShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetailShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    UpdateOpaStrategyNewShrinkRequest() = default ;
    UpdateOpaStrategyNewShrinkRequest(const UpdateOpaStrategyNewShrinkRequest &) = default ;
    UpdateOpaStrategyNewShrinkRequest(UpdateOpaStrategyNewShrinkRequest &&) = default ;
    UpdateOpaStrategyNewShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewShrinkRequest() = default ;
    UpdateOpaStrategyNewShrinkRequest& operator=(const UpdateOpaStrategyNewShrinkRequest &) = default ;
    UpdateOpaStrategyNewShrinkRequest& operator=(UpdateOpaStrategyNewShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmDetailShrink_ != nullptr
        && this->clusterId_ != nullptr && this->clusterName_ != nullptr && this->description_ != nullptr && this->imageName_ != nullptr && this->label_ != nullptr
        && this->maliciousImage_ != nullptr && this->ruleAction_ != nullptr && this->scopes_ != nullptr && this->strategyId_ != nullptr && this->strategyName_ != nullptr
        && this->strategyTemplateId_ != nullptr && this->unScanedImage_ != nullptr && this->whiteList_ != nullptr; };
    // alarmDetailShrink Field Functions 
    bool hasAlarmDetailShrink() const { return this->alarmDetailShrink_ != nullptr;};
    void deleteAlarmDetailShrink() { this->alarmDetailShrink_ = nullptr;};
    inline string alarmDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(alarmDetailShrink_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setAlarmDetailShrink(string alarmDetailShrink) { DARABONBA_PTR_SET_VALUE(alarmDetailShrink_, alarmDetailShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & imageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> imageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline UpdateOpaStrategyNewShrinkRequest& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline UpdateOpaStrategyNewShrinkRequest& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & label() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> label() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline UpdateOpaStrategyNewShrinkRequest& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline UpdateOpaStrategyNewShrinkRequest& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool maliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline UpdateOpaStrategyNewShrinkRequest& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline UpdateOpaStrategyNewShrinkRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<UpdateOpaStrategyNewShrinkRequestScopes> & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<UpdateOpaStrategyNewShrinkRequestScopes>) };
    inline vector<UpdateOpaStrategyNewShrinkRequestScopes> scopes() { DARABONBA_PTR_GET(scopes_, vector<UpdateOpaStrategyNewShrinkRequestScopes>) };
    inline UpdateOpaStrategyNewShrinkRequest& setScopes(const vector<UpdateOpaStrategyNewShrinkRequestScopes> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline UpdateOpaStrategyNewShrinkRequest& setScopes(vector<UpdateOpaStrategyNewShrinkRequestScopes> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline UpdateOpaStrategyNewShrinkRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTemplateId Field Functions 
    bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
    void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
    inline int64_t strategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
    inline UpdateOpaStrategyNewShrinkRequest& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool unScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline UpdateOpaStrategyNewShrinkRequest& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline UpdateOpaStrategyNewShrinkRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline UpdateOpaStrategyNewShrinkRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The risks that you want to detect by using the rule.
    std::shared_ptr<string> alarmDetailShrink_ = nullptr;
    // The cluster ID.
    // 
    // > This parameter is deprecated. You can use the Scopes parameter to specify a scope in which cluster parameters take effect.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    // 
    // > This parameter is deprecated.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The rule description.
    std::shared_ptr<string> description_ = nullptr;
    // The image names.
    std::shared_ptr<vector<string>> imageName_ = nullptr;
    // The image tags.
    std::shared_ptr<vector<string>> label_ = nullptr;
    // Specifies whether the rule supports malicious Internet images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> maliciousImage_ = nullptr;
    // The action that is performed when the rule is hit. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    // *   **3**: allow
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The application scope.
    std::shared_ptr<vector<UpdateOpaStrategyNewShrinkRequestScopes>> scopes_ = nullptr;
    // The ID of the rule.
    // 
    // >  You can call the [ListOpaClusterStrategyNew](https://help.aliyun.com/document_detail/2623574.html) operation to query the ID.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The rule name.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The ID of the rule template.
    // 
    // >  You can call the [GetOpaStrategyTemplateSummary](https://help.aliyun.com/document_detail/2539952.html) operation to query the ID of the rule template.
    std::shared_ptr<int64_t> strategyTemplateId_ = nullptr;
    // Specifies whether the rule supports unscanned images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> unScanedImage_ = nullptr;
    // The whitelists.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
