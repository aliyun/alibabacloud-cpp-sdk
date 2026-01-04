// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEASUREMENTDATARESPONSEBODY_HPP_
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
  class DescribeMeasurementDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MeasurementDatas, measurementDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MeasurementDatas, measurementDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeasurementDataResponseBody() = default ;
    DescribeMeasurementDataResponseBody(const DescribeMeasurementDataResponseBody &) = default ;
    DescribeMeasurementDataResponseBody(DescribeMeasurementDataResponseBody &&) = default ;
    DescribeMeasurementDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeasurementDataResponseBody() = default ;
    DescribeMeasurementDataResponseBody& operator=(const DescribeMeasurementDataResponseBody &) = default ;
    DescribeMeasurementDataResponseBody& operator=(DescribeMeasurementDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MeasurementDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeasurementDatas& obj) { 
        DARABONBA_PTR_TO_JSON(MeasurementData, measurementData_);
      };
      friend void from_json(const Darabonba::Json& j, MeasurementDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(MeasurementData, measurementData_);
      };
      MeasurementDatas() = default ;
      MeasurementDatas(const MeasurementDatas &) = default ;
      MeasurementDatas(MeasurementDatas &&) = default ;
      MeasurementDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MeasurementDatas() = default ;
      MeasurementDatas& operator=(const MeasurementDatas &) = default ;
      MeasurementDatas& operator=(MeasurementDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MeasurementData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeasurementData& obj) { 
          DARABONBA_PTR_TO_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
          DARABONBA_PTR_TO_JSON(ChargeModel, chargeModel_);
          DARABONBA_PTR_TO_JSON(CostCycle, costCycle_);
          DARABONBA_PTR_TO_JSON(CostEndTime, costEndTime_);
          DARABONBA_PTR_TO_JSON(CostStartTime, costStartTime_);
          DARABONBA_PTR_TO_JSON(ResourceFeeData, resourceFeeData_);
          DARABONBA_PTR_TO_JSON(ResourceFeeDataDetails, resourceFeeDataDetails_);
        };
        friend void from_json(const Darabonba::Json& j, MeasurementData& obj) { 
          DARABONBA_PTR_FROM_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
          DARABONBA_PTR_FROM_JSON(ChargeModel, chargeModel_);
          DARABONBA_PTR_FROM_JSON(CostCycle, costCycle_);
          DARABONBA_PTR_FROM_JSON(CostEndTime, costEndTime_);
          DARABONBA_PTR_FROM_JSON(CostStartTime, costStartTime_);
          DARABONBA_PTR_FROM_JSON(ResourceFeeData, resourceFeeData_);
          DARABONBA_PTR_FROM_JSON(ResourceFeeDataDetails, resourceFeeDataDetails_);
        };
        MeasurementData() = default ;
        MeasurementData(const MeasurementData &) = default ;
        MeasurementData(MeasurementData &&) = default ;
        MeasurementData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeasurementData() = default ;
        MeasurementData& operator=(const MeasurementData &) = default ;
        MeasurementData& operator=(MeasurementData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceFeeDataDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceFeeDataDetails& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceFeeDataDetail, resourceFeeDataDetail_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceFeeDataDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceFeeDataDetail, resourceFeeDataDetail_);
          };
          ResourceFeeDataDetails() = default ;
          ResourceFeeDataDetails(const ResourceFeeDataDetails &) = default ;
          ResourceFeeDataDetails(ResourceFeeDataDetails &&) = default ;
          ResourceFeeDataDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceFeeDataDetails() = default ;
          ResourceFeeDataDetails& operator=(const ResourceFeeDataDetails &) = default ;
          ResourceFeeDataDetails& operator=(ResourceFeeDataDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResourceFeeDataDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResourceFeeDataDetail& obj) { 
              DARABONBA_PTR_TO_JSON(CostCode, costCode_);
              DARABONBA_PTR_TO_JSON(CostName, costName_);
              DARABONBA_PTR_TO_JSON(CostVal, costVal_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            };
            friend void from_json(const Darabonba::Json& j, ResourceFeeDataDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(CostCode, costCode_);
              DARABONBA_PTR_FROM_JSON(CostName, costName_);
              DARABONBA_PTR_FROM_JSON(CostVal, costVal_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            };
            ResourceFeeDataDetail() = default ;
            ResourceFeeDataDetail(const ResourceFeeDataDetail &) = default ;
            ResourceFeeDataDetail(ResourceFeeDataDetail &&) = default ;
            ResourceFeeDataDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResourceFeeDataDetail() = default ;
            ResourceFeeDataDetail& operator=(const ResourceFeeDataDetail &) = default ;
            ResourceFeeDataDetail& operator=(ResourceFeeDataDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->costCode_ == nullptr
        && this->costName_ == nullptr && this->costVal_ == nullptr && this->resourceType_ == nullptr; };
            // costCode Field Functions 
            bool hasCostCode() const { return this->costCode_ != nullptr;};
            void deleteCostCode() { this->costCode_ = nullptr;};
            inline string getCostCode() const { DARABONBA_PTR_GET_DEFAULT(costCode_, "") };
            inline ResourceFeeDataDetail& setCostCode(string costCode) { DARABONBA_PTR_SET_VALUE(costCode_, costCode) };


            // costName Field Functions 
            bool hasCostName() const { return this->costName_ != nullptr;};
            void deleteCostName() { this->costName_ = nullptr;};
            inline string getCostName() const { DARABONBA_PTR_GET_DEFAULT(costName_, "") };
            inline ResourceFeeDataDetail& setCostName(string costName) { DARABONBA_PTR_SET_VALUE(costName_, costName) };


            // costVal Field Functions 
            bool hasCostVal() const { return this->costVal_ != nullptr;};
            void deleteCostVal() { this->costVal_ = nullptr;};
            inline int32_t getCostVal() const { DARABONBA_PTR_GET_DEFAULT(costVal_, 0) };
            inline ResourceFeeDataDetail& setCostVal(int32_t costVal) { DARABONBA_PTR_SET_VALUE(costVal_, costVal) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline ResourceFeeDataDetail& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          protected:
            // The code of the resource.
            shared_ptr<string> costCode_ {};
            // The name of the resource.
            shared_ptr<string> costName_ {};
            // The consumption of the resource.
            // 
            // *   Memory unit: GB.
            // *   CPU unit: vCPU.
            // *   Storage unit: GB.
            shared_ptr<int32_t> costVal_ {};
            // The type of the resource.
            shared_ptr<string> resourceType_ {};
          };

          virtual bool empty() const override { return this->resourceFeeDataDetail_ == nullptr; };
          // resourceFeeDataDetail Field Functions 
          bool hasResourceFeeDataDetail() const { return this->resourceFeeDataDetail_ != nullptr;};
          void deleteResourceFeeDataDetail() { this->resourceFeeDataDetail_ = nullptr;};
          inline const vector<ResourceFeeDataDetails::ResourceFeeDataDetail> & getResourceFeeDataDetail() const { DARABONBA_PTR_GET_CONST(resourceFeeDataDetail_, vector<ResourceFeeDataDetails::ResourceFeeDataDetail>) };
          inline vector<ResourceFeeDataDetails::ResourceFeeDataDetail> getResourceFeeDataDetail() { DARABONBA_PTR_GET(resourceFeeDataDetail_, vector<ResourceFeeDataDetails::ResourceFeeDataDetail>) };
          inline ResourceFeeDataDetails& setResourceFeeDataDetail(const vector<ResourceFeeDataDetails::ResourceFeeDataDetail> & resourceFeeDataDetail) { DARABONBA_PTR_SET_VALUE(resourceFeeDataDetail_, resourceFeeDataDetail) };
          inline ResourceFeeDataDetails& setResourceFeeDataDetail(vector<ResourceFeeDataDetails::ResourceFeeDataDetail> && resourceFeeDataDetail) { DARABONBA_PTR_SET_RVALUE(resourceFeeDataDetail_, resourceFeeDataDetail) };


        protected:
          shared_ptr<vector<ResourceFeeDataDetails::ResourceFeeDataDetail>> resourceFeeDataDetail_ {};
        };

        class ResourceFeeData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceFeeData& obj) { 
            DARABONBA_PTR_TO_JSON(Memory, memory_);
            DARABONBA_PTR_TO_JSON(Storage, storage_);
            DARABONBA_PTR_TO_JSON(Vcpu, vcpu_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceFeeData& obj) { 
            DARABONBA_PTR_FROM_JSON(Memory, memory_);
            DARABONBA_PTR_FROM_JSON(Storage, storage_);
            DARABONBA_PTR_FROM_JSON(Vcpu, vcpu_);
          };
          ResourceFeeData() = default ;
          ResourceFeeData(const ResourceFeeData &) = default ;
          ResourceFeeData(ResourceFeeData &&) = default ;
          ResourceFeeData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceFeeData() = default ;
          ResourceFeeData& operator=(const ResourceFeeData &) = default ;
          ResourceFeeData& operator=(ResourceFeeData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->memory_ == nullptr
        && this->storage_ == nullptr && this->vcpu_ == nullptr; };
          // memory Field Functions 
          bool hasMemory() const { return this->memory_ != nullptr;};
          void deleteMemory() { this->memory_ = nullptr;};
          inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
          inline ResourceFeeData& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          // storage Field Functions 
          bool hasStorage() const { return this->storage_ != nullptr;};
          void deleteStorage() { this->storage_ = nullptr;};
          inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
          inline ResourceFeeData& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


          // vcpu Field Functions 
          bool hasVcpu() const { return this->vcpu_ != nullptr;};
          void deleteVcpu() { this->vcpu_ = nullptr;};
          inline int32_t getVcpu() const { DARABONBA_PTR_GET_DEFAULT(vcpu_, 0) };
          inline ResourceFeeData& setVcpu(int32_t vcpu) { DARABONBA_PTR_SET_VALUE(vcpu_, vcpu) };


        protected:
          // The memory size. Unit: GB.
          shared_ptr<int32_t> memory_ {};
          // The storage capacity. Unit: GB.
          shared_ptr<int32_t> storage_ {};
          // The number of vCPUs.
          shared_ptr<int32_t> vcpu_ {};
        };

        class BandWidthFeeDatas : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BandWidthFeeDatas& obj) { 
            DARABONBA_PTR_TO_JSON(BandWidthFeeData, bandWidthFeeData_);
          };
          friend void from_json(const Darabonba::Json& j, BandWidthFeeDatas& obj) { 
            DARABONBA_PTR_FROM_JSON(BandWidthFeeData, bandWidthFeeData_);
          };
          BandWidthFeeDatas() = default ;
          BandWidthFeeDatas(const BandWidthFeeDatas &) = default ;
          BandWidthFeeDatas(BandWidthFeeDatas &&) = default ;
          BandWidthFeeDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BandWidthFeeDatas() = default ;
          BandWidthFeeDatas& operator=(const BandWidthFeeDatas &) = default ;
          BandWidthFeeDatas& operator=(BandWidthFeeDatas &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BandWidthFeeData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BandWidthFeeData& obj) { 
              DARABONBA_PTR_TO_JSON(CostCode, costCode_);
              DARABONBA_PTR_TO_JSON(CostName, costName_);
              DARABONBA_PTR_TO_JSON(CostVal, costVal_);
            };
            friend void from_json(const Darabonba::Json& j, BandWidthFeeData& obj) { 
              DARABONBA_PTR_FROM_JSON(CostCode, costCode_);
              DARABONBA_PTR_FROM_JSON(CostName, costName_);
              DARABONBA_PTR_FROM_JSON(CostVal, costVal_);
            };
            BandWidthFeeData() = default ;
            BandWidthFeeData(const BandWidthFeeData &) = default ;
            BandWidthFeeData(BandWidthFeeData &&) = default ;
            BandWidthFeeData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BandWidthFeeData() = default ;
            BandWidthFeeData& operator=(const BandWidthFeeData &) = default ;
            BandWidthFeeData& operator=(BandWidthFeeData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->costCode_ == nullptr
        && this->costName_ == nullptr && this->costVal_ == nullptr; };
            // costCode Field Functions 
            bool hasCostCode() const { return this->costCode_ != nullptr;};
            void deleteCostCode() { this->costCode_ = nullptr;};
            inline string getCostCode() const { DARABONBA_PTR_GET_DEFAULT(costCode_, "") };
            inline BandWidthFeeData& setCostCode(string costCode) { DARABONBA_PTR_SET_VALUE(costCode_, costCode) };


            // costName Field Functions 
            bool hasCostName() const { return this->costName_ != nullptr;};
            void deleteCostName() { this->costName_ = nullptr;};
            inline string getCostName() const { DARABONBA_PTR_GET_DEFAULT(costName_, "") };
            inline BandWidthFeeData& setCostName(string costName) { DARABONBA_PTR_SET_VALUE(costName_, costName) };


            // costVal Field Functions 
            bool hasCostVal() const { return this->costVal_ != nullptr;};
            void deleteCostVal() { this->costVal_ = nullptr;};
            inline int32_t getCostVal() const { DARABONBA_PTR_GET_DEFAULT(costVal_, 0) };
            inline BandWidthFeeData& setCostVal(int32_t costVal) { DARABONBA_PTR_SET_VALUE(costVal_, costVal) };


          protected:
            // The code of the bandwidth plan.
            shared_ptr<string> costCode_ {};
            // The name of the bandwidth plan.
            shared_ptr<string> costName_ {};
            // The bandwidth consumption. Unit: bit/second.
            shared_ptr<int32_t> costVal_ {};
          };

          virtual bool empty() const override { return this->bandWidthFeeData_ == nullptr; };
          // bandWidthFeeData Field Functions 
          bool hasBandWidthFeeData() const { return this->bandWidthFeeData_ != nullptr;};
          void deleteBandWidthFeeData() { this->bandWidthFeeData_ = nullptr;};
          inline const vector<BandWidthFeeDatas::BandWidthFeeData> & getBandWidthFeeData() const { DARABONBA_PTR_GET_CONST(bandWidthFeeData_, vector<BandWidthFeeDatas::BandWidthFeeData>) };
          inline vector<BandWidthFeeDatas::BandWidthFeeData> getBandWidthFeeData() { DARABONBA_PTR_GET(bandWidthFeeData_, vector<BandWidthFeeDatas::BandWidthFeeData>) };
          inline BandWidthFeeDatas& setBandWidthFeeData(const vector<BandWidthFeeDatas::BandWidthFeeData> & bandWidthFeeData) { DARABONBA_PTR_SET_VALUE(bandWidthFeeData_, bandWidthFeeData) };
          inline BandWidthFeeDatas& setBandWidthFeeData(vector<BandWidthFeeDatas::BandWidthFeeData> && bandWidthFeeData) { DARABONBA_PTR_SET_RVALUE(bandWidthFeeData_, bandWidthFeeData) };


        protected:
          shared_ptr<vector<BandWidthFeeDatas::BandWidthFeeData>> bandWidthFeeData_ {};
        };

        virtual bool empty() const override { return this->bandWidthFeeDatas_ == nullptr
        && this->chargeModel_ == nullptr && this->costCycle_ == nullptr && this->costEndTime_ == nullptr && this->costStartTime_ == nullptr && this->resourceFeeData_ == nullptr
        && this->resourceFeeDataDetails_ == nullptr; };
        // bandWidthFeeDatas Field Functions 
        bool hasBandWidthFeeDatas() const { return this->bandWidthFeeDatas_ != nullptr;};
        void deleteBandWidthFeeDatas() { this->bandWidthFeeDatas_ = nullptr;};
        inline const MeasurementData::BandWidthFeeDatas & getBandWidthFeeDatas() const { DARABONBA_PTR_GET_CONST(bandWidthFeeDatas_, MeasurementData::BandWidthFeeDatas) };
        inline MeasurementData::BandWidthFeeDatas getBandWidthFeeDatas() { DARABONBA_PTR_GET(bandWidthFeeDatas_, MeasurementData::BandWidthFeeDatas) };
        inline MeasurementData& setBandWidthFeeDatas(const MeasurementData::BandWidthFeeDatas & bandWidthFeeDatas) { DARABONBA_PTR_SET_VALUE(bandWidthFeeDatas_, bandWidthFeeDatas) };
        inline MeasurementData& setBandWidthFeeDatas(MeasurementData::BandWidthFeeDatas && bandWidthFeeDatas) { DARABONBA_PTR_SET_RVALUE(bandWidthFeeDatas_, bandWidthFeeDatas) };


        // chargeModel Field Functions 
        bool hasChargeModel() const { return this->chargeModel_ != nullptr;};
        void deleteChargeModel() { this->chargeModel_ = nullptr;};
        inline string getChargeModel() const { DARABONBA_PTR_GET_DEFAULT(chargeModel_, "") };
        inline MeasurementData& setChargeModel(string chargeModel) { DARABONBA_PTR_SET_VALUE(chargeModel_, chargeModel) };


        // costCycle Field Functions 
        bool hasCostCycle() const { return this->costCycle_ != nullptr;};
        void deleteCostCycle() { this->costCycle_ = nullptr;};
        inline string getCostCycle() const { DARABONBA_PTR_GET_DEFAULT(costCycle_, "") };
        inline MeasurementData& setCostCycle(string costCycle) { DARABONBA_PTR_SET_VALUE(costCycle_, costCycle) };


        // costEndTime Field Functions 
        bool hasCostEndTime() const { return this->costEndTime_ != nullptr;};
        void deleteCostEndTime() { this->costEndTime_ = nullptr;};
        inline string getCostEndTime() const { DARABONBA_PTR_GET_DEFAULT(costEndTime_, "") };
        inline MeasurementData& setCostEndTime(string costEndTime) { DARABONBA_PTR_SET_VALUE(costEndTime_, costEndTime) };


        // costStartTime Field Functions 
        bool hasCostStartTime() const { return this->costStartTime_ != nullptr;};
        void deleteCostStartTime() { this->costStartTime_ = nullptr;};
        inline string getCostStartTime() const { DARABONBA_PTR_GET_DEFAULT(costStartTime_, "") };
        inline MeasurementData& setCostStartTime(string costStartTime) { DARABONBA_PTR_SET_VALUE(costStartTime_, costStartTime) };


        // resourceFeeData Field Functions 
        bool hasResourceFeeData() const { return this->resourceFeeData_ != nullptr;};
        void deleteResourceFeeData() { this->resourceFeeData_ = nullptr;};
        inline const MeasurementData::ResourceFeeData & getResourceFeeData() const { DARABONBA_PTR_GET_CONST(resourceFeeData_, MeasurementData::ResourceFeeData) };
        inline MeasurementData::ResourceFeeData getResourceFeeData() { DARABONBA_PTR_GET(resourceFeeData_, MeasurementData::ResourceFeeData) };
        inline MeasurementData& setResourceFeeData(const MeasurementData::ResourceFeeData & resourceFeeData) { DARABONBA_PTR_SET_VALUE(resourceFeeData_, resourceFeeData) };
        inline MeasurementData& setResourceFeeData(MeasurementData::ResourceFeeData && resourceFeeData) { DARABONBA_PTR_SET_RVALUE(resourceFeeData_, resourceFeeData) };


        // resourceFeeDataDetails Field Functions 
        bool hasResourceFeeDataDetails() const { return this->resourceFeeDataDetails_ != nullptr;};
        void deleteResourceFeeDataDetails() { this->resourceFeeDataDetails_ = nullptr;};
        inline const MeasurementData::ResourceFeeDataDetails & getResourceFeeDataDetails() const { DARABONBA_PTR_GET_CONST(resourceFeeDataDetails_, MeasurementData::ResourceFeeDataDetails) };
        inline MeasurementData::ResourceFeeDataDetails getResourceFeeDataDetails() { DARABONBA_PTR_GET(resourceFeeDataDetails_, MeasurementData::ResourceFeeDataDetails) };
        inline MeasurementData& setResourceFeeDataDetails(const MeasurementData::ResourceFeeDataDetails & resourceFeeDataDetails) { DARABONBA_PTR_SET_VALUE(resourceFeeDataDetails_, resourceFeeDataDetails) };
        inline MeasurementData& setResourceFeeDataDetails(MeasurementData::ResourceFeeDataDetails && resourceFeeDataDetails) { DARABONBA_PTR_SET_RVALUE(resourceFeeDataDetails_, resourceFeeDataDetails) };


      protected:
        // The bandwidth data returned.
        shared_ptr<MeasurementData::BandWidthFeeDatas> bandWidthFeeDatas_ {};
        // The metering method. Valid values:
        // 
        // *   ChargeByUnified: unified metering.
        // *   ChargeByGrade: differential metering.
        shared_ptr<string> chargeModel_ {};
        // The metering cycle.
        shared_ptr<string> costCycle_ {};
        // The end time of the metering cycle.
        shared_ptr<string> costEndTime_ {};
        // The start time of the metering cycle.
        shared_ptr<string> costStartTime_ {};
        // The information about computing resources.
        shared_ptr<MeasurementData::ResourceFeeData> resourceFeeData_ {};
        // Details of the computing resources.
        shared_ptr<MeasurementData::ResourceFeeDataDetails> resourceFeeDataDetails_ {};
      };

      virtual bool empty() const override { return this->measurementData_ == nullptr; };
      // measurementData Field Functions 
      bool hasMeasurementData() const { return this->measurementData_ != nullptr;};
      void deleteMeasurementData() { this->measurementData_ = nullptr;};
      inline const vector<MeasurementDatas::MeasurementData> & getMeasurementData() const { DARABONBA_PTR_GET_CONST(measurementData_, vector<MeasurementDatas::MeasurementData>) };
      inline vector<MeasurementDatas::MeasurementData> getMeasurementData() { DARABONBA_PTR_GET(measurementData_, vector<MeasurementDatas::MeasurementData>) };
      inline MeasurementDatas& setMeasurementData(const vector<MeasurementDatas::MeasurementData> & measurementData) { DARABONBA_PTR_SET_VALUE(measurementData_, measurementData) };
      inline MeasurementDatas& setMeasurementData(vector<MeasurementDatas::MeasurementData> && measurementData) { DARABONBA_PTR_SET_RVALUE(measurementData_, measurementData) };


    protected:
      shared_ptr<vector<MeasurementDatas::MeasurementData>> measurementData_ {};
    };

    virtual bool empty() const override { return this->measurementDatas_ == nullptr
        && this->requestId_ == nullptr; };
    // measurementDatas Field Functions 
    bool hasMeasurementDatas() const { return this->measurementDatas_ != nullptr;};
    void deleteMeasurementDatas() { this->measurementDatas_ = nullptr;};
    inline const DescribeMeasurementDataResponseBody::MeasurementDatas & getMeasurementDatas() const { DARABONBA_PTR_GET_CONST(measurementDatas_, DescribeMeasurementDataResponseBody::MeasurementDatas) };
    inline DescribeMeasurementDataResponseBody::MeasurementDatas getMeasurementDatas() { DARABONBA_PTR_GET(measurementDatas_, DescribeMeasurementDataResponseBody::MeasurementDatas) };
    inline DescribeMeasurementDataResponseBody& setMeasurementDatas(const DescribeMeasurementDataResponseBody::MeasurementDatas & measurementDatas) { DARABONBA_PTR_SET_VALUE(measurementDatas_, measurementDatas) };
    inline DescribeMeasurementDataResponseBody& setMeasurementDatas(DescribeMeasurementDataResponseBody::MeasurementDatas && measurementDatas) { DARABONBA_PTR_SET_RVALUE(measurementDatas_, measurementDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeasurementDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metering data returned.
    shared_ptr<DescribeMeasurementDataResponseBody::MeasurementDatas> measurementDatas_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
