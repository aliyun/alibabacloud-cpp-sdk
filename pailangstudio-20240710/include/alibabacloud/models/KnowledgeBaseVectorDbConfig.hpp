// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEVECTORDBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEVECTORDBCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseVectorDBConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseVectorDBConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(VectorDBType, vectorDBType_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseVectorDBConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionName, collectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(VectorDBType, vectorDBType_);
    };
    KnowledgeBaseVectorDBConfig() = default ;
    KnowledgeBaseVectorDBConfig(const KnowledgeBaseVectorDBConfig &) = default ;
    KnowledgeBaseVectorDBConfig(KnowledgeBaseVectorDBConfig &&) = default ;
    KnowledgeBaseVectorDBConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseVectorDBConfig() = default ;
    KnowledgeBaseVectorDBConfig& operator=(const KnowledgeBaseVectorDBConfig &) = default ;
    KnowledgeBaseVectorDBConfig& operator=(KnowledgeBaseVectorDBConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectionName_ == nullptr
        && return this->connectionId_ == nullptr && return this->connectionName_ == nullptr && return this->vectorDBType_ == nullptr; };
    // collectionName Field Functions 
    bool hasCollectionName() const { return this->collectionName_ != nullptr;};
    void deleteCollectionName() { this->collectionName_ = nullptr;};
    inline string collectionName() const { DARABONBA_PTR_GET_DEFAULT(collectionName_, "") };
    inline KnowledgeBaseVectorDBConfig& setCollectionName(string collectionName) { DARABONBA_PTR_SET_VALUE(collectionName_, collectionName) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline KnowledgeBaseVectorDBConfig& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline KnowledgeBaseVectorDBConfig& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // vectorDBType Field Functions 
    bool hasVectorDBType() const { return this->vectorDBType_ != nullptr;};
    void deleteVectorDBType() { this->vectorDBType_ = nullptr;};
    inline string vectorDBType() const { DARABONBA_PTR_GET_DEFAULT(vectorDBType_, "") };
    inline KnowledgeBaseVectorDBConfig& setVectorDBType(string vectorDBType) { DARABONBA_PTR_SET_VALUE(vectorDBType_, vectorDBType) };


  protected:
    // Collectioin名称
    std::shared_ptr<string> collectionName_ = nullptr;
    // Embedding连接ID
    std::shared_ptr<string> connectionId_ = nullptr;
    // VectorDB连接名称
    std::shared_ptr<string> connectionName_ = nullptr;
    // VectorDB类型
    std::shared_ptr<string> vectorDBType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
