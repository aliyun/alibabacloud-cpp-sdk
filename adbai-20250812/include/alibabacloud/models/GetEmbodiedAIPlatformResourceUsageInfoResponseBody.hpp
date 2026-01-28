// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMBODIEDAIPLATFORMRESOURCEUSAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEMBODIEDAIPLATFORMRESOURCEUSAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class GetEmbodiedAIPlatformResourceUsageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmbodiedAIPlatformResourceUsageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GpuDetails, gpuDetails_);
      DARABONBA_PTR_TO_JSON(MaxRegisteredDevices, maxRegisteredDevices_);
      DARABONBA_PTR_TO_JSON(RegisteredDeviceCount, registeredDeviceCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlbTraffic, slbTraffic_);
      DARABONBA_PTR_TO_JSON(StorageUsage, storageUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmbodiedAIPlatformResourceUsageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GpuDetails, gpuDetails_);
      DARABONBA_PTR_FROM_JSON(MaxRegisteredDevices, maxRegisteredDevices_);
      DARABONBA_PTR_FROM_JSON(RegisteredDeviceCount, registeredDeviceCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlbTraffic, slbTraffic_);
      DARABONBA_PTR_FROM_JSON(StorageUsage, storageUsage_);
    };
    GetEmbodiedAIPlatformResourceUsageInfoResponseBody() = default ;
    GetEmbodiedAIPlatformResourceUsageInfoResponseBody(const GetEmbodiedAIPlatformResourceUsageInfoResponseBody &) = default ;
    GetEmbodiedAIPlatformResourceUsageInfoResponseBody(GetEmbodiedAIPlatformResourceUsageInfoResponseBody &&) = default ;
    GetEmbodiedAIPlatformResourceUsageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmbodiedAIPlatformResourceUsageInfoResponseBody() = default ;
    GetEmbodiedAIPlatformResourceUsageInfoResponseBody& operator=(const GetEmbodiedAIPlatformResourceUsageInfoResponseBody &) = default ;
    GetEmbodiedAIPlatformResourceUsageInfoResponseBody& operator=(GetEmbodiedAIPlatformResourceUsageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageUsage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageUsage& obj) { 
        DARABONBA_PTR_TO_JSON(Nas, nas_);
        DARABONBA_PTR_TO_JSON(Oss, oss_);
      };
      friend void from_json(const Darabonba::Json& j, StorageUsage& obj) { 
        DARABONBA_PTR_FROM_JSON(Nas, nas_);
        DARABONBA_PTR_FROM_JSON(Oss, oss_);
      };
      StorageUsage() = default ;
      StorageUsage(const StorageUsage &) = default ;
      StorageUsage(StorageUsage &&) = default ;
      StorageUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageUsage() = default ;
      StorageUsage& operator=(const StorageUsage &) = default ;
      StorageUsage& operator=(StorageUsage &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Oss : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Oss& obj) { 
          DARABONBA_PTR_TO_JSON(StandardStorageSize, standardStorageSize_);
        };
        friend void from_json(const Darabonba::Json& j, Oss& obj) { 
          DARABONBA_PTR_FROM_JSON(StandardStorageSize, standardStorageSize_);
        };
        Oss() = default ;
        Oss(const Oss &) = default ;
        Oss(Oss &&) = default ;
        Oss(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Oss() = default ;
        Oss& operator=(const Oss &) = default ;
        Oss& operator=(Oss &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->standardStorageSize_ == nullptr; };
        // standardStorageSize Field Functions 
        bool hasStandardStorageSize() const { return this->standardStorageSize_ != nullptr;};
        void deleteStandardStorageSize() { this->standardStorageSize_ = nullptr;};
        inline int64_t getStandardStorageSize() const { DARABONBA_PTR_GET_DEFAULT(standardStorageSize_, 0L) };
        inline Oss& setStandardStorageSize(int64_t standardStorageSize) { DARABONBA_PTR_SET_VALUE(standardStorageSize_, standardStorageSize) };


      protected:
        shared_ptr<int64_t> standardStorageSize_ {};
      };

      class Nas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nas& obj) { 
          DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
        };
        friend void from_json(const Darabonba::Json& j, Nas& obj) { 
          DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
        };
        Nas() = default ;
        Nas(const Nas &) = default ;
        Nas(Nas &&) = default ;
        Nas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nas() = default ;
        Nas& operator=(const Nas &) = default ;
        Nas& operator=(Nas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->meteredSize_ == nullptr; };
        // meteredSize Field Functions 
        bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
        void deleteMeteredSize() { this->meteredSize_ = nullptr;};
        inline int64_t getMeteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
        inline Nas& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


      protected:
        shared_ptr<int64_t> meteredSize_ {};
      };

      virtual bool empty() const override { return this->nas_ == nullptr
        && this->oss_ == nullptr; };
      // nas Field Functions 
      bool hasNas() const { return this->nas_ != nullptr;};
      void deleteNas() { this->nas_ = nullptr;};
      inline const StorageUsage::Nas & getNas() const { DARABONBA_PTR_GET_CONST(nas_, StorageUsage::Nas) };
      inline StorageUsage::Nas getNas() { DARABONBA_PTR_GET(nas_, StorageUsage::Nas) };
      inline StorageUsage& setNas(const StorageUsage::Nas & nas) { DARABONBA_PTR_SET_VALUE(nas_, nas) };
      inline StorageUsage& setNas(StorageUsage::Nas && nas) { DARABONBA_PTR_SET_RVALUE(nas_, nas) };


      // oss Field Functions 
      bool hasOss() const { return this->oss_ != nullptr;};
      void deleteOss() { this->oss_ = nullptr;};
      inline const StorageUsage::Oss & getOss() const { DARABONBA_PTR_GET_CONST(oss_, StorageUsage::Oss) };
      inline StorageUsage::Oss getOss() { DARABONBA_PTR_GET(oss_, StorageUsage::Oss) };
      inline StorageUsage& setOss(const StorageUsage::Oss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
      inline StorageUsage& setOss(StorageUsage::Oss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


    protected:
      shared_ptr<StorageUsage::Nas> nas_ {};
      shared_ptr<StorageUsage::Oss> oss_ {};
    };

    class SlbTraffic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlbTraffic& obj) { 
        DARABONBA_PTR_TO_JSON(TotalBytesIn, totalBytesIn_);
        DARABONBA_PTR_TO_JSON(TotalBytesOut, totalBytesOut_);
      };
      friend void from_json(const Darabonba::Json& j, SlbTraffic& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalBytesIn, totalBytesIn_);
        DARABONBA_PTR_FROM_JSON(TotalBytesOut, totalBytesOut_);
      };
      SlbTraffic() = default ;
      SlbTraffic(const SlbTraffic &) = default ;
      SlbTraffic(SlbTraffic &&) = default ;
      SlbTraffic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlbTraffic() = default ;
      SlbTraffic& operator=(const SlbTraffic &) = default ;
      SlbTraffic& operator=(SlbTraffic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->totalBytesIn_ == nullptr
        && this->totalBytesOut_ == nullptr; };
      // totalBytesIn Field Functions 
      bool hasTotalBytesIn() const { return this->totalBytesIn_ != nullptr;};
      void deleteTotalBytesIn() { this->totalBytesIn_ = nullptr;};
      inline int64_t getTotalBytesIn() const { DARABONBA_PTR_GET_DEFAULT(totalBytesIn_, 0L) };
      inline SlbTraffic& setTotalBytesIn(int64_t totalBytesIn) { DARABONBA_PTR_SET_VALUE(totalBytesIn_, totalBytesIn) };


      // totalBytesOut Field Functions 
      bool hasTotalBytesOut() const { return this->totalBytesOut_ != nullptr;};
      void deleteTotalBytesOut() { this->totalBytesOut_ = nullptr;};
      inline int64_t getTotalBytesOut() const { DARABONBA_PTR_GET_DEFAULT(totalBytesOut_, 0L) };
      inline SlbTraffic& setTotalBytesOut(int64_t totalBytesOut) { DARABONBA_PTR_SET_VALUE(totalBytesOut_, totalBytesOut) };


    protected:
      shared_ptr<int64_t> totalBytesIn_ {};
      shared_ptr<int64_t> totalBytesOut_ {};
    };

    class GpuDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GpuDetails& obj) { 
        DARABONBA_PTR_TO_JSON(AllocatedUnit, allocatedUnit_);
        DARABONBA_PTR_TO_JSON(GpuModel, gpuModel_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, GpuDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocatedUnit, allocatedUnit_);
        DARABONBA_PTR_FROM_JSON(GpuModel, gpuModel_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      GpuDetails() = default ;
      GpuDetails(const GpuDetails &) = default ;
      GpuDetails(GpuDetails &&) = default ;
      GpuDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GpuDetails() = default ;
      GpuDetails& operator=(const GpuDetails &) = default ;
      GpuDetails& operator=(GpuDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocatedUnit_ == nullptr
        && this->gpuModel_ == nullptr && this->totalCount_ == nullptr; };
      // allocatedUnit Field Functions 
      bool hasAllocatedUnit() const { return this->allocatedUnit_ != nullptr;};
      void deleteAllocatedUnit() { this->allocatedUnit_ = nullptr;};
      inline int32_t getAllocatedUnit() const { DARABONBA_PTR_GET_DEFAULT(allocatedUnit_, 0) };
      inline GpuDetails& setAllocatedUnit(int32_t allocatedUnit) { DARABONBA_PTR_SET_VALUE(allocatedUnit_, allocatedUnit) };


      // gpuModel Field Functions 
      bool hasGpuModel() const { return this->gpuModel_ != nullptr;};
      void deleteGpuModel() { this->gpuModel_ = nullptr;};
      inline string getGpuModel() const { DARABONBA_PTR_GET_DEFAULT(gpuModel_, "") };
      inline GpuDetails& setGpuModel(string gpuModel) { DARABONBA_PTR_SET_VALUE(gpuModel_, gpuModel) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline GpuDetails& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> allocatedUnit_ {};
      shared_ptr<string> gpuModel_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->gpuDetails_ == nullptr
        && this->maxRegisteredDevices_ == nullptr && this->registeredDeviceCount_ == nullptr && this->requestId_ == nullptr && this->slbTraffic_ == nullptr && this->storageUsage_ == nullptr; };
    // gpuDetails Field Functions 
    bool hasGpuDetails() const { return this->gpuDetails_ != nullptr;};
    void deleteGpuDetails() { this->gpuDetails_ = nullptr;};
    inline const vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails> & getGpuDetails() const { DARABONBA_PTR_GET_CONST(gpuDetails_, vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails>) };
    inline vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails> getGpuDetails() { DARABONBA_PTR_GET(gpuDetails_, vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails>) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setGpuDetails(const vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails> & gpuDetails) { DARABONBA_PTR_SET_VALUE(gpuDetails_, gpuDetails) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setGpuDetails(vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails> && gpuDetails) { DARABONBA_PTR_SET_RVALUE(gpuDetails_, gpuDetails) };


    // maxRegisteredDevices Field Functions 
    bool hasMaxRegisteredDevices() const { return this->maxRegisteredDevices_ != nullptr;};
    void deleteMaxRegisteredDevices() { this->maxRegisteredDevices_ = nullptr;};
    inline int64_t getMaxRegisteredDevices() const { DARABONBA_PTR_GET_DEFAULT(maxRegisteredDevices_, 0L) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setMaxRegisteredDevices(int64_t maxRegisteredDevices) { DARABONBA_PTR_SET_VALUE(maxRegisteredDevices_, maxRegisteredDevices) };


    // registeredDeviceCount Field Functions 
    bool hasRegisteredDeviceCount() const { return this->registeredDeviceCount_ != nullptr;};
    void deleteRegisteredDeviceCount() { this->registeredDeviceCount_ = nullptr;};
    inline int64_t getRegisteredDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(registeredDeviceCount_, 0L) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setRegisteredDeviceCount(int64_t registeredDeviceCount) { DARABONBA_PTR_SET_VALUE(registeredDeviceCount_, registeredDeviceCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slbTraffic Field Functions 
    bool hasSlbTraffic() const { return this->slbTraffic_ != nullptr;};
    void deleteSlbTraffic() { this->slbTraffic_ = nullptr;};
    inline const GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic & getSlbTraffic() const { DARABONBA_PTR_GET_CONST(slbTraffic_, GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic getSlbTraffic() { DARABONBA_PTR_GET(slbTraffic_, GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setSlbTraffic(const GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic & slbTraffic) { DARABONBA_PTR_SET_VALUE(slbTraffic_, slbTraffic) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setSlbTraffic(GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic && slbTraffic) { DARABONBA_PTR_SET_RVALUE(slbTraffic_, slbTraffic) };


    // storageUsage Field Functions 
    bool hasStorageUsage() const { return this->storageUsage_ != nullptr;};
    void deleteStorageUsage() { this->storageUsage_ = nullptr;};
    inline const GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage & getStorageUsage() const { DARABONBA_PTR_GET_CONST(storageUsage_, GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage getStorageUsage() { DARABONBA_PTR_GET(storageUsage_, GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setStorageUsage(const GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage & storageUsage) { DARABONBA_PTR_SET_VALUE(storageUsage_, storageUsage) };
    inline GetEmbodiedAIPlatformResourceUsageInfoResponseBody& setStorageUsage(GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage && storageUsage) { DARABONBA_PTR_SET_RVALUE(storageUsage_, storageUsage) };


  protected:
    shared_ptr<vector<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::GpuDetails>> gpuDetails_ {};
    shared_ptr<int64_t> maxRegisteredDevices_ {};
    shared_ptr<int64_t> registeredDeviceCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::SlbTraffic> slbTraffic_ {};
    shared_ptr<GetEmbodiedAIPlatformResourceUsageInfoResponseBody::StorageUsage> storageUsage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
