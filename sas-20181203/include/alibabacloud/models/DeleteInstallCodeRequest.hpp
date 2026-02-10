// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTALLCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTALLCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteInstallCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstallCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaptchaCode, captchaCode_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstallCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptchaCode, captchaCode_);
    };
    DeleteInstallCodeRequest() = default ;
    DeleteInstallCodeRequest(const DeleteInstallCodeRequest &) = default ;
    DeleteInstallCodeRequest(DeleteInstallCodeRequest &&) = default ;
    DeleteInstallCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstallCodeRequest() = default ;
    DeleteInstallCodeRequest& operator=(const DeleteInstallCodeRequest &) = default ;
    DeleteInstallCodeRequest& operator=(DeleteInstallCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captchaCode_ == nullptr; };
    // captchaCode Field Functions 
    bool hasCaptchaCode() const { return this->captchaCode_ != nullptr;};
    void deleteCaptchaCode() { this->captchaCode_ = nullptr;};
    inline string getCaptchaCode() const { DARABONBA_PTR_GET_DEFAULT(captchaCode_, "") };
    inline DeleteInstallCodeRequest& setCaptchaCode(string captchaCode) { DARABONBA_PTR_SET_VALUE(captchaCode_, captchaCode) };


  protected:
    // The installation command.
    // 
    // >  You can call the [DescribeInstallCodes](~~DescribeInstallCodes~~) operation to query installation commands.
    // 
    // This parameter is required.
    shared_ptr<string> captchaCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
