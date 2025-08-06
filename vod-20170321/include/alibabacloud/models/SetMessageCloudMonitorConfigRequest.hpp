// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMESSAGECLOUDMONITORCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETMESSAGECLOUDMONITORCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetMessageCloudMonitorConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMessageCloudMonitorConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, SetMessageCloudMonitorConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
    };
    SetMessageCloudMonitorConfigRequest() = default ;
    SetMessageCloudMonitorConfigRequest(const SetMessageCloudMonitorConfigRequest &) = default ;
    SetMessageCloudMonitorConfigRequest(SetMessageCloudMonitorConfigRequest &&) = default ;
    SetMessageCloudMonitorConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMessageCloudMonitorConfigRequest() = default ;
    SetMessageCloudMonitorConfigRequest& operator=(const SetMessageCloudMonitorConfigRequest &) = default ;
    SetMessageCloudMonitorConfigRequest& operator=(SetMessageCloudMonitorConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->eventTypeList_ != nullptr && this->groupId_ != nullptr && this->ownerAccount_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SetMessageCloudMonitorConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline string eventTypeList() const { DARABONBA_PTR_GET_DEFAULT(eventTypeList_, "") };
    inline SetMessageCloudMonitorConfigRequest& setEventTypeList(string eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline SetMessageCloudMonitorConfigRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetMessageCloudMonitorConfigRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> eventTypeList_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
