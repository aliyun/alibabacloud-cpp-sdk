// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYFULLNETCHECKJOBSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYFULLNETCHECKJOBSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodyFullNetCheckJobStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(DestRegionCidr, destRegionCidr_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointType, destinationEndpointType_);
      DARABONBA_PTR_TO_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_TO_JSON(HostRegion, hostRegion_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_TO_JSON(SourceEndpointType, sourceEndpointType_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_TO_JSON(SrcRegionCidr, srcRegionCidr_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(DestRegionCidr, destRegionCidr_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointType, destinationEndpointType_);
      DARABONBA_PTR_FROM_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_FROM_JSON(HostRegion, hostRegion_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointType, sourceEndpointType_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
      DARABONBA_PTR_FROM_JSON(SrcRegionCidr, srcRegionCidr_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribePreCheckStatusResponseBodyFullNetCheckJobStatus() = default ;
    DescribePreCheckStatusResponseBodyFullNetCheckJobStatus(const DescribePreCheckStatusResponseBodyFullNetCheckJobStatus &) = default ;
    DescribePreCheckStatusResponseBodyFullNetCheckJobStatus(DescribePreCheckStatusResponseBodyFullNetCheckJobStatus &&) = default ;
    DescribePreCheckStatusResponseBodyFullNetCheckJobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodyFullNetCheckJobStatus() = default ;
    DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& operator=(const DescribePreCheckStatusResponseBodyFullNetCheckJobStatus &) = default ;
    DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& operator=(DescribePreCheckStatusResponseBodyFullNetCheckJobStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->destRegion_ == nullptr && return this->destRegionCidr_ == nullptr && return this->destinationEndpointType_ == nullptr && return this->errorItem_ == nullptr && return this->hostRegion_ == nullptr
        && return this->jobId_ == nullptr && return this->jobName_ == nullptr && return this->jobProgress_ == nullptr && return this->sourceEndpointType_ == nullptr && return this->srcRegion_ == nullptr
        && return this->srcRegionCidr_ == nullptr && return this->state_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string destRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // destRegionCidr Field Functions 
    bool hasDestRegionCidr() const { return this->destRegionCidr_ != nullptr;};
    void deleteDestRegionCidr() { this->destRegionCidr_ = nullptr;};
    inline string destRegionCidr() const { DARABONBA_PTR_GET_DEFAULT(destRegionCidr_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setDestRegionCidr(string destRegionCidr) { DARABONBA_PTR_SET_VALUE(destRegionCidr_, destRegionCidr) };


    // destinationEndpointType Field Functions 
    bool hasDestinationEndpointType() const { return this->destinationEndpointType_ != nullptr;};
    void deleteDestinationEndpointType() { this->destinationEndpointType_ = nullptr;};
    inline string destinationEndpointType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointType_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setDestinationEndpointType(string destinationEndpointType) { DARABONBA_PTR_SET_VALUE(destinationEndpointType_, destinationEndpointType) };


    // errorItem Field Functions 
    bool hasErrorItem() const { return this->errorItem_ != nullptr;};
    void deleteErrorItem() { this->errorItem_ = nullptr;};
    inline int32_t errorItem() const { DARABONBA_PTR_GET_DEFAULT(errorItem_, 0) };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setErrorItem(int32_t errorItem) { DARABONBA_PTR_SET_VALUE(errorItem_, errorItem) };


    // hostRegion Field Functions 
    bool hasHostRegion() const { return this->hostRegion_ != nullptr;};
    void deleteHostRegion() { this->hostRegion_ = nullptr;};
    inline string hostRegion() const { DARABONBA_PTR_GET_DEFAULT(hostRegion_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setHostRegion(string hostRegion) { DARABONBA_PTR_SET_VALUE(hostRegion_, hostRegion) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobProgress Field Functions 
    bool hasJobProgress() const { return this->jobProgress_ != nullptr;};
    void deleteJobProgress() { this->jobProgress_ = nullptr;};
    inline const vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress> & jobProgress() const { DARABONBA_PTR_GET_CONST(jobProgress_, vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress>) };
    inline vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress> jobProgress() { DARABONBA_PTR_GET(jobProgress_, vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress>) };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setJobProgress(const vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress> & jobProgress) { DARABONBA_PTR_SET_VALUE(jobProgress_, jobProgress) };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setJobProgress(vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress> && jobProgress) { DARABONBA_PTR_SET_RVALUE(jobProgress_, jobProgress) };


    // sourceEndpointType Field Functions 
    bool hasSourceEndpointType() const { return this->sourceEndpointType_ != nullptr;};
    void deleteSourceEndpointType() { this->sourceEndpointType_ = nullptr;};
    inline string sourceEndpointType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointType_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setSourceEndpointType(string sourceEndpointType) { DARABONBA_PTR_SET_VALUE(sourceEndpointType_, sourceEndpointType) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string srcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


    // srcRegionCidr Field Functions 
    bool hasSrcRegionCidr() const { return this->srcRegionCidr_ != nullptr;};
    void deleteSrcRegionCidr() { this->srcRegionCidr_ = nullptr;};
    inline string srcRegionCidr() const { DARABONBA_PTR_GET_DEFAULT(srcRegionCidr_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setSrcRegionCidr(string srcRegionCidr) { DARABONBA_PTR_SET_VALUE(srcRegionCidr_, srcRegionCidr) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePreCheckStatusResponseBodyFullNetCheckJobStatus& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Task code, **01** represents pre-check.
    std::shared_ptr<string> code_ = nullptr;
    // ID of the region to which the target network segment belongs.
    std::shared_ptr<string> destRegion_ = nullptr;
    // Destination network segment.
    std::shared_ptr<string> destRegionCidr_ = nullptr;
    // The access method of the target instance, with return values as follows: - **ALIYUN**: Access method is **cloud instance**. - **OTHER**: Access method is **public IP**. - **ECS**: Access method is **ECS self-built database**. - **EXPRESS**: Access method is **Express Connect / VPN Gateway / Smart Gateway**. - **CEN**: Access method is **Cloud Enterprise Network (CEN)**. - **DG**: Access method is **Database Gateway (DG)**.
    std::shared_ptr<string> destinationEndpointType_ = nullptr;
    // Number of pre-check failed items
    std::shared_ptr<int32_t> errorItem_ = nullptr;
    // The region ID of the instance\\"s running node.
    std::shared_ptr<string> hostRegion_ = nullptr;
    // Task ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // Task name.
    std::shared_ptr<string> jobName_ = nullptr;
    // A list of specific items for the task and their execution progress.
    std::shared_ptr<vector<Models::DescribePreCheckStatusResponseBodyFullNetCheckJobStatusJobProgress>> jobProgress_ = nullptr;
    // The access method of the source instance, with return values as follows: - **ALIYUN**: Access method is **cloud instance**. - **OTHER**: Access method is **public IP**. - **ECS**: Access method is **ECS self-built database**. - **EXPRESS**: Access method is **dedicated line/VPN gateway/smart gateway**. - **CEN**: Access method is **Cloud Enterprise Network CEN**. - **DG**: Access method is **Database Gateway DG**.
    std::shared_ptr<string> sourceEndpointType_ = nullptr;
    // ID of the region to which the source network segment belongs.
    std::shared_ptr<string> srcRegion_ = nullptr;
    // Source network segment.
    std::shared_ptr<string> srcRegionCidr_ = nullptr;
    // Check result, the return value is: - **Failed**: Failure. - **Success**: Completed.
    std::shared_ptr<string> state_ = nullptr;
    // Total number of items in the project.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
