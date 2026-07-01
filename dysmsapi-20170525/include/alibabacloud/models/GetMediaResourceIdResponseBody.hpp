// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIARESOURCEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIARESOURCEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetMediaResourceIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaResourceIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaResourceIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMediaResourceIdResponseBody() = default ;
    GetMediaResourceIdResponseBody(const GetMediaResourceIdResponseBody &) = default ;
    GetMediaResourceIdResponseBody(GetMediaResourceIdResponseBody &&) = default ;
    GetMediaResourceIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaResourceIdResponseBody() = default ;
    GetMediaResourceIdResponseBody& operator=(const GetMediaResourceIdResponseBody &) = default ;
    GetMediaResourceIdResponseBody& operator=(GetMediaResourceIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResUrlDownload, resUrlDownload_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResUrlDownload, resUrlDownload_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
      virtual bool empty() const override { return this->resUrlDownload_ == nullptr
        && this->resourceId_ == nullptr; };
      // resUrlDownload Field Functions 
      bool hasResUrlDownload() const { return this->resUrlDownload_ != nullptr;};
      void deleteResUrlDownload() { this->resUrlDownload_ = nullptr;};
      inline string getResUrlDownload() const { DARABONBA_PTR_GET_DEFAULT(resUrlDownload_, "") };
      inline Data& setResUrlDownload(string resUrlDownload) { DARABONBA_PTR_SET_VALUE(resUrlDownload_, resUrlDownload) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
      inline Data& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // 资源下载地址。
      shared_ptr<string> resUrlDownload_ {};
      // 资源ID。
      shared_ptr<int64_t> resourceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMediaResourceIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMediaResourceIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMediaResourceIdResponseBody::Data) };
    inline GetMediaResourceIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMediaResourceIdResponseBody::Data) };
    inline GetMediaResourceIdResponseBody& setData(const GetMediaResourceIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMediaResourceIdResponseBody& setData(GetMediaResourceIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaResourceIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMediaResourceIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 请求状态码。
    // 
    // - 返回OK代表请求成功。
    // - 其他错误码，请参见[错误码列表](https://help.aliyun.com/document_detail/101346.html)。
    shared_ptr<string> code_ {};
    // 返回数据。
    shared_ptr<GetMediaResourceIdResponseBody::Data> data_ {};
    // 请求ID。
    shared_ptr<string> requestId_ {};
    // 调用接口是否成功。取值：
    // 
    // - **true**：调用成功。
    // 
    // - **false**：调用失败。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
