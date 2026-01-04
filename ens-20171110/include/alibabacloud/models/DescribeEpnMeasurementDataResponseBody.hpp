// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNMEASUREMENTDATARESPONSEBODY_HPP_
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
  class DescribeEpnMeasurementDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MeasurementDatas, measurementDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnMeasurementDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MeasurementDatas, measurementDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEpnMeasurementDataResponseBody() = default ;
    DescribeEpnMeasurementDataResponseBody(const DescribeEpnMeasurementDataResponseBody &) = default ;
    DescribeEpnMeasurementDataResponseBody(DescribeEpnMeasurementDataResponseBody &&) = default ;
    DescribeEpnMeasurementDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnMeasurementDataResponseBody() = default ;
    DescribeEpnMeasurementDataResponseBody& operator=(const DescribeEpnMeasurementDataResponseBody &) = default ;
    DescribeEpnMeasurementDataResponseBody& operator=(DescribeEpnMeasurementDataResponseBody &&) = default ;
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
        };
        friend void from_json(const Darabonba::Json& j, MeasurementData& obj) { 
          DARABONBA_PTR_FROM_JSON(BandWidthFeeDatas, bandWidthFeeDatas_);
          DARABONBA_PTR_FROM_JSON(ChargeModel, chargeModel_);
          DARABONBA_PTR_FROM_JSON(CostCycle, costCycle_);
          DARABONBA_PTR_FROM_JSON(CostEndTime, costEndTime_);
          DARABONBA_PTR_FROM_JSON(CostStartTime, costStartTime_);
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
              DARABONBA_PTR_TO_JSON(CostType, costType_);
              DARABONBA_PTR_TO_JSON(CostVal, costVal_);
              DARABONBA_PTR_TO_JSON(IspLine, ispLine_);
            };
            friend void from_json(const Darabonba::Json& j, BandWidthFeeData& obj) { 
              DARABONBA_PTR_FROM_JSON(CostCode, costCode_);
              DARABONBA_PTR_FROM_JSON(CostName, costName_);
              DARABONBA_PTR_FROM_JSON(CostType, costType_);
              DARABONBA_PTR_FROM_JSON(CostVal, costVal_);
              DARABONBA_PTR_FROM_JSON(IspLine, ispLine_);
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
        && this->costName_ == nullptr && this->costType_ == nullptr && this->costVal_ == nullptr && this->ispLine_ == nullptr; };
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


            // costType Field Functions 
            bool hasCostType() const { return this->costType_ != nullptr;};
            void deleteCostType() { this->costType_ = nullptr;};
            inline string getCostType() const { DARABONBA_PTR_GET_DEFAULT(costType_, "") };
            inline BandWidthFeeData& setCostType(string costType) { DARABONBA_PTR_SET_VALUE(costType_, costType) };


            // costVal Field Functions 
            bool hasCostVal() const { return this->costVal_ != nullptr;};
            void deleteCostVal() { this->costVal_ = nullptr;};
            inline int32_t getCostVal() const { DARABONBA_PTR_GET_DEFAULT(costVal_, 0) };
            inline BandWidthFeeData& setCostVal(int32_t costVal) { DARABONBA_PTR_SET_VALUE(costVal_, costVal) };


            // ispLine Field Functions 
            bool hasIspLine() const { return this->ispLine_ != nullptr;};
            void deleteIspLine() { this->ispLine_ = nullptr;};
            inline string getIspLine() const { DARABONBA_PTR_GET_DEFAULT(ispLine_, "") };
            inline BandWidthFeeData& setIspLine(string ispLine) { DARABONBA_PTR_SET_VALUE(ispLine_, ispLine) };


          protected:
            // The code of the billable item.
            shared_ptr<string> costCode_ {};
            // The name of the billable item.
            shared_ptr<string> costName_ {};
            // Metering method
            // 
            // *   SpeedUp: bandwidth of intelligent acceleration
            // *   IntranetConnection: internal bandwidth
            shared_ptr<string> costType_ {};
            // The value of the billable item.
            shared_ptr<int32_t> costVal_ {};
            // This parameter is unavailable.
            shared_ptr<string> ispLine_ {};
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
        && this->chargeModel_ == nullptr && this->costCycle_ == nullptr && this->costEndTime_ == nullptr && this->costStartTime_ == nullptr; };
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
    inline const DescribeEpnMeasurementDataResponseBody::MeasurementDatas & getMeasurementDatas() const { DARABONBA_PTR_GET_CONST(measurementDatas_, DescribeEpnMeasurementDataResponseBody::MeasurementDatas) };
    inline DescribeEpnMeasurementDataResponseBody::MeasurementDatas getMeasurementDatas() { DARABONBA_PTR_GET(measurementDatas_, DescribeEpnMeasurementDataResponseBody::MeasurementDatas) };
    inline DescribeEpnMeasurementDataResponseBody& setMeasurementDatas(const DescribeEpnMeasurementDataResponseBody::MeasurementDatas & measurementDatas) { DARABONBA_PTR_SET_VALUE(measurementDatas_, measurementDatas) };
    inline DescribeEpnMeasurementDataResponseBody& setMeasurementDatas(DescribeEpnMeasurementDataResponseBody::MeasurementDatas && measurementDatas) { DARABONBA_PTR_SET_RVALUE(measurementDatas_, measurementDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEpnMeasurementDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metering data returned.
    shared_ptr<DescribeEpnMeasurementDataResponseBody::MeasurementDatas> measurementDatas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
