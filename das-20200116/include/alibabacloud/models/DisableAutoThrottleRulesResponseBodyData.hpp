// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAUTOTHROTTLERULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAUTOTHROTTLERULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList.hpp>
#include <alibabacloud/models/DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableAutoThrottleRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAutoThrottleRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
      DARABONBA_PTR_TO_JSON(ConfigFailInstanceList, configFailInstanceList_);
      DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
      DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
      DARABONBA_PTR_TO_JSON(TotalInstanceCount, totalInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAutoThrottleRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ConfigFailInstanceList, configFailInstanceList_);
      DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
      DARABONBA_PTR_FROM_JSON(TotalInstanceCount, totalInstanceCount_);
    };
    DisableAutoThrottleRulesResponseBodyData() = default ;
    DisableAutoThrottleRulesResponseBodyData(const DisableAutoThrottleRulesResponseBodyData &) = default ;
    DisableAutoThrottleRulesResponseBodyData(DisableAutoThrottleRulesResponseBodyData &&) = default ;
    DisableAutoThrottleRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAutoThrottleRulesResponseBodyData() = default ;
    DisableAutoThrottleRulesResponseBodyData& operator=(const DisableAutoThrottleRulesResponseBodyData &) = default ;
    DisableAutoThrottleRulesResponseBodyData& operator=(DisableAutoThrottleRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configFailInstanceCount_ == nullptr
        && return this->configFailInstanceList_ == nullptr && return this->configSuccessInstanceCount_ == nullptr && return this->configSuccessInstanceList_ == nullptr && return this->totalInstanceCount_ == nullptr; };
    // configFailInstanceCount Field Functions 
    bool hasConfigFailInstanceCount() const { return this->configFailInstanceCount_ != nullptr;};
    void deleteConfigFailInstanceCount() { this->configFailInstanceCount_ = nullptr;};
    inline int64_t configFailInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configFailInstanceCount_, 0L) };
    inline DisableAutoThrottleRulesResponseBodyData& setConfigFailInstanceCount(int64_t configFailInstanceCount) { DARABONBA_PTR_SET_VALUE(configFailInstanceCount_, configFailInstanceCount) };


    // configFailInstanceList Field Functions 
    bool hasConfigFailInstanceList() const { return this->configFailInstanceList_ != nullptr;};
    void deleteConfigFailInstanceList() { this->configFailInstanceList_ = nullptr;};
    inline const vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList> & configFailInstanceList() const { DARABONBA_PTR_GET_CONST(configFailInstanceList_, vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList>) };
    inline vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList> configFailInstanceList() { DARABONBA_PTR_GET(configFailInstanceList_, vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList>) };
    inline DisableAutoThrottleRulesResponseBodyData& setConfigFailInstanceList(const vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList> & configFailInstanceList) { DARABONBA_PTR_SET_VALUE(configFailInstanceList_, configFailInstanceList) };
    inline DisableAutoThrottleRulesResponseBodyData& setConfigFailInstanceList(vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList> && configFailInstanceList) { DARABONBA_PTR_SET_RVALUE(configFailInstanceList_, configFailInstanceList) };


    // configSuccessInstanceCount Field Functions 
    bool hasConfigSuccessInstanceCount() const { return this->configSuccessInstanceCount_ != nullptr;};
    void deleteConfigSuccessInstanceCount() { this->configSuccessInstanceCount_ = nullptr;};
    inline int64_t configSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configSuccessInstanceCount_, 0L) };
    inline DisableAutoThrottleRulesResponseBodyData& setConfigSuccessInstanceCount(int64_t configSuccessInstanceCount) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceCount_, configSuccessInstanceCount) };


    // configSuccessInstanceList Field Functions 
    bool hasConfigSuccessInstanceList() const { return this->configSuccessInstanceList_ != nullptr;};
    void deleteConfigSuccessInstanceList() { this->configSuccessInstanceList_ = nullptr;};
    inline const vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList> & configSuccessInstanceList() const { DARABONBA_PTR_GET_CONST(configSuccessInstanceList_, vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList>) };
    inline vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList> configSuccessInstanceList() { DARABONBA_PTR_GET(configSuccessInstanceList_, vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList>) };
    inline DisableAutoThrottleRulesResponseBodyData& setConfigSuccessInstanceList(const vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList> & configSuccessInstanceList) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceList_, configSuccessInstanceList) };
    inline DisableAutoThrottleRulesResponseBodyData& setConfigSuccessInstanceList(vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList> && configSuccessInstanceList) { DARABONBA_PTR_SET_RVALUE(configSuccessInstanceList_, configSuccessInstanceList) };


    // totalInstanceCount Field Functions 
    bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
    void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
    inline int64_t totalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0L) };
    inline DisableAutoThrottleRulesResponseBodyData& setTotalInstanceCount(int64_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


  protected:
    // The number of database instances for which the automatic SQL throttling feature failed to be disabled.
    std::shared_ptr<int64_t> configFailInstanceCount_ = nullptr;
    // The database instances for which the automatic SQL throttling feature failed to be disabled.
    std::shared_ptr<vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigFailInstanceList>> configFailInstanceList_ = nullptr;
    // The number of database instances for which the automatic SQL throttling feature is disabled.
    std::shared_ptr<int64_t> configSuccessInstanceCount_ = nullptr;
    // The database instances for which the automatic SQL throttling feature is disabled.
    std::shared_ptr<vector<Models::DisableAutoThrottleRulesResponseBodyDataConfigSuccessInstanceList>> configSuccessInstanceList_ = nullptr;
    // The total number of database instances.
    std::shared_ptr<int64_t> totalInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
