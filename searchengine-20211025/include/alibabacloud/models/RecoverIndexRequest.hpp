// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class RecoverIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
    };
    RecoverIndexRequest() = default ;
    RecoverIndexRequest(const RecoverIndexRequest &) = default ;
    RecoverIndexRequest(RecoverIndexRequest &&) = default ;
    RecoverIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverIndexRequest() = default ;
    RecoverIndexRequest& operator=(const RecoverIndexRequest &) = default ;
    RecoverIndexRequest& operator=(RecoverIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildDeployId_ != nullptr
        && this->dataSourceName_ != nullptr && this->generation_ != nullptr && this->indexName_ != nullptr; };
    // buildDeployId Field Functions 
    bool hasBuildDeployId() const { return this->buildDeployId_ != nullptr;};
    void deleteBuildDeployId() { this->buildDeployId_ = nullptr;};
    inline int32_t buildDeployId() const { DARABONBA_PTR_GET_DEFAULT(buildDeployId_, 0) };
    inline RecoverIndexRequest& setBuildDeployId(int32_t buildDeployId) { DARABONBA_PTR_SET_VALUE(buildDeployId_, buildDeployId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline RecoverIndexRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline string generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
    inline RecoverIndexRequest& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline RecoverIndexRequest& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


  protected:
    // The deployment ID of the data source.
    std::shared_ptr<int32_t> buildDeployId_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The ID of the full index version.
    std::shared_ptr<string> generation_ = nullptr;
    // The index name.
    std::shared_ptr<string> indexName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
