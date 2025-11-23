// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROXYACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROXYACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProxyAccessResponseBodyProxyAccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetProxyAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProxyAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxyAccess, proxyAccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetProxyAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxyAccess, proxyAccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetProxyAccessResponseBody() = default ;
    GetProxyAccessResponseBody(const GetProxyAccessResponseBody &) = default ;
    GetProxyAccessResponseBody(GetProxyAccessResponseBody &&) = default ;
    GetProxyAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProxyAccessResponseBody() = default ;
    GetProxyAccessResponseBody& operator=(const GetProxyAccessResponseBody &) = default ;
    GetProxyAccessResponseBody& operator=(GetProxyAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->proxyAccess_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetProxyAccessResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetProxyAccessResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxyAccess Field Functions 
    bool hasProxyAccess() const { return this->proxyAccess_ != nullptr;};
    void deleteProxyAccess() { this->proxyAccess_ = nullptr;};
    inline const GetProxyAccessResponseBodyProxyAccess & proxyAccess() const { DARABONBA_PTR_GET_CONST(proxyAccess_, GetProxyAccessResponseBodyProxyAccess) };
    inline GetProxyAccessResponseBodyProxyAccess proxyAccess() { DARABONBA_PTR_GET(proxyAccess_, GetProxyAccessResponseBodyProxyAccess) };
    inline GetProxyAccessResponseBody& setProxyAccess(const GetProxyAccessResponseBodyProxyAccess & proxyAccess) { DARABONBA_PTR_SET_VALUE(proxyAccess_, proxyAccess) };
    inline GetProxyAccessResponseBody& setProxyAccess(GetProxyAccessResponseBodyProxyAccess && proxyAccess) { DARABONBA_PTR_SET_RVALUE(proxyAccess_, proxyAccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProxyAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetProxyAccessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The authorization information about the secure access proxy feature.
    std::shared_ptr<GetProxyAccessResponseBodyProxyAccess> proxyAccess_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
