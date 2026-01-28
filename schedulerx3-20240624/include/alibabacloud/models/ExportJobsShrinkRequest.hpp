// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ExportJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ExportJobType, exportJobType_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ExportJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ExportJobType, exportJobType_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIdsShrink_);
    };
    ExportJobsShrinkRequest() = default ;
    ExportJobsShrinkRequest(const ExportJobsShrinkRequest &) = default ;
    ExportJobsShrinkRequest(ExportJobsShrinkRequest &&) = default ;
    ExportJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportJobsShrinkRequest() = default ;
    ExportJobsShrinkRequest& operator=(const ExportJobsShrinkRequest &) = default ;
    ExportJobsShrinkRequest& operator=(ExportJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->clusterId_ == nullptr && this->exportJobType_ == nullptr && this->jobIdsShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ExportJobsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportJobsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // exportJobType Field Functions 
    bool hasExportJobType() const { return this->exportJobType_ != nullptr;};
    void deleteExportJobType() { this->exportJobType_ = nullptr;};
    inline int32_t getExportJobType() const { DARABONBA_PTR_GET_DEFAULT(exportJobType_, 0) };
    inline ExportJobsShrinkRequest& setExportJobType(int32_t exportJobType) { DARABONBA_PTR_SET_VALUE(exportJobType_, exportJobType) };


    // jobIdsShrink Field Functions 
    bool hasJobIdsShrink() const { return this->jobIdsShrink_ != nullptr;};
    void deleteJobIdsShrink() { this->jobIdsShrink_ = nullptr;};
    inline string getJobIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdsShrink_, "") };
    inline ExportJobsShrinkRequest& setJobIdsShrink(string jobIdsShrink) { DARABONBA_PTR_SET_VALUE(jobIdsShrink_, jobIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<int32_t> exportJobType_ {};
    // -
    shared_ptr<string> jobIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
