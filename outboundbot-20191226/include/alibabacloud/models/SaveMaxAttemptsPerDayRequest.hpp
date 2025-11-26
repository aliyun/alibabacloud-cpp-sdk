// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEMAXATTEMPTSPERDAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEMAXATTEMPTSPERDAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveMaxAttemptsPerDayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveMaxAttemptsPerDayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntryId, entryId_);
      DARABONBA_PTR_TO_JSON(MaxAttemptsPerDay, maxAttemptsPerDay_);
      DARABONBA_PTR_TO_JSON(StrategyLevel, strategyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, SaveMaxAttemptsPerDayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptsPerDay, maxAttemptsPerDay_);
      DARABONBA_PTR_FROM_JSON(StrategyLevel, strategyLevel_);
    };
    SaveMaxAttemptsPerDayRequest() = default ;
    SaveMaxAttemptsPerDayRequest(const SaveMaxAttemptsPerDayRequest &) = default ;
    SaveMaxAttemptsPerDayRequest(SaveMaxAttemptsPerDayRequest &&) = default ;
    SaveMaxAttemptsPerDayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveMaxAttemptsPerDayRequest() = default ;
    SaveMaxAttemptsPerDayRequest& operator=(const SaveMaxAttemptsPerDayRequest &) = default ;
    SaveMaxAttemptsPerDayRequest& operator=(SaveMaxAttemptsPerDayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entryId_ == nullptr
        && return this->maxAttemptsPerDay_ == nullptr && return this->strategyLevel_ == nullptr; };
    // entryId Field Functions 
    bool hasEntryId() const { return this->entryId_ != nullptr;};
    void deleteEntryId() { this->entryId_ = nullptr;};
    inline string entryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
    inline SaveMaxAttemptsPerDayRequest& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


    // maxAttemptsPerDay Field Functions 
    bool hasMaxAttemptsPerDay() const { return this->maxAttemptsPerDay_ != nullptr;};
    void deleteMaxAttemptsPerDay() { this->maxAttemptsPerDay_ = nullptr;};
    inline int32_t maxAttemptsPerDay() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptsPerDay_, 0) };
    inline SaveMaxAttemptsPerDayRequest& setMaxAttemptsPerDay(int32_t maxAttemptsPerDay) { DARABONBA_PTR_SET_VALUE(maxAttemptsPerDay_, maxAttemptsPerDay) };


    // strategyLevel Field Functions 
    bool hasStrategyLevel() const { return this->strategyLevel_ != nullptr;};
    void deleteStrategyLevel() { this->strategyLevel_ = nullptr;};
    inline int32_t strategyLevel() const { DARABONBA_PTR_GET_DEFAULT(strategyLevel_, 0) };
    inline SaveMaxAttemptsPerDayRequest& setStrategyLevel(int32_t strategyLevel) { DARABONBA_PTR_SET_VALUE(strategyLevel_, strategyLevel) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> entryId_ = nullptr;
    std::shared_ptr<int32_t> maxAttemptsPerDay_ = nullptr;
    std::shared_ptr<int32_t> strategyLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
