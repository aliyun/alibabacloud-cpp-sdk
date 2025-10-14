// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKIPCURRENTSTEPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SKIPCURRENTSTEPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class SkipCurrentStepRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkipCurrentStepRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SkipCurrentStepRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
    };
    SkipCurrentStepRequest() = default ;
    SkipCurrentStepRequest(const SkipCurrentStepRequest &) = default ;
    SkipCurrentStepRequest(SkipCurrentStepRequest &&) = default ;
    SkipCurrentStepRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkipCurrentStepRequest() = default ;
    SkipCurrentStepRequest& operator=(const SkipCurrentStepRequest &) = default ;
    SkipCurrentStepRequest& operator=(SkipCurrentStepRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentStep_ == nullptr
        && return this->regionId_ == nullptr && return this->slinkTaskId_ == nullptr; };
    // currentStep Field Functions 
    bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
    void deleteCurrentStep() { this->currentStep_ = nullptr;};
    inline string currentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
    inline SkipCurrentStepRequest& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SkipCurrentStepRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline SkipCurrentStepRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


  protected:
    std::shared_ptr<string> currentStep_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> slinkTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
