// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDISKSSYSTEM_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPLICATIONJOBREQUESTDISKSSYSTEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateReplicationJobRequestDisksSystemPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateReplicationJobRequestDisksSystem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReplicationJobRequestDisksSystem& obj) { 
      DARABONBA_PTR_TO_JSON(LVM, LVM_);
      DARABONBA_PTR_TO_JSON(Part, part_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReplicationJobRequestDisksSystem& obj) { 
      DARABONBA_PTR_FROM_JSON(LVM, LVM_);
      DARABONBA_PTR_FROM_JSON(Part, part_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateReplicationJobRequestDisksSystem() = default ;
    CreateReplicationJobRequestDisksSystem(const CreateReplicationJobRequestDisksSystem &) = default ;
    CreateReplicationJobRequestDisksSystem(CreateReplicationJobRequestDisksSystem &&) = default ;
    CreateReplicationJobRequestDisksSystem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReplicationJobRequestDisksSystem() = default ;
    CreateReplicationJobRequestDisksSystem& operator=(const CreateReplicationJobRequestDisksSystem &) = default ;
    CreateReplicationJobRequestDisksSystem& operator=(CreateReplicationJobRequestDisksSystem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->LVM_ != nullptr
        && this->part_ != nullptr && this->size_ != nullptr; };
    // LVM Field Functions 
    bool hasLVM() const { return this->LVM_ != nullptr;};
    void deleteLVM() { this->LVM_ = nullptr;};
    inline bool LVM() const { DARABONBA_PTR_GET_DEFAULT(LVM_, false) };
    inline CreateReplicationJobRequestDisksSystem& setLVM(bool LVM) { DARABONBA_PTR_SET_VALUE(LVM_, LVM) };


    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::CreateReplicationJobRequestDisksSystemPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::CreateReplicationJobRequestDisksSystemPart>) };
    inline vector<Models::CreateReplicationJobRequestDisksSystemPart> part() { DARABONBA_PTR_GET(part_, vector<Models::CreateReplicationJobRequestDisksSystemPart>) };
    inline CreateReplicationJobRequestDisksSystem& setPart(const vector<Models::CreateReplicationJobRequestDisksSystemPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline CreateReplicationJobRequestDisksSystem& setPart(vector<Models::CreateReplicationJobRequestDisksSystemPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateReplicationJobRequestDisksSystem& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // Specifies whether to use LVM. Valid values:
    // 
    // *   true: Use LVM.
    // *   false: Not use LVM.
    // 
    // LVM is not supported:
    // 
    // *   If your source server runs Windows, LVM is not supported.
    // *   The system disk does not have a boot partition, and LVM is not supported.
    // 
    // After LVM is enabled, this feature does not take effect in the following scenarios:
    // 
    // *   LVM2 is not supported on your source server and the software package is not installed.
    // *   Your source server runs Debian with a kernel version of 3.x or earlier and XFS file systems are mounted.
    std::shared_ptr<bool> LVM_ = nullptr;
    // The information about the system disk partition.
    std::shared_ptr<vector<Models::CreateReplicationJobRequestDisksSystemPart>> part_ = nullptr;
    // The size of the source system disk. Unit: GiB. Valid values: 20 to 32768.
    // 
    // >  The parameter value must be greater than the actual used space of the data disk on the source server. For example, if the size of the source disk is 500 GiB but the actual used space is 100 GiB, you must set this parameter to a value greater than 100 GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
