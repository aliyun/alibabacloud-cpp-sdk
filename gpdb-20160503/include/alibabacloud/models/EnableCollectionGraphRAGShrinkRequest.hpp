// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECOLLECTIONGRAPHRAGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECOLLECTIONGRAPHRAGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class EnableCollectionGraphRAGShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCollectionGraphRAGShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypesShrink_);
      DARABONBA_PTR_TO_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_TO_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelationshipTypes, relationshipTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCollectionGraphRAGShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypesShrink_);
      DARABONBA_PTR_FROM_JSON(LLMModel, LLMModel_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_FROM_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelationshipTypes, relationshipTypesShrink_);
    };
    EnableCollectionGraphRAGShrinkRequest() = default ;
    EnableCollectionGraphRAGShrinkRequest(const EnableCollectionGraphRAGShrinkRequest &) = default ;
    EnableCollectionGraphRAGShrinkRequest(EnableCollectionGraphRAGShrinkRequest &&) = default ;
    EnableCollectionGraphRAGShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCollectionGraphRAGShrinkRequest() = default ;
    EnableCollectionGraphRAGShrinkRequest& operator=(const EnableCollectionGraphRAGShrinkRequest &) = default ;
    EnableCollectionGraphRAGShrinkRequest& operator=(EnableCollectionGraphRAGShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->DBInstanceId_ == nullptr && this->entityTypesShrink_ == nullptr && this->LLMModel_ == nullptr && this->language_ == nullptr && this->managerAccount_ == nullptr
        && this->managerAccountPassword_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->relationshipTypesShrink_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // entityTypesShrink Field Functions 
    bool hasEntityTypesShrink() const { return this->entityTypesShrink_ != nullptr;};
    void deleteEntityTypesShrink() { this->entityTypesShrink_ = nullptr;};
    inline string getEntityTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(entityTypesShrink_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setEntityTypesShrink(string entityTypesShrink) { DARABONBA_PTR_SET_VALUE(entityTypesShrink_, entityTypesShrink) };


    // LLMModel Field Functions 
    bool hasLLMModel() const { return this->LLMModel_ != nullptr;};
    void deleteLLMModel() { this->LLMModel_ = nullptr;};
    inline string getLLMModel() const { DARABONBA_PTR_GET_DEFAULT(LLMModel_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setLLMModel(string LLMModel) { DARABONBA_PTR_SET_VALUE(LLMModel_, LLMModel) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableCollectionGraphRAGShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationshipTypesShrink Field Functions 
    bool hasRelationshipTypesShrink() const { return this->relationshipTypesShrink_ != nullptr;};
    void deleteRelationshipTypesShrink() { this->relationshipTypesShrink_ = nullptr;};
    inline string getRelationshipTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(relationshipTypesShrink_, "") };
    inline EnableCollectionGraphRAGShrinkRequest& setRelationshipTypesShrink(string relationshipTypesShrink) { DARABONBA_PTR_SET_VALUE(relationshipTypesShrink_, relationshipTypesShrink) };


  protected:
    // The name of the document collection.
    // 
    // > You can call the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation to create a document collection and call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to query a list of document collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The cluster ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The list of entity types.
    // 
    // > If the knowledge graph construction is enabled, this parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> entityTypesShrink_ {};
    // The name of the LLM model.
    // 
    // > Valid values:
    // 
    // *   knowledge-extract-standard: the default value.
    // 
    // *   knowledge-extract-mini
    // 
    // > This parameter takes effect only when the knowledge graph construction is enabled.
    shared_ptr<string> LLMModel_ {};
    // The language used to build the knowledge graph. Valid values:
    // 
    // *   Simplified Chinese. The default value.
    // *   English.
    // 
    // > This parameter takes effect only when the knowledge graph construction is enabled.
    shared_ptr<string> language_ {};
    // The name of the privileged database account that has the rds_superuser permission.
    // 
    // > You can call the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation to create an account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password for the privileged database account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // The name of the namespace. Default value: public.
    // 
    // > You can call the CreateNamespace operation to create a namespace and call the ListNamespaces operation to query a list of namespaces.
    shared_ptr<string> namespace_ {};
    // The password of the namespace.
    // 
    // > The value of this parameter is specified by [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the cluster.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of relationship edge types.
    // 
    // > If the knowledge graph construction is enabled, this parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> relationshipTypesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
