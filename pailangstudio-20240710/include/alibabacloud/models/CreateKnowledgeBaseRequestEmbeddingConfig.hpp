// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTEMBEDDINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTEMBEDDINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestEmbeddingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestEmbeddingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestEmbeddingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
    };
    CreateKnowledgeBaseRequestEmbeddingConfig() = default ;
    CreateKnowledgeBaseRequestEmbeddingConfig(const CreateKnowledgeBaseRequestEmbeddingConfig &) = default ;
    CreateKnowledgeBaseRequestEmbeddingConfig(CreateKnowledgeBaseRequestEmbeddingConfig &&) = default ;
    CreateKnowledgeBaseRequestEmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestEmbeddingConfig() = default ;
    CreateKnowledgeBaseRequestEmbeddingConfig& operator=(const CreateKnowledgeBaseRequestEmbeddingConfig &) = default ;
    CreateKnowledgeBaseRequestEmbeddingConfig& operator=(CreateKnowledgeBaseRequestEmbeddingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionId_ == nullptr
        && return this->model_ == nullptr; };
    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline CreateKnowledgeBaseRequestEmbeddingConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateKnowledgeBaseRequestEmbeddingConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


  protected:
    // Embedding连接ID
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionId_ = nullptr;
    // 模型
    // 
    // This parameter is required.
    std::shared_ptr<string> model_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
