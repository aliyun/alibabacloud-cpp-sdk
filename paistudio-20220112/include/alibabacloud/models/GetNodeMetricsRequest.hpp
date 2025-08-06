// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODEMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODEMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetNodeMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeStep, timeStep_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeStep, timeStep_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetNodeMetricsRequest() = default ;
    GetNodeMetricsRequest(const GetNodeMetricsRequest &) = default ;
    GetNodeMetricsRequest(GetNodeMetricsRequest &&) = default ;
    GetNodeMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeMetricsRequest() = default ;
    GetNodeMetricsRequest& operator=(const GetNodeMetricsRequest &) = default ;
    GetNodeMetricsRequest& operator=(GetNodeMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->GPUType_ != nullptr && this->startTime_ != nullptr && this->timeStep_ != nullptr && this->verbose_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetNodeMetricsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // GPUType Field Functions 
    bool hasGPUType() const { return this->GPUType_ != nullptr;};
    void deleteGPUType() { this->GPUType_ = nullptr;};
    inline string GPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
    inline GetNodeMetricsRequest& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetNodeMetricsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeStep Field Functions 
    bool hasTimeStep() const { return this->timeStep_ != nullptr;};
    void deleteTimeStep() { this->timeStep_ = nullptr;};
    inline string timeStep() const { DARABONBA_PTR_GET_DEFAULT(timeStep_, "") };
    inline GetNodeMetricsRequest& setTimeStep(string timeStep) { DARABONBA_PTR_SET_VALUE(timeStep_, timeStep) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetNodeMetricsRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> GPUType_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> timeStep_ = nullptr;
    std::shared_ptr<bool> verbose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
