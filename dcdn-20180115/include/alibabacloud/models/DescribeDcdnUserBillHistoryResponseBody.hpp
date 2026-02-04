// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillHistoryData, billHistoryData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillHistoryData, billHistoryData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserBillHistoryResponseBody() = default ;
    DescribeDcdnUserBillHistoryResponseBody(const DescribeDcdnUserBillHistoryResponseBody &) = default ;
    DescribeDcdnUserBillHistoryResponseBody(DescribeDcdnUserBillHistoryResponseBody &&) = default ;
    DescribeDcdnUserBillHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillHistoryResponseBody() = default ;
    DescribeDcdnUserBillHistoryResponseBody& operator=(const DescribeDcdnUserBillHistoryResponseBody &) = default ;
    DescribeDcdnUserBillHistoryResponseBody& operator=(DescribeDcdnUserBillHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BillHistoryData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillHistoryData& obj) { 
        DARABONBA_PTR_TO_JSON(BillHistoryDataItem, billHistoryDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, BillHistoryData& obj) { 
        DARABONBA_PTR_FROM_JSON(BillHistoryDataItem, billHistoryDataItem_);
      };
      BillHistoryData() = default ;
      BillHistoryData(const BillHistoryData &) = default ;
      BillHistoryData(BillHistoryData &&) = default ;
      BillHistoryData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillHistoryData() = default ;
      BillHistoryData& operator=(const BillHistoryData &) = default ;
      BillHistoryData& operator=(BillHistoryData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BillHistoryDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillHistoryDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(BillTime, billTime_);
          DARABONBA_PTR_TO_JSON(BillType, billType_);
          DARABONBA_PTR_TO_JSON(BillingData, billingData_);
          DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        };
        friend void from_json(const Darabonba::Json& j, BillHistoryDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BillTime, billTime_);
          DARABONBA_PTR_FROM_JSON(BillType, billType_);
          DARABONBA_PTR_FROM_JSON(BillingData, billingData_);
          DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        };
        BillHistoryDataItem() = default ;
        BillHistoryDataItem(const BillHistoryDataItem &) = default ;
        BillHistoryDataItem(BillHistoryDataItem &&) = default ;
        BillHistoryDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillHistoryDataItem() = default ;
        BillHistoryDataItem& operator=(const BillHistoryDataItem &) = default ;
        BillHistoryDataItem& operator=(BillHistoryDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BillingData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BillingData& obj) { 
            DARABONBA_PTR_TO_JSON(BillingDataItem, billingDataItem_);
          };
          friend void from_json(const Darabonba::Json& j, BillingData& obj) { 
            DARABONBA_PTR_FROM_JSON(BillingDataItem, billingDataItem_);
          };
          BillingData() = default ;
          BillingData(const BillingData &) = default ;
          BillingData(BillingData &&) = default ;
          BillingData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BillingData() = default ;
          BillingData& operator=(const BillingData &) = default ;
          BillingData& operator=(BillingData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BillingDataItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BillingDataItem& obj) { 
              DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
              DARABONBA_PTR_TO_JSON(CdnRegion, cdnRegion_);
              DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Flow, flow_);
            };
            friend void from_json(const Darabonba::Json& j, BillingDataItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
              DARABONBA_PTR_FROM_JSON(CdnRegion, cdnRegion_);
              DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Flow, flow_);
            };
            BillingDataItem() = default ;
            BillingDataItem(const BillingDataItem &) = default ;
            BillingDataItem(BillingDataItem &&) = default ;
            BillingDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BillingDataItem() = default ;
            BillingDataItem& operator=(const BillingDataItem &) = default ;
            BillingDataItem& operator=(BillingDataItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->cdnRegion_ == nullptr && this->chargeType_ == nullptr && this->count_ == nullptr && this->flow_ == nullptr; };
            // bandwidth Field Functions 
            bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
            void deleteBandwidth() { this->bandwidth_ = nullptr;};
            inline float getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
            inline BillingDataItem& setBandwidth(float bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


            // cdnRegion Field Functions 
            bool hasCdnRegion() const { return this->cdnRegion_ != nullptr;};
            void deleteCdnRegion() { this->cdnRegion_ = nullptr;};
            inline string getCdnRegion() const { DARABONBA_PTR_GET_DEFAULT(cdnRegion_, "") };
            inline BillingDataItem& setCdnRegion(string cdnRegion) { DARABONBA_PTR_SET_VALUE(cdnRegion_, cdnRegion) };


            // chargeType Field Functions 
            bool hasChargeType() const { return this->chargeType_ != nullptr;};
            void deleteChargeType() { this->chargeType_ = nullptr;};
            inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
            inline BillingDataItem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline float getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0.0) };
            inline BillingDataItem& setCount(float count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // flow Field Functions 
            bool hasFlow() const { return this->flow_ != nullptr;};
            void deleteFlow() { this->flow_ = nullptr;};
            inline float getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, 0.0) };
            inline BillingDataItem& setFlow(float flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


          protected:
            // The bandwidth. Unit: bit/s.
            shared_ptr<float> bandwidth_ {};
            // The region for which the billing records are generated. Valid values: **CN**, **OverSeas**, **AP1**, **AP2**, **AP3**, **NA**, **SA**, **EU**, and **MEAA**.
            shared_ptr<string> cdnRegion_ {};
            // The billing method of the disk. Valid values: **StaticHttp**, **DynamicHttp**, and **DynamicHttps**.
            shared_ptr<string> chargeType_ {};
            // The number of billing entries.
            shared_ptr<float> count_ {};
            // The amount of network traffic. Unit: bytes.
            shared_ptr<float> flow_ {};
          };

          virtual bool empty() const override { return this->billingDataItem_ == nullptr; };
          // billingDataItem Field Functions 
          bool hasBillingDataItem() const { return this->billingDataItem_ != nullptr;};
          void deleteBillingDataItem() { this->billingDataItem_ = nullptr;};
          inline const vector<BillingData::BillingDataItem> & getBillingDataItem() const { DARABONBA_PTR_GET_CONST(billingDataItem_, vector<BillingData::BillingDataItem>) };
          inline vector<BillingData::BillingDataItem> getBillingDataItem() { DARABONBA_PTR_GET(billingDataItem_, vector<BillingData::BillingDataItem>) };
          inline BillingData& setBillingDataItem(const vector<BillingData::BillingDataItem> & billingDataItem) { DARABONBA_PTR_SET_VALUE(billingDataItem_, billingDataItem) };
          inline BillingData& setBillingDataItem(vector<BillingData::BillingDataItem> && billingDataItem) { DARABONBA_PTR_SET_RVALUE(billingDataItem_, billingDataItem) };


        protected:
          shared_ptr<vector<BillingData::BillingDataItem>> billingDataItem_ {};
        };

        virtual bool empty() const override { return this->billTime_ == nullptr
        && this->billType_ == nullptr && this->billingData_ == nullptr && this->dimension_ == nullptr; };
        // billTime Field Functions 
        bool hasBillTime() const { return this->billTime_ != nullptr;};
        void deleteBillTime() { this->billTime_ = nullptr;};
        inline string getBillTime() const { DARABONBA_PTR_GET_DEFAULT(billTime_, "") };
        inline BillHistoryDataItem& setBillTime(string billTime) { DARABONBA_PTR_SET_VALUE(billTime_, billTime) };


        // billType Field Functions 
        bool hasBillType() const { return this->billType_ != nullptr;};
        void deleteBillType() { this->billType_ = nullptr;};
        inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
        inline BillHistoryDataItem& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


        // billingData Field Functions 
        bool hasBillingData() const { return this->billingData_ != nullptr;};
        void deleteBillingData() { this->billingData_ = nullptr;};
        inline const BillHistoryDataItem::BillingData & getBillingData() const { DARABONBA_PTR_GET_CONST(billingData_, BillHistoryDataItem::BillingData) };
        inline BillHistoryDataItem::BillingData getBillingData() { DARABONBA_PTR_GET(billingData_, BillHistoryDataItem::BillingData) };
        inline BillHistoryDataItem& setBillingData(const BillHistoryDataItem::BillingData & billingData) { DARABONBA_PTR_SET_VALUE(billingData_, billingData) };
        inline BillHistoryDataItem& setBillingData(BillHistoryDataItem::BillingData && billingData) { DARABONBA_PTR_SET_RVALUE(billingData_, billingData) };


        // dimension Field Functions 
        bool hasDimension() const { return this->dimension_ != nullptr;};
        void deleteDimension() { this->dimension_ = nullptr;};
        inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
        inline BillHistoryDataItem& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      protected:
        // The beginning of the time range that was queried.
        shared_ptr<string> billTime_ {};
        // The metering method.
        shared_ptr<string> billType_ {};
        // The billable items.
        shared_ptr<BillHistoryDataItem::BillingData> billingData_ {};
        // The dimension.
        shared_ptr<string> dimension_ {};
      };

      virtual bool empty() const override { return this->billHistoryDataItem_ == nullptr; };
      // billHistoryDataItem Field Functions 
      bool hasBillHistoryDataItem() const { return this->billHistoryDataItem_ != nullptr;};
      void deleteBillHistoryDataItem() { this->billHistoryDataItem_ = nullptr;};
      inline const vector<BillHistoryData::BillHistoryDataItem> & getBillHistoryDataItem() const { DARABONBA_PTR_GET_CONST(billHistoryDataItem_, vector<BillHistoryData::BillHistoryDataItem>) };
      inline vector<BillHistoryData::BillHistoryDataItem> getBillHistoryDataItem() { DARABONBA_PTR_GET(billHistoryDataItem_, vector<BillHistoryData::BillHistoryDataItem>) };
      inline BillHistoryData& setBillHistoryDataItem(const vector<BillHistoryData::BillHistoryDataItem> & billHistoryDataItem) { DARABONBA_PTR_SET_VALUE(billHistoryDataItem_, billHistoryDataItem) };
      inline BillHistoryData& setBillHistoryDataItem(vector<BillHistoryData::BillHistoryDataItem> && billHistoryDataItem) { DARABONBA_PTR_SET_RVALUE(billHistoryDataItem_, billHistoryDataItem) };


    protected:
      shared_ptr<vector<BillHistoryData::BillHistoryDataItem>> billHistoryDataItem_ {};
    };

    virtual bool empty() const override { return this->billHistoryData_ == nullptr
        && this->requestId_ == nullptr; };
    // billHistoryData Field Functions 
    bool hasBillHistoryData() const { return this->billHistoryData_ != nullptr;};
    void deleteBillHistoryData() { this->billHistoryData_ = nullptr;};
    inline const DescribeDcdnUserBillHistoryResponseBody::BillHistoryData & getBillHistoryData() const { DARABONBA_PTR_GET_CONST(billHistoryData_, DescribeDcdnUserBillHistoryResponseBody::BillHistoryData) };
    inline DescribeDcdnUserBillHistoryResponseBody::BillHistoryData getBillHistoryData() { DARABONBA_PTR_GET(billHistoryData_, DescribeDcdnUserBillHistoryResponseBody::BillHistoryData) };
    inline DescribeDcdnUserBillHistoryResponseBody& setBillHistoryData(const DescribeDcdnUserBillHistoryResponseBody::BillHistoryData & billHistoryData) { DARABONBA_PTR_SET_VALUE(billHistoryData_, billHistoryData) };
    inline DescribeDcdnUserBillHistoryResponseBody& setBillHistoryData(DescribeDcdnUserBillHistoryResponseBody::BillHistoryData && billHistoryData) { DARABONBA_PTR_SET_RVALUE(billHistoryData_, billHistoryData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserBillHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The billing history returned.
    shared_ptr<DescribeDcdnUserBillHistoryResponseBody::BillHistoryData> billHistoryData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
