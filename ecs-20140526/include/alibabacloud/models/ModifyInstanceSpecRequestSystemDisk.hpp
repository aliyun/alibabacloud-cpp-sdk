// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceSpecRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    ModifyInstanceSpecRequestSystemDisk() = default ;
    ModifyInstanceSpecRequestSystemDisk(const ModifyInstanceSpecRequestSystemDisk &) = default ;
    ModifyInstanceSpecRequestSystemDisk(ModifyInstanceSpecRequestSystemDisk &&) = default ;
    ModifyInstanceSpecRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecRequestSystemDisk() = default ;
    ModifyInstanceSpecRequestSystemDisk& operator=(const ModifyInstanceSpecRequestSystemDisk &) = default ;
    ModifyInstanceSpecRequestSystemDisk& operator=(ModifyInstanceSpecRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyInstanceSpecRequestSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


  protected:
    // The new category of the system disk. Valid values:
    // 
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // 
    // >  This parameter takes effect only when you upgrade a non-I/O optimized instance of [a retired instance type](https://help.aliyun.com/document_detail/55263.html) to an I/O optimized instance of [an instance type available for purchase](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
