// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTSTORAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultStorage& obj) { 
      DARABONBA_PTR_TO_JSON(accessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(accessSecret, accessSecret_);
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(catalog, catalog_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ossPath, ossPath_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(accessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(accessSecret, accessSecret_);
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ossPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(table, table_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    GetDataSourceDeployResponseBodyResultStorage() = default ;
    GetDataSourceDeployResponseBodyResultStorage(const GetDataSourceDeployResponseBodyResultStorage &) = default ;
    GetDataSourceDeployResponseBodyResultStorage(GetDataSourceDeployResponseBodyResultStorage &&) = default ;
    GetDataSourceDeployResponseBodyResultStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultStorage() = default ;
    GetDataSourceDeployResponseBodyResultStorage& operator=(const GetDataSourceDeployResponseBodyResultStorage &) = default ;
    GetDataSourceDeployResponseBodyResultStorage& operator=(GetDataSourceDeployResponseBodyResultStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->accessSecret_ != nullptr && this->bucket_ != nullptr && this->catalog_ != nullptr && this->database_ != nullptr && this->endpoint_ != nullptr
        && this->namespace_ != nullptr && this->ossPath_ != nullptr && this->partition_ != nullptr && this->path_ != nullptr && this->project_ != nullptr
        && this->table_ != nullptr && this->tag_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // accessSecret Field Functions 
    bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
    void deleteAccessSecret() { this->accessSecret_ = nullptr;};
    inline string accessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string catalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetDataSourceDeployResponseBodyResultStorage& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The AccessKey ID of the MaxCompute data source.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The AccessKey secret of the MaxCompute data source.
    std::shared_ptr<string> accessSecret_ = nullptr;
    // The name of the OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> catalog_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    // The endpoint of the MaxCompute data source.
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The Object Storage Service (OSS) path.
    std::shared_ptr<string> ossPath_ = nullptr;
    // The partition in the MaxCompute table. Example: ds=20180102.
    std::shared_ptr<string> partition_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
