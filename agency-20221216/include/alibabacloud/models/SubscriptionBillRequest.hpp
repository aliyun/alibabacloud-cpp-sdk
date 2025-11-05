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
        && return this->billFormat_ == nullptr && return this->bucketOwnerId_ == nullptr && return this->subscribeBucket_ == nullptr && return this->subscribeSegmentSize_ == nullptr && return this->subscribeType_ == nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string beginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline SubscriptionBillRequest& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // billFormat Field Functions 
    bool hasBillFormat() const { return this->billFormat_ != nullptr;};
    void deleteBillFormat() { this->billFormat_ = nullptr;};
    inline string billFormat() const { DARABONBA_PTR_GET_DEFAULT(billFormat_, "") };
    inline SubscriptionBillRequest& setBillFormat(string billFormat) { DARABONBA_PTR_SET_VALUE(billFormat_, billFormat) };


    // bucketOwnerId Field Functions 
    bool hasBucketOwnerId() const { return this->bucketOwnerId_ != nullptr;};
    void deleteBucketOwnerId() { this->bucketOwnerId_ = nullptr;};
    inline int64_t bucketOwnerId() const { DARABONBA_PTR_GET_DEFAULT(bucketOwnerId_, 0L) };
    inline SubscriptionBillRequest& setBucketOwnerId(int64_t bucketOwnerId) { DARABONBA_PTR_SET_VALUE(bucketOwnerId_, bucketOwnerId) };


    // subscribeBucket Field Functions 
    bool hasSubscribeBucket() const { return this->subscribeBucket_ != nullptr;};
    void deleteSubscribeBucket() { this->subscribeBucket_ = nullptr;};
    inline string subscribeBucket() const { DARABONBA_PTR_GET_DEFAULT(subscribeBucket_, "") };
    inline SubscriptionBillRequest& setSubscribeBucket(string subscribeBucket) { DARABONBA_PTR_SET_VALUE(subscribeBucket_, subscribeBucket) };


    // subscribeSegmentSize Field Functions 
    bool hasSubscribeSegmentSize() const { return this->subscribeSegmentSize_ != nullptr;};
    void deleteSubscribeSegmentSize() { this->subscribeSegmentSize_ = nullptr;};
    inline int32_t subscribeSegmentSize() const { DARABONBA_PTR_GET_DEFAULT(subscribeSegmentSize_, 0) };
    inline SubscriptionBillRequest& setSubscribeSegmentSize(int32_t subscribeSegmentSize) { DARABONBA_PTR_SET_VALUE(subscribeSegmentSize_, subscribeSegmentSize) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline SubscriptionBillRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // The start month from which the bills are pushed. Specify the value in the yyyy-MM format.
    // 
    // After the subscription is generated, the system automatically pushes the bill data that is generated from the month that you specified to the current point in time. Data of up to six months can be pushed. The current month is included. If you subscribe to the bills for more than six months, the subscription is invalid.
    // 
    // This parameter is required.
    std::shared_ptr<string> beginBillingCycle_ = nullptr;
    // The file format of the bill. Valid values: csv and parquet.
    // 
    // If you subscribe to the bills of multiple file formats, we recommend that you store the bills in different OSS buckets to prevent file overwriting.
    // 
    // This parameter is required.
    std::shared_ptr<string> billFormat_ = nullptr;
    // The ID of the user to which the OSS bucket belongs.
    // 
    // If you are an eco-partner of Alibaba Cloud and you need to push the bills to the OSS bucket of a subordinate partner account, you must set this parameter to the ID of the subordinate partner account and grant the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission to the subordinate partner account.
    // 
    // If you are an eco-partner of Alibaba Cloud and you need to push the bills to the OSS bucket of your own account, your account must be granted the [AliyunConsumeDump2OSSRole](https://ram.console.aliyun.com/?spm=api-workbench.API%20Document.0.0.68c71e0fhmTSJp#/role/authorize?request=%7B%22Requests%22:%20%7B%22request1%22:%20%7B%22RoleName%22:%20%22AliyunConsumeDump2OSSRole%22,%20%22TemplateId%22:%20%22Dump2OSSRole%22%7D%7D,%20%22ReturnUrl%22:%20%22https:%2F%2Fusercenter2.aliyun.com%22,%20%22Service%22:%20%22Consume%22%7D) permission.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> bucketOwnerId_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket in which you want to store the bills.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeBucket_ = nullptr;
    // The maximum rows in a single bill file. If the number of bill rows exceed the upper limit, the bill is automatically split into multiple files. The name of each split file is in the `uid_billType_billCycle_SquenceNo_fileNo` format.
    // 
    // Files whose names are the same except for the fileNo field are of the same type and belong to the same billing cycle.
    std::shared_ptr<int32_t> subscribeSegmentSize_ = nullptr;
    // The type of the bill to which you want to subscribe. Valid values: PartnerBillingItemDetailForBillingPeriod, PartnerBillingItemDetailMonthly, PartnerInstanceDetailForBillingPeriod, and PartnerInstanceDetailMonthly.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
