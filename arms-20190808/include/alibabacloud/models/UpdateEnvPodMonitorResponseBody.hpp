// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVPODMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVPODMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEnvPodMonitorResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateEnvPodMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvPodMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvPodMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateEnvPodMonitorResponseBody() = default ;
    UpdateEnvPodMonitorResponseBody(const UpdateEnvPodMonitorResponseBody &) = default ;
    UpdateEnvPodMonitorResponseBody(UpdateEnvPodMonitorResponseBody &&) = default ;
    UpdateEnvPodMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvPodMonitorResponseBody() = default ;
    UpdateEnvPodMonitorResponseBody& operator=(const UpdateEnvPodMonitorResponseBody &) = default ;
    UpdateEnvPodMonitorResponseBody& operator=(UpdateEnvPodMonitorResponseBody &&) = default ;
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
    inline UpdateEnvPodMonitorResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateEnvPodMonitorResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UpdateEnvPodMonitorResponseBodyData) };
    inline UpdateEnvPodMonitorResponseBodyData data() { DARABONBA_PTR_GET(data_, UpdateEnvPodMonitorResponseBodyData) };
    inline UpdateEnvPodMonitorResponseBody& setData(const UpdateEnvPodMonitorResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateEnvPodMonitorResponseBody& setData(UpdateEnvPodMonitorResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateEnvPodMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateEnvPodMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned struct.
    std::shared_ptr<UpdateEnvPodMonitorResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
