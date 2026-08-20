// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCPARSERJOBRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class DescribeDocParserJobResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocParserJobResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocParserJobResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
    };
    DescribeDocParserJobResultRequest() = default ;
    DescribeDocParserJobResultRequest(const DescribeDocParserJobResultRequest &) = default ;
    DescribeDocParserJobResultRequest(DescribeDocParserJobResultRequest &&) = default ;
    DescribeDocParserJobResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocParserJobResultRequest() = default ;
    DescribeDocParserJobResultRequest& operator=(const DescribeDocParserJobResultRequest &) = default ;
    DescribeDocParserJobResultRequest& operator=(DescribeDocParserJobResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->jobId_ == nullptr && this->regionId_ == nullptr && this->resultType_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline DescribeDocParserJobResultRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeDocParserJobResultRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDocParserJobResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeDocParserJobResultRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


  protected:
    shared_ptr<string> agentName_ {};
    // The document parsing task ID. You can obtain this ID by calling CreateDocParserJob.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resultType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
