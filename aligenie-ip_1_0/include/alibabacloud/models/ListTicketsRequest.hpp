// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListTicketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(IsDesc, isDesc_);
      DARABONBA_PTR_TO_JSON(IsNeedCallback, isNeedCallback_);
      DARABONBA_PTR_TO_JSON(IsNeedCharges, isNeedCharges_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(IsDesc, isDesc_);
      DARABONBA_PTR_FROM_JSON(IsNeedCallback, isNeedCallback_);
      DARABONBA_PTR_FROM_JSON(IsNeedCharges, isNeedCharges_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTicketsRequest() = default ;
    ListTicketsRequest(const ListTicketsRequest &) = default ;
    ListTicketsRequest(ListTicketsRequest &&) = default ;
    ListTicketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsRequest() = default ;
    ListTicketsRequest& operator=(const ListTicketsRequest &) = default ;
    ListTicketsRequest& operator=(ListTicketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->hotelId_ == nullptr && this->isDesc_ == nullptr && this->isNeedCallback_ == nullptr && this->isNeedCharges_ == nullptr && this->page_ == nullptr
        && this->roomNo_ == nullptr && this->sortField_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTicketsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ListTicketsRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // isDesc Field Functions 
    bool hasIsDesc() const { return this->isDesc_ != nullptr;};
    void deleteIsDesc() { this->isDesc_ = nullptr;};
    inline bool getIsDesc() const { DARABONBA_PTR_GET_DEFAULT(isDesc_, false) };
    inline ListTicketsRequest& setIsDesc(bool isDesc) { DARABONBA_PTR_SET_VALUE(isDesc_, isDesc) };


    // isNeedCallback Field Functions 
    bool hasIsNeedCallback() const { return this->isNeedCallback_ != nullptr;};
    void deleteIsNeedCallback() { this->isNeedCallback_ = nullptr;};
    inline bool getIsNeedCallback() const { DARABONBA_PTR_GET_DEFAULT(isNeedCallback_, false) };
    inline ListTicketsRequest& setIsNeedCallback(bool isNeedCallback) { DARABONBA_PTR_SET_VALUE(isNeedCallback_, isNeedCallback) };


    // isNeedCharges Field Functions 
    bool hasIsNeedCharges() const { return this->isNeedCharges_ != nullptr;};
    void deleteIsNeedCharges() { this->isNeedCharges_ = nullptr;};
    inline bool getIsNeedCharges() const { DARABONBA_PTR_GET_DEFAULT(isNeedCharges_, false) };
    inline ListTicketsRequest& setIsNeedCharges(bool isNeedCharges) { DARABONBA_PTR_SET_VALUE(isNeedCharges_, isNeedCharges) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListTicketsRequest::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListTicketsRequest::Page) };
    inline ListTicketsRequest::Page getPage() { DARABONBA_PTR_GET(page_, ListTicketsRequest::Page) };
    inline ListTicketsRequest& setPage(const ListTicketsRequest::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListTicketsRequest& setPage(ListTicketsRequest::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline ListTicketsRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListTicketsRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTicketsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTicketsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTicketsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<bool> isDesc_ {};
    shared_ptr<bool> isNeedCallback_ {};
    shared_ptr<bool> isNeedCharges_ {};
    shared_ptr<ListTicketsRequest::Page> page_ {};
    shared_ptr<string> roomNo_ {};
    shared_ptr<string> sortField_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
