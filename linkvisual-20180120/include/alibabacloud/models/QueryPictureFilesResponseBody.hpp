// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTUREFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTUREFILESRESPONSEBODY_HPP_
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
  class QueryPictureFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPictureFilesResponseBody() = default ;
    QueryPictureFilesResponseBody(const QueryPictureFilesResponseBody &) = default ;
    QueryPictureFilesResponseBody(QueryPictureFilesResponseBody &&) = default ;
    QueryPictureFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureFilesResponseBody() = default ;
    QueryPictureFilesResponseBody& operator=(const QueryPictureFilesResponseBody &) = default ;
    QueryPictureFilesResponseBody& operator=(QueryPictureFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
          DARABONBA_PTR_TO_JSON(PicCreateTime, picCreateTime_);
          DARABONBA_PTR_TO_JSON(PicId, picId_);
          DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_TO_JSON(ThumbUrl, thumbUrl_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(PicCreateTime, picCreateTime_);
          DARABONBA_PTR_FROM_JSON(PicId, picId_);
          DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_FROM_JSON(ThumbUrl, thumbUrl_);
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
        && this->picCreateTime_ == nullptr && this->picId_ == nullptr && this->picUrl_ == nullptr && this->thumbUrl_ == nullptr; };
        // iotId Field Functions 
        bool hasIotId() const { return this->iotId_ != nullptr;};
        void deleteIotId() { this->iotId_ = nullptr;};
        inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
        inline List& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // picCreateTime Field Functions 
        bool hasPicCreateTime() const { return this->picCreateTime_ != nullptr;};
        void deletePicCreateTime() { this->picCreateTime_ = nullptr;};
        inline int64_t getPicCreateTime() const { DARABONBA_PTR_GET_DEFAULT(picCreateTime_, 0L) };
        inline List& setPicCreateTime(int64_t picCreateTime) { DARABONBA_PTR_SET_VALUE(picCreateTime_, picCreateTime) };


        // picId Field Functions 
        bool hasPicId() const { return this->picId_ != nullptr;};
        void deletePicId() { this->picId_ = nullptr;};
        inline string getPicId() const { DARABONBA_PTR_GET_DEFAULT(picId_, "") };
        inline List& setPicId(string picId) { DARABONBA_PTR_SET_VALUE(picId_, picId) };


        // picUrl Field Functions 
        bool hasPicUrl() const { return this->picUrl_ != nullptr;};
        void deletePicUrl() { this->picUrl_ = nullptr;};
        inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
        inline List& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


        // thumbUrl Field Functions 
        bool hasThumbUrl() const { return this->thumbUrl_ != nullptr;};
        void deleteThumbUrl() { this->thumbUrl_ = nullptr;};
        inline string getThumbUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbUrl_, "") };
        inline List& setThumbUrl(string thumbUrl) { DARABONBA_PTR_SET_VALUE(thumbUrl_, thumbUrl) };


      protected:
        // The ID of the IP camera.
        shared_ptr<string> iotId_ {};
        // The time when the image was created. The time is a 13-digit timestamp in milliseconds.
        shared_ptr<int64_t> picCreateTime_ {};
        // The ID of the image.
        shared_ptr<string> picId_ {};
        // The URL of the image.
        // 
        // > The URL is valid for 1 hour.
        shared_ptr<string> picUrl_ {};
        // The URL of the thumbnail.
        // 
        // > The URL is valid for 1 hour.
        shared_ptr<string> thumbUrl_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr; };
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


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      // The list of returned images.
      shared_ptr<vector<Data::List>> list_ {};
      // The current page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPictureFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPictureFilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPictureFilesResponseBody::Data) };
    inline QueryPictureFilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPictureFilesResponseBody::Data) };
    inline QueryPictureFilesResponseBody& setData(const QueryPictureFilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPictureFilesResponseBody& setData(QueryPictureFilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryPictureFilesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPictureFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPictureFilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call was successful.
    // - Other values: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<QueryPictureFilesResponseBody::Data> data_ {};
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
