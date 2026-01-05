// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODY_HPP_
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
  class DescribeBandwidthLimitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthLimitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthLimitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBandwidthLimitationResponseBody() = default ;
    DescribeBandwidthLimitationResponseBody(const DescribeBandwidthLimitationResponseBody &) = default ;
    DescribeBandwidthLimitationResponseBody(DescribeBandwidthLimitationResponseBody &&) = default ;
    DescribeBandwidthLimitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthLimitationResponseBody() = default ;
    DescribeBandwidthLimitationResponseBody& operator=(const DescribeBandwidthLimitationResponseBody &) = default ;
    DescribeBandwidthLimitationResponseBody& operator=(DescribeBandwidthLimitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bandwidths : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bandwidths& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      };
      friend void from_json(const Darabonba::Json& j, Bandwidths& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      };
      Bandwidths() = default ;
      Bandwidths(const Bandwidths &) = default ;
      Bandwidths(Bandwidths &&) = default ;
      Bandwidths(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bandwidths() = default ;
      Bandwidths& operator=(const Bandwidths &) = default ;
      Bandwidths& operator=(Bandwidths &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Bandwidth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Bandwidth& obj) { 
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(Max, max_);
          DARABONBA_PTR_TO_JSON(Min, min_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
        };
        friend void from_json(const Darabonba::Json& j, Bandwidth& obj) { 
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(Max, max_);
          DARABONBA_PTR_FROM_JSON(Min, min_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
        };
        Bandwidth() = default ;
        Bandwidth(const Bandwidth &) = default ;
        Bandwidth(Bandwidth &&) = default ;
        Bandwidth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Bandwidth() = default ;
        Bandwidth& operator=(const Bandwidth &) = default ;
        Bandwidth& operator=(Bandwidth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->internetChargeType_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->unit_ == nullptr; };
        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline Bandwidth& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline Bandwidth& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline Bandwidth& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Bandwidth& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      protected:
        // The billing method for network usage. Valid values:
        // 
        // *   PayByBandwidth
        // *   PayByTraffic
        shared_ptr<string> internetChargeType_ {};
        // The maximum public bandwidth.
        shared_ptr<int32_t> max_ {};
        // The minimum public bandwidth.
        shared_ptr<int32_t> min_ {};
        // The unit of the public bandwidth.
        shared_ptr<string> unit_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline const vector<Bandwidths::Bandwidth> & getBandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, vector<Bandwidths::Bandwidth>) };
      inline vector<Bandwidths::Bandwidth> getBandwidth() { DARABONBA_PTR_GET(bandwidth_, vector<Bandwidths::Bandwidth>) };
      inline Bandwidths& setBandwidth(const vector<Bandwidths::Bandwidth> & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
      inline Bandwidths& setBandwidth(vector<Bandwidths::Bandwidth> && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


    protected:
      shared_ptr<vector<Bandwidths::Bandwidth>> bandwidth_ {};
    };

    virtual bool empty() const override { return this->bandwidths_ == nullptr
        && this->requestId_ == nullptr; };
    // bandwidths Field Functions 
    bool hasBandwidths() const { return this->bandwidths_ != nullptr;};
    void deleteBandwidths() { this->bandwidths_ = nullptr;};
    inline const DescribeBandwidthLimitationResponseBody::Bandwidths & getBandwidths() const { DARABONBA_PTR_GET_CONST(bandwidths_, DescribeBandwidthLimitationResponseBody::Bandwidths) };
    inline DescribeBandwidthLimitationResponseBody::Bandwidths getBandwidths() { DARABONBA_PTR_GET(bandwidths_, DescribeBandwidthLimitationResponseBody::Bandwidths) };
    inline DescribeBandwidthLimitationResponseBody& setBandwidths(const DescribeBandwidthLimitationResponseBody::Bandwidths & bandwidths) { DARABONBA_PTR_SET_VALUE(bandwidths_, bandwidths) };
    inline DescribeBandwidthLimitationResponseBody& setBandwidths(DescribeBandwidthLimitationResponseBody::Bandwidths && bandwidths) { DARABONBA_PTR_SET_RVALUE(bandwidths_, bandwidths) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandwidthLimitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the maximum public bandwidth.
    shared_ptr<DescribeBandwidthLimitationResponseBody::Bandwidths> bandwidths_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
