// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDEVICEBYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVENTRECORDPLANDEVICEBYPLANRESPONSEBODY_HPP_
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
  class QueryEventRecordPlanDeviceByPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEventRecordPlanDeviceByPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEventRecordPlanDeviceByPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEventRecordPlanDeviceByPlanResponseBody() = default ;
    QueryEventRecordPlanDeviceByPlanResponseBody(const QueryEventRecordPlanDeviceByPlanResponseBody &) = default ;
    QueryEventRecordPlanDeviceByPlanResponseBody(QueryEventRecordPlanDeviceByPlanResponseBody &&) = default ;
    QueryEventRecordPlanDeviceByPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEventRecordPlanDeviceByPlanResponseBody() = default ;
    QueryEventRecordPlanDeviceByPlanResponseBody& operator=(const QueryEventRecordPlanDeviceByPlanResponseBody &) = default ;
    QueryEventRecordPlanDeviceByPlanResponseBody& operator=(QueryEventRecordPlanDeviceByPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->iotId_ == nullptr
        && this->streamType_ == nullptr; };
        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline List& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline List& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


      protected:
        // The device ID of the camera.
        shared_ptr<string> iotId_ {};
        // The video stream type. Valid values:
        // - **0**: main stream
        // - **1**: sub-stream
        shared_ptr<int32_t> streamType_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->page_ == nullptr && this->pageCount_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageCount Field Functions 
      bool hasPageCount() const { return this->pageCount_ != nullptr;};
      void deletePageCount() { this->pageCount_ = nullptr;};
      inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
      inline Data& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


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
      // The device information.
      shared_ptr<vector<Data::List>> list_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The total number of pages.
      shared_ptr<int32_t> pageCount_ {};
      // The number of entries returned on each page.
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
    inline QueryEventRecordPlanDeviceByPlanResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryEventRecordPlanDeviceByPlanResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryEventRecordPlanDeviceByPlanResponseBody::Data) };
    inline QueryEventRecordPlanDeviceByPlanResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryEventRecordPlanDeviceByPlanResponseBody::Data) };
    inline QueryEventRecordPlanDeviceByPlanResponseBody& setData(const QueryEventRecordPlanDeviceByPlanResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryEventRecordPlanDeviceByPlanResponseBody& setData(QueryEventRecordPlanDeviceByPlanResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryEventRecordPlanDeviceByPlanResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEventRecordPlanDeviceByPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEventRecordPlanDeviceByPlanResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<QueryEventRecordPlanDeviceByPlanResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
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
