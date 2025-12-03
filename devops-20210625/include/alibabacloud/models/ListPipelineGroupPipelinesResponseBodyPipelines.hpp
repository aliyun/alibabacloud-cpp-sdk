// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEGROUPPIPELINESRESPONSEBODYPIPELINES_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEGROUPPIPELINESRESPONSEBODYPIPELINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListPipelineGroupPipelinesResponseBodyPipelines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineGroupPipelinesResponseBodyPipelines& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineGroupPipelinesResponseBodyPipelines& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
    };
    ListPipelineGroupPipelinesResponseBodyPipelines() = default ;
    ListPipelineGroupPipelinesResponseBodyPipelines(const ListPipelineGroupPipelinesResponseBodyPipelines &) = default ;
    ListPipelineGroupPipelinesResponseBodyPipelines(ListPipelineGroupPipelinesResponseBodyPipelines &&) = default ;
    ListPipelineGroupPipelinesResponseBodyPipelines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineGroupPipelinesResponseBodyPipelines() = default ;
    ListPipelineGroupPipelinesResponseBodyPipelines& operator=(const ListPipelineGroupPipelinesResponseBodyPipelines &) = default ;
    ListPipelineGroupPipelinesResponseBodyPipelines& operator=(ListPipelineGroupPipelinesResponseBodyPipelines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->pipelineId_ == nullptr && return this->pipelineName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListPipelineGroupPipelinesResponseBodyPipelines& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline ListPipelineGroupPipelinesResponseBodyPipelines& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline ListPipelineGroupPipelinesResponseBodyPipelines& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
    std::shared_ptr<string> pipelineName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
