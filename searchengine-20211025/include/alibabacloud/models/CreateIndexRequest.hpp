// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIndexRequestDataSourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(buildParallelNum, buildParallelNum_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_ANY_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(mergeParallelNum, mergeParallelNum_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(buildParallelNum, buildParallelNum_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_ANY_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(mergeParallelNum, mergeParallelNum_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateIndexRequest() = default ;
    CreateIndexRequest(const CreateIndexRequest &) = default ;
    CreateIndexRequest(CreateIndexRequest &&) = default ;
    CreateIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexRequest() = default ;
    CreateIndexRequest& operator=(const CreateIndexRequest &) = default ;
    CreateIndexRequest& operator=(CreateIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildParallelNum_ != nullptr
        && this->content_ != nullptr && this->dataSource_ != nullptr && this->dataSourceInfo_ != nullptr && this->domain_ != nullptr && this->extend_ != nullptr
        && this->mergeParallelNum_ != nullptr && this->name_ != nullptr && this->partition_ != nullptr && this->dryRun_ != nullptr; };
    // buildParallelNum Field Functions 
    bool hasBuildParallelNum() const { return this->buildParallelNum_ != nullptr;};
    void deleteBuildParallelNum() { this->buildParallelNum_ = nullptr;};
    inline int32_t buildParallelNum() const { DARABONBA_PTR_GET_DEFAULT(buildParallelNum_, 0) };
    inline CreateIndexRequest& setBuildParallelNum(int32_t buildParallelNum) { DARABONBA_PTR_SET_VALUE(buildParallelNum_, buildParallelNum) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateIndexRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline CreateIndexRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // dataSourceInfo Field Functions 
    bool hasDataSourceInfo() const { return this->dataSourceInfo_ != nullptr;};
    void deleteDataSourceInfo() { this->dataSourceInfo_ = nullptr;};
    inline const CreateIndexRequestDataSourceInfo & dataSourceInfo() const { DARABONBA_PTR_GET_CONST(dataSourceInfo_, CreateIndexRequestDataSourceInfo) };
    inline CreateIndexRequestDataSourceInfo dataSourceInfo() { DARABONBA_PTR_GET(dataSourceInfo_, CreateIndexRequestDataSourceInfo) };
    inline CreateIndexRequest& setDataSourceInfo(const CreateIndexRequestDataSourceInfo & dataSourceInfo) { DARABONBA_PTR_SET_VALUE(dataSourceInfo_, dataSourceInfo) };
    inline CreateIndexRequest& setDataSourceInfo(CreateIndexRequestDataSourceInfo && dataSourceInfo) { DARABONBA_PTR_SET_RVALUE(dataSourceInfo_, dataSourceInfo) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateIndexRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline     const Darabonba::Json & extend() const { DARABONBA_GET(extend_) };
    Darabonba::Json & extend() { DARABONBA_GET(extend_) };
    inline CreateIndexRequest& setExtend(const Darabonba::Json & extend) { DARABONBA_SET_VALUE(extend_, extend) };
    inline CreateIndexRequest& setExtend(Darabonba::Json & extend) { DARABONBA_SET_RVALUE(extend_, extend) };


    // mergeParallelNum Field Functions 
    bool hasMergeParallelNum() const { return this->mergeParallelNum_ != nullptr;};
    void deleteMergeParallelNum() { this->mergeParallelNum_ = nullptr;};
    inline int32_t mergeParallelNum() const { DARABONBA_PTR_GET_DEFAULT(mergeParallelNum_, 0) };
    inline CreateIndexRequest& setMergeParallelNum(int32_t mergeParallelNum) { DARABONBA_PTR_SET_VALUE(mergeParallelNum_, mergeParallelNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIndexRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline CreateIndexRequest& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIndexRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The maximum number of full indexes that can be concurrently built.
    std::shared_ptr<int32_t> buildParallelNum_ = nullptr;
    // The index schema.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The information about the data source. This parameter is required for an OpenSearch Vector Search Edition instance of the new version.
    std::shared_ptr<CreateIndexRequestDataSourceInfo> dataSourceInfo_ = nullptr;
    // The data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    // The extended content of the field configuration. key specifies the vector field and the field that requires embedding.
    Darabonba::Json extend_ = nullptr;
    // The maximum number of full indexes that can be concurrently merged.
    std::shared_ptr<int32_t> mergeParallelNum_ = nullptr;
    // The index name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of data shards.
    std::shared_ptr<int32_t> partition_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. The system only checks the validity of the data source. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
