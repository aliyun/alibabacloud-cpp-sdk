// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEGETHOTELROOMDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGEGETHOTELROOMDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PageGetHotelRoomDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageGetHotelRoomDevicesResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, PageGetHotelRoomDevicesResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    PageGetHotelRoomDevicesResponseBody() = default ;
    PageGetHotelRoomDevicesResponseBody(const PageGetHotelRoomDevicesResponseBody &) = default ;
    PageGetHotelRoomDevicesResponseBody(PageGetHotelRoomDevicesResponseBody &&) = default ;
    PageGetHotelRoomDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageGetHotelRoomDevicesResponseBody() = default ;
    PageGetHotelRoomDevicesResponseBody& operator=(const PageGetHotelRoomDevicesResponseBody &) = default ;
    PageGetHotelRoomDevicesResponseBody& operator=(PageGetHotelRoomDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FirmwareVersion, firmwareVersion_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FirmwareVersion, firmwareVersion_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firmwareVersion_ == nullptr
        && this->hotelId_ == nullptr && this->mac_ == nullptr && this->onlineStatus_ == nullptr && this->roomNo_ == nullptr && this->sn_ == nullptr; };
      // firmwareVersion Field Functions 
      bool hasFirmwareVersion() const { return this->firmwareVersion_ != nullptr;};
      void deleteFirmwareVersion() { this->firmwareVersion_ = nullptr;};
      inline string getFirmwareVersion() const { DARABONBA_PTR_GET_DEFAULT(firmwareVersion_, "") };
      inline Result& setFirmwareVersion(string firmwareVersion) { DARABONBA_PTR_SET_VALUE(firmwareVersion_, firmwareVersion) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Result& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // onlineStatus Field Functions 
      bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
      void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
      inline int32_t getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, 0) };
      inline Result& setOnlineStatus(int32_t onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Result& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    protected:
      shared_ptr<string> firmwareVersion_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<int32_t> onlineStatus_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<string> sn_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Start, start_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
      virtual bool empty() const override { return this->end_ == nullptr
        && this->hasNext_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->start_ == nullptr && this->total_ == nullptr
        && this->totalPage_ == nullptr; };
      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline Page& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Page& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


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


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
      inline Page& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Page& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline Page& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      shared_ptr<int32_t> end_ {};
      shared_ptr<bool> hasNext_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> start_ {};
      shared_ptr<int32_t> total_ {};
      shared_ptr<int32_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->page_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline PageGetHotelRoomDevicesResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline PageGetHotelRoomDevicesResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PageGetHotelRoomDevicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const PageGetHotelRoomDevicesResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, PageGetHotelRoomDevicesResponseBody::Page) };
    inline PageGetHotelRoomDevicesResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, PageGetHotelRoomDevicesResponseBody::Page) };
    inline PageGetHotelRoomDevicesResponseBody& setPage(const PageGetHotelRoomDevicesResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline PageGetHotelRoomDevicesResponseBody& setPage(PageGetHotelRoomDevicesResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageGetHotelRoomDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<PageGetHotelRoomDevicesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<PageGetHotelRoomDevicesResponseBody::Result>) };
    inline vector<PageGetHotelRoomDevicesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<PageGetHotelRoomDevicesResponseBody::Result>) };
    inline PageGetHotelRoomDevicesResponseBody& setResult(const vector<PageGetHotelRoomDevicesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PageGetHotelRoomDevicesResponseBody& setResult(vector<PageGetHotelRoomDevicesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline PageGetHotelRoomDevicesResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<PageGetHotelRoomDevicesResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<PageGetHotelRoomDevicesResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
