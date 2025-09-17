// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDATADISKSDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDATADISKSDATADISK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Parts, parts_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Parts, parts_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->parts_ != nullptr && this->size_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts & parts() const { DARABONBA_PTR_GET_CONST(parts_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts parts() { DARABONBA_PTR_GET(parts_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& setParts(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& setParts(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The index number of the data disk.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The data disk partitions.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDataDisksDataDiskParts> parts_ = nullptr;
    // The size of the data disk. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
