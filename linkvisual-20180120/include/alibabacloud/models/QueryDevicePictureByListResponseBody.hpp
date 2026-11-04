// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEPICTUREBYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEPICTUREBYLISTRESPONSEBODY_HPP_
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
  class QueryDevicePictureByListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDevicePictureByListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDevicePictureByListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDevicePictureByListResponseBody() = default ;
    QueryDevicePictureByListResponseBody(const QueryDevicePictureByListResponseBody &) = default ;
    QueryDevicePictureByListResponseBody(QueryDevicePictureByListResponseBody &&) = default ;
    QueryDevicePictureByListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDevicePictureByListResponseBody() = default ;
    QueryDevicePictureByListResponseBody& operator=(const QueryDevicePictureByListResponseBody &) = default ;
    QueryDevicePictureByListResponseBody& operator=(QueryDevicePictureByListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(picData, picData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(picData, picData_);
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
      class PicData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PicData& obj) { 
          DARABONBA_PTR_TO_JSON(IotId, iotId_);
          DARABONBA_PTR_TO_JSON(PicCreateTime, picCreateTime_);
          DARABONBA_PTR_TO_JSON(PicId, picId_);
          DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_TO_JSON(ThumbUrl, thumbUrl_);
        };
        friend void from_json(const Darabonba::Json& j, PicData& obj) { 
          DARABONBA_PTR_FROM_JSON(IotId, iotId_);
          DARABONBA_PTR_FROM_JSON(PicCreateTime, picCreateTime_);
          DARABONBA_PTR_FROM_JSON(PicId, picId_);
          DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_FROM_JSON(ThumbUrl, thumbUrl_);
        };
        PicData() = default ;
        PicData(const PicData &) = default ;
        PicData(PicData &&) = default ;
        PicData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PicData() = default ;
        PicData& operator=(const PicData &) = default ;
        PicData& operator=(PicData &&) = default ;
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
        inline PicData& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


        // picCreateTime Field Functions 
        bool hasPicCreateTime() const { return this->picCreateTime_ != nullptr;};
        void deletePicCreateTime() { this->picCreateTime_ = nullptr;};
        inline int64_t getPicCreateTime() const { DARABONBA_PTR_GET_DEFAULT(picCreateTime_, 0L) };
        inline PicData& setPicCreateTime(int64_t picCreateTime) { DARABONBA_PTR_SET_VALUE(picCreateTime_, picCreateTime) };


        // picId Field Functions 
        bool hasPicId() const { return this->picId_ != nullptr;};
        void deletePicId() { this->picId_ = nullptr;};
        inline string getPicId() const { DARABONBA_PTR_GET_DEFAULT(picId_, "") };
        inline PicData& setPicId(string picId) { DARABONBA_PTR_SET_VALUE(picId_, picId) };


        // picUrl Field Functions 
        bool hasPicUrl() const { return this->picUrl_ != nullptr;};
        void deletePicUrl() { this->picUrl_ = nullptr;};
        inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
        inline PicData& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


        // thumbUrl Field Functions 
        bool hasThumbUrl() const { return this->thumbUrl_ != nullptr;};
        void deleteThumbUrl() { this->thumbUrl_ = nullptr;};
        inline string getThumbUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbUrl_, "") };
        inline PicData& setThumbUrl(string thumbUrl) { DARABONBA_PTR_SET_VALUE(thumbUrl_, thumbUrl) };


      protected:
        shared_ptr<string> iotId_ {};
        shared_ptr<int64_t> picCreateTime_ {};
        shared_ptr<string> picId_ {};
        shared_ptr<string> picUrl_ {};
        shared_ptr<string> thumbUrl_ {};
      };

      virtual bool empty() const override { return this->picData_ == nullptr; };
      // picData Field Functions 
      bool hasPicData() const { return this->picData_ != nullptr;};
      void deletePicData() { this->picData_ = nullptr;};
      inline const vector<Data::PicData> & getPicData() const { DARABONBA_PTR_GET_CONST(picData_, vector<Data::PicData>) };
      inline vector<Data::PicData> getPicData() { DARABONBA_PTR_GET(picData_, vector<Data::PicData>) };
      inline Data& setPicData(const vector<Data::PicData> & picData) { DARABONBA_PTR_SET_VALUE(picData_, picData) };
      inline Data& setPicData(vector<Data::PicData> && picData) { DARABONBA_PTR_SET_RVALUE(picData_, picData) };


    protected:
      shared_ptr<vector<Data::PicData>> picData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDevicePictureByListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDevicePictureByListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDevicePictureByListResponseBody::Data) };
    inline QueryDevicePictureByListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDevicePictureByListResponseBody::Data) };
    inline QueryDevicePictureByListResponseBody& setData(const QueryDevicePictureByListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDevicePictureByListResponseBody& setData(QueryDevicePictureByListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryDevicePictureByListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDevicePictureByListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDevicePictureByListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call is successful.
    // - Others: error codes. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    shared_ptr<QueryDevicePictureByListResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The unique identifier generated by Alibaba Cloud for the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // 
    // - **true**: The call is successful.
    // - **false**: The call fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
