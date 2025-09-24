// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLTOOSSSUBSCRIPTIONRESPONSEBODYDATAITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLTOOSSSUBSCRIPTIONRESPONSEBODYDATAITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillToOSSSubscriptionResponseBodyDataItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillToOSSSubscriptionResponseBodyDataItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(BucketOwnerId, bucketOwnerId_);
      DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_TO_JSON(RowLimitPerFile, rowLimitPerFile_);
      DARABONBA_PTR_TO_JSON(SubscribeBucket, subscribeBucket_);
      DARABONBA_PTR_TO_JSON(SubscribeLanguage, subscribeLanguage_);
      DARABONBA_PTR_TO_JSON(SubscribeTime, subscribeTime_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillToOSSSubscriptionResponseBodyDataItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketOwnerId, bucketOwnerId_);
      DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
      DARABONBA_PTR_FROM_JSON(RowLimitPerFile, rowLimitPerFile_);
      DARABONBA_PTR_FROM_JSON(SubscribeBucket, subscribeBucket_);
      DARABONBA_PTR_FROM_JSON(SubscribeLanguage, subscribeLanguage_);
      DARABONBA_PTR_FROM_JSON(SubscribeTime, subscribeTime_);
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
    };
    QueryBillToOSSSubscriptionResponseBodyDataItemsItem() = default ;
    QueryBillToOSSSubscriptionResponseBodyDataItemsItem(const QueryBillToOSSSubscriptionResponseBodyDataItemsItem &) = default ;
    QueryBillToOSSSubscriptionResponseBodyDataItemsItem(QueryBillToOSSSubscriptionResponseBodyDataItemsItem &&) = default ;
    QueryBillToOSSSubscriptionResponseBodyDataItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillToOSSSubscriptionResponseBodyDataItemsItem() = default ;
    QueryBillToOSSSubscriptionResponseBodyDataItemsItem& operator=(const QueryBillToOSSSubscriptionResponseBodyDataItemsItem &) = default ;
    QueryBillToOSSSubscriptionResponseBodyDataItemsItem& operator=(QueryBillToOSSSubscriptionResponseBodyDataItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketOwnerId_ != nullptr
        && this->bucketPath_ != nullptr && this->rowLimitPerFile_ != nullptr && this->subscribeBucket_ != nullptr && this->subscribeLanguage_ != nullptr && this->subscribeTime_ != nullptr
        && this->subscribeType_ != nullptr; };
    // bucketOwnerId Field Functions 
    bool hasBucketOwnerId() const { return this->bucketOwnerId_ != nullptr;};
    void deleteBucketOwnerId() { this->bucketOwnerId_ = nullptr;};
    inline int64_t bucketOwnerId() const { DARABONBA_PTR_GET_DEFAULT(bucketOwnerId_, 0L) };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setBucketOwnerId(int64_t bucketOwnerId) { DARABONBA_PTR_SET_VALUE(bucketOwnerId_, bucketOwnerId) };


    // bucketPath Field Functions 
    bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
    void deleteBucketPath() { this->bucketPath_ = nullptr;};
    inline string bucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


    // rowLimitPerFile Field Functions 
    bool hasRowLimitPerFile() const { return this->rowLimitPerFile_ != nullptr;};
    void deleteRowLimitPerFile() { this->rowLimitPerFile_ = nullptr;};
    inline int32_t rowLimitPerFile() const { DARABONBA_PTR_GET_DEFAULT(rowLimitPerFile_, 0) };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setRowLimitPerFile(int32_t rowLimitPerFile) { DARABONBA_PTR_SET_VALUE(rowLimitPerFile_, rowLimitPerFile) };


    // subscribeBucket Field Functions 
    bool hasSubscribeBucket() const { return this->subscribeBucket_ != nullptr;};
    void deleteSubscribeBucket() { this->subscribeBucket_ = nullptr;};
    inline string subscribeBucket() const { DARABONBA_PTR_GET_DEFAULT(subscribeBucket_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setSubscribeBucket(string subscribeBucket) { DARABONBA_PTR_SET_VALUE(subscribeBucket_, subscribeBucket) };


    // subscribeLanguage Field Functions 
    bool hasSubscribeLanguage() const { return this->subscribeLanguage_ != nullptr;};
    void deleteSubscribeLanguage() { this->subscribeLanguage_ = nullptr;};
    inline string subscribeLanguage() const { DARABONBA_PTR_GET_DEFAULT(subscribeLanguage_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setSubscribeLanguage(string subscribeLanguage) { DARABONBA_PTR_SET_VALUE(subscribeLanguage_, subscribeLanguage) };


    // subscribeTime Field Functions 
    bool hasSubscribeTime() const { return this->subscribeTime_ != nullptr;};
    void deleteSubscribeTime() { this->subscribeTime_ = nullptr;};
    inline string subscribeTime() const { DARABONBA_PTR_GET_DEFAULT(subscribeTime_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setSubscribeTime(string subscribeTime) { DARABONBA_PTR_SET_VALUE(subscribeTime_, subscribeTime) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline QueryBillToOSSSubscriptionResponseBodyDataItemsItem& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // The owner ID of the Object Storage Service (OSS) bucket.
    std::shared_ptr<int64_t> bucketOwnerId_ = nullptr;
    // The path in the OSS bucket.
    std::shared_ptr<string> bucketPath_ = nullptr;
    // The maximum number of data rows in a single file. If the number of data rows in a bill exceeds the upper limit, the bill is split into multiple files. Then, multiple files are merged and compressed into a package.
    std::shared_ptr<int32_t> rowLimitPerFile_ = nullptr;
    // The ID of the OSS bucket that stores the subscribed bill.
    std::shared_ptr<string> subscribeBucket_ = nullptr;
    // The code of the language.
    // 
    // Valid values:
    // 
    // *   en: English
    // *   zh: Chinese
    std::shared_ptr<string> subscribeLanguage_ = nullptr;
    // The time when the subscribed bill was stored in the OSS bucket. The time is displayed in the YYYY-MM-DD hh:mm:ss format.
    std::shared_ptr<string> subscribeTime_ = nullptr;
    // The type of the subscribed bill. Valid values:
    // 
    // *   BillingItemDetailForBillingPeriod: the bill of a billable item.
    // *   InstanceDetailForBillingPeriod: the bill of an instance.
    std::shared_ptr<string> subscribeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
