// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWJSONASSESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWJSONASSESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetFlowJSONAssestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowJSONAssestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFlowJSONAssestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFlowJSONAssestResponseBody() = default ;
    GetFlowJSONAssestResponseBody(const GetFlowJSONAssestResponseBody &) = default ;
    GetFlowJSONAssestResponseBody(GetFlowJSONAssestResponseBody &&) = default ;
    GetFlowJSONAssestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowJSONAssestResponseBody() = default ;
    GetFlowJSONAssestResponseBody& operator=(const GetFlowJSONAssestResponseBody &) = default ;
    GetFlowJSONAssestResponseBody& operator=(GetFlowJSONAssestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
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
      virtual bool empty() const override { return this->filePath_ == nullptr
        && this->flowId_ == nullptr; };
      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // flowId Field Functions 
      bool hasFlowId() const { return this->flowId_ != nullptr;};
      void deleteFlowId() { this->flowId_ = nullptr;};
      inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
      inline Data& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    protected:
      // The file path.
      shared_ptr<string> filePath_ {};
      // The Flow ID.
      shared_ptr<string> flowId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetFlowJSONAssestResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFlowJSONAssestResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFlowJSONAssestResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFlowJSONAssestResponseBody::Data) };
    inline GetFlowJSONAssestResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFlowJSONAssestResponseBody::Data) };
    inline GetFlowJSONAssestResponseBody& setData(const GetFlowJSONAssestResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFlowJSONAssestResponseBody& setData(GetFlowJSONAssestResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFlowJSONAssestResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFlowJSONAssestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    // If OK is returned, the request was successful.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetFlowJSONAssestResponseBody::Data> data_ {};
    // Error description information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
