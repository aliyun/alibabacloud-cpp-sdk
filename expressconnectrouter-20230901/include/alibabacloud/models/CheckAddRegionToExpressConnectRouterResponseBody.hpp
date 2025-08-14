// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKADDREGIONTOEXPRESSCONNECTROUTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKADDREGIONTOEXPRESSCONNECTROUTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class CheckAddRegionToExpressConnectRouterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAddRegionToExpressConnectRouterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AnyCrossBorderLink, anyCrossBorderLink_);
      DARABONBA_PTR_TO_JSON(AnyInterRegionLink, anyInterRegionLink_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(IsCdtCrossBorderEnabled, isCdtCrossBorderEnabled_);
      DARABONBA_PTR_TO_JSON(IsCdtInterRegionEnabled, isCdtInterRegionEnabled_);
      DARABONBA_PTR_TO_JSON(IsUserAllowedToCreateCrossBorderLink, isUserAllowedToCreateCrossBorderLink_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAddRegionToExpressConnectRouterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AnyCrossBorderLink, anyCrossBorderLink_);
      DARABONBA_PTR_FROM_JSON(AnyInterRegionLink, anyInterRegionLink_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(IsCdtCrossBorderEnabled, isCdtCrossBorderEnabled_);
      DARABONBA_PTR_FROM_JSON(IsCdtInterRegionEnabled, isCdtInterRegionEnabled_);
      DARABONBA_PTR_FROM_JSON(IsUserAllowedToCreateCrossBorderLink, isUserAllowedToCreateCrossBorderLink_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckAddRegionToExpressConnectRouterResponseBody() = default ;
    CheckAddRegionToExpressConnectRouterResponseBody(const CheckAddRegionToExpressConnectRouterResponseBody &) = default ;
    CheckAddRegionToExpressConnectRouterResponseBody(CheckAddRegionToExpressConnectRouterResponseBody &&) = default ;
    CheckAddRegionToExpressConnectRouterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAddRegionToExpressConnectRouterResponseBody() = default ;
    CheckAddRegionToExpressConnectRouterResponseBody& operator=(const CheckAddRegionToExpressConnectRouterResponseBody &) = default ;
    CheckAddRegionToExpressConnectRouterResponseBody& operator=(CheckAddRegionToExpressConnectRouterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->anyCrossBorderLink_ != nullptr && this->anyInterRegionLink_ != nullptr && this->code_ != nullptr && this->dynamicCode_ != nullptr && this->dynamicMessage_ != nullptr
        && this->httpStatusCode_ != nullptr && this->isCdtCrossBorderEnabled_ != nullptr && this->isCdtInterRegionEnabled_ != nullptr && this->isUserAllowedToCreateCrossBorderLink_ != nullptr && this->message_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // anyCrossBorderLink Field Functions 
    bool hasAnyCrossBorderLink() const { return this->anyCrossBorderLink_ != nullptr;};
    void deleteAnyCrossBorderLink() { this->anyCrossBorderLink_ = nullptr;};
    inline bool anyCrossBorderLink() const { DARABONBA_PTR_GET_DEFAULT(anyCrossBorderLink_, false) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setAnyCrossBorderLink(bool anyCrossBorderLink) { DARABONBA_PTR_SET_VALUE(anyCrossBorderLink_, anyCrossBorderLink) };


    // anyInterRegionLink Field Functions 
    bool hasAnyInterRegionLink() const { return this->anyInterRegionLink_ != nullptr;};
    void deleteAnyInterRegionLink() { this->anyInterRegionLink_ = nullptr;};
    inline bool anyInterRegionLink() const { DARABONBA_PTR_GET_DEFAULT(anyInterRegionLink_, false) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setAnyInterRegionLink(bool anyInterRegionLink) { DARABONBA_PTR_SET_VALUE(anyInterRegionLink_, anyInterRegionLink) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // isCdtCrossBorderEnabled Field Functions 
    bool hasIsCdtCrossBorderEnabled() const { return this->isCdtCrossBorderEnabled_ != nullptr;};
    void deleteIsCdtCrossBorderEnabled() { this->isCdtCrossBorderEnabled_ = nullptr;};
    inline bool isCdtCrossBorderEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCdtCrossBorderEnabled_, false) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setIsCdtCrossBorderEnabled(bool isCdtCrossBorderEnabled) { DARABONBA_PTR_SET_VALUE(isCdtCrossBorderEnabled_, isCdtCrossBorderEnabled) };


    // isCdtInterRegionEnabled Field Functions 
    bool hasIsCdtInterRegionEnabled() const { return this->isCdtInterRegionEnabled_ != nullptr;};
    void deleteIsCdtInterRegionEnabled() { this->isCdtInterRegionEnabled_ = nullptr;};
    inline bool isCdtInterRegionEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCdtInterRegionEnabled_, false) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setIsCdtInterRegionEnabled(bool isCdtInterRegionEnabled) { DARABONBA_PTR_SET_VALUE(isCdtInterRegionEnabled_, isCdtInterRegionEnabled) };


    // isUserAllowedToCreateCrossBorderLink Field Functions 
    bool hasIsUserAllowedToCreateCrossBorderLink() const { return this->isUserAllowedToCreateCrossBorderLink_ != nullptr;};
    void deleteIsUserAllowedToCreateCrossBorderLink() { this->isUserAllowedToCreateCrossBorderLink_ = nullptr;};
    inline bool isUserAllowedToCreateCrossBorderLink() const { DARABONBA_PTR_GET_DEFAULT(isUserAllowedToCreateCrossBorderLink_, false) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setIsUserAllowedToCreateCrossBorderLink(bool isUserAllowedToCreateCrossBorderLink) { DARABONBA_PTR_SET_VALUE(isUserAllowedToCreateCrossBorderLink_, isUserAllowedToCreateCrossBorderLink) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckAddRegionToExpressConnectRouterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // Indicates whether the ECR is used to establish connections between regions in the Chinese mainland and regions outside China. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> anyCrossBorderLink_ = nullptr;
    // Indicates whether the ECR is used to establish connections between regions in the Chinese mainland. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> anyInterRegionLink_ = nullptr;
    // The response code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed. For more information, see Error codes.
    std::shared_ptr<string> code_ = nullptr;
    // The dynamic error code.
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace the `%s` variable in **ErrMessage**.
    // 
    // >  For example, if the value of **ErrMessage** is **The Value of Input Parameter %s is not valid** and the value of **DynamicMessage** is **DtsInstanceId**, the request parameter **DtsInstanceId** is invalid.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // Indicates whether the cross-border CDT service is activated for the account to which the ECR belongs. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isCdtCrossBorderEnabled_ = nullptr;
    // Indicates whether the CDT service is activated for the account to which the ECR belongs. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isCdtInterRegionEnabled_ = nullptr;
    // Indicates whether the account to which the ECR belongs can create cross-border connections. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isUserAllowedToCreateCrossBorderLink_ = nullptr;
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
} // namespace ExpressConnectRouter20230901
#endif
