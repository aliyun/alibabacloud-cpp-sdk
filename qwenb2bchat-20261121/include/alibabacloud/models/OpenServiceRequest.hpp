// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace Models
{
  class OpenServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(communication, communication_);
      DARABONBA_PTR_TO_JSON(openBenefits, openBenefits_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(communication, communication_);
      DARABONBA_PTR_FROM_JSON(openBenefits, openBenefits_);
    };
    OpenServiceRequest() = default ;
    OpenServiceRequest(const OpenServiceRequest &) = default ;
    OpenServiceRequest(OpenServiceRequest &&) = default ;
    OpenServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceRequest() = default ;
    OpenServiceRequest& operator=(const OpenServiceRequest &) = default ;
    OpenServiceRequest& operator=(OpenServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Communication : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Communication& obj) { 
        DARABONBA_PTR_TO_JSON(user_info, userInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Communication& obj) { 
        DARABONBA_PTR_FROM_JSON(user_info, userInfo_);
      };
      Communication() = default ;
      Communication(const Communication &) = default ;
      Communication(Communication &&) = default ;
      Communication(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Communication() = default ;
      Communication& operator=(const Communication &) = default ;
      Communication& operator=(Communication &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        UserInfo() = default ;
        UserInfo(const UserInfo &) = default ;
        UserInfo(UserInfo &&) = default ;
        UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserInfo() = default ;
        UserInfo& operator=(const UserInfo &) = default ;
        UserInfo& operator=(UserInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // 客户应用内的业务用户标识，须符合凭据身份配置。非空，最多 256 个 UTF-16 代码单元，无首尾空白、控制字符或非法 Unicode。不是阿里云 UID、订单号或 SP 实例 ID。
        // 
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->userInfo_ == nullptr; };
      // userInfo Field Functions 
      bool hasUserInfo() const { return this->userInfo_ != nullptr;};
      void deleteUserInfo() { this->userInfo_ = nullptr;};
      inline const Communication::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Communication::UserInfo) };
      inline Communication::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, Communication::UserInfo) };
      inline Communication& setUserInfo(const Communication::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
      inline Communication& setUserInfo(Communication::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    protected:
      // communication 存在时必填的对象，只包含 user_id，不能为 null 或空对象。
      // 
      // This parameter is required.
      shared_ptr<Communication::UserInfo> userInfo_ {};
    };

    virtual bool empty() const override { return this->communication_ == nullptr
        && this->openBenefits_ == nullptr; };
    // communication Field Functions 
    bool hasCommunication() const { return this->communication_ != nullptr;};
    void deleteCommunication() { this->communication_ = nullptr;};
    inline const OpenServiceRequest::Communication & getCommunication() const { DARABONBA_PTR_GET_CONST(communication_, OpenServiceRequest::Communication) };
    inline OpenServiceRequest::Communication getCommunication() { DARABONBA_PTR_GET(communication_, OpenServiceRequest::Communication) };
    inline OpenServiceRequest& setCommunication(const OpenServiceRequest::Communication & communication) { DARABONBA_PTR_SET_VALUE(communication_, communication) };
    inline OpenServiceRequest& setCommunication(OpenServiceRequest::Communication && communication) { DARABONBA_PTR_SET_RVALUE(communication_, communication) };


    // openBenefits Field Functions 
    bool hasOpenBenefits() const { return this->openBenefits_ != nullptr;};
    void deleteOpenBenefits() { this->openBenefits_ = nullptr;};
    inline bool getOpenBenefits() const { DARABONBA_PTR_GET_DEFAULT(openBenefits_, false) };
    inline OpenServiceRequest& setOpenBenefits(bool openBenefits) { DARABONBA_PTR_SET_VALUE(openBenefits_, openBenefits) };


  protected:
    // 按凭据的业务身份配置提供；固定用户身份或不要求正文用户身份时可省略。若提供，必须是只含 user_info 的对象，不能为 null 或空对象。测试与真实开通请求执行相同身份检查。
    shared_ptr<OpenServiceRequest::Communication> communication_ {};
    // 必填 JSON 布尔值，无默认值。false 仅验证接口、鉴权、身份和请求参数，成功返回 TEST_OK，不实际开通。true 发起服务开通；返回 OPENING 时仍在处理中。重复发送 true 仍是开通操作，不是只读状态查询。字符串 true/false 不合法。
    // 
    // This parameter is required.
    shared_ptr<bool> openBenefits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
