// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStrategyTemplateDetailResponseBodyDataAlarmDetail.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetStrategyTemplateDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    GetStrategyTemplateDetailResponseBodyData() = default ;
    GetStrategyTemplateDetailResponseBodyData(const GetStrategyTemplateDetailResponseBodyData &) = default ;
    GetStrategyTemplateDetailResponseBodyData(GetStrategyTemplateDetailResponseBodyData &&) = default ;
    GetStrategyTemplateDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailResponseBodyData() = default ;
    GetStrategyTemplateDetailResponseBodyData& operator=(const GetStrategyTemplateDetailResponseBodyData &) = default ;
    GetStrategyTemplateDetailResponseBodyData& operator=(GetStrategyTemplateDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmDetail_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->description_ == nullptr && return this->imageName_ == nullptr && return this->label_ == nullptr
        && return this->maliciousImage_ == nullptr && return this->namespace_ == nullptr && return this->ruleAction_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr
        && return this->strategyTemplateId_ == nullptr && return this->unScanedImage_ == nullptr && return this->whiteList_ == nullptr; };
    // alarmDetail Field Functions 
    bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
    void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
    inline const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail & alarmDetail() const { DARABONBA_PTR_GET_CONST(alarmDetail_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail) };
    inline Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail alarmDetail() { DARABONBA_PTR_GET(alarmDetail_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail) };
    inline GetStrategyTemplateDetailResponseBodyData& setAlarmDetail(const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail & alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };
    inline GetStrategyTemplateDetailResponseBodyData& setAlarmDetail(Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail && alarmDetail) { DARABONBA_PTR_SET_RVALUE(alarmDetail_, alarmDetail) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetStrategyTemplateDetailResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetStrategyTemplateDetailResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetStrategyTemplateDetailResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & imageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> imageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline GetStrategyTemplateDetailResponseBodyData& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline GetStrategyTemplateDetailResponseBodyData& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & label() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> label() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline GetStrategyTemplateDetailResponseBodyData& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline GetStrategyTemplateDetailResponseBodyData& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool maliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline GetStrategyTemplateDetailResponseBodyData& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline const vector<string> & _namespace() const { DARABONBA_PTR_GET_CONST(namespace_, vector<string>) };
    inline vector<string> _namespace() { DARABONBA_PTR_GET(namespace_, vector<string>) };
    inline GetStrategyTemplateDetailResponseBodyData& setNamespace(const vector<string> & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
    inline GetStrategyTemplateDetailResponseBodyData& setNamespace(vector<string> && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline GetStrategyTemplateDetailResponseBodyData& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline GetStrategyTemplateDetailResponseBodyData& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline GetStrategyTemplateDetailResponseBodyData& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTemplateId Field Functions 
    bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
    void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
    inline int64_t strategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
    inline GetStrategyTemplateDetailResponseBodyData& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool unScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline GetStrategyTemplateDetailResponseBodyData& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline GetStrategyTemplateDetailResponseBodyData& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline GetStrategyTemplateDetailResponseBodyData& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The configuration of the rule.
    std::shared_ptr<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetail> alarmDetail_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The names of images.
    std::shared_ptr<vector<string>> imageName_ = nullptr;
    // The tags that are added to the containers.
    std::shared_ptr<vector<string>> label_ = nullptr;
    // Indicates whether the rule supports malicious Internet images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> maliciousImage_ = nullptr;
    // The namespaces.
    std::shared_ptr<vector<string>> namespace_ = nullptr;
    // The action on requests. Valid values:
    // 
    // *   **1**: trigger alerts
    // *   **2**: block
    // *   **3**: allow
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The ID of the template.
    std::shared_ptr<int64_t> strategyTemplateId_ = nullptr;
    // Indicates whether the rule supports unscanned images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> unScanedImage_ = nullptr;
    // The whitelists of tags that are added to images.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
