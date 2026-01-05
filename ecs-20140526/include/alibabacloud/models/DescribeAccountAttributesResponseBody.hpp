// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTATTRIBUTESRESPONSEBODY_HPP_
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
  class DescribeAccountAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAttributeItems, accountAttributeItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAttributeItems, accountAttributeItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountAttributesResponseBody() = default ;
    DescribeAccountAttributesResponseBody(const DescribeAccountAttributesResponseBody &) = default ;
    DescribeAccountAttributesResponseBody(DescribeAccountAttributesResponseBody &&) = default ;
    DescribeAccountAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAttributesResponseBody() = default ;
    DescribeAccountAttributesResponseBody& operator=(const DescribeAccountAttributesResponseBody &) = default ;
    DescribeAccountAttributesResponseBody& operator=(DescribeAccountAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountAttributeItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountAttributeItems& obj) { 
        DARABONBA_PTR_TO_JSON(AccountAttributeItem, accountAttributeItem_);
      };
      friend void from_json(const Darabonba::Json& j, AccountAttributeItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountAttributeItem, accountAttributeItem_);
      };
      AccountAttributeItems() = default ;
      AccountAttributeItems(const AccountAttributeItems &) = default ;
      AccountAttributeItems(AccountAttributeItems &&) = default ;
      AccountAttributeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountAttributeItems() = default ;
      AccountAttributeItems& operator=(const AccountAttributeItems &) = default ;
      AccountAttributeItems& operator=(AccountAttributeItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccountAttributeItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountAttributeItem& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
          DARABONBA_PTR_TO_JSON(AttributeValues, attributeValues_);
        };
        friend void from_json(const Darabonba::Json& j, AccountAttributeItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
          DARABONBA_PTR_FROM_JSON(AttributeValues, attributeValues_);
        };
        AccountAttributeItem() = default ;
        AccountAttributeItem(const AccountAttributeItem &) = default ;
        AccountAttributeItem(AccountAttributeItem &&) = default ;
        AccountAttributeItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountAttributeItem() = default ;
        AccountAttributeItem& operator=(const AccountAttributeItem &) = default ;
        AccountAttributeItem& operator=(AccountAttributeItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeValues& obj) { 
            DARABONBA_PTR_TO_JSON(ValueItem, valueItem_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeValues& obj) { 
            DARABONBA_PTR_FROM_JSON(ValueItem, valueItem_);
          };
          AttributeValues() = default ;
          AttributeValues(const AttributeValues &) = default ;
          AttributeValues(AttributeValues &&) = default ;
          AttributeValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeValues() = default ;
          AttributeValues& operator=(const AttributeValues &) = default ;
          AttributeValues& operator=(AttributeValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ValueItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValueItem& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
              DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
              DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(Value, value_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, ValueItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
              DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
              DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
            };
            ValueItem() = default ;
            ValueItem(const ValueItem &) = default ;
            ValueItem(ValueItem &&) = default ;
            ValueItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValueItem() = default ;
            ValueItem& operator=(const ValueItem &) = default ;
            ValueItem& operator=(ValueItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->diskCategory_ == nullptr && this->expiredTime_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr && this->value_ == nullptr
        && this->zoneId_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline ValueItem& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // diskCategory Field Functions 
            bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
            void deleteDiskCategory() { this->diskCategory_ = nullptr;};
            inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
            inline ValueItem& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


            // expiredTime Field Functions 
            bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
            void deleteExpiredTime() { this->expiredTime_ = nullptr;};
            inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
            inline ValueItem& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


            // instanceChargeType Field Functions 
            bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
            void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
            inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
            inline ValueItem& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline ValueItem& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ValueItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline ValueItem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The number of privilege attributes in the account.
            shared_ptr<int32_t> count_ {};
            // The data disk category. Valid values:
            // 
            // *   cloud_efficiency: ultra disk
            // *   cloud_ssd: standard SSD
            // *   cloud_essd: enhanced SSD (ESSD)
            shared_ptr<string> diskCategory_ {};
            // The expiration time of a privilege. This parameter is returned only when the account privilege has an expiration time. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
            shared_ptr<string> expiredTime_ {};
            // The billing method of the instance.
            shared_ptr<string> instanceChargeType_ {};
            // The type of the instance.
            shared_ptr<string> instanceType_ {};
            // The value of the resource quota in the specified region. Valid values:
            // 
            // The values returned for the resource quotas to which the following AttributeName values correspond are 0 or positive integers:
            // 
            // *   max-security-groups
            // *   max-elastic-network-interfaces
            // *   max-postpaid-instance-vcpu-count
            // *   max-spot-instance-vcpu-count
            // *   used-postpaid-instance-vcpu-count
            // *   used-spot-instance-vcpu-count
            // *   max-postpaid-yundisk-capacity (the value is deprecated)
            // *   used-postpaid-yundisk-capacity (the value is deprecated)
            // *   max-dedicated-hosts
            // *   max-axt-command-count
            // *   max-axt-invocation-daily
            // *   max-cloud-assistant-activation-count
            // 
            // When AttributeName is set to supported-postpay-instance-types, instance types are returned. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
            // 
            // When AttributeName is set to real-name-authentications, one of the following values is returned:
            // 
            // *   yes
            // *   none
            // *   unnecessary
            // 
            // When AttributeName is set to instance-network-type, one of the following values is returned:
            // 
            // *   vpc
            // *   classic
            shared_ptr<string> value_ {};
            // The ID of the zone in which the resource resides.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->valueItem_ == nullptr; };
          // valueItem Field Functions 
          bool hasValueItem() const { return this->valueItem_ != nullptr;};
          void deleteValueItem() { this->valueItem_ = nullptr;};
          inline const vector<AttributeValues::ValueItem> & getValueItem() const { DARABONBA_PTR_GET_CONST(valueItem_, vector<AttributeValues::ValueItem>) };
          inline vector<AttributeValues::ValueItem> getValueItem() { DARABONBA_PTR_GET(valueItem_, vector<AttributeValues::ValueItem>) };
          inline AttributeValues& setValueItem(const vector<AttributeValues::ValueItem> & valueItem) { DARABONBA_PTR_SET_VALUE(valueItem_, valueItem) };
          inline AttributeValues& setValueItem(vector<AttributeValues::ValueItem> && valueItem) { DARABONBA_PTR_SET_RVALUE(valueItem_, valueItem) };


        protected:
          shared_ptr<vector<AttributeValues::ValueItem>> valueItem_ {};
        };

        virtual bool empty() const override { return this->attributeName_ == nullptr
        && this->attributeValues_ == nullptr; };
        // attributeName Field Functions 
        bool hasAttributeName() const { return this->attributeName_ != nullptr;};
        void deleteAttributeName() { this->attributeName_ = nullptr;};
        inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
        inline AccountAttributeItem& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


        // attributeValues Field Functions 
        bool hasAttributeValues() const { return this->attributeValues_ != nullptr;};
        void deleteAttributeValues() { this->attributeValues_ = nullptr;};
        inline const AccountAttributeItem::AttributeValues & getAttributeValues() const { DARABONBA_PTR_GET_CONST(attributeValues_, AccountAttributeItem::AttributeValues) };
        inline AccountAttributeItem::AttributeValues getAttributeValues() { DARABONBA_PTR_GET(attributeValues_, AccountAttributeItem::AttributeValues) };
        inline AccountAttributeItem& setAttributeValues(const AccountAttributeItem::AttributeValues & attributeValues) { DARABONBA_PTR_SET_VALUE(attributeValues_, attributeValues) };
        inline AccountAttributeItem& setAttributeValues(AccountAttributeItem::AttributeValues && attributeValues) { DARABONBA_PTR_SET_RVALUE(attributeValues_, attributeValues) };


      protected:
        // The type of the resource quota in the specified region. Valid values:
        // 
        // *   instance-network-type: the available network types.
        // *   max-security-groups: the maximum number of security groups.
        // *   max-elastic-network-interfaces: the maximum number of ENIs.
        // *   max-postpaid-instance-vcpu-count: the maximum number of vCPUs for pay-as-you-go instances.
        // *   max-spot-instance-vcpu-count: the maximum number of vCPUs for spot instances.
        // *   used-postpaid-instance-vcpu-count: the number of vCPUs that were allocated to pay-as-you-go instances.
        // *   used-spot-instance-vcpu-count: the number of vCPUs that were allocated to spot instances.
        // *   max-postpaid-yundisk-capacity: the maximum capacity of pay-as-you-go data disks. (The value is deprecated.)
        // *   used-postpaid-yundisk-capacity: the capacity of pay-as-you-go data disks that were created. (The value is deprecated.)
        // *   max-dedicated-hosts: the maximum number of dedicated hosts.
        // *   supported-postpaid-instance-types: the instance types of pay-as-you-go I/O optimized instances.
        // *   max-axt-command-count: the maximum number of Cloud Assistant commands.
        // *   max-axt-invocation-daily: the maximum number of Cloud Assistant command executions per day.
        // *   real-name-authentication: whether the account completed the real-name verification.
        // *   max-cloud-assistant-activation-count: the maximum number of activation codes that can be created to use to register managed instances.
        shared_ptr<string> attributeName_ {};
        // The values of resource quotas.
        shared_ptr<AccountAttributeItem::AttributeValues> attributeValues_ {};
      };

      virtual bool empty() const override { return this->accountAttributeItem_ == nullptr; };
      // accountAttributeItem Field Functions 
      bool hasAccountAttributeItem() const { return this->accountAttributeItem_ != nullptr;};
      void deleteAccountAttributeItem() { this->accountAttributeItem_ = nullptr;};
      inline const vector<AccountAttributeItems::AccountAttributeItem> & getAccountAttributeItem() const { DARABONBA_PTR_GET_CONST(accountAttributeItem_, vector<AccountAttributeItems::AccountAttributeItem>) };
      inline vector<AccountAttributeItems::AccountAttributeItem> getAccountAttributeItem() { DARABONBA_PTR_GET(accountAttributeItem_, vector<AccountAttributeItems::AccountAttributeItem>) };
      inline AccountAttributeItems& setAccountAttributeItem(const vector<AccountAttributeItems::AccountAttributeItem> & accountAttributeItem) { DARABONBA_PTR_SET_VALUE(accountAttributeItem_, accountAttributeItem) };
      inline AccountAttributeItems& setAccountAttributeItem(vector<AccountAttributeItems::AccountAttributeItem> && accountAttributeItem) { DARABONBA_PTR_SET_RVALUE(accountAttributeItem_, accountAttributeItem) };


    protected:
      shared_ptr<vector<AccountAttributeItems::AccountAttributeItem>> accountAttributeItem_ {};
    };

    virtual bool empty() const override { return this->accountAttributeItems_ == nullptr
        && this->requestId_ == nullptr; };
    // accountAttributeItems Field Functions 
    bool hasAccountAttributeItems() const { return this->accountAttributeItems_ != nullptr;};
    void deleteAccountAttributeItems() { this->accountAttributeItems_ = nullptr;};
    inline const DescribeAccountAttributesResponseBody::AccountAttributeItems & getAccountAttributeItems() const { DARABONBA_PTR_GET_CONST(accountAttributeItems_, DescribeAccountAttributesResponseBody::AccountAttributeItems) };
    inline DescribeAccountAttributesResponseBody::AccountAttributeItems getAccountAttributeItems() { DARABONBA_PTR_GET(accountAttributeItems_, DescribeAccountAttributesResponseBody::AccountAttributeItems) };
    inline DescribeAccountAttributesResponseBody& setAccountAttributeItems(const DescribeAccountAttributesResponseBody::AccountAttributeItems & accountAttributeItems) { DARABONBA_PTR_SET_VALUE(accountAttributeItems_, accountAttributeItems) };
    inline DescribeAccountAttributesResponseBody& setAccountAttributeItems(DescribeAccountAttributesResponseBody::AccountAttributeItems && accountAttributeItems) { DARABONBA_PTR_SET_RVALUE(accountAttributeItems_, accountAttributeItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about account privileges in the specified region.
    shared_ptr<DescribeAccountAttributesResponseBody::AccountAttributeItems> accountAttributeItems_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
