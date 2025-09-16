// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATESOURCEGENERATIONSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATESOURCEGENERATIONSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDateSourceGenerationsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDateSourceGenerationsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dataDumpRoot, dataDumpRoot_);
      DARABONBA_PTR_TO_JSON(generation, generation_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListDateSourceGenerationsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dataDumpRoot, dataDumpRoot_);
      DARABONBA_PTR_FROM_JSON(generation, generation_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    ListDateSourceGenerationsResponseBodyResult() = default ;
    ListDateSourceGenerationsResponseBodyResult(const ListDateSourceGenerationsResponseBodyResult &) = default ;
    ListDateSourceGenerationsResponseBodyResult(ListDateSourceGenerationsResponseBodyResult &&) = default ;
    ListDateSourceGenerationsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDateSourceGenerationsResponseBodyResult() = default ;
    ListDateSourceGenerationsResponseBodyResult& operator=(const ListDateSourceGenerationsResponseBodyResult &) = default ;
    ListDateSourceGenerationsResponseBodyResult& operator=(ListDateSourceGenerationsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildDeployId_ != nullptr
        && this->createTime_ != nullptr && this->dataDumpRoot_ != nullptr && this->generation_ != nullptr && this->partition_ != nullptr && this->status_ != nullptr
        && this->timestamp_ != nullptr; };
    // buildDeployId Field Functions 
    bool hasBuildDeployId() const { return this->buildDeployId_ != nullptr;};
    void deleteBuildDeployId() { this->buildDeployId_ = nullptr;};
    inline int32_t buildDeployId() const { DARABONBA_PTR_GET_DEFAULT(buildDeployId_, 0) };
    inline ListDateSourceGenerationsResponseBodyResult& setBuildDeployId(int32_t buildDeployId) { DARABONBA_PTR_SET_VALUE(buildDeployId_, buildDeployId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDateSourceGenerationsResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataDumpRoot Field Functions 
    bool hasDataDumpRoot() const { return this->dataDumpRoot_ != nullptr;};
    void deleteDataDumpRoot() { this->dataDumpRoot_ = nullptr;};
    inline string dataDumpRoot() const { DARABONBA_PTR_GET_DEFAULT(dataDumpRoot_, "") };
    inline ListDateSourceGenerationsResponseBodyResult& setDataDumpRoot(string dataDumpRoot) { DARABONBA_PTR_SET_VALUE(dataDumpRoot_, dataDumpRoot) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline int64_t generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
    inline ListDateSourceGenerationsResponseBodyResult& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline const map<string, int32_t> & partition() const { DARABONBA_PTR_GET_CONST(partition_, map<string, int32_t>) };
    inline map<string, int32_t> partition() { DARABONBA_PTR_GET(partition_, map<string, int32_t>) };
    inline ListDateSourceGenerationsResponseBodyResult& setPartition(const map<string, int32_t> & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
    inline ListDateSourceGenerationsResponseBodyResult& setPartition(map<string, int32_t> && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDateSourceGenerationsResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListDateSourceGenerationsResponseBodyResult& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The ID of the offline deployment.
    std::shared_ptr<int32_t> buildDeployId_ = nullptr;
    // The timestamp that was generated when the index building was started.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The path of the dumped index in the Apsara File Storage for HDFS file system.
    std::shared_ptr<string> dataDumpRoot_ = nullptr;
    // The ID of the full index version.
    std::shared_ptr<int64_t> generation_ = nullptr;
    // The shards of the index version. The value is a key-value pair in which the key indicates the index name and the value indicates the number of shards. The number of value shards.
    std::shared_ptr<map<string, int32_t>> partition_ = nullptr;
    // The status of the index version.
    std::shared_ptr<string> status_ = nullptr;
    // The start timestamp from which incremental data is retrieved.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
