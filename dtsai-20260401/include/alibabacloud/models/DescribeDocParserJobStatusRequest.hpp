// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class DescribeDocParserJobStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocParserJobStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocParserJobStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDocParserJobStatusRequest() = default ;
    DescribeDocParserJobStatusRequest(const DescribeDocParserJobStatusRequest &) = default ;
    DescribeDocParserJobStatusRequest(DescribeDocParserJobStatusRequest &&) = default ;
    DescribeDocParserJobStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocParserJobStatusRequest() = default ;
    DescribeDocParserJobStatusRequest& operator=(const DescribeDocParserJobStatusRequest &) = default ;
    DescribeDocParserJobStatusRequest& operator=(DescribeDocParserJobStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->jobId_ == nullptr && this->regionId_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline DescribeDocParserJobStatusRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeDocParserJobStatusRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDocParserJobStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> agentName_ {};
    // The ID of the document parsing task. You can obtain the ID by calling CreateDocParserJob.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
