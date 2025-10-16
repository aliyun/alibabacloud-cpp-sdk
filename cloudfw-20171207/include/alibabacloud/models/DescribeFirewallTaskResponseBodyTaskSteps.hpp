// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTASKRESPONSEBODYTASKSTEPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLTASKRESPONSEBODYTASKSTEPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallTaskResponseBodyTaskSteps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallTaskResponseBodyTaskSteps& obj) { 
      DARABONBA_PTR_TO_JSON(StepInfo, stepInfo_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
      DARABONBA_PTR_TO_JSON(StepProgress, stepProgress_);
      DARABONBA_PTR_TO_JSON(StepStatus, stepStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallTaskResponseBodyTaskSteps& obj) { 
      DARABONBA_PTR_FROM_JSON(StepInfo, stepInfo_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
      DARABONBA_PTR_FROM_JSON(StepProgress, stepProgress_);
      DARABONBA_PTR_FROM_JSON(StepStatus, stepStatus_);
    };
    DescribeFirewallTaskResponseBodyTaskSteps() = default ;
    DescribeFirewallTaskResponseBodyTaskSteps(const DescribeFirewallTaskResponseBodyTaskSteps &) = default ;
    DescribeFirewallTaskResponseBodyTaskSteps(DescribeFirewallTaskResponseBodyTaskSteps &&) = default ;
    DescribeFirewallTaskResponseBodyTaskSteps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallTaskResponseBodyTaskSteps() = default ;
    DescribeFirewallTaskResponseBodyTaskSteps& operator=(const DescribeFirewallTaskResponseBodyTaskSteps &) = default ;
    DescribeFirewallTaskResponseBodyTaskSteps& operator=(DescribeFirewallTaskResponseBodyTaskSteps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stepInfo_ == nullptr
        && return this->stepName_ == nullptr && return this->stepProgress_ == nullptr && return this->stepStatus_ == nullptr; };
    // stepInfo Field Functions 
    bool hasStepInfo() const { return this->stepInfo_ != nullptr;};
    void deleteStepInfo() { this->stepInfo_ = nullptr;};
    inline string stepInfo() const { DARABONBA_PTR_GET_DEFAULT(stepInfo_, "") };
    inline DescribeFirewallTaskResponseBodyTaskSteps& setStepInfo(string stepInfo) { DARABONBA_PTR_SET_VALUE(stepInfo_, stepInfo) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline DescribeFirewallTaskResponseBodyTaskSteps& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


    // stepProgress Field Functions 
    bool hasStepProgress() const { return this->stepProgress_ != nullptr;};
    void deleteStepProgress() { this->stepProgress_ = nullptr;};
    inline string stepProgress() const { DARABONBA_PTR_GET_DEFAULT(stepProgress_, "") };
    inline DescribeFirewallTaskResponseBodyTaskSteps& setStepProgress(string stepProgress) { DARABONBA_PTR_SET_VALUE(stepProgress_, stepProgress) };


    // stepStatus Field Functions 
    bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
    void deleteStepStatus() { this->stepStatus_ = nullptr;};
    inline string stepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
    inline DescribeFirewallTaskResponseBodyTaskSteps& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


  protected:
    std::shared_ptr<string> stepInfo_ = nullptr;
    std::shared_ptr<string> stepName_ = nullptr;
    std::shared_ptr<string> stepProgress_ = nullptr;
    std::shared_ptr<string> stepStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
