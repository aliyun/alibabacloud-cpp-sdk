// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTATIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTATIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetQuotaTipResponseBodyQuotaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetQuotaTipResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaTipResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QuotaData, quotaData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaTipResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QuotaData, quotaData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQuotaTipResponseBody() = default ;
    GetQuotaTipResponseBody(const GetQuotaTipResponseBody &) = default ;
    GetQuotaTipResponseBody(GetQuotaTipResponseBody &&) = default ;
    GetQuotaTipResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaTipResponseBody() = default ;
    GetQuotaTipResponseBody& operator=(const GetQuotaTipResponseBody &) = default ;
    GetQuotaTipResponseBody& operator=(GetQuotaTipResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->quotaData_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetQuotaTipResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQuotaTipResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // quotaData Field Functions 
    bool hasQuotaData() const { return this->quotaData_ != nullptr;};
    void deleteQuotaData() { this->quotaData_ = nullptr;};
    inline const GetQuotaTipResponseBodyQuotaData & quotaData() const { DARABONBA_PTR_GET_CONST(quotaData_, GetQuotaTipResponseBodyQuotaData) };
    inline GetQuotaTipResponseBodyQuotaData quotaData() { DARABONBA_PTR_GET(quotaData_, GetQuotaTipResponseBodyQuotaData) };
    inline GetQuotaTipResponseBody& setQuotaData(const GetQuotaTipResponseBodyQuotaData & quotaData) { DARABONBA_PTR_SET_VALUE(quotaData_, quotaData) };
    inline GetQuotaTipResponseBody& setQuotaData(GetQuotaTipResponseBodyQuotaData && quotaData) { DARABONBA_PTR_SET_RVALUE(quotaData_, quotaData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaTipResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQuotaTipResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional message. This message is typically used to describe API call failures for troubleshooting.
    std::shared_ptr<string> message_ = nullptr;
    // The quota.
    std::shared_ptr<GetQuotaTipResponseBodyQuotaData> quotaData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
