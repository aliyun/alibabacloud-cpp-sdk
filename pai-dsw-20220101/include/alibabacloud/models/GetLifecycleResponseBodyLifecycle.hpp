// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIFECYCLERESPONSEBODYLIFECYCLE_HPP_
#define ALIBABACLOUD_MODELS_GETLIFECYCLERESPONSEBODYLIFECYCLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetLifecycleResponseBodyLifecycle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLifecycleResponseBodyLifecycle& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_TO_JSON(LifecycleId, lifecycleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLifecycleResponseBodyLifecycle& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_FROM_JSON(LifecycleId, lifecycleId_);
    };
    GetLifecycleResponseBodyLifecycle() = default ;
    GetLifecycleResponseBodyLifecycle(const GetLifecycleResponseBodyLifecycle &) = default ;
    GetLifecycleResponseBodyLifecycle(GetLifecycleResponseBodyLifecycle &&) = default ;
    GetLifecycleResponseBodyLifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLifecycleResponseBodyLifecycle() = default ;
    GetLifecycleResponseBodyLifecycle& operator=(const GetLifecycleResponseBodyLifecycle &) = default ;
    GetLifecycleResponseBodyLifecycle& operator=(GetLifecycleResponseBodyLifecycle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->reasonCode_ == nullptr && return this->reasonMessage_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtEndTime_ == nullptr && return this->lifecycleId_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetLifecycleResponseBodyLifecycle& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetLifecycleResponseBodyLifecycle& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetLifecycleResponseBodyLifecycle& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetLifecycleResponseBodyLifecycle& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtEndTime Field Functions 
    bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
    void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
    inline string gmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
    inline GetLifecycleResponseBodyLifecycle& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


    // lifecycleId Field Functions 
    bool hasLifecycleId() const { return this->lifecycleId_ != nullptr;};
    void deleteLifecycleId() { this->lifecycleId_ = nullptr;};
    inline string lifecycleId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleId_, "") };
    inline GetLifecycleResponseBodyLifecycle& setLifecycleId(string lifecycleId) { DARABONBA_PTR_SET_VALUE(lifecycleId_, lifecycleId) };


  protected:
    // The status of the instance. Valid values:
    // 
    // *   Creating
    // *   SaveFailed: The instance image failed to be saved.
    // *   Stopped
    // *   Failed
    // *   ResourceAllocating
    // *   Stopping
    // *   Updating
    // *   Saving
    // *   Starting
    // *   Running
    // *   Saved
    // *   EnvPreparing: Preparing environment.
    // *   ArrearStopping: The service is being stopped due to overdue payments.
    // *   Arrearge: The service is stopped due to overdue payments.
    // *   Queuing
    // *   Recovering
    std::shared_ptr<string> status_ = nullptr;
    // The reason code that corresponds to an event.
    std::shared_ptr<string> reasonCode_ = nullptr;
    // The reason message that corresponds to an event.
    std::shared_ptr<string> reasonMessage_ = nullptr;
    // The time the status was created, specifically the time the instance transitioned to this status (in GMT).
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtEndTime_ = nullptr;
    std::shared_ptr<string> lifecycleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
