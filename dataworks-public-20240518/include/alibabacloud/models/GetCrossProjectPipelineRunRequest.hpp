// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROSSPROJECTPIPELINERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCROSSPROJECTPIPELINERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCrossProjectPipelineRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrossProjectPipelineRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrossProjectPipelineRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetCrossProjectPipelineRunRequest() = default ;
    GetCrossProjectPipelineRunRequest(const GetCrossProjectPipelineRunRequest &) = default ;
    GetCrossProjectPipelineRunRequest(GetCrossProjectPipelineRunRequest &&) = default ;
    GetCrossProjectPipelineRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrossProjectPipelineRunRequest() = default ;
    GetCrossProjectPipelineRunRequest& operator=(const GetCrossProjectPipelineRunRequest &) = default ;
    GetCrossProjectPipelineRunRequest& operator=(GetCrossProjectPipelineRunRequest &&) = default ;
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
    inline GetCrossProjectPipelineRunRequest& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetCrossProjectPipelineRunRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The cross-workspace deployment flow ID.
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
