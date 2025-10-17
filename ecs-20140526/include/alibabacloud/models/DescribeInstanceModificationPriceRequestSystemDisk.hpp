// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICEREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICEREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
    };
    DescribeInstanceModificationPriceRequestSystemDisk() = default ;
    DescribeInstanceModificationPriceRequestSystemDisk(const DescribeInstanceModificationPriceRequestSystemDisk &) = default ;
    DescribeInstanceModificationPriceRequestSystemDisk(DescribeInstanceModificationPriceRequestSystemDisk &&) = default ;
    DescribeInstanceModificationPriceRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceRequestSystemDisk() = default ;
    DescribeInstanceModificationPriceRequestSystemDisk& operator=(const DescribeInstanceModificationPriceRequestSystemDisk &) = default ;
    DescribeInstanceModificationPriceRequestSystemDisk& operator=(DescribeInstanceModificationPriceRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeInstanceModificationPriceRequestSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


  protected:
    // The category of the system disk. You must specify this parameter only when you upgrade a non-I/O optimized instance of a retired instance type to an I/O optimized instance of an available instance type. For more information about instance types, see [Instance families](https://help.aliyun.com/document_detail/25378.html) and [Retired instance types](https://help.aliyun.com/document_detail/55263.html).
    // 
    // Valid values:
    // 
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // 
    // This parameter is empty by default.
    std::shared_ptr<string> category_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
