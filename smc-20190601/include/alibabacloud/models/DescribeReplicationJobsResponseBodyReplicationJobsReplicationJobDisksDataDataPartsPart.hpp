// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSDATADATAPARTSPART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSDATADATAPARTSPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& obj) { 
      DARABONBA_PTR_TO_JSON(Block, block_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& obj) { 
      DARABONBA_PTR_FROM_JSON(Block, block_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->block_ != nullptr
        && this->path_ != nullptr && this->sizeBytes_ != nullptr; };
    // block Field Functions 
    bool hasBlock() const { return this->block_ != nullptr;};
    void deleteBlock() { this->block_ = nullptr;};
    inline bool block() const { DARABONBA_PTR_GET_DEFAULT(block_, false) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& setBlock(bool block) { DARABONBA_PTR_SET_VALUE(block_, block) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t sizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksDataDataPartsPart& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // Whether block replication is enabled for the data disk partition. Valid values:
    // 
    // *   true: Block replication is enabled for the data disk partition.
    // *   false: Block replication is disabled for the data disk partition.
    std::shared_ptr<bool> block_ = nullptr;
    // The path of the data disk partition.
    std::shared_ptr<string> path_ = nullptr;
    // The size of the data disk partition. Unit: bytes.
    std::shared_ptr<int64_t> sizeBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
