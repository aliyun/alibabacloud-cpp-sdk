// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHALOGSRESPONSEBODYHALOGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHALOGSRESPONSEBODYHALOGITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeHALogsResponseBodyHaLogItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHALogsResponseBodyHaLogItems& obj) { 
      DARABONBA_PTR_TO_JSON(SwitchCauseCode, switchCauseCode_);
      DARABONBA_PTR_TO_JSON(SwitchCauseDetail, switchCauseDetail_);
      DARABONBA_PTR_TO_JSON(SwitchFinishTime, switchFinishTime_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(SwitchStartTime, switchStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHALogsResponseBodyHaLogItems& obj) { 
      DARABONBA_PTR_FROM_JSON(SwitchCauseCode, switchCauseCode_);
      DARABONBA_PTR_FROM_JSON(SwitchCauseDetail, switchCauseDetail_);
      DARABONBA_PTR_FROM_JSON(SwitchFinishTime, switchFinishTime_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(SwitchStartTime, switchStartTime_);
    };
    DescribeHALogsResponseBodyHaLogItems() = default ;
    DescribeHALogsResponseBodyHaLogItems(const DescribeHALogsResponseBodyHaLogItems &) = default ;
    DescribeHALogsResponseBodyHaLogItems(DescribeHALogsResponseBodyHaLogItems &&) = default ;
    DescribeHALogsResponseBodyHaLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHALogsResponseBodyHaLogItems() = default ;
    DescribeHALogsResponseBodyHaLogItems& operator=(const DescribeHALogsResponseBodyHaLogItems &) = default ;
    DescribeHALogsResponseBodyHaLogItems& operator=(DescribeHALogsResponseBodyHaLogItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->switchCauseCode_ == nullptr
        && return this->switchCauseDetail_ == nullptr && return this->switchFinishTime_ == nullptr && return this->switchId_ == nullptr && return this->switchStartTime_ == nullptr; };
    // switchCauseCode Field Functions 
    bool hasSwitchCauseCode() const { return this->switchCauseCode_ != nullptr;};
    void deleteSwitchCauseCode() { this->switchCauseCode_ = nullptr;};
    inline string switchCauseCode() const { DARABONBA_PTR_GET_DEFAULT(switchCauseCode_, "") };
    inline DescribeHALogsResponseBodyHaLogItems& setSwitchCauseCode(string switchCauseCode) { DARABONBA_PTR_SET_VALUE(switchCauseCode_, switchCauseCode) };


    // switchCauseDetail Field Functions 
    bool hasSwitchCauseDetail() const { return this->switchCauseDetail_ != nullptr;};
    void deleteSwitchCauseDetail() { this->switchCauseDetail_ = nullptr;};
    inline string switchCauseDetail() const { DARABONBA_PTR_GET_DEFAULT(switchCauseDetail_, "") };
    inline DescribeHALogsResponseBodyHaLogItems& setSwitchCauseDetail(string switchCauseDetail) { DARABONBA_PTR_SET_VALUE(switchCauseDetail_, switchCauseDetail) };


    // switchFinishTime Field Functions 
    bool hasSwitchFinishTime() const { return this->switchFinishTime_ != nullptr;};
    void deleteSwitchFinishTime() { this->switchFinishTime_ = nullptr;};
    inline string switchFinishTime() const { DARABONBA_PTR_GET_DEFAULT(switchFinishTime_, "") };
    inline DescribeHALogsResponseBodyHaLogItems& setSwitchFinishTime(string switchFinishTime) { DARABONBA_PTR_SET_VALUE(switchFinishTime_, switchFinishTime) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline DescribeHALogsResponseBodyHaLogItems& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // switchStartTime Field Functions 
    bool hasSwitchStartTime() const { return this->switchStartTime_ != nullptr;};
    void deleteSwitchStartTime() { this->switchStartTime_ = nullptr;};
    inline string switchStartTime() const { DARABONBA_PTR_GET_DEFAULT(switchStartTime_, "") };
    inline DescribeHALogsResponseBodyHaLogItems& setSwitchStartTime(string switchStartTime) { DARABONBA_PTR_SET_VALUE(switchStartTime_, switchStartTime) };


  protected:
    // The reason code of the failover.
    std::shared_ptr<string> switchCauseCode_ = nullptr;
    // The reason of the failover.
    std::shared_ptr<string> switchCauseDetail_ = nullptr;
    // The time when the failover ended.
    std::shared_ptr<string> switchFinishTime_ = nullptr;
    std::shared_ptr<string> switchId_ = nullptr;
    // The time when the failover started.
    std::shared_ptr<string> switchStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
