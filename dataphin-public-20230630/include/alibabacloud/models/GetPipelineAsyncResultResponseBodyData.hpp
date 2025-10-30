// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineAsyncResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineAsyncResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HostMachine, hostMachine_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineAsyncResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HostMachine, hostMachine_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetPipelineAsyncResultResponseBodyData() = default ;
    GetPipelineAsyncResultResponseBodyData(const GetPipelineAsyncResultResponseBodyData &) = default ;
    GetPipelineAsyncResultResponseBodyData(GetPipelineAsyncResultResponseBodyData &&) = default ;
    GetPipelineAsyncResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineAsyncResultResponseBodyData() = default ;
    GetPipelineAsyncResultResponseBodyData& operator=(const GetPipelineAsyncResultResponseBodyData &) = default ;
    GetPipelineAsyncResultResponseBodyData& operator=(GetPipelineAsyncResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncId_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->hostMachine_ == nullptr && return this->nodeId_ == nullptr && return this->pipelineId_ == nullptr
        && return this->status_ == nullptr && return this->submitId_ == nullptr && return this->version_ == nullptr; };
    // asyncId Field Functions 
    bool hasAsyncId() const { return this->asyncId_ != nullptr;};
    void deleteAsyncId() { this->asyncId_ = nullptr;};
    inline int64_t asyncId() const { DARABONBA_PTR_GET_DEFAULT(asyncId_, 0L) };
    inline GetPipelineAsyncResultResponseBodyData& setAsyncId(int64_t asyncId) { DARABONBA_PTR_SET_VALUE(asyncId_, asyncId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPipelineAsyncResultResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPipelineAsyncResultResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hostMachine Field Functions 
    bool hasHostMachine() const { return this->hostMachine_ != nullptr;};
    void deleteHostMachine() { this->hostMachine_ = nullptr;};
    inline string hostMachine() const { DARABONBA_PTR_GET_DEFAULT(hostMachine_, "") };
    inline GetPipelineAsyncResultResponseBodyData& setHostMachine(string hostMachine) { DARABONBA_PTR_SET_VALUE(hostMachine_, hostMachine) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPipelineAsyncResultResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline GetPipelineAsyncResultResponseBodyData& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPipelineAsyncResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitId Field Functions 
    bool hasSubmitId() const { return this->submitId_ != nullptr;};
    void deleteSubmitId() { this->submitId_ = nullptr;};
    inline int64_t submitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
    inline GetPipelineAsyncResultResponseBodyData& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPipelineAsyncResultResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> asyncId_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> hostMachine_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> submitId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
