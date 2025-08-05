// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODYDATAPLANLISTQUOTASUBQUOTAINFOLISTSCHEDULEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODYDATAPLANLISTQUOTASUBQUOTAINFOLISTSCHEDULEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(currPlan, currPlan_);
      DARABONBA_PTR_TO_JSON(currTime, currTime_);
      DARABONBA_PTR_TO_JSON(nextPlan, nextPlan_);
      DARABONBA_PTR_TO_JSON(nextTime, nextTime_);
      DARABONBA_PTR_TO_JSON(oncePlan, oncePlan_);
      DARABONBA_PTR_TO_JSON(onceTime, onceTime_);
      DARABONBA_PTR_TO_JSON(operatorName, operatorName_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(currPlan, currPlan_);
      DARABONBA_PTR_FROM_JSON(currTime, currTime_);
      DARABONBA_PTR_FROM_JSON(nextPlan, nextPlan_);
      DARABONBA_PTR_FROM_JSON(nextTime, nextTime_);
      DARABONBA_PTR_FROM_JSON(oncePlan, oncePlan_);
      DARABONBA_PTR_FROM_JSON(onceTime, onceTime_);
      DARABONBA_PTR_FROM_JSON(operatorName, operatorName_);
    };
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo() = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo(const ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo &) = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo(ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo &&) = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo() = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& operator=(const ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo &) = default ;
    ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& operator=(ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currPlan_ != nullptr
        && this->currTime_ != nullptr && this->nextPlan_ != nullptr && this->nextTime_ != nullptr && this->oncePlan_ != nullptr && this->onceTime_ != nullptr
        && this->operatorName_ != nullptr; };
    // currPlan Field Functions 
    bool hasCurrPlan() const { return this->currPlan_ != nullptr;};
    void deleteCurrPlan() { this->currPlan_ = nullptr;};
    inline string currPlan() const { DARABONBA_PTR_GET_DEFAULT(currPlan_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setCurrPlan(string currPlan) { DARABONBA_PTR_SET_VALUE(currPlan_, currPlan) };


    // currTime Field Functions 
    bool hasCurrTime() const { return this->currTime_ != nullptr;};
    void deleteCurrTime() { this->currTime_ = nullptr;};
    inline string currTime() const { DARABONBA_PTR_GET_DEFAULT(currTime_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setCurrTime(string currTime) { DARABONBA_PTR_SET_VALUE(currTime_, currTime) };


    // nextPlan Field Functions 
    bool hasNextPlan() const { return this->nextPlan_ != nullptr;};
    void deleteNextPlan() { this->nextPlan_ = nullptr;};
    inline string nextPlan() const { DARABONBA_PTR_GET_DEFAULT(nextPlan_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setNextPlan(string nextPlan) { DARABONBA_PTR_SET_VALUE(nextPlan_, nextPlan) };


    // nextTime Field Functions 
    bool hasNextTime() const { return this->nextTime_ != nullptr;};
    void deleteNextTime() { this->nextTime_ = nullptr;};
    inline string nextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setNextTime(string nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


    // oncePlan Field Functions 
    bool hasOncePlan() const { return this->oncePlan_ != nullptr;};
    void deleteOncePlan() { this->oncePlan_ = nullptr;};
    inline string oncePlan() const { DARABONBA_PTR_GET_DEFAULT(oncePlan_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setOncePlan(string oncePlan) { DARABONBA_PTR_SET_VALUE(oncePlan_, oncePlan) };


    // onceTime Field Functions 
    bool hasOnceTime() const { return this->onceTime_ != nullptr;};
    void deleteOnceTime() { this->onceTime_ = nullptr;};
    inline string onceTime() const { DARABONBA_PTR_GET_DEFAULT(onceTime_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setOnceTime(string onceTime) { DARABONBA_PTR_SET_VALUE(onceTime_, onceTime) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline ListQuotasPlansResponseBodyDataPlanListQuotaSubQuotaInfoListScheduleInfo& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


  protected:
    // The quota plan that takes effect based on the scheduling plan.
    std::shared_ptr<string> currPlan_ = nullptr;
    // The time when the current quota plan is scheduled.
    std::shared_ptr<string> currTime_ = nullptr;
    // The next quota plan that will take effect based on the scheduling plan.
    std::shared_ptr<string> nextPlan_ = nullptr;
    // The time when the next quota plan is scheduled.
    std::shared_ptr<string> nextTime_ = nullptr;
    // If the quota plan that immediately takes effect is different from the current quota plan, this parameter is not empty.
    std::shared_ptr<string> oncePlan_ = nullptr;
    // The time when the quota plan immediately takes effect.
    std::shared_ptr<string> onceTime_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> operatorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
