// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class SubscriptionBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_TO_JSON(BillFormat, billFormat_);
      DARABONBA_PTR_TO_JSON(BucketOwnerId, bucketOwnerId_);
      DARABONBA_PTR_TO_JSON(SubscribeBucket, subscribeBucket_);
      DARABONBA_PTR_TO_JSON(SubscribeSegmentSize, subscribeSegmentSize_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_FROM_JSON(BillFormat, billFormat_);
      DARABONBA_PTR_FROM_JSON(BucketOwnerId, bucketOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubscribeBucket, subscribeBucket_);
      DARABONBA_PTR_FROM_JSON(SubscribeSegmentSize, subscribeSegmentSize_);
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
    };
    SubscriptionBillRequest() = default ;
    SubscriptionBillRequest(const SubscriptionBillRequest &) = default ;
    SubscriptionBillRequest(SubscriptionBillRequest &&) = default ;
    SubscriptionBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionBillRequest() = default ;
    SubscriptionBillRequest& operator=(const SubscriptionBillRequest &) = default ;
    SubscriptionBillRequest& operator=(SubscriptionBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginBillingCycle_ == nullptr
        && this->billFormat_ == nullptr && this->bucketOwnerId_ == nullptr && this->subscribeBucket_ == nullptr && this->subscribeSegmentSize_ == nullptr && this->subscribeType_ == nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string getBeginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline SubscriptionBillRequest& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // billFormat Field Functions 
    bool hasBillFormat() const { return this->billFormat_ != nullptr;};
    void deleteBillFormat() { this->billFormat_ = nullptr;};
    inline string getBillFormat() const { DARABONBA_PTR_GET_DEFAULT(billFormat_, "") };
    inline SubscriptionBillRequest& setBillFormat(string billFormat) { DARABONBA_PTR_SET_VALUE(billFormat_, billFormat) };


    // bucketOwnerId Field Functions 
    bool hasBucketOwnerId() const { return this->bucketOwnerId_ != nullptr;};
    void deleteBucketOwnerId() { this->bucketOwnerId_ = nullptr;};
    inline int64_t getBucketOwnerId() const { DARABONBA_PTR_GET_DEFAULT(bucketOwnerId_, 0L) };
    inline SubscriptionBillRequest& setBucketOwnerId(int64_t bucketOwnerId) { DARABONBA_PTR_SET_VALUE(bucketOwnerId_, bucketOwnerId) };


    // subscribeBucket Field Functions 
    bool hasSubscribeBucket() const { return this->subscribeBucket_ != nullptr;};
    void deleteSubscribeBucket() { this->subscribeBucket_ = nullptr;};
    inline string getSubscribeBucket() const { DARABONBA_PTR_GET_DEFAULT(subscribeBucket_, "") };
    inline SubscriptionBillRequest& setSubscribeBucket(string subscribeBucket) { DARABONBA_PTR_SET_VALUE(subscribeBucket_, subscribeBucket) };


    // subscribeSegmentSize Field Functions 
    bool hasSubscribeSegmentSize() const { return this->subscribeSegmentSize_ != nullptr;};
    void deleteSubscribeSegmentSize() { this->subscribeSegmentSize_ = nullptr;};
    inline int32_t getSubscribeSegmentSize() const { DARABONBA_PTR_GET_DEFAULT(subscribeSegmentSize_, 0) };
    inline SubscriptionBillRequest& setSubscribeSegmentSize(int32_t subscribeSegmentSize) { DARABONBA_PTR_SET_VALUE(subscribeSegmentSize_, subscribeSegmentSize) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string getSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline SubscriptionBillRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // The billing month from which to start pushing bills. Format: yyyy-MM.
    // 
    // After a successful subscription, the system automatically pushes data from the start billing cycle to the current time. Data for up to the last six months (including the current month) can be pushed. If the specified month exceeds this range, the subscription is invalid.
    // 
    // This parameter is required.
    shared_ptr<string> beginBillingCycle_ {};
    // The bill file format. Valid values:
    // - csv
    // - parquet
    // 
    // If you subscribe to multiple file types, use separate buckets to avoid file overwriting.
    // 
    // This parameter is required.
    shared_ptr<string> billFormat_ {};
    // The UID of the account that owns the OSS bucket for storing files.
    // 
    // If a partner subscribes and needs to push files to the OSS bucket of a subordinate partner account, this account must be a subordinate partner account of the partner account. Grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subordinate partner account. 
    // 
    // If a partner subscribes and pushes files to the partner account\\"s own OSS bucket, grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the partner account.
    // 
    // This parameter is required.
    shared_ptr<int64_t> bucketOwnerId_ {};
    // The name of the OSS bucket for storing bill files.
    // 
    // This parameter is required.
    shared_ptr<string> subscribeBucket_ {};
    // The row count threshold for a single bill file. If the number of rows exceeds this threshold, the file is automatically split into multiple files. The naming convention for split files is `uid_billType_billCycle_SquenceNo_fileNo`.
    // 
    // All information in the file names is identical except for fileNo. These files belong to the same billing cycle and the same file type but are split into multiple files.
    shared_ptr<int32_t> subscribeSegmentSize_ {};
    // The subscription type. Valid values: 
    // - PartnerBillingItemDetailForBillingPeriod: billing item detail.
    // - PartnerBillingItemDetailMonthly: billing item monthly bill.
    // - PartnerInstanceDetailForBillingPeriod: instance bill detail.
    // - PartnerInstanceDetailMonthly: instance monthly bill.
    // 
    // This parameter is required.
    shared_ptr<string> subscribeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
