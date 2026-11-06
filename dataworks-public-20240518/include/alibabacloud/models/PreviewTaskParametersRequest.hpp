// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWTASKPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWTASKPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class PreviewTaskParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewTaskParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PreviewCount, previewCount_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewTaskParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PreviewCount, previewCount_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    PreviewTaskParametersRequest() = default ;
    PreviewTaskParametersRequest(const PreviewTaskParametersRequest &) = default ;
    PreviewTaskParametersRequest(PreviewTaskParametersRequest &&) = default ;
    PreviewTaskParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewTaskParametersRequest() = default ;
    PreviewTaskParametersRequest& operator=(const PreviewTaskParametersRequest &) = default ;
    PreviewTaskParametersRequest& operator=(PreviewTaskParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->cron_ == nullptr && this->parameters_ == nullptr && this->previewCount_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr
        && this->startTime_ == nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline PreviewTaskParametersRequest& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline PreviewTaskParametersRequest& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline PreviewTaskParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // previewCount Field Functions 
    bool hasPreviewCount() const { return this->previewCount_ != nullptr;};
    void deletePreviewCount() { this->previewCount_ = nullptr;};
    inline int32_t getPreviewCount() const { DARABONBA_PTR_GET_DEFAULT(previewCount_, 0) };
    inline PreviewTaskParametersRequest& setPreviewCount(int32_t previewCount) { DARABONBA_PTR_SET_VALUE(previewCount_, previewCount) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline PreviewTaskParametersRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline PreviewTaskParametersRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline PreviewTaskParametersRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The business date. The value is a 13-digit UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> bizdate_ {};
    // The scheduling CRON expression.
    // 
    // This parameter is required.
    shared_ptr<string> cron_ {};
    // The list of script parameters. The length cannot exceed 65,535 characters. Separate multiple parameters with spaces, such as para1=$bizdate para2=$[hh24]. An empty string is allowed.
    // 
    // This parameter is required.
    shared_ptr<string> parameters_ {};
    // The number of scheduling cycles to preview. Valid values: 1 to 10. Default value: 3.
    shared_ptr<int32_t> previewCount_ {};
    // The project environment. Valid values:
    // - Prod: production
    // - Dev: development
    // Default value: Prod.
    shared_ptr<string> projectEnv_ {};
    // The workspace ID. The workspace must belong to the current tenant.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The preview start time for the first scheduling day. The format is HH:mm:ss. Default value: 00:00:00. This parameter takes effect only for non-daily schedules and is used to filter out cycles that occur before this time on the first scheduling day.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
