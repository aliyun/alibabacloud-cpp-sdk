// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillTypeData, billTypeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillTypeData, billTypeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnUserBillTypeResponseBody() = default ;
    DescribeCdnUserBillTypeResponseBody(const DescribeCdnUserBillTypeResponseBody &) = default ;
    DescribeCdnUserBillTypeResponseBody(DescribeCdnUserBillTypeResponseBody &&) = default ;
    DescribeCdnUserBillTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillTypeResponseBody() = default ;
    DescribeCdnUserBillTypeResponseBody& operator=(const DescribeCdnUserBillTypeResponseBody &) = default ;
    DescribeCdnUserBillTypeResponseBody& operator=(DescribeCdnUserBillTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BillTypeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillTypeData& obj) { 
        DARABONBA_PTR_TO_JSON(BillTypeDataItem, billTypeDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, BillTypeData& obj) { 
        DARABONBA_PTR_FROM_JSON(BillTypeDataItem, billTypeDataItem_);
      };
      BillTypeData() = default ;
      BillTypeData(const BillTypeData &) = default ;
      BillTypeData(BillTypeData &&) = default ;
      BillTypeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillTypeData() = default ;
      BillTypeData& operator=(const BillTypeData &) = default ;
      BillTypeData& operator=(BillTypeData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BillTypeDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillTypeDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(BillType, billType_);
          DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
          DARABONBA_PTR_TO_JSON(Dimension, dimension_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, BillTypeDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BillType, billType_);
          DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
          DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        BillTypeDataItem() = default ;
        BillTypeDataItem(const BillTypeDataItem &) = default ;
        BillTypeDataItem(BillTypeDataItem &&) = default ;
        BillTypeDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillTypeDataItem() = default ;
        BillTypeDataItem& operator=(const BillTypeDataItem &) = default ;
        BillTypeDataItem& operator=(BillTypeDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billType_ == nullptr
        && this->billingCycle_ == nullptr && this->dimension_ == nullptr && this->endTime_ == nullptr && this->product_ == nullptr && this->startTime_ == nullptr; };
        // billType Field Functions 
        bool hasBillType() const { return this->billType_ != nullptr;};
        void deleteBillType() { this->billType_ = nullptr;};
        inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
        inline BillTypeDataItem& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


        // billingCycle Field Functions 
        bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
        void deleteBillingCycle() { this->billingCycle_ = nullptr;};
        inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
        inline BillTypeDataItem& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


        // dimension Field Functions 
        bool hasDimension() const { return this->dimension_ != nullptr;};
        void deleteDimension() { this->dimension_ = nullptr;};
        inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
        inline BillTypeDataItem& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline BillTypeDataItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline BillTypeDataItem& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline BillTypeDataItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> billType_ {};
        shared_ptr<string> billingCycle_ {};
        shared_ptr<string> dimension_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> product_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->billTypeDataItem_ == nullptr; };
      // billTypeDataItem Field Functions 
      bool hasBillTypeDataItem() const { return this->billTypeDataItem_ != nullptr;};
      void deleteBillTypeDataItem() { this->billTypeDataItem_ = nullptr;};
      inline const vector<BillTypeData::BillTypeDataItem> & getBillTypeDataItem() const { DARABONBA_PTR_GET_CONST(billTypeDataItem_, vector<BillTypeData::BillTypeDataItem>) };
      inline vector<BillTypeData::BillTypeDataItem> getBillTypeDataItem() { DARABONBA_PTR_GET(billTypeDataItem_, vector<BillTypeData::BillTypeDataItem>) };
      inline BillTypeData& setBillTypeDataItem(const vector<BillTypeData::BillTypeDataItem> & billTypeDataItem) { DARABONBA_PTR_SET_VALUE(billTypeDataItem_, billTypeDataItem) };
      inline BillTypeData& setBillTypeDataItem(vector<BillTypeData::BillTypeDataItem> && billTypeDataItem) { DARABONBA_PTR_SET_RVALUE(billTypeDataItem_, billTypeDataItem) };


    protected:
      shared_ptr<vector<BillTypeData::BillTypeDataItem>> billTypeDataItem_ {};
    };

    virtual bool empty() const override { return this->billTypeData_ == nullptr
        && this->requestId_ == nullptr; };
    // billTypeData Field Functions 
    bool hasBillTypeData() const { return this->billTypeData_ != nullptr;};
    void deleteBillTypeData() { this->billTypeData_ = nullptr;};
    inline const DescribeCdnUserBillTypeResponseBody::BillTypeData & getBillTypeData() const { DARABONBA_PTR_GET_CONST(billTypeData_, DescribeCdnUserBillTypeResponseBody::BillTypeData) };
    inline DescribeCdnUserBillTypeResponseBody::BillTypeData getBillTypeData() { DARABONBA_PTR_GET(billTypeData_, DescribeCdnUserBillTypeResponseBody::BillTypeData) };
    inline DescribeCdnUserBillTypeResponseBody& setBillTypeData(const DescribeCdnUserBillTypeResponseBody::BillTypeData & billTypeData) { DARABONBA_PTR_SET_VALUE(billTypeData_, billTypeData) };
    inline DescribeCdnUserBillTypeResponseBody& setBillTypeData(DescribeCdnUserBillTypeResponseBody::BillTypeData && billTypeData) { DARABONBA_PTR_SET_RVALUE(billTypeData_, billTypeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnUserBillTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCdnUserBillTypeResponseBody::BillTypeData> billTypeData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
