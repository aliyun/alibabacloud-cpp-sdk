// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class StopJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
    };
    friend void from_json(const Darabonba::Json& j, StopJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
    };
    StopJobsRequest() = default ;
    StopJobsRequest(const StopJobsRequest &) = default ;
    StopJobsRequest(StopJobsRequest &&) = default ;
    StopJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopJobsRequest() = default ;
    StopJobsRequest& operator=(const StopJobsRequest &) = default ;
    StopJobsRequest& operator=(StopJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->jobIds_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline StopJobsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<string> & jobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<string>) };
    inline vector<string> jobIds() { DARABONBA_PTR_GET(jobIds_, vector<string>) };
    inline StopJobsRequest& setJobIds(const vector<string> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline StopJobsRequest& setJobIds(vector<string> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The IDs of the jobs that you want to stop.
    std::shared_ptr<vector<string>> jobIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
