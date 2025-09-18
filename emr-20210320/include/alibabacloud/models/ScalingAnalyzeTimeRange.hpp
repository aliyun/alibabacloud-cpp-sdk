// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGANALYZETIMERANGE_HPP_
#define ALIBABACLOUD_MODELS_SCALINGANALYZETIMERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingAnalyzeTimeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingAnalyzeTimeRange& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingAnalyzeTimeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ScalingAnalyzeTimeRange() = default ;
    ScalingAnalyzeTimeRange(const ScalingAnalyzeTimeRange &) = default ;
    ScalingAnalyzeTimeRange(ScalingAnalyzeTimeRange &&) = default ;
    ScalingAnalyzeTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingAnalyzeTimeRange() = default ;
    ScalingAnalyzeTimeRange& operator=(const ScalingAnalyzeTimeRange &) = default ;
    ScalingAnalyzeTimeRange& operator=(ScalingAnalyzeTimeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr && this->type_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ScalingAnalyzeTimeRange& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ScalingAnalyzeTimeRange& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ScalingAnalyzeTimeRange& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 结束时间。
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // 起始时间。
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // 峰谷类型。 peak/valley
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
