// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTESCALATIONSTAGESTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTESCALATIONSTAGESTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IncidentContactStruct.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEscalationStageStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEscalationStageStruct& obj) { 
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(cycleNotifyCount, cycleNotifyCount_);
      DARABONBA_PTR_TO_JSON(cycleNotifyTime, cycleNotifyTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(effectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(stageIndex, stageIndex_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(waitToNextStageTime, waitToNextStageTime_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEscalationStageStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(cycleNotifyCount, cycleNotifyCount_);
      DARABONBA_PTR_FROM_JSON(cycleNotifyTime, cycleNotifyTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(effectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(stageIndex, stageIndex_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(waitToNextStageTime, waitToNextStageTime_);
    };
    IncidentEscalationStageStruct() = default ;
    IncidentEscalationStageStruct(const IncidentEscalationStageStruct &) = default ;
    IncidentEscalationStageStruct(IncidentEscalationStageStruct &&) = default ;
    IncidentEscalationStageStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEscalationStageStruct() = default ;
    IncidentEscalationStageStruct& operator=(const IncidentEscalationStageStruct &) = default ;
    IncidentEscalationStageStruct& operator=(IncidentEscalationStageStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contact_ == nullptr
        && this->cycleNotifyCount_ == nullptr && this->cycleNotifyTime_ == nullptr && this->description_ == nullptr && this->effectTime_ == nullptr && this->name_ == nullptr
        && this->stageIndex_ == nullptr && this->timeZone_ == nullptr && this->waitToNextStageTime_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const vector<IncidentContactStruct> & getContact() const { DARABONBA_PTR_GET_CONST(contact_, vector<IncidentContactStruct>) };
    inline vector<IncidentContactStruct> getContact() { DARABONBA_PTR_GET(contact_, vector<IncidentContactStruct>) };
    inline IncidentEscalationStageStruct& setContact(const vector<IncidentContactStruct> & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline IncidentEscalationStageStruct& setContact(vector<IncidentContactStruct> && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // cycleNotifyCount Field Functions 
    bool hasCycleNotifyCount() const { return this->cycleNotifyCount_ != nullptr;};
    void deleteCycleNotifyCount() { this->cycleNotifyCount_ = nullptr;};
    inline int32_t getCycleNotifyCount() const { DARABONBA_PTR_GET_DEFAULT(cycleNotifyCount_, 0) };
    inline IncidentEscalationStageStruct& setCycleNotifyCount(int32_t cycleNotifyCount) { DARABONBA_PTR_SET_VALUE(cycleNotifyCount_, cycleNotifyCount) };


    // cycleNotifyTime Field Functions 
    bool hasCycleNotifyTime() const { return this->cycleNotifyTime_ != nullptr;};
    void deleteCycleNotifyTime() { this->cycleNotifyTime_ = nullptr;};
    inline int32_t getCycleNotifyTime() const { DARABONBA_PTR_GET_DEFAULT(cycleNotifyTime_, 0) };
    inline IncidentEscalationStageStruct& setCycleNotifyTime(int32_t cycleNotifyTime) { DARABONBA_PTR_SET_VALUE(cycleNotifyTime_, cycleNotifyTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentEscalationStageStruct& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline string getEffectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
    inline IncidentEscalationStageStruct& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentEscalationStageStruct& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stageIndex Field Functions 
    bool hasStageIndex() const { return this->stageIndex_ != nullptr;};
    void deleteStageIndex() { this->stageIndex_ = nullptr;};
    inline int32_t getStageIndex() const { DARABONBA_PTR_GET_DEFAULT(stageIndex_, 0) };
    inline IncidentEscalationStageStruct& setStageIndex(int32_t stageIndex) { DARABONBA_PTR_SET_VALUE(stageIndex_, stageIndex) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline IncidentEscalationStageStruct& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // waitToNextStageTime Field Functions 
    bool hasWaitToNextStageTime() const { return this->waitToNextStageTime_ != nullptr;};
    void deleteWaitToNextStageTime() { this->waitToNextStageTime_ = nullptr;};
    inline int32_t getWaitToNextStageTime() const { DARABONBA_PTR_GET_DEFAULT(waitToNextStageTime_, 0) };
    inline IncidentEscalationStageStruct& setWaitToNextStageTime(int32_t waitToNextStageTime) { DARABONBA_PTR_SET_VALUE(waitToNextStageTime_, waitToNextStageTime) };


  protected:
    shared_ptr<vector<IncidentContactStruct>> contact_ {};
    shared_ptr<int32_t> cycleNotifyCount_ {};
    shared_ptr<int32_t> cycleNotifyTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> effectTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> stageIndex_ {};
    shared_ptr<string> timeZone_ {};
    shared_ptr<int32_t> waitToNextStageTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
