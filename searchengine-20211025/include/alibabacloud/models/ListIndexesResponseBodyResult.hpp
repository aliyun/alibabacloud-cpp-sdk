// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIndexesResponseBodyResultDataSourceInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListIndexesResponseBodyResultVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListIndexesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(fullUpdateTime, fullUpdateTime_);
      DARABONBA_PTR_TO_JSON(fullVersion, fullVersion_);
      DARABONBA_PTR_TO_JSON(incUpdateTime, incUpdateTime_);
      DARABONBA_PTR_TO_JSON(indexSize, indexSize_);
      DARABONBA_PTR_TO_JSON(indexStatus, indexStatus_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(dataSourceInfo, dataSourceInfo_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(fullUpdateTime, fullUpdateTime_);
      DARABONBA_PTR_FROM_JSON(fullVersion, fullVersion_);
      DARABONBA_PTR_FROM_JSON(incUpdateTime, incUpdateTime_);
      DARABONBA_PTR_FROM_JSON(indexSize, indexSize_);
      DARABONBA_PTR_FROM_JSON(indexStatus, indexStatus_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    ListIndexesResponseBodyResult() = default ;
    ListIndexesResponseBodyResult(const ListIndexesResponseBodyResult &) = default ;
    ListIndexesResponseBodyResult(ListIndexesResponseBodyResult &&) = default ;
    ListIndexesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBodyResult() = default ;
    ListIndexesResponseBodyResult& operator=(const ListIndexesResponseBodyResult &) = default ;
    ListIndexesResponseBodyResult& operator=(ListIndexesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->createTime_ != nullptr && this->dataSource_ != nullptr && this->dataSourceInfo_ != nullptr && this->description_ != nullptr && this->domain_ != nullptr
        && this->fullUpdateTime_ != nullptr && this->fullVersion_ != nullptr && this->incUpdateTime_ != nullptr && this->indexSize_ != nullptr && this->indexStatus_ != nullptr
        && this->name_ != nullptr && this->partition_ != nullptr && this->updateTime_ != nullptr && this->versions_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListIndexesResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListIndexesResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline ListIndexesResponseBodyResult& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // dataSourceInfo Field Functions 
    bool hasDataSourceInfo() const { return this->dataSourceInfo_ != nullptr;};
    void deleteDataSourceInfo() { this->dataSourceInfo_ = nullptr;};
    inline const Models::ListIndexesResponseBodyResultDataSourceInfo & dataSourceInfo() const { DARABONBA_PTR_GET_CONST(dataSourceInfo_, Models::ListIndexesResponseBodyResultDataSourceInfo) };
    inline Models::ListIndexesResponseBodyResultDataSourceInfo dataSourceInfo() { DARABONBA_PTR_GET(dataSourceInfo_, Models::ListIndexesResponseBodyResultDataSourceInfo) };
    inline ListIndexesResponseBodyResult& setDataSourceInfo(const Models::ListIndexesResponseBodyResultDataSourceInfo & dataSourceInfo) { DARABONBA_PTR_SET_VALUE(dataSourceInfo_, dataSourceInfo) };
    inline ListIndexesResponseBodyResult& setDataSourceInfo(Models::ListIndexesResponseBodyResultDataSourceInfo && dataSourceInfo) { DARABONBA_PTR_SET_RVALUE(dataSourceInfo_, dataSourceInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIndexesResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListIndexesResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // fullUpdateTime Field Functions 
    bool hasFullUpdateTime() const { return this->fullUpdateTime_ != nullptr;};
    void deleteFullUpdateTime() { this->fullUpdateTime_ = nullptr;};
    inline string fullUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(fullUpdateTime_, "") };
    inline ListIndexesResponseBodyResult& setFullUpdateTime(string fullUpdateTime) { DARABONBA_PTR_SET_VALUE(fullUpdateTime_, fullUpdateTime) };


    // fullVersion Field Functions 
    bool hasFullVersion() const { return this->fullVersion_ != nullptr;};
    void deleteFullVersion() { this->fullVersion_ = nullptr;};
    inline int64_t fullVersion() const { DARABONBA_PTR_GET_DEFAULT(fullVersion_, 0L) };
    inline ListIndexesResponseBodyResult& setFullVersion(int64_t fullVersion) { DARABONBA_PTR_SET_VALUE(fullVersion_, fullVersion) };


    // incUpdateTime Field Functions 
    bool hasIncUpdateTime() const { return this->incUpdateTime_ != nullptr;};
    void deleteIncUpdateTime() { this->incUpdateTime_ = nullptr;};
    inline string incUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(incUpdateTime_, "") };
    inline ListIndexesResponseBodyResult& setIncUpdateTime(string incUpdateTime) { DARABONBA_PTR_SET_VALUE(incUpdateTime_, incUpdateTime) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline ListIndexesResponseBodyResult& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // indexStatus Field Functions 
    bool hasIndexStatus() const { return this->indexStatus_ != nullptr;};
    void deleteIndexStatus() { this->indexStatus_ = nullptr;};
    inline string indexStatus() const { DARABONBA_PTR_GET_DEFAULT(indexStatus_, "") };
    inline ListIndexesResponseBodyResult& setIndexStatus(string indexStatus) { DARABONBA_PTR_SET_VALUE(indexStatus_, indexStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIndexesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline ListIndexesResponseBodyResult& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListIndexesResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<Models::ListIndexesResponseBodyResultVersions> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<Models::ListIndexesResponseBodyResultVersions>) };
    inline vector<Models::ListIndexesResponseBodyResultVersions> versions() { DARABONBA_PTR_GET(versions_, vector<Models::ListIndexesResponseBodyResultVersions>) };
    inline ListIndexesResponseBodyResult& setVersions(const vector<Models::ListIndexesResponseBodyResultVersions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListIndexesResponseBodyResult& setVersions(vector<Models::ListIndexesResponseBodyResultVersions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The index schema, which is a JSON string.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSource_ = nullptr;
    // The information about the data source.
    std::shared_ptr<Models::ListIndexesResponseBodyResultDataSourceInfo> dataSourceInfo_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The deployment name of the index.
    std::shared_ptr<string> domain_ = nullptr;
    // The time when full data in the index was last updated.
    std::shared_ptr<string> fullUpdateTime_ = nullptr;
    // The full version of the index.
    std::shared_ptr<int64_t> fullVersion_ = nullptr;
    // The time when incremental data in the index was last updated.
    std::shared_ptr<string> incUpdateTime_ = nullptr;
    // The index size.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The index ststus. Valid values: NEW and PUBLISH.
    std::shared_ptr<string> indexStatus_ = nullptr;
    // The index name.
    std::shared_ptr<string> name_ = nullptr;
    // The number of shards.
    std::shared_ptr<int32_t> partition_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    // The index versions.
    std::shared_ptr<vector<Models::ListIndexesResponseBodyResultVersions>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
