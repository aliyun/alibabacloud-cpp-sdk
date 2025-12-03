// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPPCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAPPCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ResetAppCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAppCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(NewAppCode, newAppCode_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAppCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(NewAppCode, newAppCode_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ResetAppCodeRequest() = default ;
    ResetAppCodeRequest(const ResetAppCodeRequest &) = default ;
    ResetAppCodeRequest(ResetAppCodeRequest &&) = default ;
    ResetAppCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAppCodeRequest() = default ;
    ResetAppCodeRequest& operator=(const ResetAppCodeRequest &) = default ;
    ResetAppCodeRequest& operator=(ResetAppCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->newAppCode_ == nullptr && return this->securityToken_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ResetAppCodeRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // newAppCode Field Functions 
    bool hasNewAppCode() const { return this->newAppCode_ != nullptr;};
    void deleteNewAppCode() { this->newAppCode_ = nullptr;};
    inline string newAppCode() const { DARABONBA_PTR_GET_DEFAULT(newAppCode_, "") };
    inline ResetAppCodeRequest& setNewAppCode(string newAppCode) { DARABONBA_PTR_SET_VALUE(newAppCode_, newAppCode) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ResetAppCodeRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The AppCode of the app.
    // 
    // This parameter is required.
    std::shared_ptr<string> appCode_ = nullptr;
    // The new AppCode of the app.
    std::shared_ptr<string> newAppCode_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
