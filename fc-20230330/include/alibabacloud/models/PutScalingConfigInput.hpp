// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSCALINGCONFIGINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTSCALINGCONFIGINPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingPolicy.hpp>
#include <alibabacloud/models/ScheduledPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutScalingConfigInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutScalingConfigInput& obj) { 
      DARABONBA_PTR_TO_JSON(enableMixMode, enableMixMode_);
      DARABONBA_PTR_TO_JSON(enableOnDemandScaling, enableOnDemandScaling_);
      DARABONBA_PTR_TO_JSON(horizontalScalingPolicies, horizontalScalingPolicies_);
      DARABONBA_PTR_TO_JSON(minInstances, minInstances_);
      DARABONBA_PTR_TO_JSON(requestDispatchPolicy, requestDispatchPolicy_);
      DARABONBA_PTR_TO_JSON(residentPoolId, residentPoolId_);
      DARABONBA_PTR_TO_JSON(scheduledPolicies, scheduledPolicies_);
    };
    friend void from_json(const Darabonba::Json& j, PutScalingConfigInput& obj) { 
      DARABONBA_PTR_FROM_JSON(enableMixMode, enableMixMode_);
      DARABONBA_PTR_FROM_JSON(enableOnDemandScaling, enableOnDemandScaling_);
      DARABONBA_PTR_FROM_JSON(horizontalScalingPolicies, horizontalScalingPolicies_);
      DARABONBA_PTR_FROM_JSON(minInstances, minInstances_);
      DARABONBA_PTR_FROM_JSON(requestDispatchPolicy, requestDispatchPolicy_);
      DARABONBA_PTR_FROM_JSON(residentPoolId, residentPoolId_);
      DARABONBA_PTR_FROM_JSON(scheduledPolicies, scheduledPolicies_);
    };
    PutScalingConfigInput() = default ;
    PutScalingConfigInput(const PutScalingConfigInput &) = default ;
    PutScalingConfigInput(PutScalingConfigInput &&) = default ;
    PutScalingConfigInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutScalingConfigInput() = default ;
    PutScalingConfigInput& operator=(const PutScalingConfigInput &) = default ;
    PutScalingConfigInput& operator=(PutScalingConfigInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableMixMode_ == nullptr
        && this->enableOnDemandScaling_ == nullptr && this->horizontalScalingPolicies_ == nullptr && this->minInstances_ == nullptr && this->requestDispatchPolicy_ == nullptr && this->residentPoolId_ == nullptr
        && this->scheduledPolicies_ == nullptr; };
    // enableMixMode Field Functions 
    bool hasEnableMixMode() const { return this->enableMixMode_ != nullptr;};
    void deleteEnableMixMode() { this->enableMixMode_ = nullptr;};
    inline bool getEnableMixMode() const { DARABONBA_PTR_GET_DEFAULT(enableMixMode_, false) };
    inline PutScalingConfigInput& setEnableMixMode(bool enableMixMode) { DARABONBA_PTR_SET_VALUE(enableMixMode_, enableMixMode) };


    // enableOnDemandScaling Field Functions 
    bool hasEnableOnDemandScaling() const { return this->enableOnDemandScaling_ != nullptr;};
    void deleteEnableOnDemandScaling() { this->enableOnDemandScaling_ = nullptr;};
    inline bool getEnableOnDemandScaling() const { DARABONBA_PTR_GET_DEFAULT(enableOnDemandScaling_, false) };
    inline PutScalingConfigInput& setEnableOnDemandScaling(bool enableOnDemandScaling) { DARABONBA_PTR_SET_VALUE(enableOnDemandScaling_, enableOnDemandScaling) };


    // horizontalScalingPolicies Field Functions 
    bool hasHorizontalScalingPolicies() const { return this->horizontalScalingPolicies_ != nullptr;};
    void deleteHorizontalScalingPolicies() { this->horizontalScalingPolicies_ = nullptr;};
    inline const vector<ScalingPolicy> & getHorizontalScalingPolicies() const { DARABONBA_PTR_GET_CONST(horizontalScalingPolicies_, vector<ScalingPolicy>) };
    inline vector<ScalingPolicy> getHorizontalScalingPolicies() { DARABONBA_PTR_GET(horizontalScalingPolicies_, vector<ScalingPolicy>) };
    inline PutScalingConfigInput& setHorizontalScalingPolicies(const vector<ScalingPolicy> & horizontalScalingPolicies) { DARABONBA_PTR_SET_VALUE(horizontalScalingPolicies_, horizontalScalingPolicies) };
    inline PutScalingConfigInput& setHorizontalScalingPolicies(vector<ScalingPolicy> && horizontalScalingPolicies) { DARABONBA_PTR_SET_RVALUE(horizontalScalingPolicies_, horizontalScalingPolicies) };


    // minInstances Field Functions 
    bool hasMinInstances() const { return this->minInstances_ != nullptr;};
    void deleteMinInstances() { this->minInstances_ = nullptr;};
    inline int64_t getMinInstances() const { DARABONBA_PTR_GET_DEFAULT(minInstances_, 0L) };
    inline PutScalingConfigInput& setMinInstances(int64_t minInstances) { DARABONBA_PTR_SET_VALUE(minInstances_, minInstances) };


    // requestDispatchPolicy Field Functions 
    bool hasRequestDispatchPolicy() const { return this->requestDispatchPolicy_ != nullptr;};
    void deleteRequestDispatchPolicy() { this->requestDispatchPolicy_ = nullptr;};
    inline string getRequestDispatchPolicy() const { DARABONBA_PTR_GET_DEFAULT(requestDispatchPolicy_, "") };
    inline PutScalingConfigInput& setRequestDispatchPolicy(string requestDispatchPolicy) { DARABONBA_PTR_SET_VALUE(requestDispatchPolicy_, requestDispatchPolicy) };


    // residentPoolId Field Functions 
    bool hasResidentPoolId() const { return this->residentPoolId_ != nullptr;};
    void deleteResidentPoolId() { this->residentPoolId_ = nullptr;};
    inline string getResidentPoolId() const { DARABONBA_PTR_GET_DEFAULT(residentPoolId_, "") };
    inline PutScalingConfigInput& setResidentPoolId(string residentPoolId) { DARABONBA_PTR_SET_VALUE(residentPoolId_, residentPoolId) };


    // scheduledPolicies Field Functions 
    bool hasScheduledPolicies() const { return this->scheduledPolicies_ != nullptr;};
    void deleteScheduledPolicies() { this->scheduledPolicies_ = nullptr;};
    inline const vector<ScheduledPolicy> & getScheduledPolicies() const { DARABONBA_PTR_GET_CONST(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline vector<ScheduledPolicy> getScheduledPolicies() { DARABONBA_PTR_GET(scheduledPolicies_, vector<ScheduledPolicy>) };
    inline PutScalingConfigInput& setScheduledPolicies(const vector<ScheduledPolicy> & scheduledPolicies) { DARABONBA_PTR_SET_VALUE(scheduledPolicies_, scheduledPolicies) };
    inline PutScalingConfigInput& setScheduledPolicies(vector<ScheduledPolicy> && scheduledPolicies) { DARABONBA_PTR_SET_RVALUE(scheduledPolicies_, scheduledPolicies) };


  protected:
    shared_ptr<bool> enableMixMode_ {};
    shared_ptr<bool> enableOnDemandScaling_ {};
    shared_ptr<vector<ScalingPolicy>> horizontalScalingPolicies_ {};
    shared_ptr<int64_t> minInstances_ {};
    shared_ptr<string> requestDispatchPolicy_ {};
    shared_ptr<string> residentPoolId_ {};
    shared_ptr<vector<ScheduledPolicy>> scheduledPolicies_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
