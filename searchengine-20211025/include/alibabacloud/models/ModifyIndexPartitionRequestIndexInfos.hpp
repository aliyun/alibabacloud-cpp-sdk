// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINDEXPARTITIONREQUESTINDEXINFOS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINDEXPARTITIONREQUESTINDEXINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyIndexPartitionRequestIndexInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIndexPartitionRequestIndexInfos& obj) { 
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(parallelNum, parallelNum_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIndexPartitionRequestIndexInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(parallelNum, parallelNum_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
    };
    ModifyIndexPartitionRequestIndexInfos() = default ;
    ModifyIndexPartitionRequestIndexInfos(const ModifyIndexPartitionRequestIndexInfos &) = default ;
    ModifyIndexPartitionRequestIndexInfos(ModifyIndexPartitionRequestIndexInfos &&) = default ;
    ModifyIndexPartitionRequestIndexInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIndexPartitionRequestIndexInfos() = default ;
    ModifyIndexPartitionRequestIndexInfos& operator=(const ModifyIndexPartitionRequestIndexInfos &) = default ;
    ModifyIndexPartitionRequestIndexInfos& operator=(ModifyIndexPartitionRequestIndexInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexName_ != nullptr
        && this->parallelNum_ != nullptr && this->partitionCount_ != nullptr; };
    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline ModifyIndexPartitionRequestIndexInfos& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // parallelNum Field Functions 
    bool hasParallelNum() const { return this->parallelNum_ != nullptr;};
    void deleteParallelNum() { this->parallelNum_ = nullptr;};
    inline int32_t parallelNum() const { DARABONBA_PTR_GET_DEFAULT(parallelNum_, 0) };
    inline ModifyIndexPartitionRequestIndexInfos& setParallelNum(int32_t parallelNum) { DARABONBA_PTR_SET_VALUE(parallelNum_, parallelNum) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int32_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
    inline ModifyIndexPartitionRequestIndexInfos& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


  protected:
    // The index name.
    std::shared_ptr<string> indexName_ = nullptr;
    // The concurrency. Default value: 1.
    std::shared_ptr<int32_t> parallelNum_ = nullptr;
    // The number of shards.
    std::shared_ptr<int32_t> partitionCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
