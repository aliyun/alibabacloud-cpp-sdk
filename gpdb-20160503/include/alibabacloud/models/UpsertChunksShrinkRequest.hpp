// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCHUNKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCHUNKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpsertChunksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertChunksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowInsertWithFilter, allowInsertWithFilter_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShouldReplaceFile, shouldReplaceFile_);
      DARABONBA_PTR_TO_JSON(TextChunks, textChunksShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertChunksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowInsertWithFilter, allowInsertWithFilter_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShouldReplaceFile, shouldReplaceFile_);
      DARABONBA_PTR_FROM_JSON(TextChunks, textChunksShrink_);
    };
    UpsertChunksShrinkRequest() = default ;
    UpsertChunksShrinkRequest(const UpsertChunksShrinkRequest &) = default ;
    UpsertChunksShrinkRequest(UpsertChunksShrinkRequest &&) = default ;
    UpsertChunksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertChunksShrinkRequest() = default ;
    UpsertChunksShrinkRequest& operator=(const UpsertChunksShrinkRequest &) = default ;
    UpsertChunksShrinkRequest& operator=(UpsertChunksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowInsertWithFilter_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->fileName_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->shouldReplaceFile_ == nullptr && this->textChunksShrink_ == nullptr; };
    // allowInsertWithFilter Field Functions 
    bool hasAllowInsertWithFilter() const { return this->allowInsertWithFilter_ != nullptr;};
    void deleteAllowInsertWithFilter() { this->allowInsertWithFilter_ = nullptr;};
    inline bool getAllowInsertWithFilter() const { DARABONBA_PTR_GET_DEFAULT(allowInsertWithFilter_, false) };
    inline UpsertChunksShrinkRequest& setAllowInsertWithFilter(bool allowInsertWithFilter) { DARABONBA_PTR_SET_VALUE(allowInsertWithFilter_, allowInsertWithFilter) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UpsertChunksShrinkRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpsertChunksShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpsertChunksShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpsertChunksShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UpsertChunksShrinkRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpsertChunksShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpsertChunksShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // shouldReplaceFile Field Functions 
    bool hasShouldReplaceFile() const { return this->shouldReplaceFile_ != nullptr;};
    void deleteShouldReplaceFile() { this->shouldReplaceFile_ = nullptr;};
    inline bool getShouldReplaceFile() const { DARABONBA_PTR_GET_DEFAULT(shouldReplaceFile_, false) };
    inline UpsertChunksShrinkRequest& setShouldReplaceFile(bool shouldReplaceFile) { DARABONBA_PTR_SET_VALUE(shouldReplaceFile_, shouldReplaceFile) };


    // textChunksShrink Field Functions 
    bool hasTextChunksShrink() const { return this->textChunksShrink_ != nullptr;};
    void deleteTextChunksShrink() { this->textChunksShrink_ = nullptr;};
    inline string getTextChunksShrink() const { DARABONBA_PTR_GET_DEFAULT(textChunksShrink_, "") };
    inline UpsertChunksShrinkRequest& setTextChunksShrink(string textChunksShrink) { DARABONBA_PTR_SET_VALUE(textChunksShrink_, textChunksShrink) };


  protected:
    // Based on the Filter input specified under TextChunks, this parameter controls whether data insertion is allowed when a Filter is provided.
    // 
    // If AllowInsertWithFilter = true, the insert operation is performed when the filter does not match any data.
    // 
    // If AllowInsertWithFilter = false, no action is performed if the filter does not match any data.
    // 
    // Default value: true.
    shared_ptr<bool> allowInsertWithFilter_ {};
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
    // The file name of the document.
    // 
    // > When a non-empty filename is specified, the system will decide whether to overwrite the data associated with that filename based on the value of the ShouldReplaceFile parameter. If you leave this parameter empty, the data of chunks is appended to the document collection.
    shared_ptr<string> fileName_ {};
    // The name of the namespace. Default value: public.
    // 
    // > You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
    shared_ptr<string> namespace_ {};
    // The password of the namespace.
    // 
    // > The value of this parameter is specified when you call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to overwrite the data associated with the file name specified by the FileName parameter.
    // 
    // If you set ShouldReplaceFile to true, the system deletes all data associated with the file name and then inserts new data.
    // 
    // If you set ShouldReplaceFile to false, the system does not delete the data associated with the file name, but inserts or updates the data of chunks based on the TextChunks parameter.
    // 
    // Default value: true.
    shared_ptr<bool> shouldReplaceFile_ {};
    // List of document chunks after splitting.
    shared_ptr<string> textChunksShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
