// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBuildRiskDefineRuleConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBuildRiskDefineRuleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBuildRiskDefineRuleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBuildRiskDefineRuleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBuildRiskDefineRuleConfigResponseBody() = default ;
    GetBuildRiskDefineRuleConfigResponseBody(const GetBuildRiskDefineRuleConfigResponseBody &) = default ;
    GetBuildRiskDefineRuleConfigResponseBody(GetBuildRiskDefineRuleConfigResponseBody &&) = default ;
    GetBuildRiskDefineRuleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBuildRiskDefineRuleConfigResponseBody() = default ;
    GetBuildRiskDefineRuleConfigResponseBody& operator=(const GetBuildRiskDefineRuleConfigResponseBody &) = default ;
    GetBuildRiskDefineRuleConfigResponseBody& operator=(GetBuildRiskDefineRuleConfigResponseBody &&) = default ;
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
    inline GetBuildRiskDefineRuleConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBuildRiskDefineRuleConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetBuildRiskDefineRuleConfigResponseBodyData) };
    inline GetBuildRiskDefineRuleConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, GetBuildRiskDefineRuleConfigResponseBodyData) };
    inline GetBuildRiskDefineRuleConfigResponseBody& setData(const GetBuildRiskDefineRuleConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBuildRiskDefineRuleConfigResponseBody& setData(GetBuildRiskDefineRuleConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBuildRiskDefineRuleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    std::shared_ptr<string> code_ = nullptr;
    // The data returned.
    std::shared_ptr<GetBuildRiskDefineRuleConfigResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
