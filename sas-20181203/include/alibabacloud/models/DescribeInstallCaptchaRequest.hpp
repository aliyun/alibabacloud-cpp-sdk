// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTALLCAPTCHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTALLCAPTCHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstallCaptchaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstallCaptchaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Deadline, deadline_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstallCaptchaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Deadline, deadline_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeInstallCaptchaRequest() = default ;
    DescribeInstallCaptchaRequest(const DescribeInstallCaptchaRequest &) = default ;
    DescribeInstallCaptchaRequest(DescribeInstallCaptchaRequest &&) = default ;
    DescribeInstallCaptchaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstallCaptchaRequest() = default ;
    DescribeInstallCaptchaRequest& operator=(const DescribeInstallCaptchaRequest &) = default ;
    DescribeInstallCaptchaRequest& operator=(DescribeInstallCaptchaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deadline_ != nullptr
        && this->lang_ != nullptr && this->sourceIp_ != nullptr; };
    // deadline Field Functions 
    bool hasDeadline() const { return this->deadline_ != nullptr;};
    void deleteDeadline() { this->deadline_ = nullptr;};
    inline string deadline() const { DARABONBA_PTR_GET_DEFAULT(deadline_, "") };
    inline DescribeInstallCaptchaRequest& setDeadline(string deadline) { DARABONBA_PTR_SET_VALUE(deadline_, deadline) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstallCaptchaRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInstallCaptchaRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The validity period of verification codes. If this parameter is not specified, only the valid verification codes are returned.
    // 
    // >  An installation verification code can be used only within the validity period. An expired installation verification code cannot be used to install the Security Center agent.
    std::shared_ptr<string> deadline_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
