// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUESTDATASOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUESTDATASOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateTableRequestDataSourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableRequestDataSourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(accessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(accessSecret, accessSecret_);
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(catalog, catalog_);
      DARABONBA_PTR_TO_JSON(database, database_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(ossPath, ossPath_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(table, table_);
      DARABONBA_PTR_TO_JSON(tableFormat, tableFormat_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableRequestDataSourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(accessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(accessSecret, accessSecret_);
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(database, database_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(ossPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(table, table_);
      DARABONBA_PTR_FROM_JSON(tableFormat, tableFormat_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    CreateTableRequestDataSourceConfig() = default ;
    CreateTableRequestDataSourceConfig(const CreateTableRequestDataSourceConfig &) = default ;
    CreateTableRequestDataSourceConfig(CreateTableRequestDataSourceConfig &&) = default ;
    CreateTableRequestDataSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableRequestDataSourceConfig() = default ;
    CreateTableRequestDataSourceConfig& operator=(const CreateTableRequestDataSourceConfig &) = default ;
    CreateTableRequestDataSourceConfig& operator=(CreateTableRequestDataSourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->accessSecret_ != nullptr && this->bucket_ != nullptr && this->catalog_ != nullptr && this->database_ != nullptr && this->endpoint_ != nullptr
        && this->ossPath_ != nullptr && this->partition_ != nullptr && this->project_ != nullptr && this->table_ != nullptr && this->tableFormat_ != nullptr
        && this->tag_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline CreateTableRequestDataSourceConfig& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // accessSecret Field Functions 
    bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
    void deleteAccessSecret() { this->accessSecret_ = nullptr;};
    inline string accessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
    inline CreateTableRequestDataSourceConfig& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline CreateTableRequestDataSourceConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string catalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline CreateTableRequestDataSourceConfig& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline CreateTableRequestDataSourceConfig& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline CreateTableRequestDataSourceConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline CreateTableRequestDataSourceConfig& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline CreateTableRequestDataSourceConfig& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateTableRequestDataSourceConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline CreateTableRequestDataSourceConfig& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // tableFormat Field Functions 
    bool hasTableFormat() const { return this->tableFormat_ != nullptr;};
    void deleteTableFormat() { this->tableFormat_ = nullptr;};
    inline string tableFormat() const { DARABONBA_PTR_GET_DEFAULT(tableFormat_, "") };
    inline CreateTableRequestDataSourceConfig& setTableFormat(string tableFormat) { DARABONBA_PTR_SET_VALUE(tableFormat_, tableFormat) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateTableRequestDataSourceConfig& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The AccessKey ID of the MaxCompute data source.
    std::shared_ptr<string> accessKey_ = nullptr;
    // The AccessKey secret of the MaxCompute data source.
    std::shared_ptr<string> accessSecret_ = nullptr;
    // The OSS bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> catalog_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    // The endpoint of the MaxCompute data source.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The Object Storage Service (OSS) path.
    std::shared_ptr<string> ossPath_ = nullptr;
    // The partition in the MaxCompute table. This parameter is required if type is set to odps.
    std::shared_ptr<string> partition_ = nullptr;
    // The name of the MaxCompute project that is used as the data source.
    std::shared_ptr<string> project_ = nullptr;
    // The name of the MaxCompute table that is used as the data source.
    std::shared_ptr<string> table_ = nullptr;
    std::shared_ptr<string> tableFormat_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
