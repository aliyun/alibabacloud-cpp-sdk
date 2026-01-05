// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHALOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHALOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeHALogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHALogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(HaLogItems, haLogItems_);
      DARABONBA_PTR_TO_JSON(HaStatus, haStatus_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHALogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(HaLogItems, haLogItems_);
      DARABONBA_PTR_FROM_JSON(HaStatus, haStatus_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeHALogsResponseBody() = default ;
    DescribeHALogsResponseBody(const DescribeHALogsResponseBody &) = default ;
    DescribeHALogsResponseBody(DescribeHALogsResponseBody &&) = default ;
    DescribeHALogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHALogsResponseBody() = default ;
    DescribeHALogsResponseBody& operator=(const DescribeHALogsResponseBody &) = default ;
    DescribeHALogsResponseBody& operator=(DescribeHALogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HaLogItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HaLogItems& obj) { 
        DARABONBA_PTR_TO_JSON(SwitchCauseCode, switchCauseCode_);
        DARABONBA_PTR_TO_JSON(SwitchCauseDetail, switchCauseDetail_);
        DARABONBA_PTR_TO_JSON(SwitchFinishTime, switchFinishTime_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(SwitchStartTime, switchStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, HaLogItems& obj) { 
        DARABONBA_PTR_FROM_JSON(SwitchCauseCode, switchCauseCode_);
        DARABONBA_PTR_FROM_JSON(SwitchCauseDetail, switchCauseDetail_);
        DARABONBA_PTR_FROM_JSON(SwitchFinishTime, switchFinishTime_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(SwitchStartTime, switchStartTime_);
      };
      HaLogItems() = default ;
      HaLogItems(const HaLogItems &) = default ;
      HaLogItems(HaLogItems &&) = default ;
      HaLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HaLogItems() = default ;
      HaLogItems& operator=(const HaLogItems &) = default ;
      HaLogItems& operator=(HaLogItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->switchCauseCode_ == nullptr
        && this->switchCauseDetail_ == nullptr && this->switchFinishTime_ == nullptr && this->switchId_ == nullptr && this->switchStartTime_ == nullptr; };
      // switchCauseCode Field Functions 
      bool hasSwitchCauseCode() const { return this->switchCauseCode_ != nullptr;};
      void deleteSwitchCauseCode() { this->switchCauseCode_ = nullptr;};
      inline string getSwitchCauseCode() const { DARABONBA_PTR_GET_DEFAULT(switchCauseCode_, "") };
      inline HaLogItems& setSwitchCauseCode(string switchCauseCode) { DARABONBA_PTR_SET_VALUE(switchCauseCode_, switchCauseCode) };


      // switchCauseDetail Field Functions 
      bool hasSwitchCauseDetail() const { return this->switchCauseDetail_ != nullptr;};
      void deleteSwitchCauseDetail() { this->switchCauseDetail_ = nullptr;};
      inline string getSwitchCauseDetail() const { DARABONBA_PTR_GET_DEFAULT(switchCauseDetail_, "") };
      inline HaLogItems& setSwitchCauseDetail(string switchCauseDetail) { DARABONBA_PTR_SET_VALUE(switchCauseDetail_, switchCauseDetail) };


      // switchFinishTime Field Functions 
      bool hasSwitchFinishTime() const { return this->switchFinishTime_ != nullptr;};
      void deleteSwitchFinishTime() { this->switchFinishTime_ = nullptr;};
      inline string getSwitchFinishTime() const { DARABONBA_PTR_GET_DEFAULT(switchFinishTime_, "") };
      inline HaLogItems& setSwitchFinishTime(string switchFinishTime) { DARABONBA_PTR_SET_VALUE(switchFinishTime_, switchFinishTime) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline HaLogItems& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // switchStartTime Field Functions 
      bool hasSwitchStartTime() const { return this->switchStartTime_ != nullptr;};
      void deleteSwitchStartTime() { this->switchStartTime_ = nullptr;};
      inline string getSwitchStartTime() const { DARABONBA_PTR_GET_DEFAULT(switchStartTime_, "") };
      inline HaLogItems& setSwitchStartTime(string switchStartTime) { DARABONBA_PTR_SET_VALUE(switchStartTime_, switchStartTime) };


    protected:
      // The reason code of the failover.
      shared_ptr<string> switchCauseCode_ {};
      // The reason of the failover.
      shared_ptr<string> switchCauseDetail_ {};
      // The time when the failover ended.
      shared_ptr<string> switchFinishTime_ {};
      shared_ptr<string> switchId_ {};
      // The time when the failover started.
      shared_ptr<string> switchStartTime_ {};
    };

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->DBInstanceType_ == nullptr && this->haLogItems_ == nullptr && this->haStatus_ == nullptr && this->itemsNumbers_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalRecords_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeHALogsResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeHALogsResponseBody& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // haLogItems Field Functions 
    bool hasHaLogItems() const { return this->haLogItems_ != nullptr;};
    void deleteHaLogItems() { this->haLogItems_ = nullptr;};
    inline const vector<DescribeHALogsResponseBody::HaLogItems> & getHaLogItems() const { DARABONBA_PTR_GET_CONST(haLogItems_, vector<DescribeHALogsResponseBody::HaLogItems>) };
    inline vector<DescribeHALogsResponseBody::HaLogItems> getHaLogItems() { DARABONBA_PTR_GET(haLogItems_, vector<DescribeHALogsResponseBody::HaLogItems>) };
    inline DescribeHALogsResponseBody& setHaLogItems(const vector<DescribeHALogsResponseBody::HaLogItems> & haLogItems) { DARABONBA_PTR_SET_VALUE(haLogItems_, haLogItems) };
    inline DescribeHALogsResponseBody& setHaLogItems(vector<DescribeHALogsResponseBody::HaLogItems> && haLogItems) { DARABONBA_PTR_SET_RVALUE(haLogItems_, haLogItems) };


    // haStatus Field Functions 
    bool hasHaStatus() const { return this->haStatus_ != nullptr;};
    void deleteHaStatus() { this->haStatus_ = nullptr;};
    inline int32_t getHaStatus() const { DARABONBA_PTR_GET_DEFAULT(haStatus_, 0) };
    inline DescribeHALogsResponseBody& setHaStatus(int32_t haStatus) { DARABONBA_PTR_SET_VALUE(haStatus_, haStatus) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int32_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0) };
    inline DescribeHALogsResponseBody& setItemsNumbers(int32_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHALogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHALogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHALogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int32_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
    inline DescribeHALogsResponseBody& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> DBInstanceType_ {};
    // The failover logs.
    shared_ptr<vector<DescribeHALogsResponseBody::HaLogItems>> haLogItems_ {};
    shared_ptr<int32_t> haStatus_ {};
    shared_ptr<int32_t> itemsNumbers_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
