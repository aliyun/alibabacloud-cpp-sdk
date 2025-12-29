// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELSRESPONSEBODY_HPP_
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
  class ListHotelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListHotelsResponseBody() = default ;
    ListHotelsResponseBody(const ListHotelsResponseBody &) = default ;
    ListHotelsResponseBody(ListHotelsResponseBody &&) = default ;
    ListHotelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelsResponseBody() = default ;
    ListHotelsResponseBody& operator=(const ListHotelsResponseBody &) = default ;
    ListHotelsResponseBody& operator=(ListHotelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(HotelInfoList, hotelInfoList_);
        DARABONBA_PTR_TO_JSON(Page, page_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(HotelInfoList, hotelInfoList_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
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
      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
          DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(Total, total_);
          DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
          DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
        virtual bool empty() const override { return this->hasNext_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr; };
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
        shared_ptr<bool> hasNext_ {};
        shared_ptr<int32_t> pageNumber_ {};
        shared_ptr<int32_t> pageSize_ {};
        shared_ptr<int32_t> total_ {};
        shared_ptr<int32_t> totalPage_ {};
      };

      class HotelInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountNames, accountNames_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(HotelAddress, hotelAddress_);
          DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
          DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
          DARABONBA_PTR_TO_JSON(IndustryType, industryType_);
          DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_TO_JSON(RelatedProductName, relatedProductName_);
          DARABONBA_PTR_TO_JSON(RoomNum, roomNum_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, HotelInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountNames, accountNames_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(HotelAddress, hotelAddress_);
          DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
          DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
          DARABONBA_PTR_FROM_JSON(IndustryType, industryType_);
          DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
          DARABONBA_PTR_FROM_JSON(RelatedProductName, relatedProductName_);
          DARABONBA_PTR_FROM_JSON(RoomNum, roomNum_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        HotelInfoList() = default ;
        HotelInfoList(const HotelInfoList &) = default ;
        HotelInfoList(HotelInfoList &&) = default ;
        HotelInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelInfoList() = default ;
        HotelInfoList& operator=(const HotelInfoList &) = default ;
        HotelInfoList& operator=(HotelInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountNames_ == nullptr
        && this->createTime_ == nullptr && this->hotelAddress_ == nullptr && this->hotelId_ == nullptr && this->hotelName_ == nullptr && this->industryType_ == nullptr
        && this->phoneNumber_ == nullptr && this->relatedProductName_ == nullptr && this->roomNum_ == nullptr && this->status_ == nullptr; };
        // accountNames Field Functions 
        bool hasAccountNames() const { return this->accountNames_ != nullptr;};
        void deleteAccountNames() { this->accountNames_ = nullptr;};
        inline const vector<string> & getAccountNames() const { DARABONBA_PTR_GET_CONST(accountNames_, vector<string>) };
        inline vector<string> getAccountNames() { DARABONBA_PTR_GET(accountNames_, vector<string>) };
        inline HotelInfoList& setAccountNames(const vector<string> & accountNames) { DARABONBA_PTR_SET_VALUE(accountNames_, accountNames) };
        inline HotelInfoList& setAccountNames(vector<string> && accountNames) { DARABONBA_PTR_SET_RVALUE(accountNames_, accountNames) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline HotelInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // hotelAddress Field Functions 
        bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
        void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
        inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
        inline HotelInfoList& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline HotelInfoList& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelInfoList& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // industryType Field Functions 
        bool hasIndustryType() const { return this->industryType_ != nullptr;};
        void deleteIndustryType() { this->industryType_ = nullptr;};
        inline string getIndustryType() const { DARABONBA_PTR_GET_DEFAULT(industryType_, "") };
        inline HotelInfoList& setIndustryType(string industryType) { DARABONBA_PTR_SET_VALUE(industryType_, industryType) };


        // phoneNumber Field Functions 
        bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
        void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
        inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
        inline HotelInfoList& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


        // relatedProductName Field Functions 
        bool hasRelatedProductName() const { return this->relatedProductName_ != nullptr;};
        void deleteRelatedProductName() { this->relatedProductName_ = nullptr;};
        inline string getRelatedProductName() const { DARABONBA_PTR_GET_DEFAULT(relatedProductName_, "") };
        inline HotelInfoList& setRelatedProductName(string relatedProductName) { DARABONBA_PTR_SET_VALUE(relatedProductName_, relatedProductName) };


        // roomNum Field Functions 
        bool hasRoomNum() const { return this->roomNum_ != nullptr;};
        void deleteRoomNum() { this->roomNum_ = nullptr;};
        inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
        inline HotelInfoList& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline HotelInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<vector<string>> accountNames_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> hotelAddress_ {};
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> industryType_ {};
        shared_ptr<string> phoneNumber_ {};
        shared_ptr<string> relatedProductName_ {};
        shared_ptr<int32_t> roomNum_ {};
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->hotelInfoList_ == nullptr
        && this->page_ == nullptr; };
      // hotelInfoList Field Functions 
      bool hasHotelInfoList() const { return this->hotelInfoList_ != nullptr;};
      void deleteHotelInfoList() { this->hotelInfoList_ = nullptr;};
      inline const vector<Result::HotelInfoList> & getHotelInfoList() const { DARABONBA_PTR_GET_CONST(hotelInfoList_, vector<Result::HotelInfoList>) };
      inline vector<Result::HotelInfoList> getHotelInfoList() { DARABONBA_PTR_GET(hotelInfoList_, vector<Result::HotelInfoList>) };
      inline Result& setHotelInfoList(const vector<Result::HotelInfoList> & hotelInfoList) { DARABONBA_PTR_SET_VALUE(hotelInfoList_, hotelInfoList) };
      inline Result& setHotelInfoList(vector<Result::HotelInfoList> && hotelInfoList) { DARABONBA_PTR_SET_RVALUE(hotelInfoList_, hotelInfoList) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const Result::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, Result::Page) };
      inline Result::Page getPage() { DARABONBA_PTR_GET(page_, Result::Page) };
      inline Result& setPage(const Result::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline Result& setPage(Result::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    protected:
      shared_ptr<vector<Result::HotelInfoList>> hotelInfoList_ {};
      shared_ptr<Result::Page> page_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHotelsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListHotelsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListHotelsResponseBody::Result) };
    inline ListHotelsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListHotelsResponseBody::Result) };
    inline ListHotelsResponseBody& setResult(const ListHotelsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelsResponseBody& setResult(ListHotelsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    shared_ptr<ListHotelsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
