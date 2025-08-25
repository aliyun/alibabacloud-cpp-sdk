// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetLoginDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatDeviceId, chatDeviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetLoginDetailsRequest() = default ;
    GetLoginDetailsRequest(const GetLoginDetailsRequest &) = default ;
    GetLoginDetailsRequest(GetLoginDetailsRequest &&) = default ;
    GetLoginDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginDetailsRequest() = default ;
    GetLoginDetailsRequest& operator=(const GetLoginDetailsRequest &) = default ;
    GetLoginDetailsRequest& operator=(GetLoginDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chatDeviceId_ != nullptr
        && this->instanceId_ != nullptr && this->userId_ != nullptr; };
    // chatDeviceId Field Functions 
    bool hasChatDeviceId() const { return this->chatDeviceId_ != nullptr;};
    void deleteChatDeviceId() { this->chatDeviceId_ = nullptr;};
    inline string chatDeviceId() const { DARABONBA_PTR_GET_DEFAULT(chatDeviceId_, "") };
    inline GetLoginDetailsRequest& setChatDeviceId(string chatDeviceId) { DARABONBA_PTR_SET_VALUE(chatDeviceId_, chatDeviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetLoginDetailsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetLoginDetailsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> chatDeviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
