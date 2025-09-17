// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateReplicationJobRequestDataDiskPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Part, part_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Part, part_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateReplicationJobRequestDataDisk() = default ;
    CreateReplicationJobRequestDataDisk(const CreateReplicationJobRequestDataDisk &) = default ;
    CreateReplicationJobRequestDataDisk(CreateReplicationJobRequestDataDisk &&) = default ;
    CreateReplicationJobRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequestDataDisk() = default ;
    CreateReplicationJobRequestDataDisk& operator=(const CreateReplicationJobRequestDataDisk &) = default ;
    CreateReplicationJobRequestDataDisk& operator=(CreateReplicationJobRequestDataDisk &&) = default ;
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
    inline CreateReplicationJobRequestDataDisk& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::CreateReplicationJobRequestDataDiskPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::CreateReplicationJobRequestDataDiskPart>) };
    inline vector<Models::CreateReplicationJobRequestDataDiskPart> part() { DARABONBA_PTR_GET(part_, vector<Models::CreateReplicationJobRequestDataDiskPart>) };
    inline CreateReplicationJobRequestDataDisk& setPart(const vector<Models::CreateReplicationJobRequestDataDiskPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline CreateReplicationJobRequestDataDisk& setPart(vector<Models::CreateReplicationJobRequestDataDiskPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateReplicationJobRequestDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The index of data disk N on the destination ECS instance. Data disks on a destination ECS instance are arranged in a sequential order that starts from 1. Valid values: 1 to 16.
    // 
    // >  To create a destination data disk for a source server, make sure that the source server has data disks.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The data disk partitions.
    std::shared_ptr<vector<Models::CreateReplicationJobRequestDataDiskPart>> part_ = nullptr;
    // The size of the data disk on the destination ECS instance. Unit: GiB. Valid values: 20 to 32768.
    // 
    // >  The size of a destination data disk must be larger than the size of data in the source data disk. For example, if the size of the source data disk is 500 GiB and the used space is 100 GiB, you must set this parameter to a value greater than 100.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
