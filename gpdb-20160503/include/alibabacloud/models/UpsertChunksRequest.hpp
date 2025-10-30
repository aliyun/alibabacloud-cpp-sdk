// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCHUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpsertChunksRequestTextChunks.hpp>
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
    virtual bool empty() const override { return this->allowInsertWithFilter_ == nullptr
        && return this->collection_ == nullptr && return this->DBInstanceId_ == nullptr && return this->fileName_ == nullptr && return this->namespace_ == nullptr && return this->namespacePassword_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->shouldReplaceFile_ == nullptr && return this->textChunks_ == nullptr; };
    // allowInsertWithFilter Field Functions 
    bool hasAllowInsertWithFilter() const { return this->allowInsertWithFilter_ != nullptr;};
    void deleteAllowInsertWithFilter() { this->allowInsertWithFilter_ = nullptr;};
    inline bool allowInsertWithFilter() const { DARABONBA_PTR_GET_DEFAULT(allowInsertWithFilter_, false) };
    inline UpsertChunksRequest& setAllowInsertWithFilter(bool allowInsertWithFilter) { DARABONBA_PTR_SET_VALUE(allowInsertWithFilter_, allowInsertWithFilter) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UpsertChunksRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpsertChunksRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpsertChunksRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpsertChunksRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string namespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UpsertChunksRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpsertChunksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpsertChunksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // shouldReplaceFile Field Functions 
    bool hasShouldReplaceFile() const { return this->shouldReplaceFile_ != nullptr;};
    void deleteShouldReplaceFile() { this->shouldReplaceFile_ = nullptr;};
    inline bool shouldReplaceFile() const { DARABONBA_PTR_GET_DEFAULT(shouldReplaceFile_, false) };
    inline UpsertChunksRequest& setShouldReplaceFile(bool shouldReplaceFile) { DARABONBA_PTR_SET_VALUE(shouldReplaceFile_, shouldReplaceFile) };


    // textChunks Field Functions 
    bool hasTextChunks() const { return this->textChunks_ != nullptr;};
    void deleteTextChunks() { this->textChunks_ = nullptr;};
    inline const vector<UpsertChunksRequestTextChunks> & textChunks() const { DARABONBA_PTR_GET_CONST(textChunks_, vector<UpsertChunksRequestTextChunks>) };
    inline vector<UpsertChunksRequestTextChunks> textChunks() { DARABONBA_PTR_GET(textChunks_, vector<UpsertChunksRequestTextChunks>) };
    inline UpsertChunksRequest& setTextChunks(const vector<UpsertChunksRequestTextChunks> & textChunks) { DARABONBA_PTR_SET_VALUE(textChunks_, textChunks) };
    inline UpsertChunksRequest& setTextChunks(vector<UpsertChunksRequestTextChunks> && textChunks) { DARABONBA_PTR_SET_RVALUE(textChunks_, textChunks) };


  protected:
    std::shared_ptr<bool> allowInsertWithFilter_ = nullptr;
    // Document collection name.
    // 
    // > Created by the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) API. You can use the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) API to view the already created document collections.
    // 
    // This parameter is required.
    std::shared_ptr<string> collection_ = nullptr;
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // File name.
    // 
    // > If a file name is specified and not empty, it will overwrite the data for this file name; if empty, the chunks data will be appended directly to the document collection.
    std::shared_ptr<string> fileName_ = nullptr;
    // Namespace, default is public.
    // 
    // > You can create it using the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) API and view the list using the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) API.
    std::shared_ptr<string> namespace_ = nullptr;
    // Password corresponding to the namespace.
    // 
    // > This value is specified by the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespacePassword_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Region ID where the instance is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> shouldReplaceFile_ = nullptr;
    // List of split documents.
    std::shared_ptr<vector<UpsertChunksRequestTextChunks>> textChunks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
