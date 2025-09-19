// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPushAllTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPushAllTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPushAllTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ModifyPushAllTaskRequest() = default ;
    ModifyPushAllTaskRequest(const ModifyPushAllTaskRequest &) = default ;
    ModifyPushAllTaskRequest(ModifyPushAllTaskRequest &&) = default ;
    ModifyPushAllTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPushAllTaskRequest() = default ;
    ModifyPushAllTaskRequest& operator=(const ModifyPushAllTaskRequest &) = default ;
    ModifyPushAllTaskRequest& operator=(ModifyPushAllTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceIp_ != nullptr
        && this->tasks_ != nullptr && this->uuids_ != nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyPushAllTaskRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline string tasks() const { DARABONBA_PTR_GET_DEFAULT(tasks_, "") };
    inline ModifyPushAllTaskRequest& setTasks(string tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ModifyPushAllTaskRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The check items. Separate multiple check items with commas (,). Valid values:
    // 
    // *   **OVAL_ENTITY**: Common Vulnerabilities and Exposures (CVE) vulnerabilities.
    // *   **CMS**: Web-CMS vulnerabilities.
    // *   **SYSVUL**: Windows system vulnerabilities.
    // *   **SCA**: application vulnerabilities.
    // *   **HEALTH_CHECK**: baselines.
    // *   **WEBSHELL**: webshells.
    // *   **PROC_SNAPSHOT**: processes.
    // *   **PORT_SNAPSHOT**: ports.
    // *   **ACCOUNT_SNAPSHOT**: accounts.
    // *   **SOFTWARE_SNAPSHOT**: software assets.
    // *   **SCA_SNAPSHOT**: middleware, databases, and web services.
    // *   **CROND_SNAPSHOT**: scheduled tasks.
    // *   **AUTORUN_SNAPSHOT**: startup items.
    // *   **LKM_SNAPSHOT**: kernel modules.
    // *   **SCA_PROXY_SNAPSHOT**: websites.
    // 
    // This parameter is required.
    std::shared_ptr<string> tasks_ = nullptr;
    // The UUIDs of servers on which you want to perform security check tasks. Separate multiple UUIDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
