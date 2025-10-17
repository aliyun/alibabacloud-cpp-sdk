// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPrepayInstanceSpecRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayInstanceSpecRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayInstanceSpecRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    ModifyPrepayInstanceSpecRequestSystemDisk() = default ;
    ModifyPrepayInstanceSpecRequestSystemDisk(const ModifyPrepayInstanceSpecRequestSystemDisk &) = default ;
    ModifyPrepayInstanceSpecRequestSystemDisk(ModifyPrepayInstanceSpecRequestSystemDisk &&) = default ;
    ModifyPrepayInstanceSpecRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayInstanceSpecRequestSystemDisk() = default ;
    ModifyPrepayInstanceSpecRequestSystemDisk& operator=(const ModifyPrepayInstanceSpecRequestSystemDisk &) = default ;
    ModifyPrepayInstanceSpecRequestSystemDisk& operator=(ModifyPrepayInstanceSpecRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyPrepayInstanceSpecRequestSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


  protected:
    // The new category of the system disk. Valid values:
    // 
    // *   cloud_efficiency: utra disk
    // *   cloud_ssd: standard SSD
    // 
    // >  This parameter takes effect on an instance only when you change from a [retired instance type](https://help.aliyun.com/document_detail/55263.html) to an instance type in an [instance family available for purchase](https://help.aliyun.com/document_detail/25378.html) and upgrade the instance from a non-I/O optimized instance type to an I/O optimized instance type.
    std::shared_ptr<string> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
