// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePrometheusIntegrationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdatePrometheusIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePrometheusIntegrationResponseBody() = default ;
    UpdatePrometheusIntegrationResponseBody(const UpdatePrometheusIntegrationResponseBody &) = default ;
    UpdatePrometheusIntegrationResponseBody(UpdatePrometheusIntegrationResponseBody &&) = default ;
    UpdatePrometheusIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusIntegrationResponseBody() = default ;
    UpdatePrometheusIntegrationResponseBody& operator=(const UpdatePrometheusIntegrationResponseBody &) = default ;
    UpdatePrometheusIntegrationResponseBody& operator=(UpdatePrometheusIntegrationResponseBody &&) = default ;
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
    inline UpdatePrometheusIntegrationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdatePrometheusIntegrationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdatePrometheusIntegrationResponseBodyData) };
    inline UpdatePrometheusIntegrationResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdatePrometheusIntegrationResponseBodyData) };
    inline UpdatePrometheusIntegrationResponseBody& setData(const UpdatePrometheusIntegrationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdatePrometheusIntegrationResponseBody& setData(UpdatePrometheusIntegrationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePrometheusIntegrationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePrometheusIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code or error code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The struct returned.
    std::shared_ptr<UpdatePrometheusIntegrationResponseBodyData> data_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
