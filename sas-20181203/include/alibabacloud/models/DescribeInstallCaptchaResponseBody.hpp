// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTALLCAPTCHARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTALLCAPTCHARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstallCaptchaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstallCaptchaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaptchaCode, captchaCode_);
      DARABONBA_PTR_TO_JSON(Deadline, deadline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstallCaptchaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptchaCode, captchaCode_);
      DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstallCaptchaResponseBody() = default ;
    DescribeInstallCaptchaResponseBody(const DescribeInstallCaptchaResponseBody &) = default ;
    DescribeInstallCaptchaResponseBody(DescribeInstallCaptchaResponseBody &&) = default ;
    DescribeInstallCaptchaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstallCaptchaResponseBody() = default ;
    DescribeInstallCaptchaResponseBody& operator=(const DescribeInstallCaptchaResponseBody &) = default ;
    DescribeInstallCaptchaResponseBody& operator=(DescribeInstallCaptchaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captchaCode_ == nullptr
        && this->deadline_ == nullptr && this->requestId_ == nullptr; };
    // captchaCode Field Functions 
    bool hasCaptchaCode() const { return this->captchaCode_ != nullptr;};
    void deleteCaptchaCode() { this->captchaCode_ = nullptr;};
    inline string getCaptchaCode() const { DARABONBA_PTR_GET_DEFAULT(captchaCode_, "") };
    inline DescribeInstallCaptchaResponseBody& setCaptchaCode(string captchaCode) { DARABONBA_PTR_SET_VALUE(captchaCode_, captchaCode) };


    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline string getDeadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
    inline DescribeInstallCaptchaResponseBody& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstallCaptchaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The installation verification code for you to manually install the Security Center agent.
    shared_ptr<string> captchaCode_ {};
    // The validity period of the installation verification code.
    // 
    // >  The installation verification code is valid only within the validity period. An expired installation verification code cannot be used to install the agent.
    shared_ptr<string> deadline_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
