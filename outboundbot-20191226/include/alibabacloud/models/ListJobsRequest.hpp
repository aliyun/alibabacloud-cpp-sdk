// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    ListJobsRequest() = default ;
    ListJobsRequest(const ListJobsRequest &) = default ;
    ListJobsRequest(ListJobsRequest &&) = default ;
    ListJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequest() = default ;
    ListJobsRequest& operator=(const ListJobsRequest &) = default ;
    ListJobsRequest& operator=(ListJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->jobId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline const vector<string> & jobId() const { DARABONBA_PTR_GET_CONST(jobId_, vector<string>) };
    inline vector<string> jobId() { DARABONBA_PTR_GET(jobId_, vector<string>) };
    inline ListJobsRequest& setJobId(const vector<string> & jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };
    inline ListJobsRequest& setJobId(vector<string> && jobId) { DARABONBA_PTR_SET_RVALUE(jobId_, jobId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
