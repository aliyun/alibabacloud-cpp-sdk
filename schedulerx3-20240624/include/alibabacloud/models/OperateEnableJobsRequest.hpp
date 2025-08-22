// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEENABLEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEENABLEJOBSREQUEST_HPP_
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
  class OperateEnableJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateEnableJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, OperateEnableJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    OperateEnableJobsRequest() = default ;
    OperateEnableJobsRequest(const OperateEnableJobsRequest &) = default ;
    OperateEnableJobsRequest(OperateEnableJobsRequest &&) = default ;
    OperateEnableJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateEnableJobsRequest() = default ;
    OperateEnableJobsRequest& operator=(const OperateEnableJobsRequest &) = default ;
    OperateEnableJobsRequest& operator=(OperateEnableJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->clusterId_ != nullptr && this->jobIds_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateEnableJobsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateEnableJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<int64_t> & jobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<int64_t>) };
    inline vector<int64_t> jobIds() { DARABONBA_PTR_GET(jobIds_, vector<int64_t>) };
    inline OperateEnableJobsRequest& setJobIds(const vector<int64_t> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline OperateEnableJobsRequest& setJobIds(vector<int64_t> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // -
    std::shared_ptr<vector<int64_t>> jobIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
