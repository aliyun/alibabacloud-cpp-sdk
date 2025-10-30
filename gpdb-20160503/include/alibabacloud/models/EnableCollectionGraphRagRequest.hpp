// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECOLLECTIONGRAPHRAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECOLLECTIONGRAPHRAGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class EnableCollectionGraphRAGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCollectionGraphRAGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_TO_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelationshipTypes, relationshipTypes_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCollectionGraphRAGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_FROM_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelationshipTypes, relationshipTypes_);
    };
    EnableCollectionGraphRAGRequest() = default ;
    EnableCollectionGraphRAGRequest(const EnableCollectionGraphRAGRequest &) = default ;
    EnableCollectionGraphRAGRequest(EnableCollectionGraphRAGRequest &&) = default ;
    EnableCollectionGraphRAGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCollectionGraphRAGRequest() = default ;
    EnableCollectionGraphRAGRequest& operator=(const EnableCollectionGraphRAGRequest &) = default ;
    EnableCollectionGraphRAGRequest& operator=(EnableCollectionGraphRAGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->entityTypes_ == nullptr && return this->LLMModel_ == nullptr && return this->language_ == nullptr && return this->managerAccount_ == nullptr
        && return this->managerAccountPassword_ == nullptr && return this->namespace_ == nullptr && return this->namespacePassword_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->relationshipTypes_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline EnableCollectionGraphRAGRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline EnableCollectionGraphRAGRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & entityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> entityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline EnableCollectionGraphRAGRequest& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline EnableCollectionGraphRAGRequest& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string LLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline EnableCollectionGraphRAGRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline EnableCollectionGraphRAGRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string managerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline EnableCollectionGraphRAGRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string managerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline EnableCollectionGraphRAGRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline EnableCollectionGraphRAGRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline EnableCollectionGraphRAGRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableCollectionGraphRAGRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableCollectionGraphRAGRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationshipTypes Field Functions 
    bool hasRelationshipTypes() const { return this->relationshipTypes_ != nullptr;};
    void deleteRelationshipTypes() { this->relationshipTypes_ = nullptr;};
    inline const vector<string> & relationshipTypes() const { DARABONBA_PTR_GET_CONST(relationshipTypes_, vector<string>) };
    inline vector<string> relationshipTypes() { DARABONBA_PTR_GET(relationshipTypes_, vector<string>) };
    inline EnableCollectionGraphRAGRequest& setRelationshipTypes(const vector<string> & relationshipTypes) { DARABONBA_PTR_SET_VALUE(relationshipTypes_, relationshipTypes) };
    inline EnableCollectionGraphRAGRequest& setRelationshipTypes(vector<string> && relationshipTypes) { DARABONBA_PTR_SET_RVALUE(relationshipTypes_, relationshipTypes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> entityTypes_ = nullptr;
    std::shared_ptr<string> LLMModel_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> managerAccount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> managerAccountPassword_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> relationshipTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
