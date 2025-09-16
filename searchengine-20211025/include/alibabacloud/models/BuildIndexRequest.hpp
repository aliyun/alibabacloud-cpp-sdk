// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUILDINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class BuildIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(buildMode, buildMode_);
      DARABONBA_PTR_TO_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, BuildIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(buildMode, buildMode_);
      DARABONBA_PTR_FROM_JSON(dataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(dataTimeSec, dataTimeSec_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    BuildIndexRequest() = default ;
    BuildIndexRequest(const BuildIndexRequest &) = default ;
    BuildIndexRequest(BuildIndexRequest &&) = default ;
    BuildIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildIndexRequest() = default ;
    BuildIndexRequest& operator=(const BuildIndexRequest &) = default ;
    BuildIndexRequest& operator=(BuildIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildMode_ != nullptr
        && this->dataSourceName_ != nullptr && this->dataSourceType_ != nullptr && this->dataTimeSec_ != nullptr && this->domain_ != nullptr && this->generation_ != nullptr
        && this->partition_ != nullptr && this->path_ != nullptr && this->tag_ != nullptr; };
    // buildMode Field Functions 
    bool hasBuildMode() const { return this->buildMode_ != nullptr;};
    void deleteBuildMode() { this->buildMode_ = nullptr;};
    inline string buildMode() const { DARABONBA_PTR_GET_DEFAULT(buildMode_, "") };
    inline BuildIndexRequest& setBuildMode(string buildMode) { DARABONBA_PTR_SET_VALUE(buildMode_, buildMode) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline BuildIndexRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline BuildIndexRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // dataTimeSec Field Functions 
    bool hasDataTimeSec() const { return this->dataTimeSec_ != nullptr;};
    void deleteDataTimeSec() { this->dataTimeSec_ = nullptr;};
    inline int32_t dataTimeSec() const { DARABONBA_PTR_GET_DEFAULT(dataTimeSec_, 0) };
    inline BuildIndexRequest& setDataTimeSec(int32_t dataTimeSec) { DARABONBA_PTR_SET_VALUE(dataTimeSec_, dataTimeSec) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline BuildIndexRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int64_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
    inline BuildIndexRequest& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline BuildIndexRequest& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline BuildIndexRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline BuildIndexRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The reindexing method. Valid values: api: API data source. indexRecover: data recovery by using indexing.
    std::shared_ptr<string> buildMode_ = nullptr;
    // The name of the data source.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // The type of the data source.
    std::shared_ptr<string> dataSourceType_ = nullptr;
    // The timestamp in seconds. The value must be of the INTEGER type. This parameter is required if you specify an API data source.
    std::shared_ptr<int32_t> dataTimeSec_ = nullptr;
    // The data center in which the data source is deployed.
    std::shared_ptr<string> domain_ = nullptr;
    // The data restoration version.
    std::shared_ptr<int64_t> generation_ = nullptr;
    // The partition in the MaxCompute table. This parameter is required if type is set to odps.
    std::shared_ptr<string> partition_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
