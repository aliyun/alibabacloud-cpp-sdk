// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTPRICEHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotPriceHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotPriceHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(NextOffset, nextOffset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpotPrices, spotPrices_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotPriceHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(NextOffset, nextOffset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpotPrices, spotPrices_);
    };
    DescribeSpotPriceHistoryResponseBody() = default ;
    DescribeSpotPriceHistoryResponseBody(const DescribeSpotPriceHistoryResponseBody &) = default ;
    DescribeSpotPriceHistoryResponseBody(DescribeSpotPriceHistoryResponseBody &&) = default ;
    DescribeSpotPriceHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotPriceHistoryResponseBody() = default ;
    DescribeSpotPriceHistoryResponseBody& operator=(const DescribeSpotPriceHistoryResponseBody &) = default ;
    DescribeSpotPriceHistoryResponseBody& operator=(DescribeSpotPriceHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpotPrices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpotPrices& obj) { 
        DARABONBA_PTR_TO_JSON(SpotPriceType, spotPriceType_);
      };
      friend void from_json(const Darabonba::Json& j, SpotPrices& obj) { 
        DARABONBA_PTR_FROM_JSON(SpotPriceType, spotPriceType_);
      };
      SpotPrices() = default ;
      SpotPrices(const SpotPrices &) = default ;
      SpotPrices(SpotPrices &&) = default ;
      SpotPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpotPrices() = default ;
      SpotPrices& operator=(const SpotPrices &) = default ;
      SpotPrices& operator=(SpotPrices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SpotPriceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpotPriceType& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(OriginPrice, originPrice_);
          DARABONBA_PTR_TO_JSON(SpotPrice, spotPrice_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, SpotPriceType& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(OriginPrice, originPrice_);
          DARABONBA_PTR_FROM_JSON(SpotPrice, spotPrice_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        SpotPriceType() = default ;
        SpotPriceType(const SpotPriceType &) = default ;
        SpotPriceType(SpotPriceType &&) = default ;
        SpotPriceType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpotPriceType() = default ;
        SpotPriceType& operator=(const SpotPriceType &) = default ;
        SpotPriceType& operator=(SpotPriceType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->ioOptimized_ == nullptr && this->networkType_ == nullptr && this->originPrice_ == nullptr && this->spotPrice_ == nullptr && this->timestamp_ == nullptr
        && this->zoneId_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SpotPriceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ioOptimized Field Functions 
        bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
        void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
        inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
        inline SpotPriceType& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SpotPriceType& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // originPrice Field Functions 
        bool hasOriginPrice() const { return this->originPrice_ != nullptr;};
        void deleteOriginPrice() { this->originPrice_ = nullptr;};
        inline float getOriginPrice() const { DARABONBA_PTR_GET_DEFAULT(originPrice_, 0.0) };
        inline SpotPriceType& setOriginPrice(float originPrice) { DARABONBA_PTR_SET_VALUE(originPrice_, originPrice) };


        // spotPrice Field Functions 
        bool hasSpotPrice() const { return this->spotPrice_ != nullptr;};
        void deleteSpotPrice() { this->spotPrice_ = nullptr;};
        inline float getSpotPrice() const { DARABONBA_PTR_GET_DEFAULT(spotPrice_, 0.0) };
        inline SpotPriceType& setSpotPrice(float spotPrice) { DARABONBA_PTR_SET_VALUE(spotPrice_, spotPrice) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline SpotPriceType& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline SpotPriceType& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The instance type of the spot instance.
        shared_ptr<string> instanceType_ {};
        // Details about the price history of the spot instance.
        shared_ptr<string> ioOptimized_ {};
        // Queries the price history of a spot instance within the last 30 days.
        shared_ptr<string> networkType_ {};
        // The price for a pay-as-you-go instance that has the same configuration as the specified spot instance.
        shared_ptr<float> originPrice_ {};
        // The price for a pay-as-you-go instance that has the same configurations as the spot instance.
        shared_ptr<float> spotPrice_ {};
        // The currency unit of the price.
        // 
        // Alibaba Cloud China site (aliyun.com): CNY.
        // 
        // Alibaba Cloud International site (alibabacloud.com): USD.
        shared_ptr<string> timestamp_ {};
        // The ID of the request.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->spotPriceType_ == nullptr; };
      // spotPriceType Field Functions 
      bool hasSpotPriceType() const { return this->spotPriceType_ != nullptr;};
      void deleteSpotPriceType() { this->spotPriceType_ = nullptr;};
      inline const vector<SpotPrices::SpotPriceType> & getSpotPriceType() const { DARABONBA_PTR_GET_CONST(spotPriceType_, vector<SpotPrices::SpotPriceType>) };
      inline vector<SpotPrices::SpotPriceType> getSpotPriceType() { DARABONBA_PTR_GET(spotPriceType_, vector<SpotPrices::SpotPriceType>) };
      inline SpotPrices& setSpotPriceType(const vector<SpotPrices::SpotPriceType> & spotPriceType) { DARABONBA_PTR_SET_VALUE(spotPriceType_, spotPriceType) };
      inline SpotPrices& setSpotPriceType(vector<SpotPrices::SpotPriceType> && spotPriceType) { DARABONBA_PTR_SET_RVALUE(spotPriceType_, spotPriceType) };


    protected:
      shared_ptr<vector<SpotPrices::SpotPriceType>> spotPriceType_ {};
    };

    virtual bool empty() const override { return this->currency_ == nullptr
        && this->nextOffset_ == nullptr && this->requestId_ == nullptr && this->spotPrices_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeSpotPriceHistoryResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // nextOffset Field Functions 
    bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
    void deleteNextOffset() { this->nextOffset_ = nullptr;};
    inline int32_t getNextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0) };
    inline DescribeSpotPriceHistoryResponseBody& setNextOffset(int32_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpotPriceHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spotPrices Field Functions 
    bool hasSpotPrices() const { return this->spotPrices_ != nullptr;};
    void deleteSpotPrices() { this->spotPrices_ = nullptr;};
    inline const DescribeSpotPriceHistoryResponseBody::SpotPrices & getSpotPrices() const { DARABONBA_PTR_GET_CONST(spotPrices_, DescribeSpotPriceHistoryResponseBody::SpotPrices) };
    inline DescribeSpotPriceHistoryResponseBody::SpotPrices getSpotPrices() { DARABONBA_PTR_GET(spotPrices_, DescribeSpotPriceHistoryResponseBody::SpotPrices) };
    inline DescribeSpotPriceHistoryResponseBody& setSpotPrices(const DescribeSpotPriceHistoryResponseBody::SpotPrices & spotPrices) { DARABONBA_PTR_SET_VALUE(spotPrices_, spotPrices) };
    inline DescribeSpotPriceHistoryResponseBody& setSpotPrices(DescribeSpotPriceHistoryResponseBody::SpotPrices && spotPrices) { DARABONBA_PTR_SET_RVALUE(spotPrices_, spotPrices) };


  protected:
    // The instance type of the spot instance.
    shared_ptr<string> currency_ {};
    // The network type of the spot instance.
    shared_ptr<int32_t> nextOffset_ {};
    // The instance type of the spot instance.
    shared_ptr<string> requestId_ {};
    // The zone ID of the spot instance.
    shared_ptr<DescribeSpotPriceHistoryResponseBody::SpotPrices> spotPrices_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
