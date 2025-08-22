// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETRACEAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETRACEAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveTraceAppConfigRequestSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SaveTraceAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTraceAppConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTraceAppConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    SaveTraceAppConfigRequest() = default ;
    SaveTraceAppConfigRequest(const SaveTraceAppConfigRequest &) = default ;
    SaveTraceAppConfigRequest(SaveTraceAppConfigRequest &&) = default ;
    SaveTraceAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTraceAppConfigRequest() = default ;
    SaveTraceAppConfigRequest& operator=(const SaveTraceAppConfigRequest &) = default ;
    SaveTraceAppConfigRequest& operator=(SaveTraceAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pid_ != nullptr
        && this->settings_ != nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SaveTraceAppConfigRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const vector<SaveTraceAppConfigRequestSettings> & settings() const { DARABONBA_PTR_GET_CONST(settings_, vector<SaveTraceAppConfigRequestSettings>) };
    inline vector<SaveTraceAppConfigRequestSettings> settings() { DARABONBA_PTR_GET(settings_, vector<SaveTraceAppConfigRequestSettings>) };
    inline SaveTraceAppConfigRequest& setSettings(const vector<SaveTraceAppConfigRequestSettings> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline SaveTraceAppConfigRequest& setSettings(vector<SaveTraceAppConfigRequestSettings> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    // The process ID (PID) of the application.
    // 
    // Log on to the ARMS console. In the left-side navigation pane, choose **Application Monitoring** > **Application List**. On the Application List page, click the name of an application. The URL in the address bar contains the PID of the application. The PID is indicated in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is xxx%4074xxx, you must replace %40 with an at sign (@) to obtain xxx@74xxx.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The settings of Application Monitoring.
    std::shared_ptr<vector<SaveTraceAppConfigRequestSettings>> settings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
