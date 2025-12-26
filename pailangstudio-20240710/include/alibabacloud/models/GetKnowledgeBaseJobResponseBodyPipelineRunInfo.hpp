// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODYPIPELINERUNINFO_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODYPIPELINERUNINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetKnowledgeBaseJobResponseBodyPipelineRunInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseJobResponseBodyPipelineRunInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseJobResponseBodyPipelineRunInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
    };
    GetKnowledgeBaseJobResponseBodyPipelineRunInfo() = default ;
    GetKnowledgeBaseJobResponseBodyPipelineRunInfo(const GetKnowledgeBaseJobResponseBodyPipelineRunInfo &) = default ;
    GetKnowledgeBaseJobResponseBodyPipelineRunInfo(GetKnowledgeBaseJobResponseBodyPipelineRunInfo &&) = default ;
    GetKnowledgeBaseJobResponseBodyPipelineRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseJobResponseBodyPipelineRunInfo() = default ;
    GetKnowledgeBaseJobResponseBodyPipelineRunInfo& operator=(const GetKnowledgeBaseJobResponseBodyPipelineRunInfo &) = default ;
    GetKnowledgeBaseJobResponseBodyPipelineRunInfo& operator=(GetKnowledgeBaseJobResponseBodyPipelineRunInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineRunId_ == nullptr; };
    // pipelineRunId Field Functions 
    bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
    void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
    inline string pipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
    inline GetKnowledgeBaseJobResponseBodyPipelineRunInfo& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


  protected:
    // PaiFlow工作流运行ID
    std::shared_ptr<string> pipelineRunId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
