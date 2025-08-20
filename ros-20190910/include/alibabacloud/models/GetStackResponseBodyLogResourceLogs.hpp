// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYLOGRESOURCELOGS_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYLOGRESOURCELOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStackResponseBodyLogResourceLogsLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBodyLogResourceLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyLogResourceLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyLogResourceLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    GetStackResponseBodyLogResourceLogs() = default ;
    GetStackResponseBodyLogResourceLogs(const GetStackResponseBodyLogResourceLogs &) = default ;
    GetStackResponseBodyLogResourceLogs(GetStackResponseBodyLogResourceLogs &&) = default ;
    GetStackResponseBodyLogResourceLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyLogResourceLogs() = default ;
    GetStackResponseBodyLogResourceLogs& operator=(const GetStackResponseBodyLogResourceLogs &) = default ;
    GetStackResponseBodyLogResourceLogs& operator=(GetStackResponseBodyLogResourceLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logs_ != nullptr
        && this->resourceName_ != nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::GetStackResponseBodyLogResourceLogsLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::GetStackResponseBodyLogResourceLogsLogs>) };
    inline vector<Models::GetStackResponseBodyLogResourceLogsLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::GetStackResponseBodyLogResourceLogsLogs>) };
    inline GetStackResponseBodyLogResourceLogs& setLogs(const vector<Models::GetStackResponseBodyLogResourceLogsLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetStackResponseBodyLogResourceLogs& setLogs(vector<Models::GetStackResponseBodyLogResourceLogsLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetStackResponseBodyLogResourceLogs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    // All the logs that are associated with the resources.
    std::shared_ptr<vector<Models::GetStackResponseBodyLogResourceLogsLogs>> logs_ = nullptr;
    // The name of the resource that is defined in the template.
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
