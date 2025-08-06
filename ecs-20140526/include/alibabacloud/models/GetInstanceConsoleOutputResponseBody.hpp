// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECONSOLEOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECONSOLEOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class GetInstanceConsoleOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceConsoleOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleOutput, consoleOutput_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceConsoleOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleOutput, consoleOutput_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceConsoleOutputResponseBody() = default ;
    GetInstanceConsoleOutputResponseBody(const GetInstanceConsoleOutputResponseBody &) = default ;
    GetInstanceConsoleOutputResponseBody(GetInstanceConsoleOutputResponseBody &&) = default ;
    GetInstanceConsoleOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceConsoleOutputResponseBody() = default ;
    GetInstanceConsoleOutputResponseBody& operator=(const GetInstanceConsoleOutputResponseBody &) = default ;
    GetInstanceConsoleOutputResponseBody& operator=(GetInstanceConsoleOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consoleOutput_ != nullptr
        && this->instanceId_ != nullptr && this->lastUpdateTime_ != nullptr && this->requestId_ != nullptr; };
    // consoleOutput Field Functions 
    bool hasConsoleOutput() const { return this->consoleOutput_ != nullptr;};
    void deleteConsoleOutput() { this->consoleOutput_ = nullptr;};
    inline string consoleOutput() const { DARABONBA_PTR_GET_DEFAULT(consoleOutput_, "") };
    inline GetInstanceConsoleOutputResponseBody& setConsoleOutput(string consoleOutput) { DARABONBA_PTR_SET_VALUE(consoleOutput_, consoleOutput) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceConsoleOutputResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline GetInstanceConsoleOutputResponseBody& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceConsoleOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Base64-encoded command output of the instance.
    std::shared_ptr<string> consoleOutput_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the last log entry was generated in the Linux kernel. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC+8.
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
