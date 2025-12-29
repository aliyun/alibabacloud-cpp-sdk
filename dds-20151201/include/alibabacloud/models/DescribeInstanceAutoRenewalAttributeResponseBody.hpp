// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWALATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeInstanceAutoRenewalAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewalAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewalAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAutoRenewalAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody(const DescribeInstanceAutoRenewalAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody(DescribeInstanceAutoRenewalAttributeResponseBody &&) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewalAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody& operator=(const DescribeInstanceAutoRenewalAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewalAttributeResponseBody& operator=(DescribeInstanceAutoRenewalAttributeResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
        virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->DBInstanceType_ == nullptr && this->dbInstanceId_ == nullptr && this->duration_ == nullptr && this->regionId_ == nullptr; };
        // autoRenew Field Functions 
        bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
        void deleteAutoRenew() { this->autoRenew_ = nullptr;};
        inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
        inline Item& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


        // DBInstanceType Field Functions 
        bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
        void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
        inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
        inline Item& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


        // dbInstanceId Field Functions 
        bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
        void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
        inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
        inline Item& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Item& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Item& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Indicates whether auto-renewal is enabled for the instance. Valid values:
        // 
        // *   **true**: Auto-renewal is enabled for the instance.
        // *   **false**: Auto-renewal is disabled for the instance.
        shared_ptr<string> autoRenew_ {};
        // The category of the instance. Valid values:
        // 
        // *   **replicate**: the standalone or replica set instance
        // *   **sharding**: the sharded cluster instance
        shared_ptr<string> DBInstanceType_ {};
        // The ID of the instance.
        shared_ptr<string> dbInstanceId_ {};
        // The auto-renewal period. Unit: months.
        // 
        // > * This parameter is ruturned only when the returned value of the **AutoRenew** parameter is **true**.
        // > * You can call the [ModifyInstanceAutoRenewalAttribute](https://help.aliyun.com/document_detail/145979.html) operation to modify the auto-renewal period.
        shared_ptr<string> duration_ {};
        // The region ID of the instance.
        shared_ptr<string> regionId_ {};
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

    virtual bool empty() const override { return this->items_ == nullptr
        && this->itemsNumbers_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeInstanceAutoRenewalAttributeResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeInstanceAutoRenewalAttributeResponseBody::Items) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeInstanceAutoRenewalAttributeResponseBody::Items) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setItems(const DescribeInstanceAutoRenewalAttributeResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setItems(DescribeInstanceAutoRenewalAttributeResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int32_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setItemsNumbers(int32_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAutoRenewalAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about returned entries.
    shared_ptr<DescribeInstanceAutoRenewalAttributeResponseBody::Items> items_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> itemsNumbers_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries that were returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
