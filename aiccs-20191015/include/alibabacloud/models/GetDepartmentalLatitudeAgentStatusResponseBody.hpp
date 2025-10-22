// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPARTMENTALLATITUDEAGENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEPARTMENTALLATITUDEAGENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDepartmentalLatitudeAgentStatusResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetDepartmentalLatitudeAgentStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDepartmentalLatitudeAgentStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDepartmentalLatitudeAgentStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDepartmentalLatitudeAgentStatusResponseBody() = default ;
    GetDepartmentalLatitudeAgentStatusResponseBody(const GetDepartmentalLatitudeAgentStatusResponseBody &) = default ;
    GetDepartmentalLatitudeAgentStatusResponseBody(GetDepartmentalLatitudeAgentStatusResponseBody &&) = default ;
    GetDepartmentalLatitudeAgentStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDepartmentalLatitudeAgentStatusResponseBody() = default ;
    GetDepartmentalLatitudeAgentStatusResponseBody& operator=(const GetDepartmentalLatitudeAgentStatusResponseBody &) = default ;
    GetDepartmentalLatitudeAgentStatusResponseBody& operator=(GetDepartmentalLatitudeAgentStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDepartmentalLatitudeAgentStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDepartmentalLatitudeAgentStatusResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDepartmentalLatitudeAgentStatusResponseBodyData) };
    inline GetDepartmentalLatitudeAgentStatusResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDepartmentalLatitudeAgentStatusResponseBodyData) };
    inline GetDepartmentalLatitudeAgentStatusResponseBody& setData(const GetDepartmentalLatitudeAgentStatusResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDepartmentalLatitudeAgentStatusResponseBody& setData(GetDepartmentalLatitudeAgentStatusResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDepartmentalLatitudeAgentStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDepartmentalLatitudeAgentStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDepartmentalLatitudeAgentStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetDepartmentalLatitudeAgentStatusResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
