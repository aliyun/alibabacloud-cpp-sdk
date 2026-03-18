// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstanceListResponseBody() = default ;
    DescribeInstanceListResponseBody(const DescribeInstanceListResponseBody &) = default ;
    DescribeInstanceListResponseBody(DescribeInstanceListResponseBody &&) = default ;
    DescribeInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceListResponseBody() = default ;
    DescribeInstanceListResponseBody& operator=(const DescribeInstanceListResponseBody &) = default ;
    DescribeInstanceListResponseBody& operator=(DescribeInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoProtectCondition, autoProtectCondition_);
        DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
        DARABONBA_PTR_TO_JSON(BlackholdingCount, blackholdingCount_);
        DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
        DARABONBA_PTR_TO_JSON(CoverageType, coverageType_);
        DARABONBA_PTR_TO_JSON(DebtStatus, debtStatus_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(IpType, ipType_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoProtectCondition, autoProtectCondition_);
        DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
        DARABONBA_PTR_FROM_JSON(BlackholdingCount, blackholdingCount_);
        DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
        DARABONBA_PTR_FROM_JSON(CoverageType, coverageType_);
        DARABONBA_PTR_FROM_JSON(DebtStatus, debtStatus_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(IpType, ipType_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoProtectCondition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoProtectCondition& obj) { 
          DARABONBA_PTR_TO_JSON(Events, events_);
        };
        friend void from_json(const Darabonba::Json& j, AutoProtectCondition& obj) { 
          DARABONBA_PTR_FROM_JSON(Events, events_);
        };
        AutoProtectCondition() = default ;
        AutoProtectCondition(const AutoProtectCondition &) = default ;
        AutoProtectCondition(AutoProtectCondition &&) = default ;
        AutoProtectCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoProtectCondition() = default ;
        AutoProtectCondition& operator=(const AutoProtectCondition &) = default ;
        AutoProtectCondition& operator=(AutoProtectCondition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->events_ == nullptr; };
        // events Field Functions 
        bool hasEvents() const { return this->events_ != nullptr;};
        void deleteEvents() { this->events_ = nullptr;};
        inline const vector<string> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
        inline vector<string> getEvents() { DARABONBA_PTR_GET(events_, vector<string>) };
        inline AutoProtectCondition& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
        inline AutoProtectCondition& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      protected:
        // Events which result in auto binding.
        shared_ptr<vector<string>> events_ {};
      };

      virtual bool empty() const override { return this->autoProtectCondition_ == nullptr
        && this->autoRenewal_ == nullptr && this->blackholdingCount_ == nullptr && this->commodityType_ == nullptr && this->coverageType_ == nullptr && this->debtStatus_ == nullptr
        && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->ipType_ == nullptr
        && this->product_ == nullptr && this->remark_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr; };
      // autoProtectCondition Field Functions 
      bool hasAutoProtectCondition() const { return this->autoProtectCondition_ != nullptr;};
      void deleteAutoProtectCondition() { this->autoProtectCondition_ = nullptr;};
      inline const InstanceList::AutoProtectCondition & getAutoProtectCondition() const { DARABONBA_PTR_GET_CONST(autoProtectCondition_, InstanceList::AutoProtectCondition) };
      inline InstanceList::AutoProtectCondition getAutoProtectCondition() { DARABONBA_PTR_GET(autoProtectCondition_, InstanceList::AutoProtectCondition) };
      inline InstanceList& setAutoProtectCondition(const InstanceList::AutoProtectCondition & autoProtectCondition) { DARABONBA_PTR_SET_VALUE(autoProtectCondition_, autoProtectCondition) };
      inline InstanceList& setAutoProtectCondition(InstanceList::AutoProtectCondition && autoProtectCondition) { DARABONBA_PTR_SET_RVALUE(autoProtectCondition_, autoProtectCondition) };


      // autoRenewal Field Functions 
      bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
      void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
      inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
      inline InstanceList& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


      // blackholdingCount Field Functions 
      bool hasBlackholdingCount() const { return this->blackholdingCount_ != nullptr;};
      void deleteBlackholdingCount() { this->blackholdingCount_ = nullptr;};
      inline string getBlackholdingCount() const { DARABONBA_PTR_GET_DEFAULT(blackholdingCount_, "") };
      inline InstanceList& setBlackholdingCount(string blackholdingCount) { DARABONBA_PTR_SET_VALUE(blackholdingCount_, blackholdingCount) };


      // commodityType Field Functions 
      bool hasCommodityType() const { return this->commodityType_ != nullptr;};
      void deleteCommodityType() { this->commodityType_ = nullptr;};
      inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
      inline InstanceList& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


      // coverageType Field Functions 
      bool hasCoverageType() const { return this->coverageType_ != nullptr;};
      void deleteCoverageType() { this->coverageType_ = nullptr;};
      inline int32_t getCoverageType() const { DARABONBA_PTR_GET_DEFAULT(coverageType_, 0) };
      inline InstanceList& setCoverageType(int32_t coverageType) { DARABONBA_PTR_SET_VALUE(coverageType_, coverageType) };


      // debtStatus Field Functions 
      bool hasDebtStatus() const { return this->debtStatus_ != nullptr;};
      void deleteDebtStatus() { this->debtStatus_ = nullptr;};
      inline int64_t getDebtStatus() const { DARABONBA_PTR_GET_DEFAULT(debtStatus_, 0L) };
      inline InstanceList& setDebtStatus(int64_t debtStatus) { DARABONBA_PTR_SET_VALUE(debtStatus_, debtStatus) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline InstanceList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline InstanceList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ipType Field Functions 
      bool hasIpType() const { return this->ipType_ != nullptr;};
      void deleteIpType() { this->ipType_ = nullptr;};
      inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
      inline InstanceList& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline InstanceList& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline InstanceList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline InstanceList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The event that triggers automatic association. Valid values:
      // 
      // *   **any**: The instance is automatically associated with an object based on traffic scrubbing events or blackhole filtering events.
      // *   **clean**: The instance is automatically associated with an object based on traffic scrubbing events.
      // *   **blackhole**: The instance is automatically associated with an object based on blackhole filtering events.
      shared_ptr<InstanceList::AutoProtectCondition> autoProtectCondition_ {};
      // The time when the instance expires. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<bool> autoRenewal_ {};
      // The type of the instance.
      // 
      // *   **ddos_ddosorigin_public_cn**: Anti-DDoS Origin 2.0 (Pay-as-you-go) on the China site (aliyun.com).
      // *   **ddos_ddosorigin_public_intl**: Anti-DDoS Origin 2.0 (Pay-as-you-go) on the International site (alibabacloud.com).
      shared_ptr<string> blackholdingCount_ {};
      // The condition that triggers automatic association of the instance with an object.
      shared_ptr<string> commodityType_ {};
      // Indicates whether overdue payments exist. Valid values:
      // 
      // *   **0**: Overdue payments do not exist.
      // *   **1**: Overdue payments exist.
      shared_ptr<int32_t> coverageType_ {};
      // The events that trigger automatic association.
      shared_ptr<int64_t> debtStatus_ {};
      // The time when the instance was purchased. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> expireTime_ {};
      // The mitigation plan of the instance. Valid values:
      // 
      // *   **0**: the Professional mitigation plan
      // *   **1**: the Enterprise mitigation plan
      shared_ptr<int64_t> gmtCreate_ {};
      // The number of protected public IP addresses for which blackhole filtering is triggered.
      // 
      // >  You can call the [DeleteBlackhole](https://help.aliyun.com/document_detail/118692.html) operation to deactivate blackhole filtering for a protected IP address.
      shared_ptr<string> instanceId_ {};
      // The application scope of the instance.
      // 
      // *   **1**: The instance supports public IP addresses in all regions.
      // *   **2**: The instance supports public IP addresses in regions in the Chinese mainland.
      // *   **3**: The instance supports public IP addresses in regions outside the Chinese mainland.
      // *   **4**: The instance supports public IP addresses in a region in or outside the Chinese mainland.
      shared_ptr<string> instanceType_ {};
      // The description of the instance.
      shared_ptr<string> ipType_ {};
      // The ID of the instance.
      shared_ptr<string> product_ {};
      // The type of the cloud service that is associated with the Anti-DDoS Origin instance By default, this parameter is not returned. If the Anti-DDoS Origin instance is created by using a different cloud service, the code of the cloud service is returned.
      // 
      // Valid values:
      // 
      // *   **gamebox**: The Anti-DDoS Origin instance is created by using Game Security Box.
      // *   **eip**: The Anti-DDoS Origin instance is created by using an elastic IP address (EIP) for which Anti-DDoS (Enhanced Edition) is enabled.
      shared_ptr<string> remark_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether auto-renewal is enabled for the instance. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<DescribeInstanceListResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<DescribeInstanceListResponseBody::InstanceList>) };
    inline vector<DescribeInstanceListResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<DescribeInstanceListResponseBody::InstanceList>) };
    inline DescribeInstanceListResponseBody& setInstanceList(const vector<DescribeInstanceListResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeInstanceListResponseBody& setInstanceList(vector<DescribeInstanceListResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeInstanceListResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details about the Anti-DDoS Origin instances.
    shared_ptr<vector<DescribeInstanceListResponseBody::InstanceList>> instanceList_ {};
    // The details about the Anti-DDoS Origin instance.
    shared_ptr<string> requestId_ {};
    // The details about the Anti-DDoS Origin instances.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
