// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPGRADESTATUSRESPONSEBODYUPGRADETASK_HPP_
#define ALIBABACLOUD_MODELS_GETUPGRADESTATUSRESPONSEBODYUPGRADETASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetUpgradeStatusResponseBodyUpgradeTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUpgradeStatusResponseBodyUpgradeTask& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetUpgradeStatusResponseBodyUpgradeTask& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetUpgradeStatusResponseBodyUpgradeTask() = default ;
    GetUpgradeStatusResponseBodyUpgradeTask(const GetUpgradeStatusResponseBodyUpgradeTask &) = default ;
    GetUpgradeStatusResponseBodyUpgradeTask(GetUpgradeStatusResponseBodyUpgradeTask &&) = default ;
    GetUpgradeStatusResponseBodyUpgradeTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUpgradeStatusResponseBodyUpgradeTask() = default ;
    GetUpgradeStatusResponseBodyUpgradeTask& operator=(const GetUpgradeStatusResponseBodyUpgradeTask &) = default ;
    GetUpgradeStatusResponseBodyUpgradeTask& operator=(GetUpgradeStatusResponseBodyUpgradeTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUpgradeStatusResponseBodyUpgradeTask& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUpgradeStatusResponseBodyUpgradeTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the update task.
    std::shared_ptr<string> message_ = nullptr;
    // The status of the update task. Valid values:
    // 
    // *   `running`: The update task is being executed.
    // *   `Success`: The update task is successfully executed.
    // *   `Failed`: The update task failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
