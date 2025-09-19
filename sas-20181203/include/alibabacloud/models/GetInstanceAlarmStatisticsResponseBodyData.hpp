// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEALARMSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEALARMSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstanceAlarmStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAlarmStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RemindCount, remindCount_);
      DARABONBA_PTR_TO_JSON(SeriousCount, seriousCount_);
      DARABONBA_PTR_TO_JSON(SuspiciousCount, suspiciousCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAlarmStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RemindCount, remindCount_);
      DARABONBA_PTR_FROM_JSON(SeriousCount, seriousCount_);
      DARABONBA_PTR_FROM_JSON(SuspiciousCount, suspiciousCount_);
    };
    GetInstanceAlarmStatisticsResponseBodyData() = default ;
    GetInstanceAlarmStatisticsResponseBodyData(const GetInstanceAlarmStatisticsResponseBodyData &) = default ;
    GetInstanceAlarmStatisticsResponseBodyData(GetInstanceAlarmStatisticsResponseBodyData &&) = default ;
    GetInstanceAlarmStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAlarmStatisticsResponseBodyData() = default ;
    GetInstanceAlarmStatisticsResponseBodyData& operator=(const GetInstanceAlarmStatisticsResponseBodyData &) = default ;
    GetInstanceAlarmStatisticsResponseBodyData& operator=(GetInstanceAlarmStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->remindCount_ != nullptr
        && this->seriousCount_ != nullptr && this->suspiciousCount_ != nullptr; };
    // remindCount Field Functions 
    bool hasRemindCount() const { return this->remindCount_ != nullptr;};
    void deleteRemindCount() { this->remindCount_ = nullptr;};
    inline int32_t remindCount() const { DARABONBA_PTR_GET_DEFAULT(remindCount_, 0) };
    inline GetInstanceAlarmStatisticsResponseBodyData& setRemindCount(int32_t remindCount) { DARABONBA_PTR_SET_VALUE(remindCount_, remindCount) };


    // seriousCount Field Functions 
    bool hasSeriousCount() const { return this->seriousCount_ != nullptr;};
    void deleteSeriousCount() { this->seriousCount_ = nullptr;};
    inline int32_t seriousCount() const { DARABONBA_PTR_GET_DEFAULT(seriousCount_, 0) };
    inline GetInstanceAlarmStatisticsResponseBodyData& setSeriousCount(int32_t seriousCount) { DARABONBA_PTR_SET_VALUE(seriousCount_, seriousCount) };


    // suspiciousCount Field Functions 
    bool hasSuspiciousCount() const { return this->suspiciousCount_ != nullptr;};
    void deleteSuspiciousCount() { this->suspiciousCount_ = nullptr;};
    inline int32_t suspiciousCount() const { DARABONBA_PTR_GET_DEFAULT(suspiciousCount_, 0) };
    inline GetInstanceAlarmStatisticsResponseBodyData& setSuspiciousCount(int32_t suspiciousCount) { DARABONBA_PTR_SET_VALUE(suspiciousCount_, suspiciousCount) };


  protected:
    // Reminder alarm count.
    std::shared_ptr<int32_t> remindCount_ = nullptr;
    // Critical alarm count.
    std::shared_ptr<int32_t> seriousCount_ = nullptr;
    // Suspicious alarm count.
    std::shared_ptr<int32_t> suspiciousCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
