// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVMCOREDIAGNOSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVmcoreDiagnosisTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetVmcoreDiagnosisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmcoreDiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmcoreDiagnosisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetVmcoreDiagnosisTaskResponseBody() = default ;
    GetVmcoreDiagnosisTaskResponseBody(const GetVmcoreDiagnosisTaskResponseBody &) = default ;
    GetVmcoreDiagnosisTaskResponseBody(GetVmcoreDiagnosisTaskResponseBody &&) = default ;
    GetVmcoreDiagnosisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmcoreDiagnosisTaskResponseBody() = default ;
    GetVmcoreDiagnosisTaskResponseBody& operator=(const GetVmcoreDiagnosisTaskResponseBody &) = default ;
    GetVmcoreDiagnosisTaskResponseBody& operator=(GetVmcoreDiagnosisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVmcoreDiagnosisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVmcoreDiagnosisTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetVmcoreDiagnosisTaskResponseBodyData) };
    inline GetVmcoreDiagnosisTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, GetVmcoreDiagnosisTaskResponseBodyData) };
    inline GetVmcoreDiagnosisTaskResponseBody& setData(const GetVmcoreDiagnosisTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVmcoreDiagnosisTaskResponseBody& setData(GetVmcoreDiagnosisTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVmcoreDiagnosisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVmcoreDiagnosisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetVmcoreDiagnosisTaskResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
