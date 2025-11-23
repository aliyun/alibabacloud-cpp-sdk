// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataCronClearConfigResponseBodyDataCronClearConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCronClearConfig, dataCronClearConfig_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCronClearConfig, dataCronClearConfig_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCronClearConfigResponseBody() = default ;
    GetDataCronClearConfigResponseBody(const GetDataCronClearConfigResponseBody &) = default ;
    GetDataCronClearConfigResponseBody(GetDataCronClearConfigResponseBody &&) = default ;
    GetDataCronClearConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearConfigResponseBody() = default ;
    GetDataCronClearConfigResponseBody& operator=(const GetDataCronClearConfigResponseBody &) = default ;
    GetDataCronClearConfigResponseBody& operator=(GetDataCronClearConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCronClearConfig_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // dataCronClearConfig Field Functions 
    bool hasDataCronClearConfig() const { return this->dataCronClearConfig_ != nullptr;};
    void deleteDataCronClearConfig() { this->dataCronClearConfig_ = nullptr;};
    inline const GetDataCronClearConfigResponseBodyDataCronClearConfig & dataCronClearConfig() const { DARABONBA_PTR_GET_CONST(dataCronClearConfig_, GetDataCronClearConfigResponseBodyDataCronClearConfig) };
    inline GetDataCronClearConfigResponseBodyDataCronClearConfig dataCronClearConfig() { DARABONBA_PTR_GET(dataCronClearConfig_, GetDataCronClearConfigResponseBodyDataCronClearConfig) };
    inline GetDataCronClearConfigResponseBody& setDataCronClearConfig(const GetDataCronClearConfigResponseBodyDataCronClearConfig & dataCronClearConfig) { DARABONBA_PTR_SET_VALUE(dataCronClearConfig_, dataCronClearConfig) };
    inline GetDataCronClearConfigResponseBody& setDataCronClearConfig(GetDataCronClearConfigResponseBodyDataCronClearConfig && dataCronClearConfig) { DARABONBA_PTR_SET_RVALUE(dataCronClearConfig_, dataCronClearConfig) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCronClearConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCronClearConfigResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCronClearConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCronClearConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Data configuration.
    std::shared_ptr<GetDataCronClearConfigResponseBodyDataCronClearConfig> dataCronClearConfig_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
