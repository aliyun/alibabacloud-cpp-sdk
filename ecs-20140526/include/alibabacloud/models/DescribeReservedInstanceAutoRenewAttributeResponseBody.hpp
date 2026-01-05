// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeReservedInstanceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceRenewAttributes, reservedInstanceRenewAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceRenewAttributes, reservedInstanceRenewAttributes_);
    };
    DescribeReservedInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody(const DescribeReservedInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody(DescribeReservedInstanceAutoRenewAttributeResponseBody &&) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody& operator=(const DescribeReservedInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeReservedInstanceAutoRenewAttributeResponseBody& operator=(DescribeReservedInstanceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReservedInstanceRenewAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReservedInstanceRenewAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(ReservedInstanceRenewAttribute, reservedInstanceRenewAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, ReservedInstanceRenewAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(ReservedInstanceRenewAttribute, reservedInstanceRenewAttribute_);
      };
      ReservedInstanceRenewAttributes() = default ;
      ReservedInstanceRenewAttributes(const ReservedInstanceRenewAttributes &) = default ;
      ReservedInstanceRenewAttributes(ReservedInstanceRenewAttributes &&) = default ;
      ReservedInstanceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReservedInstanceRenewAttributes() = default ;
      ReservedInstanceRenewAttributes& operator=(const ReservedInstanceRenewAttributes &) = default ;
      ReservedInstanceRenewAttributes& operator=(ReservedInstanceRenewAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReservedInstanceRenewAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReservedInstanceRenewAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
          DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, ReservedInstanceRenewAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
          DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
        };
        ReservedInstanceRenewAttribute() = default ;
        ReservedInstanceRenewAttribute(const ReservedInstanceRenewAttribute &) = default ;
        ReservedInstanceRenewAttribute(ReservedInstanceRenewAttribute &&) = default ;
        ReservedInstanceRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReservedInstanceRenewAttribute() = default ;
        ReservedInstanceRenewAttribute& operator=(const ReservedInstanceRenewAttribute &) = default ;
        ReservedInstanceRenewAttribute& operator=(ReservedInstanceRenewAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->periodUnit_ == nullptr && this->renewalStatus_ == nullptr && this->reservedInstanceId_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline ReservedInstanceRenewAttribute& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline ReservedInstanceRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // renewalStatus Field Functions 
        bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
        void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
        inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
        inline ReservedInstanceRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


        // reservedInstanceId Field Functions 
        bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
        void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
        inline string getReservedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceId_, "") };
        inline ReservedInstanceRenewAttribute& setReservedInstanceId(string reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };


      protected:
        // The auto-renewal duration.
        shared_ptr<int32_t> duration_ {};
        // The unit of the auto-renewal duration.
        // 
        // Valid values: Year and Month.
        shared_ptr<string> periodUnit_ {};
        // The auto-renewal status of the reserved instance. Valid values:
        // 
        // *   AutoRenewal: automatically renews the reserved instance.
        // *   Normal: manually renews the reserved instances.
        shared_ptr<string> renewalStatus_ {};
        // The ID of the reserved instance.
        shared_ptr<string> reservedInstanceId_ {};
      };

      virtual bool empty() const override { return this->reservedInstanceRenewAttribute_ == nullptr; };
      // reservedInstanceRenewAttribute Field Functions 
      bool hasReservedInstanceRenewAttribute() const { return this->reservedInstanceRenewAttribute_ != nullptr;};
      void deleteReservedInstanceRenewAttribute() { this->reservedInstanceRenewAttribute_ = nullptr;};
      inline const vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute> & getReservedInstanceRenewAttribute() const { DARABONBA_PTR_GET_CONST(reservedInstanceRenewAttribute_, vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute>) };
      inline vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute> getReservedInstanceRenewAttribute() { DARABONBA_PTR_GET(reservedInstanceRenewAttribute_, vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute>) };
      inline ReservedInstanceRenewAttributes& setReservedInstanceRenewAttribute(const vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute> & reservedInstanceRenewAttribute) { DARABONBA_PTR_SET_VALUE(reservedInstanceRenewAttribute_, reservedInstanceRenewAttribute) };
      inline ReservedInstanceRenewAttributes& setReservedInstanceRenewAttribute(vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute> && reservedInstanceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(reservedInstanceRenewAttribute_, reservedInstanceRenewAttribute) };


    protected:
      shared_ptr<vector<ReservedInstanceRenewAttributes::ReservedInstanceRenewAttribute>> reservedInstanceRenewAttribute_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->reservedInstanceRenewAttributes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstanceRenewAttributes Field Functions 
    bool hasReservedInstanceRenewAttributes() const { return this->reservedInstanceRenewAttributes_ != nullptr;};
    void deleteReservedInstanceRenewAttributes() { this->reservedInstanceRenewAttributes_ = nullptr;};
    inline const DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes & getReservedInstanceRenewAttributes() const { DARABONBA_PTR_GET_CONST(reservedInstanceRenewAttributes_, DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes getReservedInstanceRenewAttributes() { DARABONBA_PTR_GET(reservedInstanceRenewAttributes_, DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody& setReservedInstanceRenewAttributes(const DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes & reservedInstanceRenewAttributes) { DARABONBA_PTR_SET_VALUE(reservedInstanceRenewAttributes_, reservedInstanceRenewAttributes) };
    inline DescribeReservedInstanceAutoRenewAttributeResponseBody& setReservedInstanceRenewAttributes(DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes && reservedInstanceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(reservedInstanceRenewAttributes_, reservedInstanceRenewAttributes) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the auto-renewal settings of the reserved instances.
    shared_ptr<DescribeReservedInstanceAutoRenewAttributeResponseBody::ReservedInstanceRenewAttributes> reservedInstanceRenewAttributes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
