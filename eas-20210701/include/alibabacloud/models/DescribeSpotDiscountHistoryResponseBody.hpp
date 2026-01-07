// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTDISCOUNTHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeSpotDiscountHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotDiscountHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpotDiscounts, spotDiscounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotDiscountHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpotDiscounts, spotDiscounts_);
    };
    DescribeSpotDiscountHistoryResponseBody() = default ;
    DescribeSpotDiscountHistoryResponseBody(const DescribeSpotDiscountHistoryResponseBody &) = default ;
    DescribeSpotDiscountHistoryResponseBody(DescribeSpotDiscountHistoryResponseBody &&) = default ;
    DescribeSpotDiscountHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotDiscountHistoryResponseBody() = default ;
    DescribeSpotDiscountHistoryResponseBody& operator=(const DescribeSpotDiscountHistoryResponseBody &) = default ;
    DescribeSpotDiscountHistoryResponseBody& operator=(DescribeSpotDiscountHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpotDiscounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpotDiscounts& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(SpotDiscount, spotDiscount_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, SpotDiscounts& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(SpotDiscount, spotDiscount_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      SpotDiscounts() = default ;
      SpotDiscounts(const SpotDiscounts &) = default ;
      SpotDiscounts(SpotDiscounts &&) = default ;
      SpotDiscounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpotDiscounts() = default ;
      SpotDiscounts& operator=(const SpotDiscounts &) = default ;
      SpotDiscounts& operator=(SpotDiscounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->spotDiscount_ == nullptr && this->timestamp_ == nullptr && this->zoneId_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline SpotDiscounts& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // spotDiscount Field Functions 
      bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
      void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
      inline string getSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, "") };
      inline SpotDiscounts& setSpotDiscount(string spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline SpotDiscounts& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline SpotDiscounts& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The type of the ECS instance.
      shared_ptr<string> instanceType_ {};
      // The discount for the preemptible instance. For example, 0.1 represents a 90% discount.
      shared_ptr<string> spotDiscount_ {};
      // The time when the discount is available. The time must be in UTC.
      shared_ptr<string> timestamp_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->spotDiscounts_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpotDiscountHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spotDiscounts Field Functions 
    bool hasSpotDiscounts() const { return this->spotDiscounts_ != nullptr;};
    void deleteSpotDiscounts() { this->spotDiscounts_ = nullptr;};
    inline const vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts> & getSpotDiscounts() const { DARABONBA_PTR_GET_CONST(spotDiscounts_, vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts>) };
    inline vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts> getSpotDiscounts() { DARABONBA_PTR_GET(spotDiscounts_, vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts>) };
    inline DescribeSpotDiscountHistoryResponseBody& setSpotDiscounts(const vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts> & spotDiscounts) { DARABONBA_PTR_SET_VALUE(spotDiscounts_, spotDiscounts) };
    inline DescribeSpotDiscountHistoryResponseBody& setSpotDiscounts(vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts> && spotDiscounts) { DARABONBA_PTR_SET_RVALUE(spotDiscounts_, spotDiscounts) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The discount for the preemptible instance.
    shared_ptr<vector<DescribeSpotDiscountHistoryResponseBody::SpotDiscounts>> spotDiscounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
