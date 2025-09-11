// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEINSTANCETYPESINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEINSTANCETYPESINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType() = default ;
    DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType(const DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType &) = default ;
    DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType(DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType &&) = default ;
    DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType() = default ;
    DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType& operator=(const DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType &) = default ;
    DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType& operator=(DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->protocolType_ != nullptr
        && this->storageType_ != nullptr; };
    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeZonesResponseBodyZonesZoneInstanceTypesInstanceType& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The protocol type.
    // 
    // *   If the FileSystemType parameter is set to standard, the protocol type is nfs or smb.
    // *   If the FileSystemType parameter is set to extreme, the protocol type is nfs.
    // *   If the FileSystemType parameter is set to cpfs, the protocol type is cpfs.
    // 
    // > CPFS file systems are available only on the China site (aliyun.com).
    std::shared_ptr<string> protocolType_ = nullptr;
    // The storage type.
    // 
    // *   If the FileSystemType parameter is set to standard, the storage type is Performance or Capacity.
    // *   If the FileSystemType parameter is set to extreme, the storage type is standard or advance.
    // *   If the FileSystemType parameter is set to cpfs, the storage type is advance_100 (100 MB/s/TiB baseline) or advance_200 (200 MB/s/TiB baseline).
    // 
    // > CPFS file systems are available only on the China site (aliyun.com).
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
