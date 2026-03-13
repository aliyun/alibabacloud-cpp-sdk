// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(approve_id, approveIdShrink_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerIdShrink_);
      DARABONBA_PTR_TO_JSON(depart_id, departIdShrink_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(page_Size, pageSize_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(supplier, supplierShrink_);
      DARABONBA_PTR_TO_JSON(thirdpart_approve_id, thirdpartApproveIdShrink_);
      DARABONBA_PTR_TO_JSON(update_end_date, updateEndDate_);
      DARABONBA_PTR_TO_JSON(update_start_date, updateStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(approve_id, approveIdShrink_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerIdShrink_);
      DARABONBA_PTR_FROM_JSON(depart_id, departIdShrink_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(page_Size, pageSize_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(supplier, supplierShrink_);
      DARABONBA_PTR_FROM_JSON(thirdpart_approve_id, thirdpartApproveIdShrink_);
      DARABONBA_PTR_FROM_JSON(update_end_date, updateEndDate_);
      DARABONBA_PTR_FROM_JSON(update_start_date, updateStartDate_);
    };
    FlightOrderListQueryV2ShrinkRequest() = default ;
    FlightOrderListQueryV2ShrinkRequest(const FlightOrderListQueryV2ShrinkRequest &) = default ;
    FlightOrderListQueryV2ShrinkRequest(FlightOrderListQueryV2ShrinkRequest &&) = default ;
    FlightOrderListQueryV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ShrinkRequest() = default ;
    FlightOrderListQueryV2ShrinkRequest& operator=(const FlightOrderListQueryV2ShrinkRequest &) = default ;
    FlightOrderListQueryV2ShrinkRequest& operator=(FlightOrderListQueryV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approveIdShrink_ == nullptr
        && this->bookerIdShrink_ == nullptr && this->departIdShrink_ == nullptr && this->endDate_ == nullptr && this->pageSize_ == nullptr && this->scrollId_ == nullptr
        && this->startDate_ == nullptr && this->supplierShrink_ == nullptr && this->thirdpartApproveIdShrink_ == nullptr && this->updateEndDate_ == nullptr && this->updateStartDate_ == nullptr; };
    // approveIdShrink Field Functions 
    bool hasApproveIdShrink() const { return this->approveIdShrink_ != nullptr;};
    void deleteApproveIdShrink() { this->approveIdShrink_ = nullptr;};
    inline string getApproveIdShrink() const { DARABONBA_PTR_GET_DEFAULT(approveIdShrink_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setApproveIdShrink(string approveIdShrink) { DARABONBA_PTR_SET_VALUE(approveIdShrink_, approveIdShrink) };


    // bookerIdShrink Field Functions 
    bool hasBookerIdShrink() const { return this->bookerIdShrink_ != nullptr;};
    void deleteBookerIdShrink() { this->bookerIdShrink_ = nullptr;};
    inline string getBookerIdShrink() const { DARABONBA_PTR_GET_DEFAULT(bookerIdShrink_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setBookerIdShrink(string bookerIdShrink) { DARABONBA_PTR_SET_VALUE(bookerIdShrink_, bookerIdShrink) };


    // departIdShrink Field Functions 
    bool hasDepartIdShrink() const { return this->departIdShrink_ != nullptr;};
    void deleteDepartIdShrink() { this->departIdShrink_ = nullptr;};
    inline string getDepartIdShrink() const { DARABONBA_PTR_GET_DEFAULT(departIdShrink_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setDepartIdShrink(string departIdShrink) { DARABONBA_PTR_SET_VALUE(departIdShrink_, departIdShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline FlightOrderListQueryV2ShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // supplierShrink Field Functions 
    bool hasSupplierShrink() const { return this->supplierShrink_ != nullptr;};
    void deleteSupplierShrink() { this->supplierShrink_ = nullptr;};
    inline string getSupplierShrink() const { DARABONBA_PTR_GET_DEFAULT(supplierShrink_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setSupplierShrink(string supplierShrink) { DARABONBA_PTR_SET_VALUE(supplierShrink_, supplierShrink) };


    // thirdpartApproveIdShrink Field Functions 
    bool hasThirdpartApproveIdShrink() const { return this->thirdpartApproveIdShrink_ != nullptr;};
    void deleteThirdpartApproveIdShrink() { this->thirdpartApproveIdShrink_ = nullptr;};
    inline string getThirdpartApproveIdShrink() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApproveIdShrink_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setThirdpartApproveIdShrink(string thirdpartApproveIdShrink) { DARABONBA_PTR_SET_VALUE(thirdpartApproveIdShrink_, thirdpartApproveIdShrink) };


    // updateEndDate Field Functions 
    bool hasUpdateEndDate() const { return this->updateEndDate_ != nullptr;};
    void deleteUpdateEndDate() { this->updateEndDate_ = nullptr;};
    inline string getUpdateEndDate() const { DARABONBA_PTR_GET_DEFAULT(updateEndDate_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setUpdateEndDate(string updateEndDate) { DARABONBA_PTR_SET_VALUE(updateEndDate_, updateEndDate) };


    // updateStartDate Field Functions 
    bool hasUpdateStartDate() const { return this->updateStartDate_ != nullptr;};
    void deleteUpdateStartDate() { this->updateStartDate_ = nullptr;};
    inline string getUpdateStartDate() const { DARABONBA_PTR_GET_DEFAULT(updateStartDate_, "") };
    inline FlightOrderListQueryV2ShrinkRequest& setUpdateStartDate(string updateStartDate) { DARABONBA_PTR_SET_VALUE(updateStartDate_, updateStartDate) };


  protected:
    shared_ptr<string> approveIdShrink_ {};
    shared_ptr<string> bookerIdShrink_ {};
    shared_ptr<string> departIdShrink_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> scrollId_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> supplierShrink_ {};
    shared_ptr<string> thirdpartApproveIdShrink_ {};
    shared_ptr<string> updateEndDate_ {};
    shared_ptr<string> updateStartDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
