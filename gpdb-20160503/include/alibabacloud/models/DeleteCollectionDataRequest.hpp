// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOLLECTIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOLLECTIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteCollectionDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCollectionDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(CollectionData, collectionData_);
      DARABONBA_PTR_TO_JSON(CollectionDataFilter, collectionDataFilter_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCollectionDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(CollectionData, collectionData_);
      DARABONBA_PTR_FROM_JSON(CollectionDataFilter, collectionDataFilter_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteCollectionDataRequest() = default ;
    DeleteCollectionDataRequest(const DeleteCollectionDataRequest &) = default ;
    DeleteCollectionDataRequest(DeleteCollectionDataRequest &&) = default ;
    DeleteCollectionDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCollectionDataRequest() = default ;
    DeleteCollectionDataRequest& operator=(const DeleteCollectionDataRequest &) = default ;
    DeleteCollectionDataRequest& operator=(DeleteCollectionDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->collectionData_ == nullptr && this->collectionDataFilter_ == nullptr && this->DBInstanceId_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline DeleteCollectionDataRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // collectionData Field Functions 
    bool hasCollectionData() const { return this->collectionData_ != nullptr;};
    void deleteCollectionData() { this->collectionData_ = nullptr;};
    inline string getCollectionData() const { DARABONBA_PTR_GET_DEFAULT(collectionData_, "") };
    inline DeleteCollectionDataRequest& setCollectionData(string collectionData) { DARABONBA_PTR_SET_VALUE(collectionData_, collectionData) };


    // collectionDataFilter Field Functions 
    bool hasCollectionDataFilter() const { return this->collectionDataFilter_ != nullptr;};
    void deleteCollectionDataFilter() { this->collectionDataFilter_ = nullptr;};
    inline string getCollectionDataFilter() const { DARABONBA_PTR_GET_DEFAULT(collectionDataFilter_, "") };
    inline DeleteCollectionDataRequest& setCollectionDataFilter(string collectionDataFilter) { DARABONBA_PTR_SET_VALUE(collectionDataFilter_, collectionDataFilter) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteCollectionDataRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteCollectionDataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline DeleteCollectionDataRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteCollectionDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCollectionDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteCollectionDataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the collection.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The data that you want to delete.
    shared_ptr<string> collectionData_ {};
    // The filter conditions for the data to be deleted.
    shared_ptr<string> collectionDataFilter_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances within a region.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the namespace. Default value: public.
    // 
    // >  You can call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
    shared_ptr<string> namespace_ {};
    // The password of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the workspace that consists of multiple AnalyticDB for PostgreSQL instances. You must specify one of the WorkspaceId and DBInstanceId parameters. If you specify both parameters, the WorkspaceId parameter takes effect.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
