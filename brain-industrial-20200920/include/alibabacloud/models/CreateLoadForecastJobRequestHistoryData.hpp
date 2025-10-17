// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADFORECASTJOBREQUESTHISTORYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADFORECASTJOBREQUESTHISTORYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateLoadForecastJobRequestHistoryData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadForecastJobRequestHistoryData& obj) { 
      DARABONBA_PTR_TO_JSON(RunTime, runTime_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadForecastJobRequestHistoryData& obj) { 
      DARABONBA_PTR_FROM_JSON(RunTime, runTime_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateLoadForecastJobRequestHistoryData() = default ;
    CreateLoadForecastJobRequestHistoryData(const CreateLoadForecastJobRequestHistoryData &) = default ;
    CreateLoadForecastJobRequestHistoryData(CreateLoadForecastJobRequestHistoryData &&) = default ;
    CreateLoadForecastJobRequestHistoryData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadForecastJobRequestHistoryData() = default ;
    CreateLoadForecastJobRequestHistoryData& operator=(const CreateLoadForecastJobRequestHistoryData &) = default ;
    CreateLoadForecastJobRequestHistoryData& operator=(CreateLoadForecastJobRequestHistoryData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->runTime_ == nullptr
        && return this->value_ == nullptr; };
    // runTime Field Functions 
    bool hasRunTime() const { return this->runTime_ != nullptr;};
    void deleteRunTime() { this->runTime_ = nullptr;};
    inline string runTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, "") };
    inline CreateLoadForecastJobRequestHistoryData& setRunTime(string runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline CreateLoadForecastJobRequestHistoryData& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> runTime_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
