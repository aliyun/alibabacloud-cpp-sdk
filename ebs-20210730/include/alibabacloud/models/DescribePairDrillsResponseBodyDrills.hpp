// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAIRDRILLSRESPONSEBODYDRILLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAIRDRILLSRESPONSEBODYDRILLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribePairDrillsResponseBodyDrills : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePairDrillsResponseBodyDrills& obj) { 
      DARABONBA_PTR_TO_JSON(DrillDiskId, drillDiskId_);
      DARABONBA_PTR_TO_JSON(DrillDiskStatus, drillDiskStatus_);
      DARABONBA_PTR_TO_JSON(DrillId, drillId_);
      DARABONBA_PTR_TO_JSON(RecoverPoint, recoverPoint_);
      DARABONBA_PTR_TO_JSON(StartAt, startAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePairDrillsResponseBodyDrills& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillDiskId, drillDiskId_);
      DARABONBA_PTR_FROM_JSON(DrillDiskStatus, drillDiskStatus_);
      DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
      DARABONBA_PTR_FROM_JSON(RecoverPoint, recoverPoint_);
      DARABONBA_PTR_FROM_JSON(StartAt, startAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    DescribePairDrillsResponseBodyDrills() = default ;
    DescribePairDrillsResponseBodyDrills(const DescribePairDrillsResponseBodyDrills &) = default ;
    DescribePairDrillsResponseBodyDrills(DescribePairDrillsResponseBodyDrills &&) = default ;
    DescribePairDrillsResponseBodyDrills(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePairDrillsResponseBodyDrills() = default ;
    DescribePairDrillsResponseBodyDrills& operator=(const DescribePairDrillsResponseBodyDrills &) = default ;
    DescribePairDrillsResponseBodyDrills& operator=(DescribePairDrillsResponseBodyDrills &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillDiskId_ == nullptr
        && return this->drillDiskStatus_ == nullptr && return this->drillId_ == nullptr && return this->recoverPoint_ == nullptr && return this->startAt_ == nullptr && return this->status_ == nullptr
        && return this->statusMessage_ == nullptr; };
    // drillDiskId Field Functions 
    bool hasDrillDiskId() const { return this->drillDiskId_ != nullptr;};
    void deleteDrillDiskId() { this->drillDiskId_ = nullptr;};
    inline string drillDiskId() const { DARABONBA_PTR_GET_DEFAULT(drillDiskId_, "") };
    inline DescribePairDrillsResponseBodyDrills& setDrillDiskId(string drillDiskId) { DARABONBA_PTR_SET_VALUE(drillDiskId_, drillDiskId) };


    // drillDiskStatus Field Functions 
    bool hasDrillDiskStatus() const { return this->drillDiskStatus_ != nullptr;};
    void deleteDrillDiskStatus() { this->drillDiskStatus_ = nullptr;};
    inline string drillDiskStatus() const { DARABONBA_PTR_GET_DEFAULT(drillDiskStatus_, "") };
    inline DescribePairDrillsResponseBodyDrills& setDrillDiskStatus(string drillDiskStatus) { DARABONBA_PTR_SET_VALUE(drillDiskStatus_, drillDiskStatus) };


    // drillId Field Functions 
    bool hasDrillId() const { return this->drillId_ != nullptr;};
    void deleteDrillId() { this->drillId_ = nullptr;};
    inline string drillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
    inline DescribePairDrillsResponseBodyDrills& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


    // recoverPoint Field Functions 
    bool hasRecoverPoint() const { return this->recoverPoint_ != nullptr;};
    void deleteRecoverPoint() { this->recoverPoint_ = nullptr;};
    inline int64_t recoverPoint() const { DARABONBA_PTR_GET_DEFAULT(recoverPoint_, 0L) };
    inline DescribePairDrillsResponseBodyDrills& setRecoverPoint(int64_t recoverPoint) { DARABONBA_PTR_SET_VALUE(recoverPoint_, recoverPoint) };


    // startAt Field Functions 
    bool hasStartAt() const { return this->startAt_ != nullptr;};
    void deleteStartAt() { this->startAt_ = nullptr;};
    inline int64_t startAt() const { DARABONBA_PTR_GET_DEFAULT(startAt_, 0L) };
    inline DescribePairDrillsResponseBodyDrills& setStartAt(int64_t startAt) { DARABONBA_PTR_SET_VALUE(startAt_, startAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePairDrillsResponseBodyDrills& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribePairDrillsResponseBodyDrills& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // The ID of the drill disk.
    std::shared_ptr<string> drillDiskId_ = nullptr;
    // The status of the drill disk. Valid values:
    // 
    // *   created
    // *   deleted
    // *   creating
    // *   deleting
    // 
    // >  This parameter can also display error code details if your drill disk fails to be created or deleted.
    std::shared_ptr<string> drillDiskStatus_ = nullptr;
    // The ID of the drill.
    std::shared_ptr<string> drillId_ = nullptr;
    // The recovery point of the drill. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> recoverPoint_ = nullptr;
    // The beginning time of the drill. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startAt_ = nullptr;
    // The status of the drill. Valid values:
    // 
    // *   execute_failed
    // *   executed
    // *   executing
    // *   clear_failed
    // *   clearing
    std::shared_ptr<string> status_ = nullptr;
    // The error message that was displayed if the drill failed to be executed.
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
