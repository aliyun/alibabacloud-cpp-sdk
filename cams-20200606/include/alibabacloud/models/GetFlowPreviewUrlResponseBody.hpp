// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWPREVIEWURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWPREVIEWURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetFlowPreviewUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowPreviewUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowPreviewUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFlowPreviewUrlResponseBody() = default ;
    GetFlowPreviewUrlResponseBody(const GetFlowPreviewUrlResponseBody &) = default ;
    GetFlowPreviewUrlResponseBody(GetFlowPreviewUrlResponseBody &&) = default ;
    GetFlowPreviewUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowPreviewUrlResponseBody() = default ;
    GetFlowPreviewUrlResponseBody& operator=(const GetFlowPreviewUrlResponseBody &) = default ;
    GetFlowPreviewUrlResponseBody& operator=(GetFlowPreviewUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
        DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
        DARABONBA_PTR_TO_JSON(PreviewUrlExpires, previewUrlExpires_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
        DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
        DARABONBA_PTR_FROM_JSON(PreviewUrlExpires, previewUrlExpires_);
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
      virtual bool empty() const override { return this->flowId_ == nullptr
        && this->previewUrl_ == nullptr && this->previewUrlExpires_ == nullptr; };
      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Data& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


      // previewUrl Field Functions 
      bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
      void deletePreviewUrl() { this->previewUrl_ = nullptr;};
      inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
      inline Data& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


      // previewUrlExpires Field Functions 
      bool hasPreviewUrlExpires() const { return this->previewUrlExpires_ != nullptr;};
      void deletePreviewUrlExpires() { this->previewUrlExpires_ = nullptr;};
      inline int64_t getPreviewUrlExpires() const { DARABONBA_PTR_GET_DEFAULT(previewUrlExpires_, 0L) };
      inline Data& setPreviewUrlExpires(int64_t previewUrlExpires) { DARABONBA_PTR_SET_VALUE(previewUrlExpires_, previewUrlExpires) };


    protected:
      // The Flow ID.
      shared_ptr<string> flowId_ {};
      // The temporary preview URL.
      shared_ptr<string> previewUrl_ {};
      // The time when the preview URL expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> previewUrlExpires_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetFlowPreviewUrlResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFlowPreviewUrlResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFlowPreviewUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFlowPreviewUrlResponseBody::Data) };
    inline GetFlowPreviewUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFlowPreviewUrlResponseBody::Data) };
    inline GetFlowPreviewUrlResponseBody& setData(const GetFlowPreviewUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFlowPreviewUrlResponseBody& setData(GetFlowPreviewUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFlowPreviewUrlResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlowPreviewUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // If OK is returned, the request was successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetFlowPreviewUrlResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
