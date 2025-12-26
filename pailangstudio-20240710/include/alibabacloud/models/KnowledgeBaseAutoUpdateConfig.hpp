// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEAUTOUPDATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEAUTOUPDATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseAutoUpdateConfigEcsSpecs.hpp>
#include <alibabacloud/models/KnowledgeBaseAutoUpdateConfigEmbeddingConfig.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseAutoUpdateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseAutoUpdateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseAutoUpdateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
    };
    KnowledgeBaseAutoUpdateConfig() = default ;
    KnowledgeBaseAutoUpdateConfig(const KnowledgeBaseAutoUpdateConfig &) = default ;
    KnowledgeBaseAutoUpdateConfig(KnowledgeBaseAutoUpdateConfig &&) = default ;
    KnowledgeBaseAutoUpdateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseAutoUpdateConfig() = default ;
    KnowledgeBaseAutoUpdateConfig& operator=(const KnowledgeBaseAutoUpdateConfig &) = default ;
    KnowledgeBaseAutoUpdateConfig& operator=(KnowledgeBaseAutoUpdateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsSpecs_ == nullptr
        && return this->embeddingConfig_ == nullptr && return this->maxRunningTimeInSeconds_ == nullptr && return this->resourceId_ == nullptr && return this->status_ == nullptr && return this->userVpc_ == nullptr; };
    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs> & ecsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs>) };
    inline vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs> ecsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs>) };
    inline KnowledgeBaseAutoUpdateConfig& setEcsSpecs(const vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline KnowledgeBaseAutoUpdateConfig& setEcsSpecs(vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig & embeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig) };
    inline Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig embeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig) };
    inline KnowledgeBaseAutoUpdateConfig& setEmbeddingConfig(const Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline KnowledgeBaseAutoUpdateConfig& setEmbeddingConfig(Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int32_t maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
    inline KnowledgeBaseAutoUpdateConfig& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline KnowledgeBaseAutoUpdateConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline KnowledgeBaseAutoUpdateConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const Models::UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, Models::UserVpc) };
    inline Models::UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, Models::UserVpc) };
    inline KnowledgeBaseAutoUpdateConfig& setUserVpc(const Models::UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline KnowledgeBaseAutoUpdateConfig& setUserVpc(Models::UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    // 运行资源配置
    std::shared_ptr<vector<Models::KnowledgeBaseAutoUpdateConfigEcsSpecs>> ecsSpecs_ = nullptr;
    // Embedding配置
    std::shared_ptr<Models::KnowledgeBaseAutoUpdateConfigEmbeddingConfig> embeddingConfig_ = nullptr;
    // 任务最大运行时间
    std::shared_ptr<int32_t> maxRunningTimeInSeconds_ = nullptr;
    // 资源组ID
    std::shared_ptr<string> resourceId_ = nullptr;
    // 知识库自动更新状态
    std::shared_ptr<string> status_ = nullptr;
    // 用户VPC配置
    std::shared_ptr<Models::UserVpc> userVpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
