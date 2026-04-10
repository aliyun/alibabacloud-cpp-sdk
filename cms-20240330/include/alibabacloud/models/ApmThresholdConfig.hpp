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
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ApmThresholdConfig& obj) { 
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
    virtual bool empty() const override { return this->severity_ == nullptr
        && this->threshold_ == nullptr; };
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
    // 告警等级
    // 
    // This parameter is required.
    shared_ptr<string> severity_ {};
    // 阈值
    // 
    // This parameter is required.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
