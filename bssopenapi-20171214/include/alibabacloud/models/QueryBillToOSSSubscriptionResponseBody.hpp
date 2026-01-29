// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLTOOSSSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLTOOSSSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillToOSSSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillToOSSSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillToOSSSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryBillToOSSSubscriptionResponseBody() = default ;
    QueryBillToOSSSubscriptionResponseBody(const QueryBillToOSSSubscriptionResponseBody &) = default ;
    QueryBillToOSSSubscriptionResponseBody(QueryBillToOSSSubscriptionResponseBody &&) = default ;
    QueryBillToOSSSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillToOSSSubscriptionResponseBody() = default ;
    QueryBillToOSSSubscriptionResponseBody& operator=(const QueryBillToOSSSubscriptionResponseBody &) = default ;
    QueryBillToOSSSubscriptionResponseBody& operator=(QueryBillToOSSSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountID, accountID_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(BucketOwnerId, bucketOwnerId_);
            DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
            DARABONBA_PTR_TO_JSON(RowLimitPerFile, rowLimitPerFile_);
            DARABONBA_PTR_TO_JSON(SubscribeBucket, subscribeBucket_);
            DARABONBA_PTR_TO_JSON(SubscribeLanguage, subscribeLanguage_);
            DARABONBA_PTR_TO_JSON(SubscribeTime, subscribeTime_);
            DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(BucketOwnerId, bucketOwnerId_);
            DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
            DARABONBA_PTR_FROM_JSON(RowLimitPerFile, rowLimitPerFile_);
            DARABONBA_PTR_FROM_JSON(SubscribeBucket, subscribeBucket_);
            DARABONBA_PTR_FROM_JSON(SubscribeLanguage, subscribeLanguage_);
            DARABONBA_PTR_FROM_JSON(SubscribeTime, subscribeTime_);
            DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucketOwnerId_ == nullptr
        && this->bucketPath_ == nullptr && this->rowLimitPerFile_ == nullptr && this->subscribeBucket_ == nullptr && this->subscribeLanguage_ == nullptr && this->subscribeTime_ == nullptr
        && this->subscribeType_ == nullptr; };
          // bucketOwnerId Field Functions 
          bool hasBucketOwnerId() const { return this->bucketOwnerId_ != nullptr;};
          void deleteBucketOwnerId() { this->bucketOwnerId_ = nullptr;};
          inline int64_t getBucketOwnerId() const { DARABONBA_PTR_GET_DEFAULT(bucketOwnerId_, 0L) };
          inline Item& setBucketOwnerId(int64_t bucketOwnerId) { DARABONBA_PTR_SET_VALUE(bucketOwnerId_, bucketOwnerId) };


          // bucketPath Field Functions 
          bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
          void deleteBucketPath() { this->bucketPath_ = nullptr;};
          inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
          inline Item& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


          // rowLimitPerFile Field Functions 
          bool hasRowLimitPerFile() const { return this->rowLimitPerFile_ != nullptr;};
          void deleteRowLimitPerFile() { this->rowLimitPerFile_ = nullptr;};
          inline int32_t getRowLimitPerFile() const { DARABONBA_PTR_GET_DEFAULT(rowLimitPerFile_, 0) };
          inline Item& setRowLimitPerFile(int32_t rowLimitPerFile) { DARABONBA_PTR_SET_VALUE(rowLimitPerFile_, rowLimitPerFile) };


          // subscribeBucket Field Functions 
          bool hasSubscribeBucket() const { return this->subscribeBucket_ != nullptr;};
          void deleteSubscribeBucket() { this->subscribeBucket_ = nullptr;};
          inline string getSubscribeBucket() const { DARABONBA_PTR_GET_DEFAULT(subscribeBucket_, "") };
          inline Item& setSubscribeBucket(string subscribeBucket) { DARABONBA_PTR_SET_VALUE(subscribeBucket_, subscribeBucket) };


          // subscribeLanguage Field Functions 
          bool hasSubscribeLanguage() const { return this->subscribeLanguage_ != nullptr;};
          void deleteSubscribeLanguage() { this->subscribeLanguage_ = nullptr;};
          inline string getSubscribeLanguage() const { DARABONBA_PTR_GET_DEFAULT(subscribeLanguage_, "") };
          inline Item& setSubscribeLanguage(string subscribeLanguage) { DARABONBA_PTR_SET_VALUE(subscribeLanguage_, subscribeLanguage) };


          // subscribeTime Field Functions 
          bool hasSubscribeTime() const { return this->subscribeTime_ != nullptr;};
          void deleteSubscribeTime() { this->subscribeTime_ = nullptr;};
          inline string getSubscribeTime() const { DARABONBA_PTR_GET_DEFAULT(subscribeTime_, "") };
          inline Item& setSubscribeTime(string subscribeTime) { DARABONBA_PTR_SET_VALUE(subscribeTime_, subscribeTime) };


          // subscribeType Field Functions 
          bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
          void deleteSubscribeType() { this->subscribeType_ = nullptr;};
          inline string getSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
          inline Item& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


        protected:
          // The owner ID of the Object Storage Service (OSS) bucket.
          shared_ptr<int64_t> bucketOwnerId_ {};
          // The path in the OSS bucket.
          shared_ptr<string> bucketPath_ {};
          // The maximum number of data rows in a single file. If the number of data rows in a bill exceeds the upper limit, the bill is split into multiple files. Then, multiple files are merged and compressed into a package.
          shared_ptr<int32_t> rowLimitPerFile_ {};
          // The ID of the OSS bucket that stores the subscribed bill.
          shared_ptr<string> subscribeBucket_ {};
          // The code of the language.
          // 
          // Valid values:
          // 
          // *   en: English
          // *   zh: Chinese
          shared_ptr<string> subscribeLanguage_ {};
          // The time when the subscribed bill was stored in the OSS bucket. The time is displayed in the YYYY-MM-DD hh:mm:ss format.
          shared_ptr<string> subscribeTime_ {};
          // The type of the subscribed bill. Valid values:
          // 
          // *   BillingItemDetailForBillingPeriod: the bill of a billable item.
          // *   InstanceDetailForBillingPeriod: the bill of an instance.
          shared_ptr<string> subscribeType_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
        inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
        inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


      protected:
        shared_ptr<vector<Items::Item>> item_ {};
      };

      virtual bool empty() const override { return this->accountID_ == nullptr
        && this->accountName_ == nullptr && this->items_ == nullptr; };
      // accountID Field Functions 
      bool hasAccountID() const { return this->accountID_ != nullptr;};
      void deleteAccountID() { this->accountID_ = nullptr;};
      inline string getAccountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
      inline Data& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const Data::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, Data::Items) };
      inline Data::Items getItems() { DARABONBA_PTR_GET(items_, Data::Items) };
      inline Data& setItems(const Data::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(Data::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The ID of the account used to perform the query.
      shared_ptr<string> accountID_ {};
      // The name of the account used to perform the query.
      shared_ptr<string> accountName_ {};
      // The details of the subscribed bill.
      shared_ptr<Data::Items> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryBillToOSSSubscriptionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryBillToOSSSubscriptionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryBillToOSSSubscriptionResponseBody::Data) };
    inline QueryBillToOSSSubscriptionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryBillToOSSSubscriptionResponseBody::Data) };
    inline QueryBillToOSSSubscriptionResponseBody& setData(const QueryBillToOSSSubscriptionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBillToOSSSubscriptionResponseBody& setData(QueryBillToOSSSubscriptionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryBillToOSSSubscriptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBillToOSSSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryBillToOSSSubscriptionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryBillToOSSSubscriptionResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
