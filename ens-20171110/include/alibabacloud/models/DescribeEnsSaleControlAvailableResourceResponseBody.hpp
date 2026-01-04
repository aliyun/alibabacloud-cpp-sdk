// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SaleControlAvailableResource, saleControlAvailableResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SaleControlAvailableResource, saleControlAvailableResource_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBody() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody(const DescribeEnsSaleControlAvailableResourceResponseBody &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody(DescribeEnsSaleControlAvailableResourceResponseBody &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBody() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody& operator=(const DescribeEnsSaleControlAvailableResourceResponseBody &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBody& operator=(DescribeEnsSaleControlAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaleControlAvailableResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaleControlAvailableResource& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableDiskType, availableDiskType_);
        DARABONBA_PTR_TO_JSON(AvailableRegion, availableRegion_);
        DARABONBA_PTR_TO_JSON(AvailableSpec, availableSpec_);
        DARABONBA_PTR_TO_JSON(AvailableStorageType, availableStorageType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      };
      friend void from_json(const Darabonba::Json& j, SaleControlAvailableResource& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableDiskType, availableDiskType_);
        DARABONBA_PTR_FROM_JSON(AvailableRegion, availableRegion_);
        DARABONBA_PTR_FROM_JSON(AvailableSpec, availableSpec_);
        DARABONBA_PTR_FROM_JSON(AvailableStorageType, availableStorageType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      };
      SaleControlAvailableResource() = default ;
      SaleControlAvailableResource(const SaleControlAvailableResource &) = default ;
      SaleControlAvailableResource(SaleControlAvailableResource &&) = default ;
      SaleControlAvailableResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaleControlAvailableResource() = default ;
      SaleControlAvailableResource& operator=(const SaleControlAvailableResource &) = default ;
      SaleControlAvailableResource& operator=(SaleControlAvailableResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AvailableStorageType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableStorageType& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableDefaultStorageType, availableDefaultStorageType_);
          DARABONBA_PTR_TO_JSON(AvailableSpecialStorageType, availableSpecialStorageType_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableStorageType& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableDefaultStorageType, availableDefaultStorageType_);
          DARABONBA_PTR_FROM_JSON(AvailableSpecialStorageType, availableSpecialStorageType_);
        };
        AvailableStorageType() = default ;
        AvailableStorageType(const AvailableStorageType &) = default ;
        AvailableStorageType(AvailableStorageType &&) = default ;
        AvailableStorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableStorageType() = default ;
        AvailableStorageType& operator=(const AvailableStorageType &) = default ;
        AvailableStorageType& operator=(AvailableStorageType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AvailableDefaultStorageType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableDefaultStorageType& obj) { 
            DARABONBA_PTR_TO_JSON(StorageName, storageName_);
            DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableDefaultStorageType& obj) { 
            DARABONBA_PTR_FROM_JSON(StorageName, storageName_);
            DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          };
          AvailableDefaultStorageType() = default ;
          AvailableDefaultStorageType(const AvailableDefaultStorageType &) = default ;
          AvailableDefaultStorageType(AvailableDefaultStorageType &&) = default ;
          AvailableDefaultStorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableDefaultStorageType() = default ;
          AvailableDefaultStorageType& operator=(const AvailableDefaultStorageType &) = default ;
          AvailableDefaultStorageType& operator=(AvailableDefaultStorageType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->storageName_ == nullptr
        && this->storageType_ == nullptr; };
          // storageName Field Functions 
          bool hasStorageName() const { return this->storageName_ != nullptr;};
          void deleteStorageName() { this->storageName_ = nullptr;};
          inline string getStorageName() const { DARABONBA_PTR_GET_DEFAULT(storageName_, "") };
          inline AvailableDefaultStorageType& setStorageName(string storageName) { DARABONBA_PTR_SET_VALUE(storageName_, storageName) };


          // storageType Field Functions 
          bool hasStorageType() const { return this->storageType_ != nullptr;};
          void deleteStorageType() { this->storageType_ = nullptr;};
          inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
          inline AvailableDefaultStorageType& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        protected:
          shared_ptr<string> storageName_ {};
          shared_ptr<string> storageType_ {};
        };

        virtual bool empty() const override { return this->availableDefaultStorageType_ == nullptr
        && this->availableSpecialStorageType_ == nullptr; };
        // availableDefaultStorageType Field Functions 
        bool hasAvailableDefaultStorageType() const { return this->availableDefaultStorageType_ != nullptr;};
        void deleteAvailableDefaultStorageType() { this->availableDefaultStorageType_ = nullptr;};
        inline const vector<AvailableStorageType::AvailableDefaultStorageType> & getAvailableDefaultStorageType() const { DARABONBA_PTR_GET_CONST(availableDefaultStorageType_, vector<AvailableStorageType::AvailableDefaultStorageType>) };
        inline vector<AvailableStorageType::AvailableDefaultStorageType> getAvailableDefaultStorageType() { DARABONBA_PTR_GET(availableDefaultStorageType_, vector<AvailableStorageType::AvailableDefaultStorageType>) };
        inline AvailableStorageType& setAvailableDefaultStorageType(const vector<AvailableStorageType::AvailableDefaultStorageType> & availableDefaultStorageType) { DARABONBA_PTR_SET_VALUE(availableDefaultStorageType_, availableDefaultStorageType) };
        inline AvailableStorageType& setAvailableDefaultStorageType(vector<AvailableStorageType::AvailableDefaultStorageType> && availableDefaultStorageType) { DARABONBA_PTR_SET_RVALUE(availableDefaultStorageType_, availableDefaultStorageType) };


        // availableSpecialStorageType Field Functions 
        bool hasAvailableSpecialStorageType() const { return this->availableSpecialStorageType_ != nullptr;};
        void deleteAvailableSpecialStorageType() { this->availableSpecialStorageType_ = nullptr;};
        inline const vector<vector<AvailableStorageType::AvailableSpecialStorageType>> & getAvailableSpecialStorageType() const { DARABONBA_PTR_GET_CONST(availableSpecialStorageType_, vector<vector<AvailableStorageType::AvailableSpecialStorageType>>) };
        inline vector<vector<AvailableStorageType::AvailableSpecialStorageType>> getAvailableSpecialStorageType() { DARABONBA_PTR_GET(availableSpecialStorageType_, vector<vector<AvailableStorageType::AvailableSpecialStorageType>>) };
        inline AvailableStorageType& setAvailableSpecialStorageType(const vector<vector<AvailableStorageType::AvailableSpecialStorageType>> & availableSpecialStorageType) { DARABONBA_PTR_SET_VALUE(availableSpecialStorageType_, availableSpecialStorageType) };
        inline AvailableStorageType& setAvailableSpecialStorageType(vector<vector<AvailableStorageType::AvailableSpecialStorageType>> && availableSpecialStorageType) { DARABONBA_PTR_SET_RVALUE(availableSpecialStorageType_, availableSpecialStorageType) };


      protected:
        shared_ptr<vector<AvailableStorageType::AvailableDefaultStorageType>> availableDefaultStorageType_ {};
        shared_ptr<vector<vector<AvailableStorageType::AvailableSpecialStorageType>>> availableSpecialStorageType_ {};
      };

      class AvailableSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(SpecName, specName_);
          DARABONBA_PTR_TO_JSON(SpecValue, specValue_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(SpecName, specName_);
          DARABONBA_PTR_FROM_JSON(SpecValue, specValue_);
        };
        AvailableSpec() = default ;
        AvailableSpec(const AvailableSpec &) = default ;
        AvailableSpec(AvailableSpec &&) = default ;
        AvailableSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableSpec() = default ;
        AvailableSpec& operator=(const AvailableSpec &) = default ;
        AvailableSpec& operator=(AvailableSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cores_ == nullptr
        && this->memory_ == nullptr && this->specName_ == nullptr && this->specValue_ == nullptr; };
        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline string getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, "") };
        inline AvailableSpec& setCores(string cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline string getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
        inline AvailableSpec& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // specName Field Functions 
        bool hasSpecName() const { return this->specName_ != nullptr;};
        void deleteSpecName() { this->specName_ = nullptr;};
        inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
        inline AvailableSpec& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


        // specValue Field Functions 
        bool hasSpecValue() const { return this->specValue_ != nullptr;};
        void deleteSpecValue() { this->specValue_ = nullptr;};
        inline string getSpecValue() const { DARABONBA_PTR_GET_DEFAULT(specValue_, "") };
        inline AvailableSpec& setSpecValue(string specValue) { DARABONBA_PTR_SET_VALUE(specValue_, specValue) };


      protected:
        shared_ptr<string> cores_ {};
        shared_ptr<string> memory_ {};
        shared_ptr<string> specName_ {};
        shared_ptr<string> specValue_ {};
      };

      class AvailableRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableRegion& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(EnsRegionName, ensRegionName_);
          DARABONBA_PTR_TO_JSON(Isp, isp_);
          DARABONBA_PTR_TO_JSON(Province, province_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(EnsRegionName, ensRegionName_);
          DARABONBA_PTR_FROM_JSON(Isp, isp_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
        };
        AvailableRegion() = default ;
        AvailableRegion(const AvailableRegion &) = default ;
        AvailableRegion(AvailableRegion &&) = default ;
        AvailableRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableRegion() = default ;
        AvailableRegion& operator=(const AvailableRegion &) = default ;
        AvailableRegion& operator=(AvailableRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->ensRegionId_ == nullptr && this->ensRegionName_ == nullptr && this->isp_ == nullptr
        && this->province_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline AvailableRegion& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline AvailableRegion& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline AvailableRegion& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline AvailableRegion& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // ensRegionName Field Functions 
        bool hasEnsRegionName() const { return this->ensRegionName_ != nullptr;};
        void deleteEnsRegionName() { this->ensRegionName_ = nullptr;};
        inline string getEnsRegionName() const { DARABONBA_PTR_GET_DEFAULT(ensRegionName_, "") };
        inline AvailableRegion& setEnsRegionName(string ensRegionName) { DARABONBA_PTR_SET_VALUE(ensRegionName_, ensRegionName) };


        // isp Field Functions 
        bool hasIsp() const { return this->isp_ != nullptr;};
        void deleteIsp() { this->isp_ = nullptr;};
        inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
        inline AvailableRegion& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline AvailableRegion& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      protected:
        shared_ptr<string> area_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> country_ {};
        shared_ptr<string> ensRegionId_ {};
        shared_ptr<string> ensRegionName_ {};
        shared_ptr<string> isp_ {};
        shared_ptr<string> province_ {};
      };

      class AvailableDiskType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableDiskType& obj) { 
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableDiskType& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        };
        AvailableDiskType() = default ;
        AvailableDiskType(const AvailableDiskType &) = default ;
        AvailableDiskType(AvailableDiskType &&) = default ;
        AvailableDiskType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableDiskType() = default ;
        AvailableDiskType& operator=(const AvailableDiskType &) = default ;
        AvailableDiskType& operator=(AvailableDiskType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskName_ == nullptr
        && this->diskType_ == nullptr; };
        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline AvailableDiskType& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline AvailableDiskType& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      protected:
        shared_ptr<string> diskName_ {};
        shared_ptr<string> diskType_ {};
      };

      virtual bool empty() const override { return this->availableDiskType_ == nullptr
        && this->availableRegion_ == nullptr && this->availableSpec_ == nullptr && this->availableStorageType_ == nullptr && this->commodityCode_ == nullptr && this->orderType_ == nullptr; };
      // availableDiskType Field Functions 
      bool hasAvailableDiskType() const { return this->availableDiskType_ != nullptr;};
      void deleteAvailableDiskType() { this->availableDiskType_ = nullptr;};
      inline const vector<SaleControlAvailableResource::AvailableDiskType> & getAvailableDiskType() const { DARABONBA_PTR_GET_CONST(availableDiskType_, vector<SaleControlAvailableResource::AvailableDiskType>) };
      inline vector<SaleControlAvailableResource::AvailableDiskType> getAvailableDiskType() { DARABONBA_PTR_GET(availableDiskType_, vector<SaleControlAvailableResource::AvailableDiskType>) };
      inline SaleControlAvailableResource& setAvailableDiskType(const vector<SaleControlAvailableResource::AvailableDiskType> & availableDiskType) { DARABONBA_PTR_SET_VALUE(availableDiskType_, availableDiskType) };
      inline SaleControlAvailableResource& setAvailableDiskType(vector<SaleControlAvailableResource::AvailableDiskType> && availableDiskType) { DARABONBA_PTR_SET_RVALUE(availableDiskType_, availableDiskType) };


      // availableRegion Field Functions 
      bool hasAvailableRegion() const { return this->availableRegion_ != nullptr;};
      void deleteAvailableRegion() { this->availableRegion_ = nullptr;};
      inline const vector<SaleControlAvailableResource::AvailableRegion> & getAvailableRegion() const { DARABONBA_PTR_GET_CONST(availableRegion_, vector<SaleControlAvailableResource::AvailableRegion>) };
      inline vector<SaleControlAvailableResource::AvailableRegion> getAvailableRegion() { DARABONBA_PTR_GET(availableRegion_, vector<SaleControlAvailableResource::AvailableRegion>) };
      inline SaleControlAvailableResource& setAvailableRegion(const vector<SaleControlAvailableResource::AvailableRegion> & availableRegion) { DARABONBA_PTR_SET_VALUE(availableRegion_, availableRegion) };
      inline SaleControlAvailableResource& setAvailableRegion(vector<SaleControlAvailableResource::AvailableRegion> && availableRegion) { DARABONBA_PTR_SET_RVALUE(availableRegion_, availableRegion) };


      // availableSpec Field Functions 
      bool hasAvailableSpec() const { return this->availableSpec_ != nullptr;};
      void deleteAvailableSpec() { this->availableSpec_ = nullptr;};
      inline const vector<SaleControlAvailableResource::AvailableSpec> & getAvailableSpec() const { DARABONBA_PTR_GET_CONST(availableSpec_, vector<SaleControlAvailableResource::AvailableSpec>) };
      inline vector<SaleControlAvailableResource::AvailableSpec> getAvailableSpec() { DARABONBA_PTR_GET(availableSpec_, vector<SaleControlAvailableResource::AvailableSpec>) };
      inline SaleControlAvailableResource& setAvailableSpec(const vector<SaleControlAvailableResource::AvailableSpec> & availableSpec) { DARABONBA_PTR_SET_VALUE(availableSpec_, availableSpec) };
      inline SaleControlAvailableResource& setAvailableSpec(vector<SaleControlAvailableResource::AvailableSpec> && availableSpec) { DARABONBA_PTR_SET_RVALUE(availableSpec_, availableSpec) };


      // availableStorageType Field Functions 
      bool hasAvailableStorageType() const { return this->availableStorageType_ != nullptr;};
      void deleteAvailableStorageType() { this->availableStorageType_ = nullptr;};
      inline const SaleControlAvailableResource::AvailableStorageType & getAvailableStorageType() const { DARABONBA_PTR_GET_CONST(availableStorageType_, SaleControlAvailableResource::AvailableStorageType) };
      inline SaleControlAvailableResource::AvailableStorageType getAvailableStorageType() { DARABONBA_PTR_GET(availableStorageType_, SaleControlAvailableResource::AvailableStorageType) };
      inline SaleControlAvailableResource& setAvailableStorageType(const SaleControlAvailableResource::AvailableStorageType & availableStorageType) { DARABONBA_PTR_SET_VALUE(availableStorageType_, availableStorageType) };
      inline SaleControlAvailableResource& setAvailableStorageType(SaleControlAvailableResource::AvailableStorageType && availableStorageType) { DARABONBA_PTR_SET_RVALUE(availableStorageType_, availableStorageType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline SaleControlAvailableResource& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline SaleControlAvailableResource& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    protected:
      shared_ptr<vector<SaleControlAvailableResource::AvailableDiskType>> availableDiskType_ {};
      shared_ptr<vector<SaleControlAvailableResource::AvailableRegion>> availableRegion_ {};
      shared_ptr<vector<SaleControlAvailableResource::AvailableSpec>> availableSpec_ {};
      shared_ptr<SaleControlAvailableResource::AvailableStorageType> availableStorageType_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> orderType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->saleControlAvailableResource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsSaleControlAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saleControlAvailableResource Field Functions 
    bool hasSaleControlAvailableResource() const { return this->saleControlAvailableResource_ != nullptr;};
    void deleteSaleControlAvailableResource() { this->saleControlAvailableResource_ = nullptr;};
    inline const vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource> & getSaleControlAvailableResource() const { DARABONBA_PTR_GET_CONST(saleControlAvailableResource_, vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource>) };
    inline vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource> getSaleControlAvailableResource() { DARABONBA_PTR_GET(saleControlAvailableResource_, vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBody& setSaleControlAvailableResource(const vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource> & saleControlAvailableResource) { DARABONBA_PTR_SET_VALUE(saleControlAvailableResource_, saleControlAvailableResource) };
    inline DescribeEnsSaleControlAvailableResourceResponseBody& setSaleControlAvailableResource(vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource> && saleControlAvailableResource) { DARABONBA_PTR_SET_RVALUE(saleControlAvailableResource_, saleControlAvailableResource) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeEnsSaleControlAvailableResourceResponseBody::SaleControlAvailableResource>> saleControlAvailableResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
