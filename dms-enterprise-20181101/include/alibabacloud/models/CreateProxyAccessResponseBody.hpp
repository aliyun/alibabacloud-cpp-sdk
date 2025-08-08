// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROXYACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROXYACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateProxyAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProxyAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxyAccessId, proxyAccessId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProxyAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxyAccessId, proxyAccessId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateProxyAccessResponseBody() = default ;
    CreateProxyAccessResponseBody(const CreateProxyAccessResponseBody &) = default ;
    CreateProxyAccessResponseBody(CreateProxyAccessResponseBody &&) = default ;
    CreateProxyAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProxyAccessResponseBody() = default ;
    CreateProxyAccessResponseBody& operator=(const CreateProxyAccessResponseBody &) = default ;
    CreateProxyAccessResponseBody& operator=(CreateProxyAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->proxyAccessId_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateProxyAccessResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateProxyAccessResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxyAccessId Field Functions 
    bool hasProxyAccessId() const { return this->proxyAccessId_ != nullptr;};
    void deleteProxyAccessId() { this->proxyAccessId_ = nullptr;};
    inline int64_t proxyAccessId() const { DARABONBA_PTR_GET_DEFAULT(proxyAccessId_, 0L) };
    inline CreateProxyAccessResponseBody& setProxyAccessId(int64_t proxyAccessId) { DARABONBA_PTR_SET_VALUE(proxyAccessId_, proxyAccessId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProxyAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateProxyAccessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned to the query task.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the security protection authorization. After the security protection agent authorizes the target user, the system automatically generates a security protection authorization ID. The ID is globally unique.
    std::shared_ptr<int64_t> proxyAccessId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
