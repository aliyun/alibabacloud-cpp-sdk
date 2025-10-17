// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUESTDISK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUESTDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceSpecRequestDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecRequestDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecRequestDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
    };
    ModifyInstanceSpecRequestDisk() = default ;
    ModifyInstanceSpecRequestDisk(const ModifyInstanceSpecRequestDisk &) = default ;
    ModifyInstanceSpecRequestDisk(ModifyInstanceSpecRequestDisk &&) = default ;
    ModifyInstanceSpecRequestDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecRequestDisk() = default ;
    ModifyInstanceSpecRequestDisk& operator=(const ModifyInstanceSpecRequestDisk &) = default ;
    ModifyInstanceSpecRequestDisk& operator=(ModifyInstanceSpecRequestDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->diskId_ == nullptr && return this->performanceLevel_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyInstanceSpecRequestDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ModifyInstanceSpecRequestDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ModifyInstanceSpecRequestDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> category_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> diskId_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> performanceLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
