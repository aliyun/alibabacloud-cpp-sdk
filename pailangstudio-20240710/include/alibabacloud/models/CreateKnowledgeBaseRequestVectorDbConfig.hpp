// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTVECTORDBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUESTVECTORDBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseRequestVectorDBConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequestVectorDBConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(VectorDBType, vectorDBType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequestVectorDBConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(VectorDBType, vectorDBType_);
    };
    CreateKnowledgeBaseRequestVectorDBConfig() = default ;
    CreateKnowledgeBaseRequestVectorDBConfig(const CreateKnowledgeBaseRequestVectorDBConfig &) = default ;
    CreateKnowledgeBaseRequestVectorDBConfig(CreateKnowledgeBaseRequestVectorDBConfig &&) = default ;
    CreateKnowledgeBaseRequestVectorDBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequestVectorDBConfig() = default ;
    CreateKnowledgeBaseRequestVectorDBConfig& operator=(const CreateKnowledgeBaseRequestVectorDBConfig &) = default ;
    CreateKnowledgeBaseRequestVectorDBConfig& operator=(CreateKnowledgeBaseRequestVectorDBConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectionName_ == nullptr
        && return this->connectionId_ == nullptr && return this->vectorDBType_ == nullptr; };
    // collectionName Field Functions 
    bool hasCollectionName() const { return this->collectionName_ != nullptr;};
    void deleteCollectionName() { this->collectionName_ = nullptr;};
    inline string collectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
    inline CreateKnowledgeBaseRequestVectorDBConfig& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline CreateKnowledgeBaseRequestVectorDBConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // vectorDBType Field Functions 
    bool hasVectorDBType() const { return this->vectorDBType_ != nullptr;};
    void deleteVectorDBType() { this->vectorDBType_ = nullptr;};
    inline string vectorDBType() const { DARABONBA_PTR_GET_DEFAULT(vectorDBType_, "") };
    inline CreateKnowledgeBaseRequestVectorDBConfig& setVectorDBType(string vectorDBType) { DARABONBA_PTR_SET_VALUE(vectorDBType_, vectorDBType) };


  protected:
    // Collectioin名称
    std::shared_ptr<string> collectionName_ = nullptr;
    // Embedding连接ID
    std::shared_ptr<string> connectionId_ = nullptr;
    // VectorDB类型
    // 
    // This parameter is required.
    std::shared_ptr<string> vectorDBType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
