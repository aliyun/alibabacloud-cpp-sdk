// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class SyncJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIdsShrink_);
      DARABONBA_PTR_TO_JSON(OriginalAppName, originalAppName_);
      DARABONBA_PTR_TO_JSON(OriginalClusterId, originalClusterId_);
      DARABONBA_PTR_TO_JSON(TargetAppName, targetAppName_);
      DARABONBA_PTR_TO_JSON(TargetClusterId, targetClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIdsShrink_);
      DARABONBA_PTR_FROM_JSON(OriginalAppName, originalAppName_);
      DARABONBA_PTR_FROM_JSON(OriginalClusterId, originalClusterId_);
      DARABONBA_PTR_FROM_JSON(TargetAppName, targetAppName_);
      DARABONBA_PTR_FROM_JSON(TargetClusterId, targetClusterId_);
    };
    SyncJobsShrinkRequest() = default ;
    SyncJobsShrinkRequest(const SyncJobsShrinkRequest &) = default ;
    SyncJobsShrinkRequest(SyncJobsShrinkRequest &&) = default ;
    SyncJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncJobsShrinkRequest() = default ;
    SyncJobsShrinkRequest& operator=(const SyncJobsShrinkRequest &) = default ;
    SyncJobsShrinkRequest& operator=(SyncJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIdsShrink_ == nullptr
        && return this->originalAppName_ == nullptr && return this->originalClusterId_ == nullptr && return this->targetAppName_ == nullptr && return this->targetClusterId_ == nullptr; };
    // jobIdsShrink Field Functions 
    bool hasJobIdsShrink() const { return this->jobIdsShrink_ != nullptr;};
    void deleteJobIdsShrink() { this->jobIdsShrink_ = nullptr;};
    inline string jobIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdsShrink_, "") };
    inline SyncJobsShrinkRequest& setJobIdsShrink(string jobIdsShrink) { DARABONBA_PTR_SET_VALUE(jobIdsShrink_, jobIdsShrink) };


    // originalAppName Field Functions 
    bool hasOriginalAppName() const { return this->originalAppName_ != nullptr;};
    void deleteOriginalAppName() { this->originalAppName_ = nullptr;};
    inline string originalAppName() const { DARABONBA_PTR_GET_DEFAULT(originalAppName_, "") };
    inline SyncJobsShrinkRequest& setOriginalAppName(string originalAppName) { DARABONBA_PTR_SET_VALUE(originalAppName_, originalAppName) };


    // originalClusterId Field Functions 
    bool hasOriginalClusterId() const { return this->originalClusterId_ != nullptr;};
    void deleteOriginalClusterId() { this->originalClusterId_ = nullptr;};
    inline string originalClusterId() const { DARABONBA_PTR_GET_DEFAULT(originalClusterId_, "") };
    inline SyncJobsShrinkRequest& setOriginalClusterId(string originalClusterId) { DARABONBA_PTR_SET_VALUE(originalClusterId_, originalClusterId) };


    // targetAppName Field Functions 
    bool hasTargetAppName() const { return this->targetAppName_ != nullptr;};
    void deleteTargetAppName() { this->targetAppName_ = nullptr;};
    inline string targetAppName() const { DARABONBA_PTR_GET_DEFAULT(targetAppName_, "") };
    inline SyncJobsShrinkRequest& setTargetAppName(string targetAppName) { DARABONBA_PTR_SET_VALUE(targetAppName_, targetAppName) };


    // targetClusterId Field Functions 
    bool hasTargetClusterId() const { return this->targetClusterId_ != nullptr;};
    void deleteTargetClusterId() { this->targetClusterId_ = nullptr;};
    inline string targetClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetClusterId_, "") };
    inline SyncJobsShrinkRequest& setTargetClusterId(string targetClusterId) { DARABONBA_PTR_SET_VALUE(targetClusterId_, targetClusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> jobIdsShrink_ = nullptr;
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
