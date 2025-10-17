// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYHALOGITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODYHALOGITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesResponseBodyHaLogItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesResponseBodyHaLogItems& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedSessions, affectedSessions_);
      DARABONBA_PTR_TO_JSON(FromDBType, fromDBType_);
      DARABONBA_PTR_TO_JSON(SwitchCauseCode, switchCauseCode_);
      DARABONBA_PTR_TO_JSON(SwitchCauseDetail, switchCauseDetail_);
      DARABONBA_PTR_TO_JSON(SwitchFinishTime, switchFinishTime_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(SwitchStartTime, switchStartTime_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
      DARABONBA_PTR_TO_JSON(TotalSessions, totalSessions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesResponseBodyHaLogItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedSessions, affectedSessions_);
      DARABONBA_PTR_FROM_JSON(FromDBType, fromDBType_);
      DARABONBA_PTR_FROM_JSON(SwitchCauseCode, switchCauseCode_);
      DARABONBA_PTR_FROM_JSON(SwitchCauseDetail, switchCauseDetail_);
      DARABONBA_PTR_FROM_JSON(SwitchFinishTime, switchFinishTime_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(SwitchStartTime, switchStartTime_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
      DARABONBA_PTR_FROM_JSON(TotalSessions, totalSessions_);
    };
    DescribeDBLogFilesResponseBodyHaLogItems() = default ;
    DescribeDBLogFilesResponseBodyHaLogItems(const DescribeDBLogFilesResponseBodyHaLogItems &) = default ;
    DescribeDBLogFilesResponseBodyHaLogItems(DescribeDBLogFilesResponseBodyHaLogItems &&) = default ;
    DescribeDBLogFilesResponseBodyHaLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesResponseBodyHaLogItems() = default ;
    DescribeDBLogFilesResponseBodyHaLogItems& operator=(const DescribeDBLogFilesResponseBodyHaLogItems &) = default ;
    DescribeDBLogFilesResponseBodyHaLogItems& operator=(DescribeDBLogFilesResponseBodyHaLogItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedSessions_ == nullptr
        && return this->fromDBType_ == nullptr && return this->switchCauseCode_ == nullptr && return this->switchCauseDetail_ == nullptr && return this->switchFinishTime_ == nullptr && return this->switchId_ == nullptr
        && return this->switchStartTime_ == nullptr && return this->switchType_ == nullptr && return this->totalSessions_ == nullptr; };
    // affectedSessions Field Functions 
    bool hasAffectedSessions() const { return this->affectedSessions_ != nullptr;};
    void deleteAffectedSessions() { this->affectedSessions_ = nullptr;};
    inline int64_t affectedSessions() const { DARABONBA_PTR_GET_DEFAULT(affectedSessions_, 0L) };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setAffectedSessions(int64_t affectedSessions) { DARABONBA_PTR_SET_VALUE(affectedSessions_, affectedSessions) };


    // fromDBType Field Functions 
    bool hasFromDBType() const { return this->fromDBType_ != nullptr;};
    void deleteFromDBType() { this->fromDBType_ = nullptr;};
    inline string fromDBType() const { DARABONBA_PTR_GET_DEFAULT(fromDBType_, "") };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setFromDBType(string fromDBType) { DARABONBA_PTR_SET_VALUE(fromDBType_, fromDBType) };


    // switchCauseCode Field Functions 
    bool hasSwitchCauseCode() const { return this->switchCauseCode_ != nullptr;};
    void deleteSwitchCauseCode() { this->switchCauseCode_ = nullptr;};
    inline string switchCauseCode() const { DARABONBA_PTR_GET_DEFAULT(switchCauseCode_, "") };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setSwitchCauseCode(string switchCauseCode) { DARABONBA_PTR_SET_VALUE(switchCauseCode_, switchCauseCode) };


    // switchCauseDetail Field Functions 
    bool hasSwitchCauseDetail() const { return this->switchCauseDetail_ != nullptr;};
    void deleteSwitchCauseDetail() { this->switchCauseDetail_ = nullptr;};
    inline string switchCauseDetail() const { DARABONBA_PTR_GET_DEFAULT(switchCauseDetail_, "") };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setSwitchCauseDetail(string switchCauseDetail) { DARABONBA_PTR_SET_VALUE(switchCauseDetail_, switchCauseDetail) };


    // switchFinishTime Field Functions 
    bool hasSwitchFinishTime() const { return this->switchFinishTime_ != nullptr;};
    void deleteSwitchFinishTime() { this->switchFinishTime_ = nullptr;};
    inline string switchFinishTime() const { DARABONBA_PTR_GET_DEFAULT(switchFinishTime_, "") };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setSwitchFinishTime(string switchFinishTime) { DARABONBA_PTR_SET_VALUE(switchFinishTime_, switchFinishTime) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // switchStartTime Field Functions 
    bool hasSwitchStartTime() const { return this->switchStartTime_ != nullptr;};
    void deleteSwitchStartTime() { this->switchStartTime_ = nullptr;};
    inline string switchStartTime() const { DARABONBA_PTR_GET_DEFAULT(switchStartTime_, "") };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setSwitchStartTime(string switchStartTime) { DARABONBA_PTR_SET_VALUE(switchStartTime_, switchStartTime) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline int64_t switchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, 0L) };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setSwitchType(int64_t switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


    // totalSessions Field Functions 
    bool hasTotalSessions() const { return this->totalSessions_ != nullptr;};
    void deleteTotalSessions() { this->totalSessions_ = nullptr;};
    inline int64_t totalSessions() const { DARABONBA_PTR_GET_DEFAULT(totalSessions_, 0L) };
    inline DescribeDBLogFilesResponseBodyHaLogItems& setTotalSessions(int64_t totalSessions) { DARABONBA_PTR_SET_VALUE(totalSessions_, totalSessions) };


  protected:
    std::shared_ptr<int64_t> affectedSessions_ = nullptr;
    std::shared_ptr<string> fromDBType_ = nullptr;
    std::shared_ptr<string> switchCauseCode_ = nullptr;
    std::shared_ptr<string> switchCauseDetail_ = nullptr;
    std::shared_ptr<string> switchFinishTime_ = nullptr;
    std::shared_ptr<string> switchId_ = nullptr;
    std::shared_ptr<string> switchStartTime_ = nullptr;
    std::shared_ptr<int64_t> switchType_ = nullptr;
    std::shared_ptr<int64_t> totalSessions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
