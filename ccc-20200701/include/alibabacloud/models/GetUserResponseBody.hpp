// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserResponseBody() = default ;
    GetUserResponseBody(const GetUserResponseBody &) = default ;
    GetUserResponseBody(GetUserResponseBody &&) = default ;
    GetUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBody() = default ;
    GetUserResponseBody& operator=(const GetUserResponseBody &) = default ;
    GetUserResponseBody& operator=(GetUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_TO_JSON(DeviceExt, deviceExt_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceState, deviceState_);
        DARABONBA_PTR_TO_JSON(DisplayId, displayId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LoginName, loginName_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Nickname, nickname_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_FROM_JSON(DeviceExt, deviceExt_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceState, deviceState_);
        DARABONBA_PTR_FROM_JSON(DisplayId, displayId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && this->deviceExt_ == nullptr && this->deviceId_ == nullptr && this->deviceState_ == nullptr && this->displayId_ == nullptr && this->displayName_ == nullptr
        && this->email_ == nullptr && this->extension_ == nullptr && this->instanceId_ == nullptr && this->loginName_ == nullptr && this->mobile_ == nullptr
        && this->nickname_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr && this->userId_ == nullptr && this->workMode_ == nullptr; };
      // avatarUrl Field Functions 
      bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
      void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
      inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
      inline Data& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


      // deviceExt Field Functions 
      bool hasDeviceExt() const { return this->deviceExt_ != nullptr;};
      void deleteDeviceExt() { this->deviceExt_ = nullptr;};
      inline string getDeviceExt() const { DARABONBA_PTR_GET_DEFAULT(deviceExt_, "") };
      inline Data& setDeviceExt(string deviceExt) { DARABONBA_PTR_SET_VALUE(deviceExt_, deviceExt) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Data& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceState Field Functions 
      bool hasDeviceState() const { return this->deviceState_ != nullptr;};
      void deleteDeviceState() { this->deviceState_ = nullptr;};
      inline string getDeviceState() const { DARABONBA_PTR_GET_DEFAULT(deviceState_, "") };
      inline Data& setDeviceState(string deviceState) { DARABONBA_PTR_SET_VALUE(deviceState_, deviceState) };


      // displayId Field Functions 
      bool hasDisplayId() const { return this->displayId_ != nullptr;};
      void deleteDisplayId() { this->displayId_ = nullptr;};
      inline string getDisplayId() const { DARABONBA_PTR_GET_DEFAULT(displayId_, "") };
      inline Data& setDisplayId(string displayId) { DARABONBA_PTR_SET_VALUE(displayId_, displayId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Data& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // loginName Field Functions 
      bool hasLoginName() const { return this->loginName_ != nullptr;};
      void deleteLoginName() { this->loginName_ = nullptr;};
      inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
      inline Data& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Data& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // nickname Field Functions 
      bool hasNickname() const { return this->nickname_ != nullptr;};
      void deleteNickname() { this->nickname_ = nullptr;};
      inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
      inline Data& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
      inline Data& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Data& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workMode Field Functions 
      bool hasWorkMode() const { return this->workMode_ != nullptr;};
      void deleteWorkMode() { this->workMode_ = nullptr;};
      inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
      inline Data& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


    protected:
      shared_ptr<string> avatarUrl_ {};
      shared_ptr<string> deviceExt_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceState_ {};
      shared_ptr<string> displayId_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> loginName_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> nickname_ {};
      shared_ptr<string> roleId_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> workMode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUserResponseBody::Data) };
    inline GetUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUserResponseBody::Data) };
    inline GetUserResponseBody& setData(const GetUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUserResponseBody& setData(GetUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUserResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetUserResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetUserResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetUserResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
