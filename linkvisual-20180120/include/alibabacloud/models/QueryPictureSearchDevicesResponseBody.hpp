// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTURESEARCHDEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTURESEARCHDEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryPictureSearchDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureSearchDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureSearchDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPictureSearchDevicesResponseBody() = default ;
    QueryPictureSearchDevicesResponseBody(const QueryPictureSearchDevicesResponseBody &) = default ;
    QueryPictureSearchDevicesResponseBody(QueryPictureSearchDevicesResponseBody &&) = default ;
    QueryPictureSearchDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureSearchDevicesResponseBody() = default ;
    QueryPictureSearchDevicesResponseBody& operator=(const QueryPictureSearchDevicesResponseBody &) = default ;
    QueryPictureSearchDevicesResponseBody& operator=(QueryPictureSearchDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->iotId_ == nullptr
        && this->nickName_ == nullptr; };
        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline PageData& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline PageData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      protected:
        // The ID of the device.
        shared_ptr<string> iotId_ {};
        // The alias of the device.
        // 
        // > This parameter is returned only for IPC devices.
        shared_ptr<string> nickName_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageCount_ == nullptr && this->pageData_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Data& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Data::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Data::PageData>) };
      inline vector<Data::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Data::PageData>) };
      inline Data& setPageData(const vector<Data::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Data& setPageData(vector<Data::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The current page number.
      shared_ptr<int32_t> currentPage_ {};
      // The total number of pages.
      shared_ptr<int32_t> pageCount_ {};
      // The list of applications.
      shared_ptr<vector<Data::PageData>> pageData_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPictureSearchDevicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPictureSearchDevicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPictureSearchDevicesResponseBody::Data) };
    inline QueryPictureSearchDevicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPictureSearchDevicesResponseBody::Data) };
    inline QueryPictureSearchDevicesResponseBody& setData(const QueryPictureSearchDevicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPictureSearchDevicesResponseBody& setData(QueryPictureSearchDevicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryPictureSearchDevicesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPictureSearchDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPictureSearchDevicesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<QueryPictureSearchDevicesResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
