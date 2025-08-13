// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSHISTORYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNacosHistoryConfigResponseBodyConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosHistoryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosHistoryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosHistoryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetNacosHistoryConfigResponseBody() = default ;
    GetNacosHistoryConfigResponseBody(const GetNacosHistoryConfigResponseBody &) = default ;
    GetNacosHistoryConfigResponseBody(GetNacosHistoryConfigResponseBody &&) = default ;
    GetNacosHistoryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosHistoryConfigResponseBody() = default ;
    GetNacosHistoryConfigResponseBody& operator=(const GetNacosHistoryConfigResponseBody &) = default ;
    GetNacosHistoryConfigResponseBody& operator=(GetNacosHistoryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configuration_ != nullptr
        && this->errorCode_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const GetNacosHistoryConfigResponseBodyConfiguration & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, GetNacosHistoryConfigResponseBodyConfiguration) };
    inline GetNacosHistoryConfigResponseBodyConfiguration configuration() { DARABONBA_PTR_GET(configuration_, GetNacosHistoryConfigResponseBodyConfiguration) };
    inline GetNacosHistoryConfigResponseBody& setConfiguration(const GetNacosHistoryConfigResponseBodyConfiguration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline GetNacosHistoryConfigResponseBody& setConfiguration(GetNacosHistoryConfigResponseBodyConfiguration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetNacosHistoryConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNacosHistoryConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNacosHistoryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetNacosHistoryConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The configuration information.
    std::shared_ptr<GetNacosHistoryConfigResponseBodyConfiguration> configuration_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
