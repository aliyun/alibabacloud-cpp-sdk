// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APMTHRESHOLDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_APMTHRESHOLDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ApmThresholdConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApmThresholdConfig& obj) { 
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ApmThresholdConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    ApmThresholdConfig() = default ;
    ApmThresholdConfig(const ApmThresholdConfig &) = default ;
    ApmThresholdConfig(ApmThresholdConfig &&) = default ;
    ApmThresholdConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApmThresholdConfig() = default ;
    ApmThresholdConfig& operator=(const ApmThresholdConfig &) = default ;
    ApmThresholdConfig& operator=(ApmThresholdConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr && this->severity_ == nullptr && this->threshold_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline ApmThresholdConfig& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline ApmThresholdConfig& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ApmThresholdConfig& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ApmThresholdConfig& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    shared_ptr<double> max_ {};
    shared_ptr<double> min_ {};
    // This parameter is required.
    shared_ptr<string> severity_ {};
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
