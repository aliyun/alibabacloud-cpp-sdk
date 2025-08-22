// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACEAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACEAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTraceAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceAppConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceAppConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
    };
    GetTraceAppConfigRequest() = default ;
    GetTraceAppConfigRequest(const GetTraceAppConfigRequest &) = default ;
    GetTraceAppConfigRequest(GetTraceAppConfigRequest &&) = default ;
    GetTraceAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceAppConfigRequest() = default ;
    GetTraceAppConfigRequest& operator=(const GetTraceAppConfigRequest &) = default ;
    GetTraceAppConfigRequest& operator=(GetTraceAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetTraceAppConfigRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


  protected:
    // The process ID (PID) of the application.
    // 
    // You can use one of the following methods to obtain the PID:
    // 
    // *   API: Call the [ListTraceApps](https://help.aliyun.com/document_detail/2588008.html) operation
    // *   Console: Log on to the Application Real-Time Monitoring Service (ARMS) console. In the left-side navigation pane, choose **Application Monitoring** > **Application List**. On the Application List page, click the name of your application. The URL in the address bar contains the PID of the application. The PID is indicated in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is xxx%4074xxx, you must replace %40 with an at sign (@) to obtain xxx@74xxx.
    // 
    // > 
    // 
    // *   To obtain the PID in the console, your application must be monitored by Application Monitoring rather than Managed Service for OpenTelemetry.
    // 
    // *   The GetTraceAppConfig operation can query only the custom settings of applications that are monitored by Application Monitoring.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
