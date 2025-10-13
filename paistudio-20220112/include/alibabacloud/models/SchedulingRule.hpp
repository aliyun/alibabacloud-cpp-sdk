// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULINGRULE_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULINGRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SchedulingRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchedulingRule& obj) { 
      DARABONBA_PTR_TO_JSON(CronTab, cronTab_);
      DARABONBA_PTR_TO_JSON(EndAt, endAt_);
      DARABONBA_PTR_TO_JSON(ExecuteOnce, executeOnce_);
      DARABONBA_PTR_TO_JSON(StartAt, startAt_);
    };
    friend void from_json(const Darabonba::Json& j, SchedulingRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CronTab, cronTab_);
      DARABONBA_PTR_FROM_JSON(EndAt, endAt_);
      DARABONBA_PTR_FROM_JSON(ExecuteOnce, executeOnce_);
      DARABONBA_PTR_FROM_JSON(StartAt, startAt_);
    };
    SchedulingRule() = default ;
    SchedulingRule(const SchedulingRule &) = default ;
    SchedulingRule(SchedulingRule &&) = default ;
    SchedulingRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchedulingRule() = default ;
    SchedulingRule& operator=(const SchedulingRule &) = default ;
    SchedulingRule& operator=(SchedulingRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronTab_ == nullptr
        && return this->endAt_ == nullptr && return this->executeOnce_ == nullptr && return this->startAt_ == nullptr; };
    // cronTab Field Functions 
    bool hasCronTab() const { return this->cronTab_ != nullptr;};
    void deleteCronTab() { this->cronTab_ = nullptr;};
    inline string cronTab() const { DARABONBA_PTR_GET_DEFAULT(cronTab_, "") };
    inline SchedulingRule& setCronTab(string cronTab) { DARABONBA_PTR_SET_VALUE(cronTab_, cronTab) };


    // endAt Field Functions 
    bool hasEndAt() const { return this->endAt_ != nullptr;};
    void deleteEndAt() { this->endAt_ = nullptr;};
    inline string endAt() const { DARABONBA_PTR_GET_DEFAULT(endAt_, "") };
    inline SchedulingRule& setEndAt(string endAt) { DARABONBA_PTR_SET_VALUE(endAt_, endAt) };


    // executeOnce Field Functions 
    bool hasExecuteOnce() const { return this->executeOnce_ != nullptr;};
    void deleteExecuteOnce() { this->executeOnce_ = nullptr;};
    inline bool executeOnce() const { DARABONBA_PTR_GET_DEFAULT(executeOnce_, false) };
    inline SchedulingRule& setExecuteOnce(bool executeOnce) { DARABONBA_PTR_SET_VALUE(executeOnce_, executeOnce) };


    // startAt Field Functions 
    bool hasStartAt() const { return this->startAt_ != nullptr;};
    void deleteStartAt() { this->startAt_ = nullptr;};
    inline string startAt() const { DARABONBA_PTR_GET_DEFAULT(startAt_, "") };
    inline SchedulingRule& setStartAt(string startAt) { DARABONBA_PTR_SET_VALUE(startAt_, startAt) };


  protected:
    std::shared_ptr<string> cronTab_ = nullptr;
    std::shared_ptr<string> endAt_ = nullptr;
    std::shared_ptr<bool> executeOnce_ = nullptr;
    std::shared_ptr<string> startAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
