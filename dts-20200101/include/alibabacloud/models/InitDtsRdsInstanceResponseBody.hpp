// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITDTSRDSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITDTSRDSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class InitDtsRdsInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitDtsRdsInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminAccount, adminAccount_);
      DARABONBA_PTR_TO_JSON(AdminPassword, adminPassword_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InitDtsRdsInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminAccount, adminAccount_);
      DARABONBA_PTR_FROM_JSON(AdminPassword, adminPassword_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InitDtsRdsInstanceResponseBody() = default ;
    InitDtsRdsInstanceResponseBody(const InitDtsRdsInstanceResponseBody &) = default ;
    InitDtsRdsInstanceResponseBody(InitDtsRdsInstanceResponseBody &&) = default ;
    InitDtsRdsInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitDtsRdsInstanceResponseBody() = default ;
    InitDtsRdsInstanceResponseBody& operator=(const InitDtsRdsInstanceResponseBody &) = default ;
    InitDtsRdsInstanceResponseBody& operator=(InitDtsRdsInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminAccount_ == nullptr
        && return this->adminPassword_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // adminAccount Field Functions 
    bool hasAdminAccount() const { return this->adminAccount_ != nullptr;};
    void deleteAdminAccount() { this->adminAccount_ = nullptr;};
    inline string adminAccount() const { DARABONBA_PTR_GET_DEFAULT(adminAccount_, "") };
    inline InitDtsRdsInstanceResponseBody& setAdminAccount(string adminAccount) { DARABONBA_PTR_SET_VALUE(adminAccount_, adminAccount) };


    // adminPassword Field Functions 
    bool hasAdminPassword() const { return this->adminPassword_ != nullptr;};
    void deleteAdminPassword() { this->adminPassword_ = nullptr;};
    inline string adminPassword() const { DARABONBA_PTR_GET_DEFAULT(adminPassword_, "") };
    inline InitDtsRdsInstanceResponseBody& setAdminPassword(string adminPassword) { DARABONBA_PTR_SET_VALUE(adminPassword_, adminPassword) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline InitDtsRdsInstanceResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline InitDtsRdsInstanceResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline InitDtsRdsInstanceResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitDtsRdsInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline InitDtsRdsInstanceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The built-in account that is used by DTS to connect to the node.
    std::shared_ptr<string> adminAccount_ = nullptr;
    // The password of the built-in account.
    std::shared_ptr<string> adminPassword_ = nullptr;
    // The error code returned if the request fails.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
