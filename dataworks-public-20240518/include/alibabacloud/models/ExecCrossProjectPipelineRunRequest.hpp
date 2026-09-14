// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECCROSSPROJECTPIPELINERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECCROSSPROJECTPIPELINERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecCrossProjectPipelineRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecCrossProjectPipelineRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecCrossProjectPipelineRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ExecCrossProjectPipelineRunRequest() = default ;
    ExecCrossProjectPipelineRunRequest(const ExecCrossProjectPipelineRunRequest &) = default ;
    ExecCrossProjectPipelineRunRequest(ExecCrossProjectPipelineRunRequest &&) = default ;
    ExecCrossProjectPipelineRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecCrossProjectPipelineRunRequest() = default ;
    ExecCrossProjectPipelineRunRequest& operator=(const ExecCrossProjectPipelineRunRequest &) = default ;
    ExecCrossProjectPipelineRunRequest& operator=(ExecCrossProjectPipelineRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineRunId_ == nullptr
        && this->projectId_ == nullptr; };
    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline ExecCrossProjectPipelineRunRequest& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecCrossProjectPipelineRunRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the cross-workspace publish flow.
    // 
    // This parameter is required.
    shared_ptr<string> pipelineRunId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
