// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENGINENAMEPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENGINENAMEPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetEngineNamepaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEngineNamepaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigCount, configCount_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceDesc, namespaceDesc_);
      DARABONBA_PTR_TO_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetEngineNamepaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigCount, configCount_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceDesc, namespaceDesc_);
      DARABONBA_PTR_FROM_JSON(NamespaceShowName, namespaceShowName_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetEngineNamepaceResponseBody() = default ;
    GetEngineNamepaceResponseBody(const GetEngineNamepaceResponseBody &) = default ;
    GetEngineNamepaceResponseBody(GetEngineNamepaceResponseBody &&) = default ;
    GetEngineNamepaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEngineNamepaceResponseBody() = default ;
    GetEngineNamepaceResponseBody& operator=(const GetEngineNamepaceResponseBody &) = default ;
    GetEngineNamepaceResponseBody& operator=(GetEngineNamepaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configCount_ != nullptr
        && this->errorCode_ != nullptr && this->httpCode_ != nullptr && this->message_ != nullptr && this->namespace_ != nullptr && this->namespaceDesc_ != nullptr
        && this->namespaceShowName_ != nullptr && this->quota_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->type_ != nullptr; };
    // configCount Field Functions 
    bool hasConfigCount() const { return this->configCount_ != nullptr;};
    void deleteConfigCount() { this->configCount_ = nullptr;};
    inline string configCount() const { DARABONBA_PTR_GET_DEFAULT(configCount_, "") };
    inline GetEngineNamepaceResponseBody& setConfigCount(string configCount) { DARABONBA_PTR_SET_VALUE(configCount_, configCount) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetEngineNamepaceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline GetEngineNamepaceResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEngineNamepaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetEngineNamepaceResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceDesc Field Functions 
    bool hasNamespaceDesc() const { return this->namespaceDesc_ != nullptr;};
    void deleteNamespaceDesc() { this->namespaceDesc_ = nullptr;};
    inline string namespaceDesc() const { DARABONBA_PTR_GET_DEFAULT(namespaceDesc_, "") };
    inline GetEngineNamepaceResponseBody& setNamespaceDesc(string namespaceDesc) { DARABONBA_PTR_SET_VALUE(namespaceDesc_, namespaceDesc) };


    // namespaceShowName Field Functions 
    bool hasNamespaceShowName() const { return this->namespaceShowName_ != nullptr;};
    void deleteNamespaceShowName() { this->namespaceShowName_ = nullptr;};
    inline string namespaceShowName() const { DARABONBA_PTR_GET_DEFAULT(namespaceShowName_, "") };
    inline GetEngineNamepaceResponseBody& setNamespaceShowName(string namespaceShowName) { DARABONBA_PTR_SET_VALUE(namespaceShowName_, namespaceShowName) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline string quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, "") };
    inline GetEngineNamepaceResponseBody& setQuota(string quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEngineNamepaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetEngineNamepaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetEngineNamepaceResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of configurations.
    std::shared_ptr<string> configCount_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<string> httpCode_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> namespaceDesc_ = nullptr;
    // The display name of the namespace.
    std::shared_ptr<string> namespaceShowName_ = nullptr;
    // The quota of configurations.
    std::shared_ptr<string> quota_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The type of the namespace. Valid values:
    // 
    // *   0: global configuration
    // *   1: default namespace
    // *   2: custom namespace
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
