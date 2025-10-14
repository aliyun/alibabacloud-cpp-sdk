// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODYFREETIER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCONFIGRESPONSEBODYFREETIER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetUserConfigResponseBodyFreeTier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserConfigResponseBodyFreeTier& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InitBaseUnit, initBaseUnit_);
      DARABONBA_PTR_TO_JSON(InitBaseValue, initBaseValue_);
      DARABONBA_PTR_TO_JSON(InitShowUnit, initShowUnit_);
      DARABONBA_PTR_TO_JSON(InitShowValue, initShowValue_);
      DARABONBA_PTR_TO_JSON(IsFreeTierUser, isFreeTierUser_);
      DARABONBA_PTR_TO_JSON(PeriodBaseUnit, periodBaseUnit_);
      DARABONBA_PTR_TO_JSON(PeriodBaseValue, periodBaseValue_);
      DARABONBA_PTR_TO_JSON(PeriodShowUnit, periodShowUnit_);
      DARABONBA_PTR_TO_JSON(PeriodShowValue, periodShowValue_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserConfigResponseBodyFreeTier& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InitBaseUnit, initBaseUnit_);
      DARABONBA_PTR_FROM_JSON(InitBaseValue, initBaseValue_);
      DARABONBA_PTR_FROM_JSON(InitShowUnit, initShowUnit_);
      DARABONBA_PTR_FROM_JSON(InitShowValue, initShowValue_);
      DARABONBA_PTR_FROM_JSON(IsFreeTierUser, isFreeTierUser_);
      DARABONBA_PTR_FROM_JSON(PeriodBaseUnit, periodBaseUnit_);
      DARABONBA_PTR_FROM_JSON(PeriodBaseValue, periodBaseValue_);
      DARABONBA_PTR_FROM_JSON(PeriodShowUnit, periodShowUnit_);
      DARABONBA_PTR_FROM_JSON(PeriodShowValue, periodShowValue_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetUserConfigResponseBodyFreeTier() = default ;
    GetUserConfigResponseBodyFreeTier(const GetUserConfigResponseBodyFreeTier &) = default ;
    GetUserConfigResponseBodyFreeTier(GetUserConfigResponseBodyFreeTier &&) = default ;
    GetUserConfigResponseBodyFreeTier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserConfigResponseBodyFreeTier() = default ;
    GetUserConfigResponseBodyFreeTier& operator=(const GetUserConfigResponseBodyFreeTier &) = default ;
    GetUserConfigResponseBodyFreeTier& operator=(GetUserConfigResponseBodyFreeTier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->initBaseUnit_ == nullptr && return this->initBaseValue_ == nullptr && return this->initShowUnit_ == nullptr && return this->initShowValue_ == nullptr && return this->isFreeTierUser_ == nullptr
        && return this->periodBaseUnit_ == nullptr && return this->periodBaseValue_ == nullptr && return this->periodShowUnit_ == nullptr && return this->periodShowValue_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetUserConfigResponseBodyFreeTier& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // initBaseUnit Field Functions 
    bool hasInitBaseUnit() const { return this->initBaseUnit_ != nullptr;};
    void deleteInitBaseUnit() { this->initBaseUnit_ = nullptr;};
    inline string initBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(initBaseUnit_, "") };
    inline GetUserConfigResponseBodyFreeTier& setInitBaseUnit(string initBaseUnit) { DARABONBA_PTR_SET_VALUE(initBaseUnit_, initBaseUnit) };


    // initBaseValue Field Functions 
    bool hasInitBaseValue() const { return this->initBaseValue_ != nullptr;};
    void deleteInitBaseValue() { this->initBaseValue_ = nullptr;};
    inline double initBaseValue() const { DARABONBA_PTR_GET_DEFAULT(initBaseValue_, 0.0) };
    inline GetUserConfigResponseBodyFreeTier& setInitBaseValue(double initBaseValue) { DARABONBA_PTR_SET_VALUE(initBaseValue_, initBaseValue) };


    // initShowUnit Field Functions 
    bool hasInitShowUnit() const { return this->initShowUnit_ != nullptr;};
    void deleteInitShowUnit() { this->initShowUnit_ = nullptr;};
    inline string initShowUnit() const { DARABONBA_PTR_GET_DEFAULT(initShowUnit_, "") };
    inline GetUserConfigResponseBodyFreeTier& setInitShowUnit(string initShowUnit) { DARABONBA_PTR_SET_VALUE(initShowUnit_, initShowUnit) };


    // initShowValue Field Functions 
    bool hasInitShowValue() const { return this->initShowValue_ != nullptr;};
    void deleteInitShowValue() { this->initShowValue_ = nullptr;};
    inline string initShowValue() const { DARABONBA_PTR_GET_DEFAULT(initShowValue_, "") };
    inline GetUserConfigResponseBodyFreeTier& setInitShowValue(string initShowValue) { DARABONBA_PTR_SET_VALUE(initShowValue_, initShowValue) };


    // isFreeTierUser Field Functions 
    bool hasIsFreeTierUser() const { return this->isFreeTierUser_ != nullptr;};
    void deleteIsFreeTierUser() { this->isFreeTierUser_ = nullptr;};
    inline bool isFreeTierUser() const { DARABONBA_PTR_GET_DEFAULT(isFreeTierUser_, false) };
    inline GetUserConfigResponseBodyFreeTier& setIsFreeTierUser(bool isFreeTierUser) { DARABONBA_PTR_SET_VALUE(isFreeTierUser_, isFreeTierUser) };


    // periodBaseUnit Field Functions 
    bool hasPeriodBaseUnit() const { return this->periodBaseUnit_ != nullptr;};
    void deletePeriodBaseUnit() { this->periodBaseUnit_ = nullptr;};
    inline string periodBaseUnit() const { DARABONBA_PTR_GET_DEFAULT(periodBaseUnit_, "") };
    inline GetUserConfigResponseBodyFreeTier& setPeriodBaseUnit(string periodBaseUnit) { DARABONBA_PTR_SET_VALUE(periodBaseUnit_, periodBaseUnit) };


    // periodBaseValue Field Functions 
    bool hasPeriodBaseValue() const { return this->periodBaseValue_ != nullptr;};
    void deletePeriodBaseValue() { this->periodBaseValue_ = nullptr;};
    inline double periodBaseValue() const { DARABONBA_PTR_GET_DEFAULT(periodBaseValue_, 0.0) };
    inline GetUserConfigResponseBodyFreeTier& setPeriodBaseValue(double periodBaseValue) { DARABONBA_PTR_SET_VALUE(periodBaseValue_, periodBaseValue) };


    // periodShowUnit Field Functions 
    bool hasPeriodShowUnit() const { return this->periodShowUnit_ != nullptr;};
    void deletePeriodShowUnit() { this->periodShowUnit_ = nullptr;};
    inline string periodShowUnit() const { DARABONBA_PTR_GET_DEFAULT(periodShowUnit_, "") };
    inline GetUserConfigResponseBodyFreeTier& setPeriodShowUnit(string periodShowUnit) { DARABONBA_PTR_SET_VALUE(periodShowUnit_, periodShowUnit) };


    // periodShowValue Field Functions 
    bool hasPeriodShowValue() const { return this->periodShowValue_ != nullptr;};
    void deletePeriodShowValue() { this->periodShowValue_ = nullptr;};
    inline string periodShowValue() const { DARABONBA_PTR_GET_DEFAULT(periodShowValue_, "") };
    inline GetUserConfigResponseBodyFreeTier& setPeriodShowValue(string periodShowValue) { DARABONBA_PTR_SET_VALUE(periodShowValue_, periodShowValue) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetUserConfigResponseBodyFreeTier& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserConfigResponseBodyFreeTier& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> initBaseUnit_ = nullptr;
    std::shared_ptr<double> initBaseValue_ = nullptr;
    std::shared_ptr<string> initShowUnit_ = nullptr;
    std::shared_ptr<string> initShowValue_ = nullptr;
    std::shared_ptr<bool> isFreeTierUser_ = nullptr;
    std::shared_ptr<string> periodBaseUnit_ = nullptr;
    std::shared_ptr<double> periodBaseValue_ = nullptr;
    std::shared_ptr<string> periodShowUnit_ = nullptr;
    std::shared_ptr<string> periodShowValue_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
