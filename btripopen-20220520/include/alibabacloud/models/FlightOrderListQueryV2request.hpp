// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(approve_id, approveId_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(page_Size, pageSize_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(supplier, supplier_);
      DARABONBA_PTR_TO_JSON(thirdpart_approve_id, thirdpartApproveId_);
      DARABONBA_PTR_TO_JSON(update_end_date, updateEndDate_);
      DARABONBA_PTR_TO_JSON(update_start_date, updateStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(approve_id, approveId_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(page_Size, pageSize_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(supplier, supplier_);
      DARABONBA_PTR_FROM_JSON(thirdpart_approve_id, thirdpartApproveId_);
      DARABONBA_PTR_FROM_JSON(update_end_date, updateEndDate_);
      DARABONBA_PTR_FROM_JSON(update_start_date, updateStartDate_);
    };
    FlightOrderListQueryV2Request() = default ;
    FlightOrderListQueryV2Request(const FlightOrderListQueryV2Request &) = default ;
    FlightOrderListQueryV2Request(FlightOrderListQueryV2Request &&) = default ;
    FlightOrderListQueryV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2Request() = default ;
    FlightOrderListQueryV2Request& operator=(const FlightOrderListQueryV2Request &) = default ;
    FlightOrderListQueryV2Request& operator=(FlightOrderListQueryV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approveId_ != nullptr
        && this->bookerId_ != nullptr && this->departId_ != nullptr && this->endDate_ != nullptr && this->pageSize_ != nullptr && this->scrollId_ != nullptr
        && this->startDate_ != nullptr && this->supplier_ != nullptr && this->thirdpartApproveId_ != nullptr && this->updateEndDate_ != nullptr && this->updateStartDate_ != nullptr; };
    // approveId Field Functions 
    bool hasApproveId() const { return this->approveId_ != nullptr;};
    void deleteApproveId() { this->approveId_ = nullptr;};
    inline const vector<string> & approveId() const { DARABONBA_PTR_GET_CONST(approveId_, vector<string>) };
    inline vector<string> approveId() { DARABONBA_PTR_GET(approveId_, vector<string>) };
    inline FlightOrderListQueryV2Request& setApproveId(const vector<string> & approveId) { DARABONBA_PTR_SET_VALUE(approveId_, approveId) };
    inline FlightOrderListQueryV2Request& setApproveId(vector<string> && approveId) { DARABONBA_PTR_SET_RVALUE(approveId_, approveId) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline const vector<string> & bookerId() const { DARABONBA_PTR_GET_CONST(bookerId_, vector<string>) };
    inline vector<string> bookerId() { DARABONBA_PTR_GET(bookerId_, vector<string>) };
    inline FlightOrderListQueryV2Request& setBookerId(const vector<string> & bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };
    inline FlightOrderListQueryV2Request& setBookerId(vector<string> && bookerId) { DARABONBA_PTR_SET_RVALUE(bookerId_, bookerId) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline const vector<string> & departId() const { DARABONBA_PTR_GET_CONST(departId_, vector<string>) };
    inline vector<string> departId() { DARABONBA_PTR_GET(departId_, vector<string>) };
    inline FlightOrderListQueryV2Request& setDepartId(const vector<string> & departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };
    inline FlightOrderListQueryV2Request& setDepartId(vector<string> && departId) { DARABONBA_PTR_SET_RVALUE(departId_, departId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline FlightOrderListQueryV2Request& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline FlightOrderListQueryV2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline FlightOrderListQueryV2Request& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline FlightOrderListQueryV2Request& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // supplier Field Functions 
    bool hasSupplier() const { return this->supplier_ != nullptr;};
    void deleteSupplier() { this->supplier_ = nullptr;};
    inline const vector<string> & supplier() const { DARABONBA_PTR_GET_CONST(supplier_, vector<string>) };
    inline vector<string> supplier() { DARABONBA_PTR_GET(supplier_, vector<string>) };
    inline FlightOrderListQueryV2Request& setSupplier(const vector<string> & supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };
    inline FlightOrderListQueryV2Request& setSupplier(vector<string> && supplier) { DARABONBA_PTR_SET_RVALUE(supplier_, supplier) };


    // thirdpartApproveId Field Functions 
    bool hasThirdpartApproveId() const { return this->thirdpartApproveId_ != nullptr;};
    void deleteThirdpartApproveId() { this->thirdpartApproveId_ = nullptr;};
    inline const vector<string> & thirdpartApproveId() const { DARABONBA_PTR_GET_CONST(thirdpartApproveId_, vector<string>) };
    inline vector<string> thirdpartApproveId() { DARABONBA_PTR_GET(thirdpartApproveId_, vector<string>) };
    inline FlightOrderListQueryV2Request& setThirdpartApproveId(const vector<string> & thirdpartApproveId) { DARABONBA_PTR_SET_VALUE(thirdpartApproveId_, thirdpartApproveId) };
    inline FlightOrderListQueryV2Request& setThirdpartApproveId(vector<string> && thirdpartApproveId) { DARABONBA_PTR_SET_RVALUE(thirdpartApproveId_, thirdpartApproveId) };


    // updateEndDate Field Functions 
    bool hasUpdateEndDate() const { return this->updateEndDate_ != nullptr;};
    void deleteUpdateEndDate() { this->updateEndDate_ = nullptr;};
    inline string updateEndDate() const { DARABONBA_PTR_GET_DEFAULT(updateEndDate_, "") };
    inline FlightOrderListQueryV2Request& setUpdateEndDate(string updateEndDate) { DARABONBA_PTR_SET_VALUE(updateEndDate_, updateEndDate) };


    // updateStartDate Field Functions 
    bool hasUpdateStartDate() const { return this->updateStartDate_ != nullptr;};
    void deleteUpdateStartDate() { this->updateStartDate_ = nullptr;};
    inline string updateStartDate() const { DARABONBA_PTR_GET_DEFAULT(updateStartDate_, "") };
    inline FlightOrderListQueryV2Request& setUpdateStartDate(string updateStartDate) { DARABONBA_PTR_SET_VALUE(updateStartDate_, updateStartDate) };


  protected:
    std::shared_ptr<vector<string>> approveId_ = nullptr;
    std::shared_ptr<vector<string>> bookerId_ = nullptr;
    std::shared_ptr<vector<string>> departId_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<vector<string>> supplier_ = nullptr;
    std::shared_ptr<vector<string>> thirdpartApproveId_ = nullptr;
    std::shared_ptr<string> updateEndDate_ = nullptr;
    std::shared_ptr<string> updateStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
