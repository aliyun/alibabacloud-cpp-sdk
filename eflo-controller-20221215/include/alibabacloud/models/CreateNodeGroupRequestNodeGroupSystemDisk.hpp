// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEGROUPREQUESTNODEGROUPSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEGROUPREQUESTNODEGROUPSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateNodeGroupRequestNodeGroupSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeGroupRequestNodeGroupSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeGroupRequestNodeGroupSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateNodeGroupRequestNodeGroupSystemDisk() = default ;
    CreateNodeGroupRequestNodeGroupSystemDisk(const CreateNodeGroupRequestNodeGroupSystemDisk &) = default ;
    CreateNodeGroupRequestNodeGroupSystemDisk(CreateNodeGroupRequestNodeGroupSystemDisk &&) = default ;
    CreateNodeGroupRequestNodeGroupSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeGroupRequestNodeGroupSystemDisk() = default ;
    CreateNodeGroupRequestNodeGroupSystemDisk& operator=(const CreateNodeGroupRequestNodeGroupSystemDisk &) = default ;
    CreateNodeGroupRequestNodeGroupSystemDisk& operator=(CreateNodeGroupRequestNodeGroupSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->performanceLevel_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateNodeGroupRequestNodeGroupSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateNodeGroupRequestNodeGroupSystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateNodeGroupRequestNodeGroupSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // Disk type. Value range:
    // 
    //  - cloud_essd: ESSD cloud disk.
    std::shared_ptr<string> category_ = nullptr;
    // When creating an ESSD cloud disk as a system disk, set the performance level of the cloud disk. Value range:
    // - PL0: Maximum random read/write IOPS per disk 10,000.
    // - PL1: Maximum random read/write IOPS per disk 50,000.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // Unit: GB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
