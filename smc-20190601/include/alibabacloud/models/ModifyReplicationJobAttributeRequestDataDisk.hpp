// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREPLICATIONJOBATTRIBUTEREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREPLICATIONJOBATTRIBUTEREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyReplicationJobAttributeRequestDataDiskPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class ModifyReplicationJobAttributeRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReplicationJobAttributeRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Part, part_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReplicationJobAttributeRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Part, part_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ModifyReplicationJobAttributeRequestDataDisk() = default ;
    ModifyReplicationJobAttributeRequestDataDisk(const ModifyReplicationJobAttributeRequestDataDisk &) = default ;
    ModifyReplicationJobAttributeRequestDataDisk(ModifyReplicationJobAttributeRequestDataDisk &&) = default ;
    ModifyReplicationJobAttributeRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReplicationJobAttributeRequestDataDisk() = default ;
    ModifyReplicationJobAttributeRequestDataDisk& operator=(const ModifyReplicationJobAttributeRequestDataDisk &) = default ;
    ModifyReplicationJobAttributeRequestDataDisk& operator=(ModifyReplicationJobAttributeRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->part_ != nullptr && this->size_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ModifyReplicationJobAttributeRequestDataDisk& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart>) };
    inline vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart> part() { DARABONBA_PTR_GET(part_, vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart>) };
    inline ModifyReplicationJobAttributeRequestDataDisk& setPart(const vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline ModifyReplicationJobAttributeRequestDataDisk& setPart(vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ModifyReplicationJobAttributeRequestDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The index of data disk N on the destination ECS instance. Valid values of N: 1 to 16.
    // 
    // Data disks on a destination ECS instance are arranged in a sequential order that starts from 1.
    // 
    // >  You can create a destination data disk only for a source server that has data disks.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The information about partitions.
    std::shared_ptr<vector<Models::ModifyReplicationJobAttributeRequestDataDiskPart>> part_ = nullptr;
    // The size of the data disk on the destination ECS instance. Unit: GiB. Valid values: 20 to 32768.
    // 
    // >  The size of a destination data disk must be greater than the size of data in the source data disk. For example, if the source data disk has 500 GiB of storage space and 100 GiB of data, you must set this parameter to a value greater than 100.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
