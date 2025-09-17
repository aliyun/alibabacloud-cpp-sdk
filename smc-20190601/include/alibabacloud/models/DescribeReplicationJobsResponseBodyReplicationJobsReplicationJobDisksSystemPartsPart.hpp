// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSSYSTEMPARTSPART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSSYSTEMPARTSPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& obj) { 
      DARABONBA_PTR_TO_JSON(Block, block_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& obj) { 
      DARABONBA_PTR_FROM_JSON(Block, block_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart &&) = default ;
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
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& setBlock(bool block) { DARABONBA_PTR_SET_VALUE(block_, block) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t sizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemPartsPart& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // Specifies whether block replication is enabled for the system disk partition. Valid values:
    // 
    // *   true: Block replication is enabled for the system disk partition.
    // *   false: Block replication is disabled for the system disk partition.
    std::shared_ptr<bool> block_ = nullptr;
    // The path of the system disk partition.
    std::shared_ptr<string> path_ = nullptr;
    // The size of the system disk partition. Unit: bytes.
    std::shared_ptr<int64_t> sizeBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
