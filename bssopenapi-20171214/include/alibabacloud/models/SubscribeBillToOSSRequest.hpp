// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEBILLTOOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEBILLTOOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SubscribeBillToOSSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeBillToOSSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_TO_JSON(BucketOwnerId, bucketOwnerId_);
      DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(MultAccountRelSubscribe, multAccountRelSubscribe_);
      DARABONBA_PTR_TO_JSON(RowLimitPerFile, rowLimitPerFile_);
      DARABONBA_PTR_TO_JSON(SubscribeBucket, subscribeBucket_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
      DARABONBA_PTR_TO_JSON(UsingSsl, usingSsl_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeBillToOSSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginBillingCycle, beginBillingCycle_);
      DARABONBA_PTR_FROM_JSON(BucketOwnerId, bucketOwnerId_);
      DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(MultAccountRelSubscribe, multAccountRelSubscribe_);
      DARABONBA_PTR_FROM_JSON(RowLimitPerFile, rowLimitPerFile_);
      DARABONBA_PTR_FROM_JSON(SubscribeBucket, subscribeBucket_);
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
      DARABONBA_PTR_FROM_JSON(UsingSsl, usingSsl_);
    };
    SubscribeBillToOSSRequest() = default ;
    SubscribeBillToOSSRequest(const SubscribeBillToOSSRequest &) = default ;
    SubscribeBillToOSSRequest(SubscribeBillToOSSRequest &&) = default ;
    SubscribeBillToOSSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeBillToOSSRequest() = default ;
    SubscribeBillToOSSRequest& operator=(const SubscribeBillToOSSRequest &) = default ;
    SubscribeBillToOSSRequest& operator=(SubscribeBillToOSSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginBillingCycle_ == nullptr
        && this->bucketOwnerId_ == nullptr && this->bucketPath_ == nullptr && this->multAccountRelSubscribe_ == nullptr && this->rowLimitPerFile_ == nullptr && this->subscribeBucket_ == nullptr
        && this->subscribeType_ == nullptr && this->usingSsl_ == nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string getBeginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline SubscribeBillToOSSRequest& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // bucketOwnerId Field Functions 
    bool hasBucketOwnerId() const { return this->bucketOwnerId_ != nullptr;};
    void deleteBucketOwnerId() { this->bucketOwnerId_ = nullptr;};
    inline int64_t getBucketOwnerId() const { DARABONBA_PTR_GET_DEFAULT(bucketOwnerId_, 0L) };
    inline SubscribeBillToOSSRequest& setBucketOwnerId(int64_t bucketOwnerId) { DARABONBA_PTR_SET_VALUE(bucketOwnerId_, bucketOwnerId) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline SubscribeBillToOSSRequest& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // multAccountRelSubscribe Field Functions 
    bool hasMultAccountRelSubscribe() const { return this->multAccountRelSubscribe_ != nullptr;};
    void deleteMultAccountRelSubscribe() { this->multAccountRelSubscribe_ = nullptr;};
    inline string getMultAccountRelSubscribe() const { DARABONBA_PTR_GET_DEFAULT(multAccountRelSubscribe_, "") };
    inline SubscribeBillToOSSRequest& setMultAccountRelSubscribe(string multAccountRelSubscribe) { DARABONBA_PTR_SET_VALUE(multAccountRelSubscribe_, multAccountRelSubscribe) };


    // rowLimitPerFile Field Functions 
    bool hasRowLimitPerFile() const { return this->rowLimitPerFile_ != nullptr;};
    void deleteRowLimitPerFile() { this->rowLimitPerFile_ = nullptr;};
    inline int32_t getRowLimitPerFile() const { DARABONBA_PTR_GET_DEFAULT(rowLimitPerFile_, 0) };
    inline SubscribeBillToOSSRequest& setRowLimitPerFile(int32_t rowLimitPerFile) { DARABONBA_PTR_SET_VALUE(rowLimitPerFile_, rowLimitPerFile) };


    // subscribeBucket Field Functions 
    bool hasSubscribeBucket() const { return this->subscribeBucket_ != nullptr;};
    void deleteSubscribeBucket() { this->subscribeBucket_ = nullptr;};
    inline string getSubscribeBucket() const { DARABONBA_PTR_GET_DEFAULT(subscribeBucket_, "") };
    inline SubscribeBillToOSSRequest& setSubscribeBucket(string subscribeBucket) { DARABONBA_PTR_SET_VALUE(subscribeBucket_, subscribeBucket) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string getSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline SubscribeBillToOSSRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


    // usingSsl Field Functions 
    bool hasUsingSsl() const { return this->usingSsl_ != nullptr;};
    void deleteUsingSsl() { this->usingSsl_ = nullptr;};
    inline string getUsingSsl() const { DARABONBA_PTR_GET_DEFAULT(usingSsl_, "") };
    inline SubscribeBillToOSSRequest& setUsingSsl(string usingSsl) { DARABONBA_PTR_SET_VALUE(usingSsl_, usingSsl) };


  protected:
    // The start billing cycle for pushing. After a successful subscription, the system automatically pushes data from the start billing cycle to the current time. This parameter is invalid for monthly bill PDF subscriptions, and historical data is not re-pushed. Data within the last year can be pushed.
    shared_ptr<string> beginBillingCycle_ {};
    // The UID of the OSS owner that stores the files. Specify this parameter if you are a Bid/Reseller subscriber and need to push files to a sub-account\\"s OSS. The specified account must be a sub-account of the calling account, and the AliyunConsumeDump2OSSRole permission must be granted to this account. Regular users do not need to specify this parameter. The default value is the calling account.
    shared_ptr<int64_t> bucketOwnerId_ {};
    // The specified directory under the bucket to which the subscription is delivered.
    shared_ptr<string> bucketPath_ {};
    // For multi-level accounts, specifies the type of bills to push. Valid values:
    // - MA: Pushes bills for the primary account and non-trusteeship linked accounts in the financial cloud.
    // - ACP1: Pushes bills for Partner Platform V2.0 sub-accounts.
    // 
    // Default value: MA.
    shared_ptr<string> multAccountRelSubscribe_ {};
    // The maximum number of rows per file. If a bill file exceeds this limit, it is split into multiple files and compressed into a single archive.
    shared_ptr<int32_t> rowLimitPerFile_ {};
    // The name of the OSS bucket that stores the subscribed bill files.
    // 
    // This parameter is required.
    shared_ptr<string> subscribeBucket_ {};
    // The type of the subscribed bill. Valid values:
    // - BillingItemDetailForBillingPeriod: billing item details.
    // - InstanceDetailForBillingPeriod: instance bill details.
    // - BillingItemDetailMonthly: billing item summary by billing cycle.
    // - InstanceDetailMonthly: instance bill summary by billing cycle.
    // - SplitItemDetailDaily: split bill daily summary.
    // - MonthBill: monthly bill PDF. Only MA subscription is supported.
    shared_ptr<string> subscribeType_ {};
    // Specifies whether to use the Secure Sockets Layer (SSL) encryption protocol to protect network communication. Valid values:
    // 
    // - true: Enables SSL encryption to ensure the security and integrity of data transmission.
    // 
    // - false (default): Does not enable SSL encryption.
    shared_ptr<string> usingSsl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
