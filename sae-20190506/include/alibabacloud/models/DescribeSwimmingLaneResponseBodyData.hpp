// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataAppEntryRule.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataApps.hpp>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBodyData& obj) { 
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
    DescribeSwimmingLaneResponseBodyData() = default ;
    DescribeSwimmingLaneResponseBodyData(const DescribeSwimmingLaneResponseBodyData &) = default ;
    DescribeSwimmingLaneResponseBodyData(DescribeSwimmingLaneResponseBodyData &&) = default ;
    DescribeSwimmingLaneResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBodyData() = default ;
    DescribeSwimmingLaneResponseBodyData& operator=(const DescribeSwimmingLaneResponseBodyData &) = default ;
    DescribeSwimmingLaneResponseBodyData& operator=(DescribeSwimmingLaneResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appEntryRule_ != nullptr
        && this->apps_ != nullptr && this->canaryModel_ != nullptr && this->enable_ != nullptr && this->enableRules_ != nullptr && this->laneId_ != nullptr
        && this->laneName_ != nullptr && this->laneTag_ != nullptr && this->mseGatewayEntryRule_ != nullptr; };
    // appEntryRule Field Functions 
    bool hasAppEntryRule() const { return this->appEntryRule_ != nullptr;};
    void deleteAppEntryRule() { this->appEntryRule_ = nullptr;};
    inline const Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule & appEntryRule() const { DARABONBA_PTR_GET_CONST(appEntryRule_, Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule) };
    inline Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule appEntryRule() { DARABONBA_PTR_GET(appEntryRule_, Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule) };
    inline DescribeSwimmingLaneResponseBodyData& setAppEntryRule(const Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule & appEntryRule) { DARABONBA_PTR_SET_VALUE(appEntryRule_, appEntryRule) };
    inline DescribeSwimmingLaneResponseBodyData& setAppEntryRule(Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule && appEntryRule) { DARABONBA_PTR_SET_RVALUE(appEntryRule_, appEntryRule) };


    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<Models::DescribeSwimmingLaneResponseBodyDataApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Models::DescribeSwimmingLaneResponseBodyDataApps>) };
    inline vector<Models::DescribeSwimmingLaneResponseBodyDataApps> apps() { DARABONBA_PTR_GET(apps_, vector<Models::DescribeSwimmingLaneResponseBodyDataApps>) };
    inline DescribeSwimmingLaneResponseBodyData& setApps(const vector<Models::DescribeSwimmingLaneResponseBodyDataApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline DescribeSwimmingLaneResponseBodyData& setApps(vector<Models::DescribeSwimmingLaneResponseBodyDataApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline DescribeSwimmingLaneResponseBodyData& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeSwimmingLaneResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline DescribeSwimmingLaneResponseBodyData& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline DescribeSwimmingLaneResponseBodyData& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string laneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline DescribeSwimmingLaneResponseBodyData& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // laneTag Field Functions 
    bool hasLaneTag() const { return this->laneTag_ != nullptr;};
    void deleteLaneTag() { this->laneTag_ = nullptr;};
    inline string laneTag() const { DARABONBA_PTR_GET_DEFAULT(laneTag_, "") };
    inline DescribeSwimmingLaneResponseBodyData& setLaneTag(string laneTag) { DARABONBA_PTR_SET_VALUE(laneTag_, laneTag) };


    // mseGatewayEntryRule Field Functions 
    bool hasMseGatewayEntryRule() const { return this->mseGatewayEntryRule_ != nullptr;};
    void deleteMseGatewayEntryRule() { this->mseGatewayEntryRule_ = nullptr;};
    inline const Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule & mseGatewayEntryRule() const { DARABONBA_PTR_GET_CONST(mseGatewayEntryRule_, Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule) };
    inline Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule mseGatewayEntryRule() { DARABONBA_PTR_GET(mseGatewayEntryRule_, Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule) };
    inline DescribeSwimmingLaneResponseBodyData& setMseGatewayEntryRule(const Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule & mseGatewayEntryRule) { DARABONBA_PTR_SET_VALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };
    inline DescribeSwimmingLaneResponseBodyData& setMseGatewayEntryRule(Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule && mseGatewayEntryRule) { DARABONBA_PTR_SET_RVALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };


  protected:
    std::shared_ptr<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRule> appEntryRule_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSwimmingLaneResponseBodyDataApps>> apps_ = nullptr;
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<bool> enableRules_ = nullptr;
    std::shared_ptr<int64_t> laneId_ = nullptr;
    std::shared_ptr<string> laneName_ = nullptr;
    std::shared_ptr<string> laneTag_ = nullptr;
    std::shared_ptr<Models::DescribeSwimmingLaneResponseBodyDataMseGatewayEntryRule> mseGatewayEntryRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
