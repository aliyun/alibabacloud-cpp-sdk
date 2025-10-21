// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERIODICSCHEDULINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_PERIODICSCHEDULINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BriefResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class PeriodicSchedulingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PeriodicSchedulingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(isFinished, isFinished_);
      DARABONBA_PTR_TO_JSON(onlyOnceTriggerTime, onlyOnceTriggerTime_);
      DARABONBA_PTR_TO_JSON(onlyOnceTriggerTimeIsExpired, onlyOnceTriggerTimeIsExpired_);
      DARABONBA_PTR_TO_JSON(periodicSchedulingLevel, periodicSchedulingLevel_);
      DARABONBA_PTR_TO_JSON(periodicSchedulingValues, periodicSchedulingValues_);
      DARABONBA_PTR_TO_JSON(periodicTriggerTime, periodicTriggerTime_);
      DARABONBA_PTR_TO_JSON(resourceSetting, resourceSetting_);
    };
    friend void from_json(const Darabonba::Json& j, PeriodicSchedulingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(isFinished, isFinished_);
      DARABONBA_PTR_FROM_JSON(onlyOnceTriggerTime, onlyOnceTriggerTime_);
      DARABONBA_PTR_FROM_JSON(onlyOnceTriggerTimeIsExpired, onlyOnceTriggerTimeIsExpired_);
      DARABONBA_PTR_FROM_JSON(periodicSchedulingLevel, periodicSchedulingLevel_);
      DARABONBA_PTR_FROM_JSON(periodicSchedulingValues, periodicSchedulingValues_);
      DARABONBA_PTR_FROM_JSON(periodicTriggerTime, periodicTriggerTime_);
      DARABONBA_PTR_FROM_JSON(resourceSetting, resourceSetting_);
    };
    PeriodicSchedulingPolicy() = default ;
    PeriodicSchedulingPolicy(const PeriodicSchedulingPolicy &) = default ;
    PeriodicSchedulingPolicy(PeriodicSchedulingPolicy &&) = default ;
    PeriodicSchedulingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PeriodicSchedulingPolicy() = default ;
    PeriodicSchedulingPolicy& operator=(const PeriodicSchedulingPolicy &) = default ;
    PeriodicSchedulingPolicy& operator=(PeriodicSchedulingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isFinished_ == nullptr
        && return this->onlyOnceTriggerTime_ == nullptr && return this->onlyOnceTriggerTimeIsExpired_ == nullptr && return this->periodicSchedulingLevel_ == nullptr && return this->periodicSchedulingValues_ == nullptr && return this->periodicTriggerTime_ == nullptr
        && return this->resourceSetting_ == nullptr; };
    // isFinished Field Functions 
    bool hasIsFinished() const { return this->isFinished_ != nullptr;};
    void deleteIsFinished() { this->isFinished_ = nullptr;};
    inline bool isFinished() const { DARABONBA_PTR_GET_DEFAULT(isFinished_, false) };
    inline PeriodicSchedulingPolicy& setIsFinished(bool isFinished) { DARABONBA_PTR_SET_VALUE(isFinished_, isFinished) };


    // onlyOnceTriggerTime Field Functions 
    bool hasOnlyOnceTriggerTime() const { return this->onlyOnceTriggerTime_ != nullptr;};
    void deleteOnlyOnceTriggerTime() { this->onlyOnceTriggerTime_ = nullptr;};
    inline int64_t onlyOnceTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(onlyOnceTriggerTime_, 0L) };
    inline PeriodicSchedulingPolicy& setOnlyOnceTriggerTime(int64_t onlyOnceTriggerTime) { DARABONBA_PTR_SET_VALUE(onlyOnceTriggerTime_, onlyOnceTriggerTime) };


    // onlyOnceTriggerTimeIsExpired Field Functions 
    bool hasOnlyOnceTriggerTimeIsExpired() const { return this->onlyOnceTriggerTimeIsExpired_ != nullptr;};
    void deleteOnlyOnceTriggerTimeIsExpired() { this->onlyOnceTriggerTimeIsExpired_ = nullptr;};
    inline bool onlyOnceTriggerTimeIsExpired() const { DARABONBA_PTR_GET_DEFAULT(onlyOnceTriggerTimeIsExpired_, false) };
    inline PeriodicSchedulingPolicy& setOnlyOnceTriggerTimeIsExpired(bool onlyOnceTriggerTimeIsExpired) { DARABONBA_PTR_SET_VALUE(onlyOnceTriggerTimeIsExpired_, onlyOnceTriggerTimeIsExpired) };


    // periodicSchedulingLevel Field Functions 
    bool hasPeriodicSchedulingLevel() const { return this->periodicSchedulingLevel_ != nullptr;};
    void deletePeriodicSchedulingLevel() { this->periodicSchedulingLevel_ = nullptr;};
    inline string periodicSchedulingLevel() const { DARABONBA_PTR_GET_DEFAULT(periodicSchedulingLevel_, "") };
    inline PeriodicSchedulingPolicy& setPeriodicSchedulingLevel(string periodicSchedulingLevel) { DARABONBA_PTR_SET_VALUE(periodicSchedulingLevel_, periodicSchedulingLevel) };


    // periodicSchedulingValues Field Functions 
    bool hasPeriodicSchedulingValues() const { return this->periodicSchedulingValues_ != nullptr;};
    void deletePeriodicSchedulingValues() { this->periodicSchedulingValues_ = nullptr;};
    inline const vector<int32_t> & periodicSchedulingValues() const { DARABONBA_PTR_GET_CONST(periodicSchedulingValues_, vector<int32_t>) };
    inline vector<int32_t> periodicSchedulingValues() { DARABONBA_PTR_GET(periodicSchedulingValues_, vector<int32_t>) };
    inline PeriodicSchedulingPolicy& setPeriodicSchedulingValues(const vector<int32_t> & periodicSchedulingValues) { DARABONBA_PTR_SET_VALUE(periodicSchedulingValues_, periodicSchedulingValues) };
    inline PeriodicSchedulingPolicy& setPeriodicSchedulingValues(vector<int32_t> && periodicSchedulingValues) { DARABONBA_PTR_SET_RVALUE(periodicSchedulingValues_, periodicSchedulingValues) };


    // periodicTriggerTime Field Functions 
    bool hasPeriodicTriggerTime() const { return this->periodicTriggerTime_ != nullptr;};
    void deletePeriodicTriggerTime() { this->periodicTriggerTime_ = nullptr;};
    inline int64_t periodicTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(periodicTriggerTime_, 0L) };
    inline PeriodicSchedulingPolicy& setPeriodicTriggerTime(int64_t periodicTriggerTime) { DARABONBA_PTR_SET_VALUE(periodicTriggerTime_, periodicTriggerTime) };


    // resourceSetting Field Functions 
    bool hasResourceSetting() const { return this->resourceSetting_ != nullptr;};
    void deleteResourceSetting() { this->resourceSetting_ = nullptr;};
    inline const BriefResourceSetting & resourceSetting() const { DARABONBA_PTR_GET_CONST(resourceSetting_, BriefResourceSetting) };
    inline BriefResourceSetting resourceSetting() { DARABONBA_PTR_GET(resourceSetting_, BriefResourceSetting) };
    inline PeriodicSchedulingPolicy& setResourceSetting(const BriefResourceSetting & resourceSetting) { DARABONBA_PTR_SET_VALUE(resourceSetting_, resourceSetting) };
    inline PeriodicSchedulingPolicy& setResourceSetting(BriefResourceSetting && resourceSetting) { DARABONBA_PTR_SET_RVALUE(resourceSetting_, resourceSetting) };


  protected:
    std::shared_ptr<bool> isFinished_ = nullptr;
    std::shared_ptr<int64_t> onlyOnceTriggerTime_ = nullptr;
    std::shared_ptr<bool> onlyOnceTriggerTimeIsExpired_ = nullptr;
    std::shared_ptr<string> periodicSchedulingLevel_ = nullptr;
    std::shared_ptr<vector<int32_t>> periodicSchedulingValues_ = nullptr;
    std::shared_ptr<int64_t> periodicTriggerTime_ = nullptr;
    std::shared_ptr<BriefResourceSetting> resourceSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
