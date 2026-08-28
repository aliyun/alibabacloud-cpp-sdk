// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOPILOTPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOPILOTPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AutopilotPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetAutopilotPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutopilotPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutopilotPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAutopilotPolicyResponseBody() = default ;
    GetAutopilotPolicyResponseBody(const GetAutopilotPolicyResponseBody &) = default ;
    GetAutopilotPolicyResponseBody(GetAutopilotPolicyResponseBody &&) = default ;
    GetAutopilotPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutopilotPolicyResponseBody() = default ;
    GetAutopilotPolicyResponseBody& operator=(const GetAutopilotPolicyResponseBody &) = default ;
    GetAutopilotPolicyResponseBody& operator=(GetAutopilotPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(policyConfig, policyConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(policyConfig, policyConfig_);
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
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->policyConfig_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // policyConfig Field Functions 
      bool hasPolicyConfig() const { return this->policyConfig_ != nullptr;};
      void deletePolicyConfig() { this->policyConfig_ = nullptr;};
      inline const AutopilotPolicy & getPolicyConfig() const { DARABONBA_PTR_GET_CONST(policyConfig_, AutopilotPolicy) };
      inline AutopilotPolicy getPolicyConfig() { DARABONBA_PTR_GET(policyConfig_, AutopilotPolicy) };
      inline Data& setPolicyConfig(const AutopilotPolicy & policyConfig) { DARABONBA_PTR_SET_VALUE(policyConfig_, policyConfig) };
      inline Data& setPolicyConfig(AutopilotPolicy && policyConfig) { DARABONBA_PTR_SET_RVALUE(policyConfig_, policyConfig) };


    protected:
      // Indicates whether automatic tuning is enabled. A value of true indicates that automatic tuning is active (ACTIVE). A value of false indicates that tuning is not enabled.
      shared_ptr<bool> enabled_ {};
      // The tuning policy configuration.
      shared_ptr<AutopilotPolicy> policyConfig_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAutopilotPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAutopilotPolicyResponseBody::Data) };
    inline GetAutopilotPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAutopilotPolicyResponseBody::Data) };
    inline GetAutopilotPolicyResponseBody& setData(const GetAutopilotPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAutopilotPolicyResponseBody& setData(GetAutopilotPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAutopilotPolicyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAutopilotPolicyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetAutopilotPolicyResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutopilotPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAutopilotPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The Autopilot tuning policy response data.
    shared_ptr<GetAutopilotPolicyResponseBody::Data> data_ {};
    // The error code. This field is not empty when success is false. This field is empty when success is true.
    shared_ptr<string> errorCode_ {};
    // The error message. This field is not empty when success is false. This field is empty when success is true.
    shared_ptr<string> errorMessage_ {};
    // The business status code, which is always 200. Use the success field to determine whether the request is successful.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
