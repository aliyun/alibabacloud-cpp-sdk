// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBLOGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBLogFilesResponseBodyHaLogItems.hpp>
#include <alibabacloud/models/DescribeDBLogFilesResponseBodySwitchListItems.hpp>
#include <alibabacloud/models/DescribeDBLogFilesResponseBodySwitchLogItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBLogFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBLogFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(HaLogItems, haLogItems_);
      DARABONBA_PTR_TO_JSON(HaStatus, haStatus_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SwitchListItems, switchListItems_);
      DARABONBA_PTR_TO_JSON(SwitchLogItems, switchLogItems_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBLogFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(HaLogItems, haLogItems_);
      DARABONBA_PTR_FROM_JSON(HaStatus, haStatus_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SwitchListItems, switchListItems_);
      DARABONBA_PTR_FROM_JSON(SwitchLogItems, switchLogItems_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeDBLogFilesResponseBody() = default ;
    DescribeDBLogFilesResponseBody(const DescribeDBLogFilesResponseBody &) = default ;
    DescribeDBLogFilesResponseBody(DescribeDBLogFilesResponseBody &&) = default ;
    DescribeDBLogFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBLogFilesResponseBody() = default ;
    DescribeDBLogFilesResponseBody& operator=(const DescribeDBLogFilesResponseBody &) = default ;
    DescribeDBLogFilesResponseBody& operator=(DescribeDBLogFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceName_ != nullptr
        && this->DBInstanceType_ != nullptr && this->haLogItems_ != nullptr && this->haStatus_ != nullptr && this->itemsNumbers_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->switchListItems_ != nullptr && this->switchLogItems_ != nullptr && this->totalRecords_ != nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBLogFilesResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDBLogFilesResponseBody& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // haLogItems Field Functions 
    bool hasHaLogItems() const { return this->haLogItems_ != nullptr;};
    void deleteHaLogItems() { this->haLogItems_ = nullptr;};
    inline const vector<DescribeDBLogFilesResponseBodyHaLogItems> & haLogItems() const { DARABONBA_PTR_GET_CONST(haLogItems_, vector<DescribeDBLogFilesResponseBodyHaLogItems>) };
    inline vector<DescribeDBLogFilesResponseBodyHaLogItems> haLogItems() { DARABONBA_PTR_GET(haLogItems_, vector<DescribeDBLogFilesResponseBodyHaLogItems>) };
    inline DescribeDBLogFilesResponseBody& setHaLogItems(const vector<DescribeDBLogFilesResponseBodyHaLogItems> & haLogItems) { DARABONBA_PTR_SET_VALUE(haLogItems_, haLogItems) };
    inline DescribeDBLogFilesResponseBody& setHaLogItems(vector<DescribeDBLogFilesResponseBodyHaLogItems> && haLogItems) { DARABONBA_PTR_SET_RVALUE(haLogItems_, haLogItems) };


    // haStatus Field Functions 
    bool hasHaStatus() const { return this->haStatus_ != nullptr;};
    void deleteHaStatus() { this->haStatus_ = nullptr;};
    inline int32_t haStatus() const { DARABONBA_PTR_GET_DEFAULT(haStatus_, 0) };
    inline DescribeDBLogFilesResponseBody& setHaStatus(int32_t haStatus) { DARABONBA_PTR_SET_VALUE(haStatus_, haStatus) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int32_t itemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0) };
    inline DescribeDBLogFilesResponseBody& setItemsNumbers(int32_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBLogFilesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBLogFilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBLogFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // switchListItems Field Functions 
    bool hasSwitchListItems() const { return this->switchListItems_ != nullptr;};
    void deleteSwitchListItems() { this->switchListItems_ = nullptr;};
    inline const vector<DescribeDBLogFilesResponseBodySwitchListItems> & switchListItems() const { DARABONBA_PTR_GET_CONST(switchListItems_, vector<DescribeDBLogFilesResponseBodySwitchListItems>) };
    inline vector<DescribeDBLogFilesResponseBodySwitchListItems> switchListItems() { DARABONBA_PTR_GET(switchListItems_, vector<DescribeDBLogFilesResponseBodySwitchListItems>) };
    inline DescribeDBLogFilesResponseBody& setSwitchListItems(const vector<DescribeDBLogFilesResponseBodySwitchListItems> & switchListItems) { DARABONBA_PTR_SET_VALUE(switchListItems_, switchListItems) };
    inline DescribeDBLogFilesResponseBody& setSwitchListItems(vector<DescribeDBLogFilesResponseBodySwitchListItems> && switchListItems) { DARABONBA_PTR_SET_RVALUE(switchListItems_, switchListItems) };


    // switchLogItems Field Functions 
    bool hasSwitchLogItems() const { return this->switchLogItems_ != nullptr;};
    void deleteSwitchLogItems() { this->switchLogItems_ = nullptr;};
    inline const vector<DescribeDBLogFilesResponseBodySwitchLogItems> & switchLogItems() const { DARABONBA_PTR_GET_CONST(switchLogItems_, vector<DescribeDBLogFilesResponseBodySwitchLogItems>) };
    inline vector<DescribeDBLogFilesResponseBodySwitchLogItems> switchLogItems() { DARABONBA_PTR_GET(switchLogItems_, vector<DescribeDBLogFilesResponseBodySwitchLogItems>) };
    inline DescribeDBLogFilesResponseBody& setSwitchLogItems(const vector<DescribeDBLogFilesResponseBodySwitchLogItems> & switchLogItems) { DARABONBA_PTR_SET_VALUE(switchLogItems_, switchLogItems) };
    inline DescribeDBLogFilesResponseBody& setSwitchLogItems(vector<DescribeDBLogFilesResponseBodySwitchLogItems> && switchLogItems) { DARABONBA_PTR_SET_RVALUE(switchLogItems_, switchLogItems) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int32_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
    inline DescribeDBLogFilesResponseBody& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    std::shared_ptr<vector<DescribeDBLogFilesResponseBodyHaLogItems>> haLogItems_ = nullptr;
    std::shared_ptr<int32_t> haStatus_ = nullptr;
    std::shared_ptr<int32_t> itemsNumbers_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeDBLogFilesResponseBodySwitchListItems>> switchListItems_ = nullptr;
    std::shared_ptr<vector<DescribeDBLogFilesResponseBodySwitchLogItems>> switchLogItems_ = nullptr;
    std::shared_ptr<int32_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
