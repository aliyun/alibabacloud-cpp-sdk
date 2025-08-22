// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTEXTENDINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTEXTENDINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestExtendInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestExtendInterval& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(EndMinute, endMinute_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      DARABONBA_PTR_TO_JSON(StartMinute, startMinute_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestExtendInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(EndMinute, endMinute_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      DARABONBA_PTR_FROM_JSON(StartMinute, startMinute_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateSyntheticTaskRequestExtendInterval() = default ;
    CreateSyntheticTaskRequestExtendInterval(const CreateSyntheticTaskRequestExtendInterval &) = default ;
    CreateSyntheticTaskRequestExtendInterval(CreateSyntheticTaskRequestExtendInterval &&) = default ;
    CreateSyntheticTaskRequestExtendInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestExtendInterval() = default ;
    CreateSyntheticTaskRequestExtendInterval& operator=(const CreateSyntheticTaskRequestExtendInterval &) = default ;
    CreateSyntheticTaskRequestExtendInterval& operator=(CreateSyntheticTaskRequestExtendInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->endHour_ != nullptr && this->endMinute_ != nullptr && this->endTime_ != nullptr && this->startHour_ != nullptr && this->startMinute_ != nullptr
        && this->startTime_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const vector<int64_t> & days() const { DARABONBA_PTR_GET_CONST(days_, vector<int64_t>) };
    inline vector<int64_t> days() { DARABONBA_PTR_GET(days_, vector<int64_t>) };
    inline CreateSyntheticTaskRequestExtendInterval& setDays(const vector<int64_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline CreateSyntheticTaskRequestExtendInterval& setDays(vector<int64_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int64_t endHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0L) };
    inline CreateSyntheticTaskRequestExtendInterval& setEndHour(int64_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // endMinute Field Functions 
    bool hasEndMinute() const { return this->endMinute_ != nullptr;};
    void deleteEndMinute() { this->endMinute_ = nullptr;};
    inline int64_t endMinute() const { DARABONBA_PTR_GET_DEFAULT(endMinute_, 0L) };
    inline CreateSyntheticTaskRequestExtendInterval& setEndMinute(int64_t endMinute) { DARABONBA_PTR_SET_VALUE(endMinute_, endMinute) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateSyntheticTaskRequestExtendInterval& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int64_t startHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
    inline CreateSyntheticTaskRequestExtendInterval& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    // startMinute Field Functions 
    bool hasStartMinute() const { return this->startMinute_ != nullptr;};
    void deleteStartMinute() { this->startMinute_ = nullptr;};
    inline int64_t startMinute() const { DARABONBA_PTR_GET_DEFAULT(startMinute_, 0L) };
    inline CreateSyntheticTaskRequestExtendInterval& setStartMinute(int64_t startMinute) { DARABONBA_PTR_SET_VALUE(startMinute_, startMinute) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateSyntheticTaskRequestExtendInterval& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The day on which synthetic monitoring is performed.
    std::shared_ptr<vector<int64_t>> days_ = nullptr;
    // The hour at which synthetic monitoring ends.
    std::shared_ptr<int64_t> endHour_ = nullptr;
    // The minute at which synthetic monitoring ends.
    std::shared_ptr<int64_t> endMinute_ = nullptr;
    // The time when synthetic monitoring ends. The format is `yyyy-MM-dd HH`.
    std::shared_ptr<string> endTime_ = nullptr;
    // The hour at which synthetic monitoring starts.
    std::shared_ptr<int64_t> startHour_ = nullptr;
    // The minute at which synthetic monitoring starts.
    std::shared_ptr<int64_t> startMinute_ = nullptr;
    // The time when synthetic monitoring starts. The format is `yyyy-MM-dd HH`.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
