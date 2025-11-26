// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBASESTRATEGYPERIODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBASESTRATEGYPERIODREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveBaseStrategyPeriodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBaseStrategyPeriodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(OnlyWeekdays, onlyWeekdays_);
      DARABONBA_PTR_TO_JSON(OnlyWorkdays, onlyWorkdays_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
      DARABONBA_PTR_TO_JSON(WorkingTime, workingTime_);
      DARABONBA_PTR_TO_JSON(WorkingTimeFramesJson, workingTimeFramesJson_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBaseStrategyPeriodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(OnlyWeekdays, onlyWeekdays_);
      DARABONBA_PTR_FROM_JSON(OnlyWorkdays, onlyWorkdays_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
      DARABONBA_PTR_FROM_JSON(WorkingTime, workingTime_);
      DARABONBA_PTR_FROM_JSON(WorkingTimeFramesJson, workingTimeFramesJson_);
    };
    SaveBaseStrategyPeriodRequest() = default ;
    SaveBaseStrategyPeriodRequest(const SaveBaseStrategyPeriodRequest &) = default ;
    SaveBaseStrategyPeriodRequest(SaveBaseStrategyPeriodRequest &&) = default ;
    SaveBaseStrategyPeriodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBaseStrategyPeriodRequest() = default ;
    SaveBaseStrategyPeriodRequest& operator=(const SaveBaseStrategyPeriodRequest &) = default ;
    SaveBaseStrategyPeriodRequest& operator=(SaveBaseStrategyPeriodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entryId_ == nullptr
        && return this->onlyWeekdays_ == nullptr && return this->onlyWorkdays_ == nullptr && return this->strategyLevel_ == nullptr && return this->workingTime_ == nullptr && return this->workingTimeFramesJson_ == nullptr; };
    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline SaveBaseStrategyPeriodRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // onlyWeekdays Field Functions 
    bool hasOnlyWeekdays() const { return this->onlyWeekdays_ != nullptr;};
    void deleteOnlyWeekdays() { this->onlyWeekdays_ = nullptr;};
    inline bool onlyWeekdays() const { DARABONBA_PTR_GET_DEFAULT(onlyWeekdays_, false) };
    inline SaveBaseStrategyPeriodRequest& setOnlyWeekdays(bool onlyWeekdays) { DARABONBA_PTR_SET_VALUE(onlyWeekdays_, onlyWeekdays) };


    // onlyWorkdays Field Functions 
    bool hasOnlyWorkdays() const { return this->onlyWorkdays_ != nullptr;};
    void deleteOnlyWorkdays() { this->onlyWorkdays_ = nullptr;};
    inline bool onlyWorkdays() const { DARABONBA_PTR_GET_DEFAULT(onlyWorkdays_, false) };
    inline SaveBaseStrategyPeriodRequest& setOnlyWorkdays(bool onlyWorkdays) { DARABONBA_PTR_SET_VALUE(onlyWorkdays_, onlyWorkdays) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t strategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline SaveBaseStrategyPeriodRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


    // workingTime Field Functions 
    bool hasWorkingTime() const { return this->workingTime_ != nullptr;};
    void deleteWorkingTime() { this->workingTime_ = nullptr;};
    inline const vector<string> & workingTime() const { DARABONBA_PTR_GET_CONST(workingTime_, vector<string>) };
    inline vector<string> workingTime() { DARABONBA_PTR_GET(workingTime_, vector<string>) };
    inline SaveBaseStrategyPeriodRequest& setWorkingTime(const vector<string> & workingTime) { DARABONBA_PTR_SET_VALUE(workingTime_, workingTime) };
    inline SaveBaseStrategyPeriodRequest& setWorkingTime(vector<string> && workingTime) { DARABONBA_PTR_SET_RVALUE(workingTime_, workingTime) };


    // workingTimeFramesJson Field Functions 
    bool hasWorkingTimeFramesJson() const { return this->workingTimeFramesJson_ != nullptr;};
    void deleteWorkingTimeFramesJson() { this->workingTimeFramesJson_ = nullptr;};
    inline string workingTimeFramesJson() const { DARABONBA_PTR_GET_DEFAULT(workingTimeFramesJson_, "") };
    inline SaveBaseStrategyPeriodRequest& setWorkingTimeFramesJson(string workingTimeFramesJson) { DARABONBA_PTR_SET_VALUE(workingTimeFramesJson_, workingTimeFramesJson) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entryId_ = nullptr;
    std::shared_ptr<bool> onlyWeekdays_ = nullptr;
    std::shared_ptr<bool> onlyWorkdays_ = nullptr;
    std::shared_ptr<int32_t> strategyLevel_ = nullptr;
    std::shared_ptr<vector<string>> workingTime_ = nullptr;
    std::shared_ptr<string> workingTimeFramesJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
