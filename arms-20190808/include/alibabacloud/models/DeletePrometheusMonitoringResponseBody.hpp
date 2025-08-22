// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMETHEUSMONITORINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMETHEUSMONITORINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeletePrometheusMonitoringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrometheusMonitoringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrometheusMonitoringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePrometheusMonitoringResponseBody() = default ;
    DeletePrometheusMonitoringResponseBody(const DeletePrometheusMonitoringResponseBody &) = default ;
    DeletePrometheusMonitoringResponseBody(DeletePrometheusMonitoringResponseBody &&) = default ;
    DeletePrometheusMonitoringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrometheusMonitoringResponseBody() = default ;
    DeletePrometheusMonitoringResponseBody& operator=(const DeletePrometheusMonitoringResponseBody &) = default ;
    DeletePrometheusMonitoringResponseBody& operator=(DeletePrometheusMonitoringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DeletePrometheusMonitoringResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DeletePrometheusMonitoringResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeletePrometheusMonitoringResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePrometheusMonitoringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The result of the operation.
    std::shared_ptr<string> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
