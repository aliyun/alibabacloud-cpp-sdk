// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOLLECTIONDATAMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOLLECTIONDATAMETADATAREQUEST_HPP_
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
  class UpdateCollectionDataMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCollectionDataMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCollectionDataMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateCollectionDataMetadataRequest() = default ;
    UpdateCollectionDataMetadataRequest(const UpdateCollectionDataMetadataRequest &) = default ;
    UpdateCollectionDataMetadataRequest(UpdateCollectionDataMetadataRequest &&) = default ;
    UpdateCollectionDataMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCollectionDataMetadataRequest() = default ;
    UpdateCollectionDataMetadataRequest& operator=(const UpdateCollectionDataMetadataRequest &) = default ;
    UpdateCollectionDataMetadataRequest& operator=(UpdateCollectionDataMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->DBInstanceId_ == nullptr && this->filter_ == nullptr && this->ids_ == nullptr && this->metadata_ == nullptr && this->namespace_ == nullptr
        && this->namespacePassword_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->workspaceId_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UpdateCollectionDataMetadataRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpdateCollectionDataMetadataRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline UpdateCollectionDataMetadataRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> getIds() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline UpdateCollectionDataMetadataRequest& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline UpdateCollectionDataMetadataRequest& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline UpdateCollectionDataMetadataRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UpdateCollectionDataMetadataRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateCollectionDataMetadataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UpdateCollectionDataMetadataRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCollectionDataMetadataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCollectionDataMetadataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateCollectionDataMetadataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Collection name.
    // 
    // > You can use the [ListCollections](https://help.aliyun.com/document_detail/2401503.html) API to view the list.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB for PostgreSQL instances in the target region, including the instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // Filter condition for the data to be updated, in SQL WHERE format. This field cannot be empty at the same time as the Ids field.
    shared_ptr<string> filter_ {};
    // ID list of the data to be updated, i.e., the Row.Id specified when uploading the data. This field cannot be empty at the same time as the Filter field.
    shared_ptr<vector<string>> ids_ {};
    // Data to be updated, in a JSON string of MAP format. The key is the field name, and the value is the new data value.
    // 
    // This parameter is required.
    Darabonba::Json metadata_ {};
    // Namespace.
    // 
    // > You can use the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) API to view the list.
    shared_ptr<string> namespace_ {};
    // Password corresponding to the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Region ID where the instance is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // ID of the Workspace composed of multiple database instances. This parameter and the DBInstanceId parameter cannot both be empty. When both are specified, this parameter takes precedence.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
