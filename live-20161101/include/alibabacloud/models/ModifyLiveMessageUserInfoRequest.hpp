// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserMetaInfo, userMetaInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserMetaInfo, userMetaInfo_);
    };
    ModifyLiveMessageUserInfoRequest() = default ;
    ModifyLiveMessageUserInfoRequest(const ModifyLiveMessageUserInfoRequest &) = default ;
    ModifyLiveMessageUserInfoRequest(ModifyLiveMessageUserInfoRequest &&) = default ;
    ModifyLiveMessageUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageUserInfoRequest() = default ;
    ModifyLiveMessageUserInfoRequest& operator=(const ModifyLiveMessageUserInfoRequest &) = default ;
    ModifyLiveMessageUserInfoRequest& operator=(ModifyLiveMessageUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dataCenter_ != nullptr && this->userId_ != nullptr && this->userMetaInfo_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageUserInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageUserInfoRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ModifyLiveMessageUserInfoRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userMetaInfo Field Functions 
    bool hasUserMetaInfo() const { return this->userMetaInfo_ != nullptr;};
    void deleteUserMetaInfo() { this->userMetaInfo_ = nullptr;};
    inline string userMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(userMetaInfo_, "") };
    inline ModifyLiveMessageUserInfoRequest& setUserMetaInfo(string userMetaInfo) { DARABONBA_PTR_SET_VALUE(userMetaInfo_, userMetaInfo) };


  protected:
    // The ID of the interactive messaging application whose user information you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2593195.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the user whose information you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // The additional information about the user after the modification. The value can be up to 512 bytes in length.
    std::shared_ptr<string> userMetaInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
