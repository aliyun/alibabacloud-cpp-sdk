// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANCODEBINDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANCODEBINDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScanCodeBindShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanCodeBindShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindReq, bindReqShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ScanCodeBindShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindReq, bindReqShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ScanCodeBindShrinkRequest() = default ;
    ScanCodeBindShrinkRequest(const ScanCodeBindShrinkRequest &) = default ;
    ScanCodeBindShrinkRequest(ScanCodeBindShrinkRequest &&) = default ;
    ScanCodeBindShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanCodeBindShrinkRequest() = default ;
    ScanCodeBindShrinkRequest& operator=(const ScanCodeBindShrinkRequest &) = default ;
    ScanCodeBindShrinkRequest& operator=(ScanCodeBindShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindReqShrink_ == nullptr
        && this->userInfoShrink_ == nullptr; };
    // bindReqShrink Field Functions 
    bool hasBindReqShrink() const { return this->bindReqShrink_ != nullptr;};
    void deleteBindReqShrink() { this->bindReqShrink_ = nullptr;};
    inline string getBindReqShrink() const { DARABONBA_PTR_GET_DEFAULT(bindReqShrink_, "") };
    inline ScanCodeBindShrinkRequest& setBindReqShrink(string bindReqShrink) { DARABONBA_PTR_SET_VALUE(bindReqShrink_, bindReqShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ScanCodeBindShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // Input parameters for QR code scanning binding
    // 
    // This parameter is required.
    shared_ptr<string> bindReqShrink_ {};
    // User identity information
    // 
    // This parameter is required.
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
