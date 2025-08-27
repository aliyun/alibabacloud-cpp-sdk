// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYREQUEST_HPP_
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
  class IFlightOrderListQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id_list, applyIdList_);
      DARABONBA_PTR_TO_JSON(book_type_list, bookTypeList_);
      DARABONBA_PTR_TO_JSON(booker_id, bookerId_);
      DARABONBA_PTR_TO_JSON(end_date, endDate_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_TO_JSON(start_date, startDate_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id_list, thirdPartApplyIdList_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id_list, applyIdList_);
      DARABONBA_PTR_FROM_JSON(book_type_list, bookTypeList_);
      DARABONBA_PTR_FROM_JSON(booker_id, bookerId_);
      DARABONBA_PTR_FROM_JSON(end_date, endDate_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(scroll_id, scrollId_);
      DARABONBA_PTR_FROM_JSON(start_date, startDate_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id_list, thirdPartApplyIdList_);
    };
    IFlightOrderListQueryRequest() = default ;
    IFlightOrderListQueryRequest(const IFlightOrderListQueryRequest &) = default ;
    IFlightOrderListQueryRequest(IFlightOrderListQueryRequest &&) = default ;
    IFlightOrderListQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryRequest() = default ;
    IFlightOrderListQueryRequest& operator=(const IFlightOrderListQueryRequest &) = default ;
    IFlightOrderListQueryRequest& operator=(IFlightOrderListQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyIdList_ != nullptr
        && this->bookTypeList_ != nullptr && this->bookerId_ != nullptr && this->endDate_ != nullptr && this->pageSize_ != nullptr && this->scrollId_ != nullptr
        && this->startDate_ != nullptr && this->thirdPartApplyIdList_ != nullptr; };
    // applyIdList Field Functions 
    bool hasApplyIdList() const { return this->applyIdList_ != nullptr;};
    void deleteApplyIdList() { this->applyIdList_ = nullptr;};
    inline const vector<string> & applyIdList() const { DARABONBA_PTR_GET_CONST(applyIdList_, vector<string>) };
    inline vector<string> applyIdList() { DARABONBA_PTR_GET(applyIdList_, vector<string>) };
    inline IFlightOrderListQueryRequest& setApplyIdList(const vector<string> & applyIdList) { DARABONBA_PTR_SET_VALUE(applyIdList_, applyIdList) };
    inline IFlightOrderListQueryRequest& setApplyIdList(vector<string> && applyIdList) { DARABONBA_PTR_SET_RVALUE(applyIdList_, applyIdList) };


    // bookTypeList Field Functions 
    bool hasBookTypeList() const { return this->bookTypeList_ != nullptr;};
    void deleteBookTypeList() { this->bookTypeList_ = nullptr;};
    inline const vector<int32_t> & bookTypeList() const { DARABONBA_PTR_GET_CONST(bookTypeList_, vector<int32_t>) };
    inline vector<int32_t> bookTypeList() { DARABONBA_PTR_GET(bookTypeList_, vector<int32_t>) };
    inline IFlightOrderListQueryRequest& setBookTypeList(const vector<int32_t> & bookTypeList) { DARABONBA_PTR_SET_VALUE(bookTypeList_, bookTypeList) };
    inline IFlightOrderListQueryRequest& setBookTypeList(vector<int32_t> && bookTypeList) { DARABONBA_PTR_SET_RVALUE(bookTypeList_, bookTypeList) };


    // bookerId Field Functions 
    bool hasBookerId() const { return this->bookerId_ != nullptr;};
    void deleteBookerId() { this->bookerId_ = nullptr;};
    inline const vector<string> & bookerId() const { DARABONBA_PTR_GET_CONST(bookerId_, vector<string>) };
    inline vector<string> bookerId() { DARABONBA_PTR_GET(bookerId_, vector<string>) };
    inline IFlightOrderListQueryRequest& setBookerId(const vector<string> & bookerId) { DARABONBA_PTR_SET_VALUE(bookerId_, bookerId) };
    inline IFlightOrderListQueryRequest& setBookerId(vector<string> && bookerId) { DARABONBA_PTR_SET_RVALUE(bookerId_, bookerId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline IFlightOrderListQueryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline IFlightOrderListQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string scrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline IFlightOrderListQueryRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline IFlightOrderListQueryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // thirdPartApplyIdList Field Functions 
    bool hasThirdPartApplyIdList() const { return this->thirdPartApplyIdList_ != nullptr;};
    void deleteThirdPartApplyIdList() { this->thirdPartApplyIdList_ = nullptr;};
    inline const vector<string> & thirdPartApplyIdList() const { DARABONBA_PTR_GET_CONST(thirdPartApplyIdList_, vector<string>) };
    inline vector<string> thirdPartApplyIdList() { DARABONBA_PTR_GET(thirdPartApplyIdList_, vector<string>) };
    inline IFlightOrderListQueryRequest& setThirdPartApplyIdList(const vector<string> & thirdPartApplyIdList) { DARABONBA_PTR_SET_VALUE(thirdPartApplyIdList_, thirdPartApplyIdList) };
    inline IFlightOrderListQueryRequest& setThirdPartApplyIdList(vector<string> && thirdPartApplyIdList) { DARABONBA_PTR_SET_RVALUE(thirdPartApplyIdList_, thirdPartApplyIdList) };


  protected:
    std::shared_ptr<vector<string>> applyIdList_ = nullptr;
    std::shared_ptr<vector<int32_t>> bookTypeList_ = nullptr;
    std::shared_ptr<vector<string>> bookerId_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> scrollId_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<vector<string>> thirdPartApplyIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
