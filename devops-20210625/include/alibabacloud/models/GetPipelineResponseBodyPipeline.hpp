// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINE_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineResponseBodyPipelinePipelineConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetPipelineResponseBodyPipelineTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineResponseBodyPipeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_TO_JSON(envId, envId_);
      DARABONBA_PTR_TO_JSON(envName, envName_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pipelineConfig, pipelineConfig_);
      DARABONBA_PTR_TO_JSON(tagList, tagList_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBodyPipeline& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creatorAccountId, creatorAccountId_);
      DARABONBA_PTR_FROM_JSON(envId, envId_);
      DARABONBA_PTR_FROM_JSON(envName, envName_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(modifierAccountId, modifierAccountId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pipelineConfig, pipelineConfig_);
      DARABONBA_PTR_FROM_JSON(tagList, tagList_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetPipelineResponseBodyPipeline() = default ;
    GetPipelineResponseBodyPipeline(const GetPipelineResponseBodyPipeline &) = default ;
    GetPipelineResponseBodyPipeline(GetPipelineResponseBodyPipeline &&) = default ;
    GetPipelineResponseBodyPipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBodyPipeline() = default ;
    GetPipelineResponseBodyPipeline& operator=(const GetPipelineResponseBodyPipeline &) = default ;
    GetPipelineResponseBodyPipeline& operator=(GetPipelineResponseBodyPipeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->creatorAccountId_ == nullptr && return this->envId_ == nullptr && return this->envName_ == nullptr && return this->groupId_ == nullptr && return this->modifierAccountId_ == nullptr
        && return this->name_ == nullptr && return this->pipelineConfig_ == nullptr && return this->tagList_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetPipelineResponseBodyPipeline& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorAccountId Field Functions 
    bool hasCreatorAccountId() const { return this->creatorAccountId_ != nullptr;};
    void deleteCreatorAccountId() { this->creatorAccountId_ = nullptr;};
    inline string creatorAccountId() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountId_, "") };
    inline GetPipelineResponseBodyPipeline& setCreatorAccountId(string creatorAccountId) { DARABONBA_PTR_SET_VALUE(creatorAccountId_, creatorAccountId) };


    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline int32_t envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, 0) };
    inline GetPipelineResponseBodyPipeline& setEnvId(int32_t envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // envName Field Functions 
    bool hasEnvName() const { return this->envName_ != nullptr;};
    void deleteEnvName() { this->envName_ = nullptr;};
    inline string envName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
    inline GetPipelineResponseBodyPipeline& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline GetPipelineResponseBodyPipeline& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modifierAccountId Field Functions 
    bool hasModifierAccountId() const { return this->modifierAccountId_ != nullptr;};
    void deleteModifierAccountId() { this->modifierAccountId_ = nullptr;};
    inline string modifierAccountId() const { DARABONBA_PTR_GET_DEFAULT(modifierAccountId_, "") };
    inline GetPipelineResponseBodyPipeline& setModifierAccountId(string modifierAccountId) { DARABONBA_PTR_SET_VALUE(modifierAccountId_, modifierAccountId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineResponseBodyPipeline& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pipelineConfig Field Functions 
    bool hasPipelineConfig() const { return this->pipelineConfig_ != nullptr;};
    void deletePipelineConfig() { this->pipelineConfig_ = nullptr;};
    inline const Models::GetPipelineResponseBodyPipelinePipelineConfig & pipelineConfig() const { DARABONBA_PTR_GET_CONST(pipelineConfig_, Models::GetPipelineResponseBodyPipelinePipelineConfig) };
    inline Models::GetPipelineResponseBodyPipelinePipelineConfig pipelineConfig() { DARABONBA_PTR_GET(pipelineConfig_, Models::GetPipelineResponseBodyPipelinePipelineConfig) };
    inline GetPipelineResponseBodyPipeline& setPipelineConfig(const Models::GetPipelineResponseBodyPipelinePipelineConfig & pipelineConfig) { DARABONBA_PTR_SET_VALUE(pipelineConfig_, pipelineConfig) };
    inline GetPipelineResponseBodyPipeline& setPipelineConfig(Models::GetPipelineResponseBodyPipelinePipelineConfig && pipelineConfig) { DARABONBA_PTR_SET_RVALUE(pipelineConfig_, pipelineConfig) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::GetPipelineResponseBodyPipelineTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::GetPipelineResponseBodyPipelineTagList>) };
    inline vector<Models::GetPipelineResponseBodyPipelineTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::GetPipelineResponseBodyPipelineTagList>) };
    inline GetPipelineResponseBodyPipeline& setTagList(const vector<Models::GetPipelineResponseBodyPipelineTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline GetPipelineResponseBodyPipeline& setTagList(vector<Models::GetPipelineResponseBodyPipelineTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetPipelineResponseBodyPipeline& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorAccountId_ = nullptr;
    std::shared_ptr<int32_t> envId_ = nullptr;
    std::shared_ptr<string> envName_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> modifierAccountId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetPipelineResponseBodyPipelinePipelineConfig> pipelineConfig_ = nullptr;
    std::shared_ptr<vector<Models::GetPipelineResponseBodyPipelineTagList>> tagList_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
