// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLEDISKTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLEDISKTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType& obj) { 
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType& operator=(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType& operator=(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskName_ != nullptr
        && this->diskType_ != nullptr; };
    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableDiskType& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


  protected:
    std::shared_ptr<string> diskName_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
