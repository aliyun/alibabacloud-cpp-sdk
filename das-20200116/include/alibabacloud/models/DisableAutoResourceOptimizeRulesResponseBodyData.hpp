// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList.hpp>
#include <alibabacloud/models/DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableAutoResourceOptimizeRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAutoResourceOptimizeRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
      DARABONBA_PTR_TO_JSON(ConfigFailInstanceList, configFailInstanceList_);
      DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
      DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
      DARABONBA_PTR_TO_JSON(TotalInstanceCount, totalInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAutoResourceOptimizeRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ConfigFailInstanceList, configFailInstanceList_);
      DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
      DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
      DARABONBA_PTR_FROM_JSON(TotalInstanceCount, totalInstanceCount_);
    };
    DisableAutoResourceOptimizeRulesResponseBodyData() = default ;
    DisableAutoResourceOptimizeRulesResponseBodyData(const DisableAutoResourceOptimizeRulesResponseBodyData &) = default ;
    DisableAutoResourceOptimizeRulesResponseBodyData(DisableAutoResourceOptimizeRulesResponseBodyData &&) = default ;
    DisableAutoResourceOptimizeRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAutoResourceOptimizeRulesResponseBodyData() = default ;
    DisableAutoResourceOptimizeRulesResponseBodyData& operator=(const DisableAutoResourceOptimizeRulesResponseBodyData &) = default ;
    DisableAutoResourceOptimizeRulesResponseBodyData& operator=(DisableAutoResourceOptimizeRulesResponseBodyData &&) = default ;
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
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setConfigFailInstanceCount(int64_t configFailInstanceCount) { DARABONBA_PTR_SET_VALUE(configFailInstanceCount_, configFailInstanceCount) };


    // configFailInstanceList Field Functions 
    bool hasConfigFailInstanceList() const { return this->configFailInstanceList_ != nullptr;};
    void deleteConfigFailInstanceList() { this->configFailInstanceList_ = nullptr;};
    inline const vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList> & configFailInstanceList() const { DARABONBA_PTR_GET_CONST(configFailInstanceList_, vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList>) };
    inline vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList> configFailInstanceList() { DARABONBA_PTR_GET(configFailInstanceList_, vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList>) };
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setConfigFailInstanceList(const vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList> & configFailInstanceList) { DARABONBA_PTR_SET_VALUE(configFailInstanceList_, configFailInstanceList) };
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setConfigFailInstanceList(vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList> && configFailInstanceList) { DARABONBA_PTR_SET_RVALUE(configFailInstanceList_, configFailInstanceList) };


    // configSuccessInstanceCount Field Functions 
    bool hasConfigSuccessInstanceCount() const { return this->configSuccessInstanceCount_ != nullptr;};
    void deleteConfigSuccessInstanceCount() { this->configSuccessInstanceCount_ = nullptr;};
    inline int64_t configSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configSuccessInstanceCount_, 0L) };
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setConfigSuccessInstanceCount(int64_t configSuccessInstanceCount) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceCount_, configSuccessInstanceCount) };


    // configSuccessInstanceList Field Functions 
    bool hasConfigSuccessInstanceList() const { return this->configSuccessInstanceList_ != nullptr;};
    void deleteConfigSuccessInstanceList() { this->configSuccessInstanceList_ = nullptr;};
    inline const vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList> & configSuccessInstanceList() const { DARABONBA_PTR_GET_CONST(configSuccessInstanceList_, vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList>) };
    inline vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList> configSuccessInstanceList() { DARABONBA_PTR_GET(configSuccessInstanceList_, vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList>) };
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setConfigSuccessInstanceList(const vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList> & configSuccessInstanceList) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceList_, configSuccessInstanceList) };
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setConfigSuccessInstanceList(vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList> && configSuccessInstanceList) { DARABONBA_PTR_SET_RVALUE(configSuccessInstanceList_, configSuccessInstanceList) };


    // totalInstanceCount Field Functions 
    bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
    void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
    inline int64_t totalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0L) };
    inline DisableAutoResourceOptimizeRulesResponseBodyData& setTotalInstanceCount(int64_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


  protected:
    // The number of database instances for which the automatic tablespace fragment recycling feature failed to be disabled.
    std::shared_ptr<int64_t> configFailInstanceCount_ = nullptr;
    // The list of database instances for which the automatic tablespace fragment recycling feature failed to be disabled.
    std::shared_ptr<vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigFailInstanceList>> configFailInstanceList_ = nullptr;
    // The number of database instances for which the automatic tablespace fragment recycling feature is disabled.
    std::shared_ptr<int64_t> configSuccessInstanceCount_ = nullptr;
    // The list of database instances for which the automatic tablespace fragment recycling feature is disabled.
    std::shared_ptr<vector<Models::DisableAutoResourceOptimizeRulesResponseBodyDataConfigSuccessInstanceList>> configSuccessInstanceList_ = nullptr;
    // The total number of database instances.
    std::shared_ptr<int64_t> totalInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
