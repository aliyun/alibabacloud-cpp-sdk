// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAllSwimmingLanesResponseBodyDataAppEntryRule.hpp>
#include <vector>
#include <alibabacloud/models/ListAllSwimmingLanesResponseBodyDataApps.hpp>
#include <alibabacloud/models/ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppEntryRule, appEntryRule_);
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(LaneName, laneName_);
      DARABONBA_PTR_TO_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_TO_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEntryRule, appEntryRule_);
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(LaneName, laneName_);
      DARABONBA_PTR_FROM_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_FROM_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
    };
    ListAllSwimmingLanesResponseBodyData() = default ;
    ListAllSwimmingLanesResponseBodyData(const ListAllSwimmingLanesResponseBodyData &) = default ;
    ListAllSwimmingLanesResponseBodyData(ListAllSwimmingLanesResponseBodyData &&) = default ;
    ListAllSwimmingLanesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesResponseBodyData() = default ;
    ListAllSwimmingLanesResponseBodyData& operator=(const ListAllSwimmingLanesResponseBodyData &) = default ;
    ListAllSwimmingLanesResponseBodyData& operator=(ListAllSwimmingLanesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEntryRule_ == nullptr
        && return this->apps_ == nullptr && return this->canaryModel_ == nullptr && return this->enable_ == nullptr && return this->enableRules_ == nullptr && return this->laneId_ == nullptr
        && return this->laneName_ == nullptr && return this->laneTag_ == nullptr && return this->mseGatewayEntryRule_ == nullptr; };
    // appEntryRule Field Functions 
    bool hasAppEntryRule() const { return this->appEntryRule_ != nullptr;};
    void deleteAppEntryRule() { this->appEntryRule_ = nullptr;};
    inline const Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule & appEntryRule() const { DARABONBA_PTR_GET_CONST(appEntryRule_, Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule) };
    inline Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule appEntryRule() { DARABONBA_PTR_GET(appEntryRule_, Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule) };
    inline ListAllSwimmingLanesResponseBodyData& setAppEntryRule(const Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule & appEntryRule) { DARABONBA_PTR_SET_VALUE(appEntryRule_, appEntryRule) };
    inline ListAllSwimmingLanesResponseBodyData& setAppEntryRule(Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule && appEntryRule) { DARABONBA_PTR_SET_RVALUE(appEntryRule_, appEntryRule) };


    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<Models::ListAllSwimmingLanesResponseBodyDataApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Models::ListAllSwimmingLanesResponseBodyDataApps>) };
    inline vector<Models::ListAllSwimmingLanesResponseBodyDataApps> apps() { DARABONBA_PTR_GET(apps_, vector<Models::ListAllSwimmingLanesResponseBodyDataApps>) };
    inline ListAllSwimmingLanesResponseBodyData& setApps(const vector<Models::ListAllSwimmingLanesResponseBodyDataApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListAllSwimmingLanesResponseBodyData& setApps(vector<Models::ListAllSwimmingLanesResponseBodyDataApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline ListAllSwimmingLanesResponseBodyData& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListAllSwimmingLanesResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline ListAllSwimmingLanesResponseBodyData& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline ListAllSwimmingLanesResponseBodyData& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string laneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline ListAllSwimmingLanesResponseBodyData& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // laneTag Field Functions 
    bool hasLaneTag() const { return this->laneTag_ != nullptr;};
    void deleteLaneTag() { this->laneTag_ = nullptr;};
    inline string laneTag() const { DARABONBA_PTR_GET_DEFAULT(laneTag_, "") };
    inline ListAllSwimmingLanesResponseBodyData& setLaneTag(string laneTag) { DARABONBA_PTR_SET_VALUE(laneTag_, laneTag) };


    // mseGatewayEntryRule Field Functions 
    bool hasMseGatewayEntryRule() const { return this->mseGatewayEntryRule_ != nullptr;};
    void deleteMseGatewayEntryRule() { this->mseGatewayEntryRule_ = nullptr;};
    inline const Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule & mseGatewayEntryRule() const { DARABONBA_PTR_GET_CONST(mseGatewayEntryRule_, Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule) };
    inline Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule mseGatewayEntryRule() { DARABONBA_PTR_GET(mseGatewayEntryRule_, Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule) };
    inline ListAllSwimmingLanesResponseBodyData& setMseGatewayEntryRule(const Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule & mseGatewayEntryRule) { DARABONBA_PTR_SET_VALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };
    inline ListAllSwimmingLanesResponseBodyData& setMseGatewayEntryRule(Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule && mseGatewayEntryRule) { DARABONBA_PTR_SET_RVALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };


  protected:
    // Apply ingress rules.
    std::shared_ptr<Models::ListAllSwimmingLanesResponseBodyDataAppEntryRule> appEntryRule_ = nullptr;
    // The associated application.
    std::shared_ptr<vector<Models::ListAllSwimmingLanesResponseBodyDataApps>> apps_ = nullptr;
    // Full-link Grayscale Mode:
    // 
    // *   0: The request is routed based on the content of the request.
    // *   1: Proportional routing
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    // Lane status:
    // 
    // *   true: enabled
    // *   false: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // Whether the traffic rule is enabled.
    std::shared_ptr<bool> enableRules_ = nullptr;
    // The ID of the lane.
    std::shared_ptr<int64_t> laneId_ = nullptr;
    // The name of the lane group.
    std::shared_ptr<string> laneName_ = nullptr;
    // The tag of the lane.
    std::shared_ptr<string> laneTag_ = nullptr;
    // MSE gateway routing
    std::shared_ptr<Models::ListAllSwimmingLanesResponseBodyDataMseGatewayEntryRule> mseGatewayEntryRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
