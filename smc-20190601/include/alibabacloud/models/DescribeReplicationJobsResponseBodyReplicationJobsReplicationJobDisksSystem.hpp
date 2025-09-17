// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSSYSTEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICATIONJOBSRESPONSEBODYREPLICATIONJOBSREPLICATIONJOBDISKSSYSTEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(LVM, LVM_);
      DARABONBA_PTR_TO_JSON(Parts, parts_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(LVM, LVM_);
      DARABONBA_PTR_FROM_JSON(Parts, parts_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem &&) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem() = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& operator=(const DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem &) = default ;
    DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& operator=(DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskId_ != nullptr
        && this->LVM_ != nullptr && this->parts_ != nullptr && this->size_ != nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // LVM Field Functions 
    bool hasLVM() const { return this->LVM_ != nullptr;};
    void deleteLVM() { this->LVM_ = nullptr;};
    inline bool LVM() const { DARABONBA_PTR_GET_DEFAULT(LVM_, false) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& setLVM(bool LVM) { DARABONBA_PTR_SET_VALUE(LVM_, LVM) };


    // parts Field Functions 
    bool hasParts() const { return this->parts_ != nullptr;};
    void deleteParts() { this->parts_ = nullptr;};
    inline const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts & parts() const { DARABONBA_PTR_GET_CONST(parts_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts) };
    inline Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts parts() { DARABONBA_PTR_GET(parts_, Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& setParts(const Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts & parts) { DARABONBA_PTR_SET_VALUE(parts_, parts) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& setParts(Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts && parts) { DARABONBA_PTR_SET_RVALUE(parts_, parts) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystem& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The ID of the system disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // Specifies whether to use LVM. Valid values:
    // 
    // *   true: Use LVM.
    // *   false: Not use LVM.
    std::shared_ptr<bool> LVM_ = nullptr;
    // The information about the system disk partition.
    std::shared_ptr<Models::DescribeReplicationJobsResponseBodyReplicationJobsReplicationJobDisksSystemParts> parts_ = nullptr;
    // The size of the source system disk. Unit: GiB. Valid values: 20 to 32768.
    // 
    // >  The parameter value must be greater than the actual used space of the data disk on the source server. For example, if the size of the source disk is 500 GiB but the actual used space is 100 GiB, you must set this parameter to a value greater than 100 GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
