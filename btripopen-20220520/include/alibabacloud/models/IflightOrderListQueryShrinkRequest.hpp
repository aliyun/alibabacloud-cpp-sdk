// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id_list, applyIdListShrink_);
      DARABONBA_PTR_TO_JSON(book_type_list, bookTypeListShrink_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerIdShrink_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id_list, thirdPartApplyIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id_list, applyIdListShrink_);
      DARABONBA_PTR_FROM_JSON(book_type_list, bookTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerIdShrink_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id_list, thirdPartApplyIdListShrink_);
    };
    IFlightOrderListQueryShrinkRequest() = default ;
    IFlightOrderListQueryShrinkRequest(const IFlightOrderListQueryShrinkRequest &) = default ;
    IFlightOrderListQueryShrinkRequest(IFlightOrderListQueryShrinkRequest &&) = default ;
    IFlightOrderListQueryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryShrinkRequest() = default ;
    IFlightOrderListQueryShrinkRequest& operator=(const IFlightOrderListQueryShrinkRequest &) = default ;
    IFlightOrderListQueryShrinkRequest& operator=(IFlightOrderListQueryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyIdListShrink_ != nullptr
        && this->bookTypeListShrink_ != nullptr && this->bookerIdShrink_ != nullptr && this->endDate_ != nullptr && this->pageSize_ != nullptr && this->scrollId_ != nullptr
        && this->startDate_ != nullptr && this->thirdPartApplyIdListShrink_ != nullptr; };
    // applyIdListShrink Field Functions 
    bool hasApplyIdListShrink() const { return this->applyIdListShrink_ != nullptr;};
    void deleteApplyIdListShrink() { this->applyIdListShrink_ = nullptr;};
    inline string applyIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(applyIdListShrink_, "") };
    inline IFlightOrderListQueryShrinkRequest& setApplyIdListShrink(string applyIdListShrink) { DARABONBA_PTR_SET_VALUE(applyIdListShrink_, applyIdListShrink) };


    // bookTypeListShrink Field Functions 
    bool hasBookTypeListShrink() const { return this->bookTypeListShrink_ != nullptr;};
    void deleteBookTypeListShrink() { this->bookTypeListShrink_ = nullptr;};
    inline string bookTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(bookTypeListShrink_, "") };
    inline IFlightOrderListQueryShrinkRequest& setBookTypeListShrink(string bookTypeListShrink) { DARABONBA_PTR_SET_VALUE(bookTypeListShrink_, bookTypeListShrink) };


    // bookerIdShrink Field Functions 
    bool hasBookerIdShrink() const { return this->bookerIdShrink_ != nullptr;};
    void deleteBookerIdShrink() { this->bookerIdShrink_ = nullptr;};
    inline string bookerIdShrink() const { DARABONBA_PTR_GET_DEFAULT(bookerIdShrink_, "") };
    inline IFlightOrderListQueryShrinkRequest& setBookerIdShrink(string bookerIdShrink) { DARABONBA_PTR_SET_VALUE(bookerIdShrink_, bookerIdShrink) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline IFlightOrderListQueryShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline IFlightOrderListQueryShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline IFlightOrderListQueryShrinkRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline IFlightOrderListQueryShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // thirdPartApplyIdListShrink Field Functions 
    bool hasThirdPartApplyIdListShrink() const { return this->thirdPartApplyIdListShrink_ != nullptr;};
    void deleteThirdPartApplyIdListShrink() { this->thirdPartApplyIdListShrink_ = nullptr;};
    inline string thirdPartApplyIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyIdListShrink_, "") };
    inline IFlightOrderListQueryShrinkRequest& setThirdPartApplyIdListShrink(string thirdPartApplyIdListShrink) { DARABONBA_PTR_SET_VALUE(thirdPartApplyIdListShrink_, thirdPartApplyIdListShrink) };


  protected:
    std::shared_ptr<string> applyIdListShrink_ = nullptr;
    std::shared_ptr<string> bookTypeListShrink_ = nullptr;
    std::shared_ptr<string> bookerIdShrink_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> thirdPartApplyIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
