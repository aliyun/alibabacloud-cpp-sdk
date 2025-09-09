// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCESHUTDOWNTIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCESHUTDOWNTIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceShutdownTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceShutdownTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(RemainingTimeInMs, remainingTimeInMs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceShutdownTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(RemainingTimeInMs, remainingTimeInMs_);
    };
    CreateInstanceShutdownTimerRequest() = default ;
    CreateInstanceShutdownTimerRequest(const CreateInstanceShutdownTimerRequest &) = default ;
    CreateInstanceShutdownTimerRequest(CreateInstanceShutdownTimerRequest &&) = default ;
    CreateInstanceShutdownTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceShutdownTimerRequest() = default ;
    CreateInstanceShutdownTimerRequest& operator=(const CreateInstanceShutdownTimerRequest &) = default ;
    CreateInstanceShutdownTimerRequest& operator=(CreateInstanceShutdownTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dueTime_ != nullptr
        && this->remainingTimeInMs_ != nullptr; };
    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline string dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, "") };
    inline CreateInstanceShutdownTimerRequest& setDueTime(string dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // remainingTimeInMs Field Functions 
    bool hasRemainingTimeInMs() const { return this->remainingTimeInMs_ != nullptr;};
    void deleteRemainingTimeInMs() { this->remainingTimeInMs_ = nullptr;};
    inline int64_t remainingTimeInMs() const { DARABONBA_PTR_GET_DEFAULT(remainingTimeInMs_, 0L) };
    inline CreateInstanceShutdownTimerRequest& setRemainingTimeInMs(int64_t remainingTimeInMs) { DARABONBA_PTR_SET_VALUE(remainingTimeInMs_, remainingTimeInMs) };


  protected:
    // The scheduled stop time.
    std::shared_ptr<string> dueTime_ = nullptr;
    // The time duration before the instance is stopped. Unit: milliseconds.
    std::shared_ptr<int64_t> remainingTimeInMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
