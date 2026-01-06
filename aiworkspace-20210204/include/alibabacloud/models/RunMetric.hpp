// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMETRIC_HPP_
#define ALIBABACLOUD_MODELS_RUNMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class RunMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMetric& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RunMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    RunMetric() = default ;
    RunMetric(const RunMetric &) = default ;
    RunMetric(RunMetric &&) = default ;
    RunMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMetric() = default ;
    RunMetric& operator=(const RunMetric &) = default ;
    RunMetric& operator=(RunMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->step_ == nullptr && this->timestamp_ == nullptr && this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RunMetric& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int64_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
    inline RunMetric& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline RunMetric& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline RunMetric& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    shared_ptr<string> key_ {};
    shared_ptr<int64_t> step_ {};
    shared_ptr<int64_t> timestamp_ {};
    // This parameter is required.
    shared_ptr<float> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
