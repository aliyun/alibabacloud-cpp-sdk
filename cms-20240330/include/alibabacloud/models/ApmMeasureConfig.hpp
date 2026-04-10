// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APMMEASURECONFIG_HPP_
#define ALIBABACLOUD_MODELS_APMMEASURECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ApmMeasureConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApmMeasureConfig& obj) { 
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(measureCode, measureCode_);
      DARABONBA_PTR_TO_JSON(windowSecs, windowSecs_);
    };
    friend void from_json(const Darabonba::Json& j, ApmMeasureConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(measureCode, measureCode_);
      DARABONBA_PTR_FROM_JSON(windowSecs, windowSecs_);
    };
    ApmMeasureConfig() = default ;
    ApmMeasureConfig(const ApmMeasureConfig &) = default ;
    ApmMeasureConfig(ApmMeasureConfig &&) = default ;
    ApmMeasureConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApmMeasureConfig() = default ;
    ApmMeasureConfig& operator=(const ApmMeasureConfig &) = default ;
    ApmMeasureConfig& operator=(ApmMeasureConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupBy_ == nullptr
        && this->measureCode_ == nullptr && this->windowSecs_ == nullptr; };
    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<string> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<string>) };
    inline vector<string> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<string>) };
    inline ApmMeasureConfig& setGroupBy(const vector<string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline ApmMeasureConfig& setGroupBy(vector<string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // measureCode Field Functions 
    bool hasMeasureCode() const { return this->measureCode_ != nullptr;};
    void deleteMeasureCode() { this->measureCode_ = nullptr;};
    inline string getMeasureCode() const { DARABONBA_PTR_GET_DEFAULT(measureCode_, "") };
    inline ApmMeasureConfig& setMeasureCode(string measureCode) { DARABONBA_PTR_SET_VALUE(measureCode_, measureCode) };


    // windowSecs Field Functions 
    bool hasWindowSecs() const { return this->windowSecs_ != nullptr;};
    void deleteWindowSecs() { this->windowSecs_ = nullptr;};
    inline int32_t getWindowSecs() const { DARABONBA_PTR_GET_DEFAULT(windowSecs_, 0) };
    inline ApmMeasureConfig& setWindowSecs(int32_t windowSecs) { DARABONBA_PTR_SET_VALUE(windowSecs_, windowSecs) };


  protected:
    // 分组维度
    shared_ptr<vector<string>> groupBy_ {};
    // 指标代码
    // 
    // This parameter is required.
    shared_ptr<string> measureCode_ {};
    // 查询时间窗口（秒）
    // 
    // This parameter is required.
    shared_ptr<int32_t> windowSecs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
