// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEEMBEDDINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEEMBEDDINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseEmbeddingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseEmbeddingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Model, model_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseEmbeddingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
    };
    KnowledgeBaseEmbeddingConfig() = default ;
    KnowledgeBaseEmbeddingConfig(const KnowledgeBaseEmbeddingConfig &) = default ;
    KnowledgeBaseEmbeddingConfig(KnowledgeBaseEmbeddingConfig &&) = default ;
    KnowledgeBaseEmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseEmbeddingConfig() = default ;
    KnowledgeBaseEmbeddingConfig& operator=(const KnowledgeBaseEmbeddingConfig &) = default ;
    KnowledgeBaseEmbeddingConfig& operator=(KnowledgeBaseEmbeddingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionId_ == nullptr
        && return this->connectionName_ == nullptr && return this->model_ == nullptr; };
    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline KnowledgeBaseEmbeddingConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline KnowledgeBaseEmbeddingConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline KnowledgeBaseEmbeddingConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


  protected:
    // Embedding连接ID
    std::shared_ptr<string> connectionId_ = nullptr;
    // Embedding连接名称
    std::shared_ptr<string> connectionName_ = nullptr;
    // 模型
    std::shared_ptr<string> model_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
