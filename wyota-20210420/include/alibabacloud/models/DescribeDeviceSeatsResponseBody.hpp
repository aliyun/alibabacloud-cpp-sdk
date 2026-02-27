// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESEATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESEATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class DescribeDeviceSeatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceSeatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceSeatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeviceSeatsResponseBody() = default ;
    DescribeDeviceSeatsResponseBody(const DescribeDeviceSeatsResponseBody &) = default ;
    DescribeDeviceSeatsResponseBody(DescribeDeviceSeatsResponseBody &&) = default ;
    DescribeDeviceSeatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceSeatsResponseBody() = default ;
    DescribeDeviceSeatsResponseBody& operator=(const DescribeDeviceSeatsResponseBody &) = default ;
    DescribeDeviceSeatsResponseBody& operator=(DescribeDeviceSeatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SeatCol, seatCol_);
        DARABONBA_PTR_TO_JSON(SeatName, seatName_);
        DARABONBA_PTR_TO_JSON(SeatNo, seatNo_);
        DARABONBA_PTR_TO_JSON(SeatRow, seatRow_);
        DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SeatCol, seatCol_);
        DARABONBA_PTR_FROM_JSON(SeatName, seatName_);
        DARABONBA_PTR_FROM_JSON(SeatNo, seatNo_);
        DARABONBA_PTR_FROM_JSON(SeatRow, seatRow_);
        DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->seatCol_ == nullptr
        && this->seatName_ == nullptr && this->seatNo_ == nullptr && this->seatRow_ == nullptr && this->serialNo_ == nullptr && this->siteId_ == nullptr
        && this->siteName_ == nullptr; };
      // seatCol Field Functions 
      bool hasSeatCol() const { return this->seatCol_ != nullptr;};
      void deleteSeatCol() { this->seatCol_ = nullptr;};
      inline int32_t getSeatCol() const { DARABONBA_PTR_GET_DEFAULT(seatCol_, 0) };
      inline Data& setSeatCol(int32_t seatCol) { DARABONBA_PTR_SET_VALUE(seatCol_, seatCol) };


      // seatName Field Functions 
      bool hasSeatName() const { return this->seatName_ != nullptr;};
      void deleteSeatName() { this->seatName_ = nullptr;};
      inline string getSeatName() const { DARABONBA_PTR_GET_DEFAULT(seatName_, "") };
      inline Data& setSeatName(string seatName) { DARABONBA_PTR_SET_VALUE(seatName_, seatName) };


      // seatNo Field Functions 
      bool hasSeatNo() const { return this->seatNo_ != nullptr;};
      void deleteSeatNo() { this->seatNo_ = nullptr;};
      inline string getSeatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
      inline Data& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


      // seatRow Field Functions 
      bool hasSeatRow() const { return this->seatRow_ != nullptr;};
      void deleteSeatRow() { this->seatRow_ = nullptr;};
      inline int32_t getSeatRow() const { DARABONBA_PTR_GET_DEFAULT(seatRow_, 0) };
      inline Data& setSeatRow(int32_t seatRow) { DARABONBA_PTR_SET_VALUE(seatRow_, seatRow) };


      // serialNo Field Functions 
      bool hasSerialNo() const { return this->serialNo_ != nullptr;};
      void deleteSerialNo() { this->serialNo_ = nullptr;};
      inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
      inline Data& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
      inline Data& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline Data& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    protected:
      shared_ptr<int32_t> seatCol_ {};
      shared_ptr<string> seatName_ {};
      shared_ptr<string> seatNo_ {};
      shared_ptr<int32_t> seatRow_ {};
      shared_ptr<string> serialNo_ {};
      shared_ptr<string> siteId_ {};
      shared_ptr<string> siteName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDeviceSeatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDeviceSeatsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDeviceSeatsResponseBody::Data>) };
    inline vector<DescribeDeviceSeatsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeDeviceSeatsResponseBody::Data>) };
    inline DescribeDeviceSeatsResponseBody& setData(const vector<DescribeDeviceSeatsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDeviceSeatsResponseBody& setData(vector<DescribeDeviceSeatsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDeviceSeatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDeviceSeatsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeviceSeatsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceSeatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDeviceSeatsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<DescribeDeviceSeatsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
