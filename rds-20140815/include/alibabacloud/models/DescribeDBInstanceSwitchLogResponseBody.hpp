// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESWITCHLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESWITCHLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceSwitchLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSwitchLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSwitchLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDBInstanceSwitchLogResponseBody() = default ;
    DescribeDBInstanceSwitchLogResponseBody(const DescribeDBInstanceSwitchLogResponseBody &) = default ;
    DescribeDBInstanceSwitchLogResponseBody(DescribeDBInstanceSwitchLogResponseBody &&) = default ;
    DescribeDBInstanceSwitchLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSwitchLogResponseBody() = default ;
    DescribeDBInstanceSwitchLogResponseBody& operator=(const DescribeDBInstanceSwitchLogResponseBody &) = default ;
    DescribeDBInstanceSwitchLogResponseBody& operator=(DescribeDBInstanceSwitchLogResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AffectedSessions, affectedSessions_);
          DARABONBA_PTR_TO_JSON(HAStatus, HAStatus_);
          DARABONBA_PTR_TO_JSON(SwitchCauseCode, switchCauseCode_);
          DARABONBA_PTR_TO_JSON(SwitchCauseDetail, switchCauseDetail_);
          DARABONBA_PTR_TO_JSON(SwitchFinishTime, switchFinishTime_);
          DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
          DARABONBA_PTR_TO_JSON(SwitchStartTime, switchStartTime_);
          DARABONBA_PTR_TO_JSON(TotalSessions, totalSessions_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(AffectedSessions, affectedSessions_);
          DARABONBA_PTR_FROM_JSON(HAStatus, HAStatus_);
          DARABONBA_PTR_FROM_JSON(SwitchCauseCode, switchCauseCode_);
          DARABONBA_PTR_FROM_JSON(SwitchCauseDetail, switchCauseDetail_);
          DARABONBA_PTR_FROM_JSON(SwitchFinishTime, switchFinishTime_);
          DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
          DARABONBA_PTR_FROM_JSON(SwitchStartTime, switchStartTime_);
          DARABONBA_PTR_FROM_JSON(TotalSessions, totalSessions_);
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
        virtual bool empty() const override { return this->affectedSessions_ == nullptr
        && this->HAStatus_ == nullptr && this->switchCauseCode_ == nullptr && this->switchCauseDetail_ == nullptr && this->switchFinishTime_ == nullptr && this->switchId_ == nullptr
        && this->switchStartTime_ == nullptr && this->totalSessions_ == nullptr; };
        // affectedSessions Field Functions 
        bool hasAffectedSessions() const { return this->affectedSessions_ != nullptr;};
        void deleteAffectedSessions() { this->affectedSessions_ = nullptr;};
        inline string getAffectedSessions() const { DARABONBA_PTR_GET_DEFAULT(affectedSessions_, "") };
        inline Item& setAffectedSessions(string affectedSessions) { DARABONBA_PTR_SET_VALUE(affectedSessions_, affectedSessions) };


        // HAStatus Field Functions 
        bool hasHAStatus() const { return this->HAStatus_ != nullptr;};
        void deleteHAStatus() { this->HAStatus_ = nullptr;};
        inline string getHAStatus() const { DARABONBA_PTR_GET_DEFAULT(HAStatus_, "") };
        inline Item& setHAStatus(string HAStatus) { DARABONBA_PTR_SET_VALUE(HAStatus_, HAStatus) };


        // switchCauseCode Field Functions 
        bool hasSwitchCauseCode() const { return this->switchCauseCode_ != nullptr;};
        void deleteSwitchCauseCode() { this->switchCauseCode_ = nullptr;};
        inline string getSwitchCauseCode() const { DARABONBA_PTR_GET_DEFAULT(switchCauseCode_, "") };
        inline Item& setSwitchCauseCode(string switchCauseCode) { DARABONBA_PTR_SET_VALUE(switchCauseCode_, switchCauseCode) };


        // switchCauseDetail Field Functions 
        bool hasSwitchCauseDetail() const { return this->switchCauseDetail_ != nullptr;};
        void deleteSwitchCauseDetail() { this->switchCauseDetail_ = nullptr;};
        inline string getSwitchCauseDetail() const { DARABONBA_PTR_GET_DEFAULT(switchCauseDetail_, "") };
        inline Item& setSwitchCauseDetail(string switchCauseDetail) { DARABONBA_PTR_SET_VALUE(switchCauseDetail_, switchCauseDetail) };


        // switchFinishTime Field Functions 
        bool hasSwitchFinishTime() const { return this->switchFinishTime_ != nullptr;};
        void deleteSwitchFinishTime() { this->switchFinishTime_ = nullptr;};
        inline string getSwitchFinishTime() const { DARABONBA_PTR_GET_DEFAULT(switchFinishTime_, "") };
        inline Item& setSwitchFinishTime(string switchFinishTime) { DARABONBA_PTR_SET_VALUE(switchFinishTime_, switchFinishTime) };


        // switchId Field Functions 
        bool hasSwitchId() const { return this->switchId_ != nullptr;};
        void deleteSwitchId() { this->switchId_ = nullptr;};
        inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
        inline Item& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


        // switchStartTime Field Functions 
        bool hasSwitchStartTime() const { return this->switchStartTime_ != nullptr;};
        void deleteSwitchStartTime() { this->switchStartTime_ = nullptr;};
        inline string getSwitchStartTime() const { DARABONBA_PTR_GET_DEFAULT(switchStartTime_, "") };
        inline Item& setSwitchStartTime(string switchStartTime) { DARABONBA_PTR_SET_VALUE(switchStartTime_, switchStartTime) };


        // totalSessions Field Functions 
        bool hasTotalSessions() const { return this->totalSessions_ != nullptr;};
        void deleteTotalSessions() { this->totalSessions_ = nullptr;};
        inline string getTotalSessions() const { DARABONBA_PTR_GET_DEFAULT(totalSessions_, "") };
        inline Item& setTotalSessions(string totalSessions) { DARABONBA_PTR_SET_VALUE(totalSessions_, totalSessions) };


      protected:
        shared_ptr<string> affectedSessions_ {};
        shared_ptr<string> HAStatus_ {};
        shared_ptr<string> switchCauseCode_ {};
        shared_ptr<string> switchCauseDetail_ {};
        shared_ptr<string> switchFinishTime_ {};
        shared_ptr<string> switchId_ {};
        shared_ptr<string> switchStartTime_ {};
        shared_ptr<string> totalSessions_ {};
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

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceSwitchLogResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDBInstanceSwitchLogResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDBInstanceSwitchLogResponseBody::Items) };
    inline DescribeDBInstanceSwitchLogResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDBInstanceSwitchLogResponseBody::Items) };
    inline DescribeDBInstanceSwitchLogResponseBody& setItems(const DescribeDBInstanceSwitchLogResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceSwitchLogResponseBody& setItems(DescribeDBInstanceSwitchLogResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstanceSwitchLogResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDBInstanceSwitchLogResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSwitchLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDBInstanceSwitchLogResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<DescribeDBInstanceSwitchLogResponseBody::Items> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
