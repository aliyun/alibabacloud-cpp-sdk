// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEDISABLEJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEDISABLEJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateDisableJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateDisableJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, OperateDisableJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIdsShrink_);
    };
    OperateDisableJobsShrinkRequest() = default ;
    OperateDisableJobsShrinkRequest(const OperateDisableJobsShrinkRequest &) = default ;
    OperateDisableJobsShrinkRequest(OperateDisableJobsShrinkRequest &&) = default ;
    OperateDisableJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateDisableJobsShrinkRequest() = default ;
    OperateDisableJobsShrinkRequest& operator=(const OperateDisableJobsShrinkRequest &) = default ;
    OperateDisableJobsShrinkRequest& operator=(OperateDisableJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->jobIdsShrink_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateDisableJobsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateDisableJobsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobIdsShrink Field Functions 
    bool hasJobIdsShrink() const { return this->jobIdsShrink_ != nullptr;};
    void deleteJobIdsShrink() { this->jobIdsShrink_ = nullptr;};
    inline string jobIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdsShrink_, "") };
    inline OperateDisableJobsShrinkRequest& setJobIdsShrink(string jobIdsShrink) { DARABONBA_PTR_SET_VALUE(jobIdsShrink_, jobIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // -
    std::shared_ptr<string> jobIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
