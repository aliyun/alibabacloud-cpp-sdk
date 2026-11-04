// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTURESEARCHJOBRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTURESEARCHJOBRESULTRESPONSEBODY_HPP_
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
  class QueryPictureSearchJobResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureSearchJobResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureSearchJobResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPictureSearchJobResultResponseBody() = default ;
    QueryPictureSearchJobResultResponseBody(const QueryPictureSearchJobResultResponseBody &) = default ;
    QueryPictureSearchJobResultResponseBody(QueryPictureSearchJobResultResponseBody &&) = default ;
    QueryPictureSearchJobResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureSearchJobResultResponseBody() = default ;
    QueryPictureSearchJobResultResponseBody& operator=(const QueryPictureSearchJobResultResponseBody &) = default ;
    QueryPictureSearchJobResultResponseBody& operator=(QueryPictureSearchJobResultResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DeviceNickName, deviceNickName_);
          DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          DARABONBA_PTR_TO_JSON(GatewayIotId, gatewayIotId_);
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_TO_JSON(Threshold, threshold_);
          DARABONBA_PTR_TO_JSON(VectorId, vectorId_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceNickName, deviceNickName_);
          DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          DARABONBA_PTR_FROM_JSON(GatewayIotId, gatewayIotId_);
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
          DARABONBA_PTR_FROM_JSON(VectorId, vectorId_);
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
        virtual bool empty() const override { return this->deviceNickName_ == nullptr
        && this->eventTime_ == nullptr && this->gatewayIotId_ == nullptr && this->iotId_ == nullptr && this->picUrl_ == nullptr && this->threshold_ == nullptr
        && this->vectorId_ == nullptr; };
        // deviceNickName Field Functions 
        bool hasDeviceNickName() const { return this->deviceNickName_ != nullptr;};
        void deleteDeviceNickName() { this->deviceNickName_ = nullptr;};
        inline string getDeviceNickName() const { DARABONBA_PTR_GET_DEFAULT(deviceNickName_, "") };
        inline PageData& setDeviceNickName(string deviceNickName) { DARABONBA_PTR_SET_VALUE(deviceNickName_, deviceNickName) };


        // eventTime Field Functions 
        bool hasEventTime() const { return this->eventTime_ != nullptr;};
        void deleteEventTime() { this->eventTime_ = nullptr;};
        inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
        inline PageData& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // gatewayIotId Field Functions 
        bool hasGatewayIotId() const { return this->gatewayIotId_ != nullptr;};
        void deleteGatewayIotId() { this->gatewayIotId_ = nullptr;};
        inline string getGatewayIotId() const { DARABONBA_PTR_GET_DEFAULT(gatewayIotId_, "") };
        inline PageData& setGatewayIotId(string gatewayIotId) { DARABONBA_PTR_SET_VALUE(gatewayIotId_, gatewayIotId) };


        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline PageData& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // picUrl Field Functions 
        bool hasPicUrl() const { return this->picUrl_ != nullptr;};
        void deletePicUrl() { this->picUrl_ = nullptr;};
        inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
        inline PageData& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


        // threshold Field Functions 
        bool hasThreshold() const { return this->threshold_ != nullptr;};
        void deleteThreshold() { this->threshold_ = nullptr;};
        inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
        inline PageData& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


        // vectorId Field Functions 
        bool hasVectorId() const { return this->vectorId_ != nullptr;};
        void deleteVectorId() { this->vectorId_ = nullptr;};
        inline string getVectorId() const { DARABONBA_PTR_GET_DEFAULT(vectorId_, "") };
        inline PageData& setVectorId(string vectorId) { DARABONBA_PTR_SET_VALUE(vectorId_, vectorId) };


      protected:
        // The alias of the device.
        // 
        // > If no alias is set for the device, this parameter is not returned.
        shared_ptr<string> deviceNickName_ {};
        // The time when the event was created. The value is a 13-digit timestamp in milliseconds.
        shared_ptr<int64_t> eventTime_ {};
        // The IoT ID of the V-series edge all-in-one device.
        shared_ptr<string> gatewayIotId_ {};
        // The IoT ID of the queried device.
        shared_ptr<string> iotId_ {};
        // The URL of the image to be searched.
        shared_ptr<string> picUrl_ {};
        // The face similarity.
        shared_ptr<float> threshold_ {};
        // The ID of the image feature.
        shared_ptr<string> vectorId_ {};
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
      // The query results.
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
    inline QueryPictureSearchJobResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPictureSearchJobResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPictureSearchJobResultResponseBody::Data) };
    inline QueryPictureSearchJobResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPictureSearchJobResultResponseBody::Data) };
    inline QueryPictureSearchJobResultResponseBody& setData(const QueryPictureSearchJobResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPictureSearchJobResultResponseBody& setData(QueryPictureSearchJobResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryPictureSearchJobResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPictureSearchJobResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPictureSearchJobResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<QueryPictureSearchJobResultResponseBody::Data> data_ {};
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
