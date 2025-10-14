// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESINSTANCESHUTDOWNTIMER_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESINSTANCESHUTDOWNTIMER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesResponseBodyInstancesInstanceShutdownTimer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesInstanceShutdownTimer& obj) { 
      DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RemainingTimeInMs, remainingTimeInMs_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesInstanceShutdownTimer& obj) { 
      DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RemainingTimeInMs, remainingTimeInMs_);
    };
    ListInstancesResponseBodyInstancesInstanceShutdownTimer() = default ;
    ListInstancesResponseBodyInstancesInstanceShutdownTimer(const ListInstancesResponseBodyInstancesInstanceShutdownTimer &) = default ;
    ListInstancesResponseBodyInstancesInstanceShutdownTimer(ListInstancesResponseBodyInstancesInstanceShutdownTimer &&) = default ;
    ListInstancesResponseBodyInstancesInstanceShutdownTimer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesInstanceShutdownTimer() = default ;
    ListInstancesResponseBodyInstancesInstanceShutdownTimer& operator=(const ListInstancesResponseBodyInstancesInstanceShutdownTimer &) = default ;
    ListInstancesResponseBodyInstancesInstanceShutdownTimer& operator=(ListInstancesResponseBodyInstancesInstanceShutdownTimer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dueTime_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->instanceId_ == nullptr && return this->remainingTimeInMs_ == nullptr; };
    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline string dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, "") };
    inline ListInstancesResponseBodyInstancesInstanceShutdownTimer& setDueTime(string dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListInstancesResponseBodyInstancesInstanceShutdownTimer& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListInstancesResponseBodyInstancesInstanceShutdownTimer& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstancesInstanceShutdownTimer& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remainingTimeInMs Field Functions 
    bool hasRemainingTimeInMs() const { return this->remainingTimeInMs_ != nullptr;};
    void deleteRemainingTimeInMs() { this->remainingTimeInMs_ = nullptr;};
    inline int64_t remainingTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(remainingTimeInMs_, 0L) };
    inline ListInstancesResponseBodyInstancesInstanceShutdownTimer& setRemainingTimeInMs(int64_t remainingTimeInMs) { DARABONBA_PTR_SET_VALUE(remainingTimeInMs_, remainingTimeInMs) };


  protected:
    // The scheduled stop time.
    std::shared_ptr<string> dueTime_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the instance was modified.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The remaining time before the instance is stopped.
    std::shared_ptr<int64_t> remainingTimeInMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
