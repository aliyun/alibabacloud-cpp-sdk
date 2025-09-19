// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYREPAIRSETTINGFLOWSTEP_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYREPAIRSETTINGFLOWSTEP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckDetailResponseBodyRepairSettingFlowStep : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailResponseBodyRepairSettingFlowStep& obj) { 
      DARABONBA_PTR_TO_JSON(ShowText, showText_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailResponseBodyRepairSettingFlowStep& obj) { 
      DARABONBA_PTR_FROM_JSON(ShowText, showText_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    GetCheckDetailResponseBodyRepairSettingFlowStep() = default ;
    GetCheckDetailResponseBodyRepairSettingFlowStep(const GetCheckDetailResponseBodyRepairSettingFlowStep &) = default ;
    GetCheckDetailResponseBodyRepairSettingFlowStep(GetCheckDetailResponseBodyRepairSettingFlowStep &&) = default ;
    GetCheckDetailResponseBodyRepairSettingFlowStep(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailResponseBodyRepairSettingFlowStep() = default ;
    GetCheckDetailResponseBodyRepairSettingFlowStep& operator=(const GetCheckDetailResponseBodyRepairSettingFlowStep &) = default ;
    GetCheckDetailResponseBodyRepairSettingFlowStep& operator=(GetCheckDetailResponseBodyRepairSettingFlowStep &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->showText_ != nullptr
        && this->step_ != nullptr; };
    // showText Field Functions 
    bool hasShowText() const { return this->showText_ != nullptr;};
    void deleteShowText() { this->showText_ = nullptr;};
    inline string showText() const { DARABONBA_PTR_GET_DEFAULT(showText_, "") };
    inline GetCheckDetailResponseBodyRepairSettingFlowStep& setShowText(string showText) { DARABONBA_PTR_SET_VALUE(showText_, showText) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline GetCheckDetailResponseBodyRepairSettingFlowStep& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The text description of the fixing step.
    std::shared_ptr<string> showText_ = nullptr;
    // The sequence number of the fixing step.
    std::shared_ptr<string> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
