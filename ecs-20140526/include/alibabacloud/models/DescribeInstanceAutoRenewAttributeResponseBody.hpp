// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
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
  class DescribeInstanceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRenewAttributes, instanceRenewAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRenewAttributes, instanceRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(const DescribeInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(DescribeInstanceAutoRenewAttributeResponseBody &&) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewAttributeResponseBody& operator=(const DescribeInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody& operator=(DescribeInstanceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRenewAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRenewAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceRenewAttribute, instanceRenewAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRenewAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceRenewAttribute, instanceRenewAttribute_);
      };
      InstanceRenewAttributes() = default ;
      InstanceRenewAttributes(const InstanceRenewAttributes &) = default ;
      InstanceRenewAttributes(InstanceRenewAttributes &&) = default ;
      InstanceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRenewAttributes() = default ;
      InstanceRenewAttributes& operator=(const InstanceRenewAttributes &) = default ;
      InstanceRenewAttributes& operator=(InstanceRenewAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceRenewAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceRenewAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenewEnabled, autoRenewEnabled_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EnableExpectedRenewDay, enableExpectedRenewDay_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceRenewAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenewEnabled, autoRenewEnabled_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EnableExpectedRenewDay, enableExpectedRenewDay_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
        };
        InstanceRenewAttribute() = default ;
        InstanceRenewAttribute(const InstanceRenewAttribute &) = default ;
        InstanceRenewAttribute(InstanceRenewAttribute &&) = default ;
        InstanceRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceRenewAttribute() = default ;
        InstanceRenewAttribute& operator=(const InstanceRenewAttribute &) = default ;
        InstanceRenewAttribute& operator=(InstanceRenewAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoRenewEnabled_ == nullptr
        && this->duration_ == nullptr && this->enableExpectedRenewDay_ == nullptr && this->instanceId_ == nullptr && this->periodUnit_ == nullptr && this->renewalStatus_ == nullptr; };
        // autoRenewEnabled Field Functions 
        bool hasAutoRenewEnabled() const { return this->autoRenewEnabled_ != nullptr;};
        void deleteAutoRenewEnabled() { this->autoRenewEnabled_ = nullptr;};
        inline bool getAutoRenewEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRenewEnabled_, false) };
        inline InstanceRenewAttribute& setAutoRenewEnabled(bool autoRenewEnabled) { DARABONBA_PTR_SET_VALUE(autoRenewEnabled_, autoRenewEnabled) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline InstanceRenewAttribute& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // enableExpectedRenewDay Field Functions 
        bool hasEnableExpectedRenewDay() const { return this->enableExpectedRenewDay_ != nullptr;};
        void deleteEnableExpectedRenewDay() { this->enableExpectedRenewDay_ = nullptr;};
        inline bool getEnableExpectedRenewDay() const { DARABONBA_PTR_GET_DEFAULT(enableExpectedRenewDay_, false) };
        inline InstanceRenewAttribute& setEnableExpectedRenewDay(bool enableExpectedRenewDay) { DARABONBA_PTR_SET_VALUE(enableExpectedRenewDay_, enableExpectedRenewDay) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceRenewAttribute& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline InstanceRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // renewalStatus Field Functions 
        bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
        void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
        inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
        inline InstanceRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


      protected:
        // Indicates whether auto-renewal is enabled.
        shared_ptr<bool> autoRenewEnabled_ {};
        // The auto-renewal duration.
        shared_ptr<int32_t> duration_ {};
        shared_ptr<bool> enableExpectedRenewDay_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The unit of the auto-renewal duration.
        shared_ptr<string> periodUnit_ {};
        // The auto-renewal state of the instance. Valid values:
        // 
        // *   AutoRenewal: Auto-renewal is enabled for the instance.
        // *   Normal: Auto-renewal is disabled for the instance.
        // *   NotRenewal: The instance is not to be renewed. The system sends no more expiration reminders, but sends only a non-renewal reminder three days before the expiration date. For an instance that is not to be renewed, you can call the [ModifyInstanceAutoRenewAttribute](https://help.aliyun.com/document_detail/52843.html) operation to change its auto-renewal status to `Normal`. Then, you can manually renew the instance or enable auto-renewal for the instance.
        shared_ptr<string> renewalStatus_ {};
      };

      virtual bool empty() const override { return this->instanceRenewAttribute_ == nullptr; };
      // instanceRenewAttribute Field Functions 
      bool hasInstanceRenewAttribute() const { return this->instanceRenewAttribute_ != nullptr;};
      void deleteInstanceRenewAttribute() { this->instanceRenewAttribute_ = nullptr;};
      inline const vector<InstanceRenewAttributes::InstanceRenewAttribute> & getInstanceRenewAttribute() const { DARABONBA_PTR_GET_CONST(instanceRenewAttribute_, vector<InstanceRenewAttributes::InstanceRenewAttribute>) };
      inline vector<InstanceRenewAttributes::InstanceRenewAttribute> getInstanceRenewAttribute() { DARABONBA_PTR_GET(instanceRenewAttribute_, vector<InstanceRenewAttributes::InstanceRenewAttribute>) };
      inline InstanceRenewAttributes& setInstanceRenewAttribute(const vector<InstanceRenewAttributes::InstanceRenewAttribute> & instanceRenewAttribute) { DARABONBA_PTR_SET_VALUE(instanceRenewAttribute_, instanceRenewAttribute) };
      inline InstanceRenewAttributes& setInstanceRenewAttribute(vector<InstanceRenewAttributes::InstanceRenewAttribute> && instanceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(instanceRenewAttribute_, instanceRenewAttribute) };


    protected:
      shared_ptr<vector<InstanceRenewAttributes::InstanceRenewAttribute>> instanceRenewAttribute_ {};
    };

    virtual bool empty() const override { return this->instanceRenewAttributes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceRenewAttributes Field Functions 
    bool hasInstanceRenewAttributes() const { return this->instanceRenewAttributes_ != nullptr;};
    void deleteInstanceRenewAttributes() { this->instanceRenewAttributes_ = nullptr;};
    inline const DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes & getInstanceRenewAttributes() const { DARABONBA_PTR_GET_CONST(instanceRenewAttributes_, DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes getInstanceRenewAttributes() { DARABONBA_PTR_GET(instanceRenewAttributes_, DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setInstanceRenewAttributes(const DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes & instanceRenewAttributes) { DARABONBA_PTR_SET_VALUE(instanceRenewAttributes_, instanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setInstanceRenewAttributes(DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes && instanceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(instanceRenewAttributes_, instanceRenewAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The renewal attributes of instances.
    shared_ptr<DescribeInstanceAutoRenewAttributeResponseBody::InstanceRenewAttributes> instanceRenewAttributes_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
