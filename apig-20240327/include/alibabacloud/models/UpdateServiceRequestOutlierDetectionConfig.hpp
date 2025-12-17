// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTOUTLIERDETECTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTOUTLIERDETECTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateServiceRequestOutlierDetectionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestOutlierDetectionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(baseEjectionTime, baseEjectionTime_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(failurePercentageMinimumHosts, failurePercentageMinimumHosts_);
      DARABONBA_PTR_TO_JSON(failurePercentageThreshold, failurePercentageThreshold_);
      DARABONBA_PTR_TO_JSON(interval, interval_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestOutlierDetectionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(baseEjectionTime, baseEjectionTime_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(failurePercentageMinimumHosts, failurePercentageMinimumHosts_);
      DARABONBA_PTR_FROM_JSON(failurePercentageThreshold, failurePercentageThreshold_);
      DARABONBA_PTR_FROM_JSON(interval, interval_);
    };
    UpdateServiceRequestOutlierDetectionConfig() = default ;
    UpdateServiceRequestOutlierDetectionConfig(const UpdateServiceRequestOutlierDetectionConfig &) = default ;
    UpdateServiceRequestOutlierDetectionConfig(UpdateServiceRequestOutlierDetectionConfig &&) = default ;
    UpdateServiceRequestOutlierDetectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestOutlierDetectionConfig() = default ;
    UpdateServiceRequestOutlierDetectionConfig& operator=(const UpdateServiceRequestOutlierDetectionConfig &) = default ;
    UpdateServiceRequestOutlierDetectionConfig& operator=(UpdateServiceRequestOutlierDetectionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseEjectionTime_ == nullptr
        && return this->enable_ == nullptr && return this->failurePercentageMinimumHosts_ == nullptr && return this->failurePercentageThreshold_ == nullptr && return this->interval_ == nullptr; };
    // baseEjectionTime Field Functions 
    bool hasBaseEjectionTime() const { return this->baseEjectionTime_ != nullptr;};
    void deleteBaseEjectionTime() { this->baseEjectionTime_ = nullptr;};
    inline int32_t baseEjectionTime() const { DARABONBA_PTR_GET_DEFAULT(baseEjectionTime_, 0) };
    inline UpdateServiceRequestOutlierDetectionConfig& setBaseEjectionTime(int32_t baseEjectionTime) { DARABONBA_PTR_SET_VALUE(baseEjectionTime_, baseEjectionTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateServiceRequestOutlierDetectionConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // failurePercentageMinimumHosts Field Functions 
    bool hasFailurePercentageMinimumHosts() const { return this->failurePercentageMinimumHosts_ != nullptr;};
    void deleteFailurePercentageMinimumHosts() { this->failurePercentageMinimumHosts_ = nullptr;};
    inline int32_t failurePercentageMinimumHosts() const { DARABONBA_PTR_GET_DEFAULT(failurePercentageMinimumHosts_, 0) };
    inline UpdateServiceRequestOutlierDetectionConfig& setFailurePercentageMinimumHosts(int32_t failurePercentageMinimumHosts) { DARABONBA_PTR_SET_VALUE(failurePercentageMinimumHosts_, failurePercentageMinimumHosts) };


    // failurePercentageThreshold Field Functions 
    bool hasFailurePercentageThreshold() const { return this->failurePercentageThreshold_ != nullptr;};
    void deleteFailurePercentageThreshold() { this->failurePercentageThreshold_ = nullptr;};
    inline int32_t failurePercentageThreshold() const { DARABONBA_PTR_GET_DEFAULT(failurePercentageThreshold_, 0) };
    inline UpdateServiceRequestOutlierDetectionConfig& setFailurePercentageThreshold(int32_t failurePercentageThreshold) { DARABONBA_PTR_SET_VALUE(failurePercentageThreshold_, failurePercentageThreshold) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateServiceRequestOutlierDetectionConfig& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


  protected:
    std::shared_ptr<int32_t> baseEjectionTime_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int32_t> failurePercentageMinimumHosts_ = nullptr;
    std::shared_ptr<int32_t> failurePercentageThreshold_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
