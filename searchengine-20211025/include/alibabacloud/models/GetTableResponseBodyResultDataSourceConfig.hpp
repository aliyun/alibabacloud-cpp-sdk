// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATASOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATASOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBodyResultDataSourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBodyResultDataSourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(accessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(accessSecret, accessSecret_);
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ossPath, ossPath_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBodyResultDataSourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(accessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(accessSecret, accessSecret_);
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ossPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetTableResponseBodyResultDataSourceConfig() = default ;
    GetTableResponseBodyResultDataSourceConfig(const GetTableResponseBodyResultDataSourceConfig &) = default ;
    GetTableResponseBodyResultDataSourceConfig(GetTableResponseBodyResultDataSourceConfig &&) = default ;
    GetTableResponseBodyResultDataSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBodyResultDataSourceConfig() = default ;
    GetTableResponseBodyResultDataSourceConfig& operator=(const GetTableResponseBodyResultDataSourceConfig &) = default ;
    GetTableResponseBodyResultDataSourceConfig& operator=(GetTableResponseBodyResultDataSourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->accessSecret_ != nullptr && this->bucket_ != nullptr && this->endpoint_ != nullptr && this->namespace_ != nullptr && this->ossPath_ != nullptr
        && this->partition_ != nullptr && this->path_ != nullptr && this->project_ != nullptr && this->table_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // accessSecret Field Functions 
    bool hasAccessSecret() const { return this->accessSecret_ != nullptr;};
    void deleteAccessSecret() { this->accessSecret_ = nullptr;};
    inline string accessSecret() const { DARABONBA_PTR_GET_DEFAULT(accessSecret_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setAccessSecret(string accessSecret) { DARABONBA_PTR_SET_VALUE(accessSecret_, accessSecret) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline GetTableResponseBodyResultDataSourceConfig& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // AK
    std::shared_ptr<string> accessKey_ = nullptr;
    // AS
    std::shared_ptr<string> accessSecret_ = nullptr;
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<string> partition_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
