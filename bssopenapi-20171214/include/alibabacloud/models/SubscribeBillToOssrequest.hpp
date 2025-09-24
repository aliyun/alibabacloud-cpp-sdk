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
    virtual bool empty() const override { this->beginBillingCycle_ != nullptr
        && this->bucketOwnerId_ != nullptr && this->bucketPath_ != nullptr && this->multAccountRelSubscribe_ != nullptr && this->rowLimitPerFile_ != nullptr && this->subscribeBucket_ != nullptr
        && this->subscribeType_ != nullptr && this->usingSsl_ != nullptr; };
    // beginBillingCycle Field Functions 
    bool hasBeginBillingCycle() const { return this->beginBillingCycle_ != nullptr;};
    void deleteBeginBillingCycle() { this->beginBillingCycle_ = nullptr;};
    inline string beginBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(beginBillingCycle_, "") };
    inline SubscribeBillToOSSRequest& setBeginBillingCycle(string beginBillingCycle) { DARABONBA_PTR_SET_VALUE(beginBillingCycle_, beginBillingCycle) };


    // bucketOwnerId Field Functions 
    bool hasBucketOwnerId() const { return this->bucketOwnerId_ != nullptr;};
    void deleteBucketOwnerId() { this->bucketOwnerId_ = nullptr;};
    inline int64_t bucketOwnerId() const { DARABONBA_PTR_GET_DEFAULT(bucketOwnerId_, 0L) };
    inline SubscribeBillToOSSRequest& setBucketOwnerId(int64_t bucketOwnerId) { DARABONBA_PTR_SET_VALUE(bucketOwnerId_, bucketOwnerId) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline SubscribeBillToOSSRequest& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // multAccountRelSubscribe Field Functions 
    bool hasMultAccountRelSubscribe() const { return this->multAccountRelSubscribe_ != nullptr;};
    void deleteMultAccountRelSubscribe() { this->multAccountRelSubscribe_ = nullptr;};
    inline string multAccountRelSubscribe() const { DARABONBA_PTR_GET_DEFAULT(multAccountRelSubscribe_, "") };
    inline SubscribeBillToOSSRequest& setMultAccountRelSubscribe(string multAccountRelSubscribe) { DARABONBA_PTR_SET_VALUE(multAccountRelSubscribe_, multAccountRelSubscribe) };


    // rowLimitPerFile Field Functions 
    bool hasRowLimitPerFile() const { return this->rowLimitPerFile_ != nullptr;};
    void deleteRowLimitPerFile() { this->rowLimitPerFile_ = nullptr;};
    inline int32_t rowLimitPerFile() const { DARABONBA_PTR_GET_DEFAULT(rowLimitPerFile_, 0) };
    inline SubscribeBillToOSSRequest& setRowLimitPerFile(int32_t rowLimitPerFile) { DARABONBA_PTR_SET_VALUE(rowLimitPerFile_, rowLimitPerFile) };


    // subscribeBucket Field Functions 
    bool hasSubscribeBucket() const { return this->subscribeBucket_ != nullptr;};
    void deleteSubscribeBucket() { this->subscribeBucket_ = nullptr;};
    inline string subscribeBucket() const { DARABONBA_PTR_GET_DEFAULT(subscribeBucket_, "") };
    inline SubscribeBillToOSSRequest& setSubscribeBucket(string subscribeBucket) { DARABONBA_PTR_SET_VALUE(subscribeBucket_, subscribeBucket) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline SubscribeBillToOSSRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


    // usingSsl Field Functions 
    bool hasUsingSsl() const { return this->usingSsl_ != nullptr;};
    void deleteUsingSsl() { this->usingSsl_ = nullptr;};
    inline string usingSsl() const { DARABONBA_PTR_GET_DEFAULT(usingSsl_, "") };
    inline SubscribeBillToOSSRequest& setUsingSsl(string usingSsl) { DARABONBA_PTR_SET_VALUE(usingSsl_, usingSsl) };


  protected:
    // The initial billing cycle from which bills start to be pushed. After you subscribe to the bills, the system automatically pushes the data that is generated from the initial billing cycle to the current time. If the SubscribeType parameter is set to MonthBill, this parameter is invalid. Historical data is not pushed again. The data generated within the last year can be pushed.
    std::shared_ptr<string> beginBillingCycle_ = nullptr;
    // The owner ID of the OSS bucket that stores the bills. This parameter is required if you are a bidder or reseller and want to push data to an OSS bucket of a member account. In this case, you must specify this account as the account used to call this operation and grant the AliyunConsumeDump2OSSRole permission to this account. If you are a regular user, you do not need to set this parameter. By default, your account is used to call this operation.
    std::shared_ptr<int64_t> bucketOwnerId_ = nullptr;
    // The path of the OSS bucket.
    std::shared_ptr<string> bucketPath_ = nullptr;
    // The type of the account whose bills are to be pushed if multi-tier accounts are involved. Valid values:
    // 
    // *   MA: the master account and a non-managed member account in Finance Cloud
    // *   ACP1: a member account of a virtual network operator (VNO)
    // 
    // Default value: MA.
    std::shared_ptr<string> multAccountRelSubscribe_ = nullptr;
    // The upper limit of the number of lines in a single file. When the bill file exceeds the upper limit, it will be split into multiple files and merged into a compressed package.
    std::shared_ptr<int32_t> rowLimitPerFile_ = nullptr;
    // The OSS bucket that stores the bills to which you want to subscribe.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeBucket_ = nullptr;
    // The type of the bill to which you want to subscribe. Valid values:
    // 
    // *   BillingItemDetailForBillingPeriod: detailed bills of billable items
    // *   InstanceDetailForBillingPeriod: detailed bills of instances
    // *   BillingItemDetailMonthly: billable item-based bills summarized by billing cycle
    // *   InstanceDetailMonthly: instance-based bills summarized by billing cycle
    // *   SplitItemDetailDaily: split bills summarized by day
    // *   MonthBill: monthly bills in the PDF format. You can subscribe to the monthly PDF bills only of the master account.
    std::shared_ptr<string> subscribeType_ = nullptr;
    // Whether to protect network communications through the SSL (Secure Sockets Layer) encryption protocol. When this parameter is set to true, it means that SSL encryption is enabled to ensure the security and integrity of data transmission.
    std::shared_ptr<string> usingSsl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
