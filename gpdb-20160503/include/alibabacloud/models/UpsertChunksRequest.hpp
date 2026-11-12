// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCHUNKSREQUEST_HPP_
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
  class UpsertChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowInsertWithFilter, allowInsertWithFilter_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShouldReplaceFile, shouldReplaceFile_);
      DARABONBA_PTR_TO_JSON(TextChunks, textChunks_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowInsertWithFilter, allowInsertWithFilter_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShouldReplaceFile, shouldReplaceFile_);
      DARABONBA_PTR_FROM_JSON(TextChunks, textChunks_);
    };
    UpsertChunksRequest() = default ;
    UpsertChunksRequest(const UpsertChunksRequest &) = default ;
    UpsertChunksRequest(UpsertChunksRequest &&) = default ;
    UpsertChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertChunksRequest() = default ;
    UpsertChunksRequest& operator=(const UpsertChunksRequest &) = default ;
    UpsertChunksRequest& operator=(UpsertChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TextChunks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextChunks& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Filter, filter_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      };
      friend void from_json(const Darabonba::Json& j, TextChunks& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Filter, filter_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      };
      TextChunks() = default ;
      TextChunks(const TextChunks &) = default ;
      TextChunks(TextChunks &&) = default ;
      TextChunks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextChunks() = default ;
      TextChunks& operator=(const TextChunks &) = default ;
      TextChunks& operator=(TextChunks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->filter_ == nullptr && this->id_ == nullptr && this->metadata_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline TextChunks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // filter Field Functions 
      bool hasFilter() const { return this->filter_ != nullptr;};
      void deleteFilter() { this->filter_ = nullptr;};
      inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
      inline TextChunks& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline TextChunks& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline       const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
      Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
      inline TextChunks& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
      inline TextChunks& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    protected:
      // The document content.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // The filter condition for the data to be updated, in the format of an SQL WHERE clause.
      shared_ptr<string> filter_ {};
      // The unique ID of the vector data.
      shared_ptr<string> id_ {};
      // The metadata.
      Darabonba::Json metadata_ {};
    };

    virtual bool empty() const override { return this->allowInsertWithFilter_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->fileName_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->shouldReplaceFile_ == nullptr && this->textChunks_ == nullptr; };
    // allowInsertWithFilter Field Functions 
    bool hasAllowInsertWithFilter() const { return this->allowInsertWithFilter_ != nullptr;};
    void deleteAllowInsertWithFilter() { this->allowInsertWithFilter_ = nullptr;};
    inline bool getAllowInsertWithFilter() const { DARABONBA_PTR_GET_DEFAULT(allowInsertWithFilter_, false) };
    inline UpsertChunksRequest& setAllowInsertWithFilter(bool allowInsertWithFilter) { DARABONBA_PTR_SET_VALUE(allowInsertWithFilter_, allowInsertWithFilter) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UpsertChunksRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpsertChunksRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpsertChunksRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpsertChunksRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UpsertChunksRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpsertChunksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpsertChunksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // shouldReplaceFile Field Functions 
    bool hasShouldReplaceFile() const { return this->shouldReplaceFile_ != nullptr;};
    void deleteShouldReplaceFile() { this->shouldReplaceFile_ = nullptr;};
    inline bool getShouldReplaceFile() const { DARABONBA_PTR_GET_DEFAULT(shouldReplaceFile_, false) };
    inline UpsertChunksRequest& setShouldReplaceFile(bool shouldReplaceFile) { DARABONBA_PTR_SET_VALUE(shouldReplaceFile_, shouldReplaceFile) };


    // textChunks Field Functions 
    bool hasTextChunks() const { return this->textChunks_ != nullptr;};
    void deleteTextChunks() { this->textChunks_ = nullptr;};
    inline const vector<UpsertChunksRequest::TextChunks> & getTextChunks() const { DARABONBA_PTR_GET_CONST(textChunks_, vector<UpsertChunksRequest::TextChunks>) };
    inline vector<UpsertChunksRequest::TextChunks> getTextChunks() { DARABONBA_PTR_GET(textChunks_, vector<UpsertChunksRequest::TextChunks>) };
    inline UpsertChunksRequest& setTextChunks(const vector<UpsertChunksRequest::TextChunks> & textChunks) { DARABONBA_PTR_SET_VALUE(textChunks_, textChunks) };
    inline UpsertChunksRequest& setTextChunks(vector<UpsertChunksRequest::TextChunks> && textChunks) { DARABONBA_PTR_SET_RVALUE(textChunks_, textChunks) };


  protected:
    // Specifies whether to allow data insertion when a filter is specified. This parameter takes effect only when the Filter parameter in TextChunks is specified.
    // 
    // If AllowInsertWithFilter is set to true, an insert operation is performed when the filter does not match any data.
    // 
    // If AllowInsertWithFilter is set to false, no operation is performed when the filter does not match any data.
    // 
    // Default value: true.
    shared_ptr<bool> allowInsertWithFilter_ {};
    // The name of the document collection.
    // 
    // > The document collection is created by calling the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation. You can call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to view the created document collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including the instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The file name.
    // 
    // > If this parameter is not empty, the system determines whether to overwrite the data associated with this file name based on the value of the ShouldReplaceFile parameter. If this parameter is empty, the chunk data is directly appended and uploaded to the document collection.
    shared_ptr<string> fileName_ {};
    // The namespace. Default value: public.
    // 
    // > You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to view the namespace list.
    shared_ptr<string> namespace_ {};
    // The password for the namespace.
    // > This value is specified in the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to overwrite the data associated with the specified file name. This parameter takes effect only when the FileName parameter is specified.
    // 
    // If ShouldReplaceFile is set to true, all data associated with the file name is deleted before new data is inserted.
    // 
    // If ShouldReplaceFile is set to false, the data associated with the file name is not deleted. Instead, chunks are inserted or updated based on the specific TextChunks parameter.
    // 
    // Default value: true.
    shared_ptr<bool> shouldReplaceFile_ {};
    // The list of chunked documents.
    shared_ptr<vector<UpsertChunksRequest::TextChunks>> textChunks_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
