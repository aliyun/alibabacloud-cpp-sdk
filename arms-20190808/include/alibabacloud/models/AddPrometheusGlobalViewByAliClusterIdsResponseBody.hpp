// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWBYALICLUSTERIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPROMETHEUSGLOBALVIEWBYALICLUSTERIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddPrometheusGlobalViewByAliClusterIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrometheusGlobalViewByAliClusterIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrometheusGlobalViewByAliClusterIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPrometheusGlobalViewByAliClusterIdsResponseBody() = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBody(const AddPrometheusGlobalViewByAliClusterIdsResponseBody &) = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBody(AddPrometheusGlobalViewByAliClusterIdsResponseBody &&) = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrometheusGlobalViewByAliClusterIdsResponseBody() = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBody& operator=(const AddPrometheusGlobalViewByAliClusterIdsResponseBody &) = default ;
    AddPrometheusGlobalViewByAliClusterIdsResponseBody& operator=(AddPrometheusGlobalViewByAliClusterIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Info, info_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Info, info_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->info_ == nullptr
        && this->msg_ == nullptr && this->success_ == nullptr; };
      // info Field Functions 
      bool hasInfo() const { return this->info_ != nullptr;};
      void deleteInfo() { this->info_ = nullptr;};
      inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
      inline Data& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Data& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The Info-level information.
      shared_ptr<string> info_ {};
      // The additional information.
      shared_ptr<string> msg_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // *   `true`
      // *   `false`
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data) };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data) };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBody& setData(const AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBody& setData(AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPrometheusGlobalViewByAliClusterIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The HTTP 200 status code indicates a successful request, while others indicate error conditions.
    shared_ptr<int32_t> code_ {};
    // The struct returned.
    shared_ptr<AddPrometheusGlobalViewByAliClusterIdsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
