// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECPIPELINERUNSTAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECPIPELINERUNSTAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecPipelineRunStageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecPipelineRunStageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecPipelineRunStageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ExecPipelineRunStageRequest() = default ;
    ExecPipelineRunStageRequest(const ExecPipelineRunStageRequest &) = default ;
    ExecPipelineRunStageRequest(ExecPipelineRunStageRequest &&) = default ;
    ExecPipelineRunStageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecPipelineRunStageRequest() = default ;
    ExecPipelineRunStageRequest& operator=(const ExecPipelineRunStageRequest &) = default ;
    ExecPipelineRunStageRequest& operator=(ExecPipelineRunStageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->id_ != nullptr && this->projectId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExecPipelineRunStageRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ExecPipelineRunStageRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecPipelineRunStageRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The code of the stage in the process. You can call the GetDeployment operation to query the code.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the process.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
