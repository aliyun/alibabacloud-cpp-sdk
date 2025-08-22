// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETRETCODESHARESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETRETCODESHARESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SetRetcodeShareStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRetcodeShareStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetRetcodeShareStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetRetcodeShareStatusRequest() = default ;
    SetRetcodeShareStatusRequest(const SetRetcodeShareStatusRequest &) = default ;
    SetRetcodeShareStatusRequest(SetRetcodeShareStatusRequest &&) = default ;
    SetRetcodeShareStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRetcodeShareStatusRequest() = default ;
    SetRetcodeShareStatusRequest& operator=(const SetRetcodeShareStatusRequest &) = default ;
    SetRetcodeShareStatusRequest& operator=(SetRetcodeShareStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->pid_ != nullptr && this->status_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetRetcodeShareStatusRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SetRetcodeShareStatusRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline SetRetcodeShareStatusRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the application that is monitored by Browser Monitoring.
    std::shared_ptr<string> appName_ = nullptr;
    // The process identifier (PID) of the application. 
    // 
    // Log on to the **ARMS console**. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of an application. The URL in the address bar contains the process ID (PID) of the application. The PID is indicated in the `pid=xxx` format. The PID is usually percent encoded as `xxx%40xxx`. You must modify this value to remove the percent encoding. For example, if the PID in the URL is `eb4zdose6v%409781be0f44d****`, you must replace `%40` with @ to obtain `eb4zdose6v@9781be0f44d****`.
    std::shared_ptr<string> pid_ = nullptr;
    // Specifies whether to turn on or turn off the logon-free sharing switch. Valid values:
    // 
    // *   `true`: Turn on the switch.
    // *   `false`: Turn off the switch.
    // 
    // This parameter is required.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
