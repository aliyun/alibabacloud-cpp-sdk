// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostMachine, hostMachine_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostMachine, hostMachine_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreatePipelineResponseBodyData() = default ;
    CreatePipelineResponseBodyData(const CreatePipelineResponseBodyData &) = default ;
    CreatePipelineResponseBodyData(CreatePipelineResponseBodyData &&) = default ;
    CreatePipelineResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineResponseBodyData() = default ;
    CreatePipelineResponseBodyData& operator=(const CreatePipelineResponseBodyData &) = default ;
    CreatePipelineResponseBodyData& operator=(CreatePipelineResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostMachine_ == nullptr
        && return this->nodeId_ == nullptr && return this->pipelineId_ == nullptr && return this->submitId_ == nullptr && return this->version_ == nullptr; };
    // hostMachine Field Functions 
    bool hasHostMachine() const { return this->hostMachine_ != nullptr;};
    void deleteHostMachine() { this->hostMachine_ = nullptr;};
    inline string hostMachine() const { DARABONBA_PTR_GET_DEFAULT(hostMachine_, "") };
    inline CreatePipelineResponseBodyData& setHostMachine(string hostMachine) { DARABONBA_PTR_SET_VALUE(hostMachine_, hostMachine) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreatePipelineResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline CreatePipelineResponseBodyData& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // submitId Field Functions 
    bool hasSubmitId() const { return this->submitId_ != nullptr;};
    void deleteSubmitId() { this->submitId_ = nullptr;};
    inline int64_t submitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
    inline CreatePipelineResponseBodyData& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreatePipelineResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> hostMachine_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<int64_t> submitId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
