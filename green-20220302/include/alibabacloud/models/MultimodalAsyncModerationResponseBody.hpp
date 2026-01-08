// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALASYNCMODERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALASYNCMODERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultimodalAsyncModerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultimodalAsyncModerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MultimodalAsyncModerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MultimodalAsyncModerationResponseBody() = default ;
    MultimodalAsyncModerationResponseBody(const MultimodalAsyncModerationResponseBody &) = default ;
    MultimodalAsyncModerationResponseBody(MultimodalAsyncModerationResponseBody &&) = default ;
    MultimodalAsyncModerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultimodalAsyncModerationResponseBody() = default ;
    MultimodalAsyncModerationResponseBody& operator=(const MultimodalAsyncModerationResponseBody &) = default ;
    MultimodalAsyncModerationResponseBody& operator=(MultimodalAsyncModerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
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
      virtual bool empty() const override { return this->dataId_ == nullptr
        && this->reqId_ == nullptr; };
      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // reqId Field Functions 
      bool hasReqId() const { return this->reqId_ != nullptr;};
      void deleteReqId() { this->reqId_ = nullptr;};
      inline string getReqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
      inline Data& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    protected:
      shared_ptr<string> dataId_ {};
      shared_ptr<string> reqId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline MultimodalAsyncModerationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MultimodalAsyncModerationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MultimodalAsyncModerationResponseBody::Data) };
    inline MultimodalAsyncModerationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MultimodalAsyncModerationResponseBody::Data) };
    inline MultimodalAsyncModerationResponseBody& setData(const MultimodalAsyncModerationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MultimodalAsyncModerationResponseBody& setData(MultimodalAsyncModerationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline MultimodalAsyncModerationResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultimodalAsyncModerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<MultimodalAsyncModerationResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
