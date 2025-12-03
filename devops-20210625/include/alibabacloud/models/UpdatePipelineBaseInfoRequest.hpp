// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEBASEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEBASEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdatePipelineBaseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineBaseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(envId, envId_);
      DARABONBA_PTR_TO_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_TO_JSON(tagList, tagList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineBaseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(envId, envId_);
      DARABONBA_PTR_FROM_JSON(pipelineName, pipelineName_);
      DARABONBA_PTR_FROM_JSON(tagList, tagList_);
    };
    UpdatePipelineBaseInfoRequest() = default ;
    UpdatePipelineBaseInfoRequest(const UpdatePipelineBaseInfoRequest &) = default ;
    UpdatePipelineBaseInfoRequest(UpdatePipelineBaseInfoRequest &&) = default ;
    UpdatePipelineBaseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineBaseInfoRequest() = default ;
    UpdatePipelineBaseInfoRequest& operator=(const UpdatePipelineBaseInfoRequest &) = default ;
    UpdatePipelineBaseInfoRequest& operator=(UpdatePipelineBaseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envId_ == nullptr
        && return this->pipelineName_ == nullptr && return this->tagList_ == nullptr; };
    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline int64_t envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, 0L) };
    inline UpdatePipelineBaseInfoRequest& setEnvId(int64_t envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // pipelineName Field Functions 
    bool hasPipelineName() const { return this->pipelineName_ != nullptr;};
    void deletePipelineName() { this->pipelineName_ = nullptr;};
    inline string pipelineName() const { DARABONBA_PTR_GET_DEFAULT(pipelineName_, "") };
    inline UpdatePipelineBaseInfoRequest& setPipelineName(string pipelineName) { DARABONBA_PTR_SET_VALUE(pipelineName_, pipelineName) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline string tagList() const { DARABONBA_PTR_GET_DEFAULT(tagList_, "") };
    inline UpdatePipelineBaseInfoRequest& setTagList(string tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };


  protected:
    std::shared_ptr<int64_t> envId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pipelineName_ = nullptr;
    std::shared_ptr<string> tagList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
