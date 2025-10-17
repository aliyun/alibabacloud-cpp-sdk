// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateJobScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
    };
    UpdateJobScriptRequest() = default ;
    UpdateJobScriptRequest(const UpdateJobScriptRequest &) = default ;
    UpdateJobScriptRequest(UpdateJobScriptRequest &&) = default ;
    UpdateJobScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobScriptRequest() = default ;
    UpdateJobScriptRequest& operator=(const UpdateJobScriptRequest &) = default ;
    UpdateJobScriptRequest& operator=(UpdateJobScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->jobId_ == nullptr && return this->scriptContent_ == nullptr && return this->versionDescription_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateJobScriptRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateJobScriptRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateJobScriptRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline string scriptContent() const { DARABONBA_PTR_GET_DEFAULT(scriptContent_, "") };
    inline UpdateJobScriptRequest& setScriptContent(string scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string versionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline UpdateJobScriptRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<string> scriptContent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> versionDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
