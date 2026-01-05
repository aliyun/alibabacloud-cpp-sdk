// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTAUTORENEWRESPONSEBODY_HPP_
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
  class DescribeDedicatedHostAutoRenewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostAutoRenewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostRenewAttributes, dedicatedHostRenewAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostAutoRenewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostRenewAttributes, dedicatedHostRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDedicatedHostAutoRenewResponseBody() = default ;
    DescribeDedicatedHostAutoRenewResponseBody(const DescribeDedicatedHostAutoRenewResponseBody &) = default ;
    DescribeDedicatedHostAutoRenewResponseBody(DescribeDedicatedHostAutoRenewResponseBody &&) = default ;
    DescribeDedicatedHostAutoRenewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostAutoRenewResponseBody() = default ;
    DescribeDedicatedHostAutoRenewResponseBody& operator=(const DescribeDedicatedHostAutoRenewResponseBody &) = default ;
    DescribeDedicatedHostAutoRenewResponseBody& operator=(DescribeDedicatedHostAutoRenewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedHostRenewAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHostRenewAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostRenewAttribute, dedicatedHostRenewAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHostRenewAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostRenewAttribute, dedicatedHostRenewAttribute_);
      };
      DedicatedHostRenewAttributes() = default ;
      DedicatedHostRenewAttributes(const DedicatedHostRenewAttributes &) = default ;
      DedicatedHostRenewAttributes(DedicatedHostRenewAttributes &&) = default ;
      DedicatedHostRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHostRenewAttributes() = default ;
      DedicatedHostRenewAttributes& operator=(const DedicatedHostRenewAttributes &) = default ;
      DedicatedHostRenewAttributes& operator=(DedicatedHostRenewAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedHostRenewAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedHostRenewAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewEnabled, autoRenewEnabled_);
          DARABONBA_PTR_TO_JSON(AutoRenewWithEcs, autoRenewWithEcs_);
          DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedHostRenewAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewEnabled, autoRenewEnabled_);
          DARABONBA_PTR_FROM_JSON(AutoRenewWithEcs, autoRenewWithEcs_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
        };
        DedicatedHostRenewAttribute() = default ;
        DedicatedHostRenewAttribute(const DedicatedHostRenewAttribute &) = default ;
        DedicatedHostRenewAttribute(DedicatedHostRenewAttribute &&) = default ;
        DedicatedHostRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedHostRenewAttribute() = default ;
        DedicatedHostRenewAttribute& operator=(const DedicatedHostRenewAttribute &) = default ;
        DedicatedHostRenewAttribute& operator=(DedicatedHostRenewAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewEnabled_ == nullptr
        && this->autoRenewWithEcs_ == nullptr && this->dedicatedHostId_ == nullptr && this->duration_ == nullptr && this->periodUnit_ == nullptr && this->renewalStatus_ == nullptr; };
        // autoRenewEnabled Field Functions 
        bool hasAutoRenewEnabled() const { return this->autoRenewEnabled_ != nullptr;};
        void deleteAutoRenewEnabled() { this->autoRenewEnabled_ = nullptr;};
        inline bool getAutoRenewEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewEnabled_, false) };
        inline DedicatedHostRenewAttribute& setAutoRenewEnabled(bool autoRenewEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewEnabled_, autoRenewEnabled) };


        // autoRenewWithEcs Field Functions 
        bool hasAutoRenewWithEcs() const { return this->autoRenewWithEcs_ != nullptr;};
        void deleteAutoRenewWithEcs() { this->autoRenewWithEcs_ = nullptr;};
        inline string getAutoRenewWithEcs() const { DARABONBA_PTR_GET_DEFAULT(autoRenewWithEcs_, "") };
        inline DedicatedHostRenewAttribute& setAutoRenewWithEcs(string autoRenewWithEcs) { DARABONBA_PTR_SET_VALUE(autoRenewWithEcs_, autoRenewWithEcs) };


        // dedicatedHostId Field Functions 
        bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
        void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
        inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
        inline DedicatedHostRenewAttribute& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline DedicatedHostRenewAttribute& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline DedicatedHostRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // renewalStatus Field Functions 
        bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
        void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
        inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
        inline DedicatedHostRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


      protected:
        // Indicates whether auto-renewal is enabled. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> autoRenewEnabled_ {};
        // Indicates whether the dedicated host is automatically renewed if a subscription ECS instance it hosts, after being automatically renewed, has a new expiration time that is later than that of the dedicated host. Valid values:
        // 
        // *   AutoRenewWithEcs: The dedicated host is automatically renewed along with the ECS instance.
        // *   StopRenewWithEcs: The dedicated host is not automatically renewed along with the ECS instance.
        shared_ptr<string> autoRenewWithEcs_ {};
        // The ID of the dedicated host.
        shared_ptr<string> dedicatedHostId_ {};
        // The auto-renewal period.
        shared_ptr<int32_t> duration_ {};
        // The unit of the auto-renewal duration. Valid values:
        // 
        // *   Week
        // *   Month
        shared_ptr<string> periodUnit_ {};
        // Indicates whether the subscription dedicated host is automatically renewed. Valid values:
        // 
        // *   AutoRenewal: The dedicated host is automatically renewed.
        // *   Normal: The dedicated host is not automatically renewed, but renewal notifications are sent.
        // *   NotRenewal: The dedicated host is not automatically renewed, and no expiration notification is sent. Alibaba Cloud sends only a non-renewal notice three days before the host expires. If the renewal status of a dedicated host is NotRenewal, you can change the value to Normal and then call [RenewDedicatedHosts](https://help.aliyun.com/document_detail/93287.html) to manually renew the dedicated host, or directly change the value to AutoRenewal.
        shared_ptr<string> renewalStatus_ {};
      };

      virtual bool empty() const override { return this->dedicatedHostRenewAttribute_ == nullptr; };
      // dedicatedHostRenewAttribute Field Functions 
      bool hasDedicatedHostRenewAttribute() const { return this->dedicatedHostRenewAttribute_ != nullptr;};
      void deleteDedicatedHostRenewAttribute() { this->dedicatedHostRenewAttribute_ = nullptr;};
      inline const vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute> & getDedicatedHostRenewAttribute() const { DARABONBA_PTR_GET_CONST(dedicatedHostRenewAttribute_, vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute>) };
      inline vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute> getDedicatedHostRenewAttribute() { DARABONBA_PTR_GET(dedicatedHostRenewAttribute_, vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute>) };
      inline DedicatedHostRenewAttributes& setDedicatedHostRenewAttribute(const vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute> & dedicatedHostRenewAttribute) { DARABONBA_PTR_SET_VALUE(dedicatedHostRenewAttribute_, dedicatedHostRenewAttribute) };
      inline DedicatedHostRenewAttributes& setDedicatedHostRenewAttribute(vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute> && dedicatedHostRenewAttribute) { DARABONBA_PTR_SET_RVALUE(dedicatedHostRenewAttribute_, dedicatedHostRenewAttribute) };


    protected:
      shared_ptr<vector<DedicatedHostRenewAttributes::DedicatedHostRenewAttribute>> dedicatedHostRenewAttribute_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostRenewAttributes_ == nullptr
        && this->requestId_ == nullptr; };
    // dedicatedHostRenewAttributes Field Functions 
    bool hasDedicatedHostRenewAttributes() const { return this->dedicatedHostRenewAttributes_ != nullptr;};
    void deleteDedicatedHostRenewAttributes() { this->dedicatedHostRenewAttributes_ = nullptr;};
    inline const DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes & getDedicatedHostRenewAttributes() const { DARABONBA_PTR_GET_CONST(dedicatedHostRenewAttributes_, DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes) };
    inline DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes getDedicatedHostRenewAttributes() { DARABONBA_PTR_GET(dedicatedHostRenewAttributes_, DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes) };
    inline DescribeDedicatedHostAutoRenewResponseBody& setDedicatedHostRenewAttributes(const DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes & dedicatedHostRenewAttributes) { DARABONBA_PTR_SET_VALUE(dedicatedHostRenewAttributes_, dedicatedHostRenewAttributes) };
    inline DescribeDedicatedHostAutoRenewResponseBody& setDedicatedHostRenewAttributes(DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes && dedicatedHostRenewAttributes) { DARABONBA_PTR_SET_RVALUE(dedicatedHostRenewAttributes_, dedicatedHostRenewAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostAutoRenewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array that consists of dedicated host auto-renewal attributes.
    shared_ptr<DescribeDedicatedHostAutoRenewResponseBody::DedicatedHostRenewAttributes> dedicatedHostRenewAttributes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
