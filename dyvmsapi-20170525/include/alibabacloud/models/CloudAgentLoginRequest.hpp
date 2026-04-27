// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTLOGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTLOGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentLoginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentLoginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
      DARABONBA_PTR_TO_JSON(BindType, bindType_);
      DARABONBA_PTR_TO_JSON(Cno, cno_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(LoginStatus, loginStatus_);
      DARABONBA_PTR_TO_JSON(PauseDescription, pauseDescription_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentLoginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
      DARABONBA_PTR_FROM_JSON(BindType, bindType_);
      DARABONBA_PTR_FROM_JSON(Cno, cno_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(LoginStatus, loginStatus_);
      DARABONBA_PTR_FROM_JSON(PauseDescription, pauseDescription_);
    };
    CloudAgentLoginRequest() = default ;
    CloudAgentLoginRequest(const CloudAgentLoginRequest &) = default ;
    CloudAgentLoginRequest(CloudAgentLoginRequest &&) = default ;
    CloudAgentLoginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentLoginRequest() = default ;
    CloudAgentLoginRequest& operator=(const CloudAgentLoginRequest &) = default ;
    CloudAgentLoginRequest& operator=(CloudAgentLoginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindTel_ == nullptr
        && this->bindType_ == nullptr && this->cno_ == nullptr && this->enterpriseId_ == nullptr && this->loginStatus_ == nullptr && this->pauseDescription_ == nullptr; };
    // bindTel Field Functions 
    bool hasBindTel() const { return this->bindTel_ != nullptr;};
    void deleteBindTel() { this->bindTel_ = nullptr;};
    inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
    inline CloudAgentLoginRequest& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


    // bindType Field Functions 
    bool hasBindType() const { return this->bindType_ != nullptr;};
    void deleteBindType() { this->bindType_ = nullptr;};
    inline int64_t getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, 0L) };
    inline CloudAgentLoginRequest& setBindType(int64_t bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


    // cno Field Functions 
    bool hasCno() const { return this->cno_ != nullptr;};
    void deleteCno() { this->cno_ = nullptr;};
    inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
    inline CloudAgentLoginRequest& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudAgentLoginRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // loginStatus Field Functions 
    bool hasLoginStatus() const { return this->loginStatus_ != nullptr;};
    void deleteLoginStatus() { this->loginStatus_ = nullptr;};
    inline int64_t getLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(loginStatus_, 0L) };
    inline CloudAgentLoginRequest& setLoginStatus(int64_t loginStatus) { DARABONBA_PTR_SET_VALUE(loginStatus_, loginStatus) };


    // pauseDescription Field Functions 
    bool hasPauseDescription() const { return this->pauseDescription_ != nullptr;};
    void deletePauseDescription() { this->pauseDescription_ = nullptr;};
    inline string getPauseDescription() const { DARABONBA_PTR_GET_DEFAULT(pauseDescription_, "") };
    inline CloudAgentLoginRequest& setPauseDescription(string pauseDescription) { DARABONBA_PTR_SET_VALUE(pauseDescription_, pauseDescription) };


  protected:
    // 绑定电话
    // 
    // This parameter is required.
    shared_ptr<string> bindTel_ {};
    // 取值 1.普通电话,2.分机,3.webrtc </br>说明：绑定类型如果是分机则必须先让分机电话设备注册成功。如果绑定类型为webrtc，就算调用接口成功也是无法呼叫的。如果在企业设置页面开启了自适应绑定电话类型，则系统会根据绑定的号码来找到对应的绑定类型，使用系统找到的绑定类型，此处的设置优先级低。
    // 
    // This parameter is required.
    shared_ptr<int64_t> bindType_ {};
    // 座席工号；取值3-10位正整数
    // 
    // This parameter is required.
    shared_ptr<string> cno_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 登录状态，1：置闲，2：置忙，默认为1
    shared_ptr<int64_t> loginStatus_ {};
    // 置忙描述
    shared_ptr<string> pauseDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
