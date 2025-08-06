// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESYSTEMDISKREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_REPLACESYSTEMDISKREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReplaceSystemDiskRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceSystemDiskRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceSystemDiskRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ReplaceSystemDiskRequestSystemDisk() = default ;
    ReplaceSystemDiskRequestSystemDisk(const ReplaceSystemDiskRequestSystemDisk &) = default ;
    ReplaceSystemDiskRequestSystemDisk(ReplaceSystemDiskRequestSystemDisk &&) = default ;
    ReplaceSystemDiskRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceSystemDiskRequestSystemDisk() = default ;
    ReplaceSystemDiskRequestSystemDisk& operator=(const ReplaceSystemDiskRequestSystemDisk &) = default ;
    ReplaceSystemDiskRequestSystemDisk& operator=(ReplaceSystemDiskRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ReplaceSystemDiskRequestSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The capacity of the new system disk. Unit: GiB. Valid values:
    // 
    // *   Basic disk: Max{20, Size of the image specified by ImageId} to 500.
    // 
    // *   Enterprise SSD (ESSD):
    // 
    //     *   PL0 ESSD: Max{1, Size of the image specified by ImageId} to 2048.
    //     *   PL1 ESSD: Max{20, Size of the image specified by ImageId} to 2048.
    //     *   PL2 ESSD: Max{461, Size of the image specified by ImageId} to 2048.
    //     *   PL3 ESSD: Max{1261, Size of the image specified by ImageId} to 2048.
    // 
    // *   ESSD AutoPL disk: Max{1, Size of the image specified by ImageId} to 2048.
    // 
    // *   Other disk categories: Max{20, Size of the image specified by ImageId} to 2048.
    // 
    // Default value: Max{40, Size of the image specified by ImageId}.
    // 
    // >  If the capacity of the new system disk exceeds `Max{20, Capacity of the original system disk}`, you are charged for the excess capacity.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
