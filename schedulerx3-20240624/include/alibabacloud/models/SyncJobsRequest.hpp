// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class SyncJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(OriginalAppName, originalAppName_);
      DARABONBA_PTR_TO_JSON(OriginalClusterId, originalClusterId_);
      DARABONBA_PTR_TO_JSON(TargetAppName, targetAppName_);
      DARABONBA_PTR_TO_JSON(TargetClusterId, targetClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(OriginalAppName, originalAppName_);
      DARABONBA_PTR_FROM_JSON(OriginalClusterId, originalClusterId_);
      DARABONBA_PTR_FROM_JSON(TargetAppName, targetAppName_);
      DARABONBA_PTR_FROM_JSON(TargetClusterId, targetClusterId_);
    };
    SyncJobsRequest() = default ;
    SyncJobsRequest(const SyncJobsRequest &) = default ;
    SyncJobsRequest(SyncJobsRequest &&) = default ;
    SyncJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncJobsRequest() = default ;
    SyncJobsRequest& operator=(const SyncJobsRequest &) = default ;
    SyncJobsRequest& operator=(SyncJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr
        && return this->originalAppName_ == nullptr && return this->originalClusterId_ == nullptr && return this->targetAppName_ == nullptr && return this->targetClusterId_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<int64_t> & jobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<int64_t>) };
    inline vector<int64_t> jobIds() { DARABONBA_PTR_GET(jobIds_, vector<int64_t>) };
    inline SyncJobsRequest& setJobIds(const vector<int64_t> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline SyncJobsRequest& setJobIds(vector<int64_t> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


    // originalAppName Field Functions 
    bool hasOriginalAppName() const { return this->originalAppName_ != nullptr;};
    void deleteOriginalAppName() { this->originalAppName_ = nullptr;};
    inline string originalAppName() const { DARABONBA_PTR_GET_DEFAULT(originalAppName_, "") };
    inline SyncJobsRequest& setOriginalAppName(string originalAppName) { DARABONBA_PTR_SET_VALUE(originalAppName_, originalAppName) };


    // originalClusterId Field Functions 
    bool hasOriginalClusterId() const { return this->originalClusterId_ != nullptr;};
    void deleteOriginalClusterId() { this->originalClusterId_ = nullptr;};
    inline string originalClusterId() const { DARABONBA_PTR_GET_DEFAULT(originalClusterId_, "") };
    inline SyncJobsRequest& setOriginalClusterId(string originalClusterId) { DARABONBA_PTR_SET_VALUE(originalClusterId_, originalClusterId) };


    // targetAppName Field Functions 
    bool hasTargetAppName() const { return this->targetAppName_ != nullptr;};
    void deleteTargetAppName() { this->targetAppName_ = nullptr;};
    inline string targetAppName() const { DARABONBA_PTR_GET_DEFAULT(targetAppName_, "") };
    inline SyncJobsRequest& setTargetAppName(string targetAppName) { DARABONBA_PTR_SET_VALUE(targetAppName_, targetAppName) };


    // targetClusterId Field Functions 
    bool hasTargetClusterId() const { return this->targetClusterId_ != nullptr;};
    void deleteTargetClusterId() { this->targetClusterId_ = nullptr;};
    inline string targetClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetClusterId_, "") };
    inline SyncJobsRequest& setTargetClusterId(string targetClusterId) { DARABONBA_PTR_SET_VALUE(targetClusterId_, targetClusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> jobIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalAppName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> originalClusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetAppName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
