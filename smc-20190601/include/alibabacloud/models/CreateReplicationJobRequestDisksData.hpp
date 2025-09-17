// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDISKSDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDISKSDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateReplicationJobRequestDisksDataPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequestDisksData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequestDisksData& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(LVM, LVM_);
      DARABONBA_PTR_TO_JSON(Part, part_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequestDisksData& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(LVM, LVM_);
      DARABONBA_PTR_FROM_JSON(Part, part_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateReplicationJobRequestDisksData() = default ;
    CreateReplicationJobRequestDisksData(const CreateReplicationJobRequestDisksData &) = default ;
    CreateReplicationJobRequestDisksData(CreateReplicationJobRequestDisksData &&) = default ;
    CreateReplicationJobRequestDisksData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequestDisksData() = default ;
    CreateReplicationJobRequestDisksData& operator=(const CreateReplicationJobRequestDisksData &) = default ;
    CreateReplicationJobRequestDisksData& operator=(CreateReplicationJobRequestDisksData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskId_ != nullptr
        && this->LVM_ != nullptr && this->part_ != nullptr && this->size_ != nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline CreateReplicationJobRequestDisksData& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // LVM Field Functions 
    bool hasLVM() const { return this->LVM_ != nullptr;};
    void deleteLVM() { this->LVM_ = nullptr;};
    inline bool LVM() const { DARABONBA_PTR_GET_DEFAULT(LVM_, false) };
    inline CreateReplicationJobRequestDisksData& setLVM(bool LVM) { DARABONBA_PTR_SET_VALUE(LVM_, LVM) };


    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::CreateReplicationJobRequestDisksDataPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::CreateReplicationJobRequestDisksDataPart>) };
    inline vector<Models::CreateReplicationJobRequestDisksDataPart> part() { DARABONBA_PTR_GET(part_, vector<Models::CreateReplicationJobRequestDisksDataPart>) };
    inline CreateReplicationJobRequestDisksData& setPart(const vector<Models::CreateReplicationJobRequestDisksDataPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline CreateReplicationJobRequestDisksData& setPart(vector<Models::CreateReplicationJobRequestDisksDataPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateReplicationJobRequestDisksData& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The ID of the data disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // Specifies whether the data disk uses LVM. Valid values:
    // 
    // *   true: Use LVM.
    // *   false: Not use LVM.
    std::shared_ptr<bool> LVM_ = nullptr;
    // The information about the data disk partition.
    std::shared_ptr<vector<Models::CreateReplicationJobRequestDisksDataPart>> part_ = nullptr;
    // The size of the data disk of the migration source. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
