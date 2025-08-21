// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLESTORAGETYPEAVAILABLESPECIALSTORAGETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLESTORAGETYPEAVAILABLESPECIALSTORAGETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& obj) { 
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageName, storageName_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageName, storageName_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& operator=(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& operator=(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageType_ != nullptr
        && this->storageName_ != nullptr && this->ensRegionId_ != nullptr; };
    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageName Field Functions 
    bool hasStorageName() const { return this->storageName_ != nullptr;};
    void deleteStorageName() { this->storageName_ = nullptr;};
    inline string storageName() const { DARABONBA_PTR_GET_DEFAULT(storageName_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& setStorageName(string storageName) { DARABONBA_PTR_SET_VALUE(storageName_, storageName) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> storageName_ = nullptr;
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
