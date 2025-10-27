// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetail.hpp>
#include <vector>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyDetailNewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetail_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetail_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    GetOpaStrategyDetailNewResponseBodyData() = default ;
    GetOpaStrategyDetailNewResponseBodyData(const GetOpaStrategyDetailNewResponseBodyData &) = default ;
    GetOpaStrategyDetailNewResponseBodyData(GetOpaStrategyDetailNewResponseBodyData &&) = default ;
    GetOpaStrategyDetailNewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewResponseBodyData() = default ;
    GetOpaStrategyDetailNewResponseBodyData& operator=(const GetOpaStrategyDetailNewResponseBodyData &) = default ;
    GetOpaStrategyDetailNewResponseBodyData& operator=(GetOpaStrategyDetailNewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmDetail_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr && return this->currentPage_ == nullptr && return this->description_ == nullptr && return this->imageName_ == nullptr
        && return this->label_ == nullptr && return this->lang_ == nullptr && return this->maliciousImage_ == nullptr && return this->pageSize_ == nullptr && return this->ruleAction_ == nullptr
        && return this->scopes_ == nullptr && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->strategyTemplateId_ == nullptr && return this->unScanedImage_ == nullptr
        && return this->whiteList_ == nullptr; };
    // alarmDetail Field Functions 
    bool hasAlarmDetail() const { return this->alarmDetail_ != nullptr;};
    void deleteAlarmDetail() { this->alarmDetail_ = nullptr;};
    inline const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail & alarmDetail() const { DARABONBA_PTR_GET_CONST(alarmDetail_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail) };
    inline Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail alarmDetail() { DARABONBA_PTR_GET(alarmDetail_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail) };
    inline GetOpaStrategyDetailNewResponseBodyData& setAlarmDetail(const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail & alarmDetail) { DARABONBA_PTR_SET_VALUE(alarmDetail_, alarmDetail) };
    inline GetOpaStrategyDetailNewResponseBodyData& setAlarmDetail(Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail && alarmDetail) { DARABONBA_PTR_SET_RVALUE(alarmDetail_, alarmDetail) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetOpaStrategyDetailNewResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetOpaStrategyDetailNewResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOpaStrategyDetailNewResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetOpaStrategyDetailNewResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & imageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> imageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyData& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline GetOpaStrategyDetailNewResponseBodyData& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & label() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> label() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyData& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline GetOpaStrategyDetailNewResponseBodyData& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetOpaStrategyDetailNewResponseBodyData& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool maliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline GetOpaStrategyDetailNewResponseBodyData& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOpaStrategyDetailNewResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline GetOpaStrategyDetailNewResponseBodyData& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes> & scopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes>) };
    inline vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes> scopes() { DARABONBA_PTR_GET(scopes_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes>) };
    inline GetOpaStrategyDetailNewResponseBodyData& setScopes(const vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline GetOpaStrategyDetailNewResponseBodyData& setScopes(vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline GetOpaStrategyDetailNewResponseBodyData& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline GetOpaStrategyDetailNewResponseBodyData& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTemplateId Field Functions 
    bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
    void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
    inline int64_t strategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
    inline GetOpaStrategyDetailNewResponseBodyData& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool unScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline GetOpaStrategyDetailNewResponseBodyData& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & whiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> whiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyData& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline GetOpaStrategyDetailNewResponseBodyData& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The rule configuration.
    std::shared_ptr<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetail> alarmDetail_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The page number. Default value: **1**. Pages start from page 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The image names.
    std::shared_ptr<vector<string>> imageName_ = nullptr;
    // The image tags.
    std::shared_ptr<vector<string>> label_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Indicates whether the rule supports malicious Internet images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> maliciousImage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The action that is performed when the rule is hit. Valid values:
    // 
    // *   **1**: trigger alerts
    // *   **2**: block
    // *   **3**: allow
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The application scope.
    std::shared_ptr<vector<Models::GetOpaStrategyDetailNewResponseBodyDataScopes>> scopes_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The rule name.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The ID of the rule template.
    std::shared_ptr<int64_t> strategyTemplateId_ = nullptr;
    // Indicates whether the rule supports unscanned images. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> unScanedImage_ = nullptr;
    // The image tags that are added to the whitelist.
    std::shared_ptr<vector<string>> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
