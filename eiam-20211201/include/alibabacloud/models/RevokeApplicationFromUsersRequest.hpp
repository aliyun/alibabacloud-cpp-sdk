// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEAPPLICATIONFROMUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEAPPLICATIONFROMUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RevokeApplicationFromUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeApplicationFromUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeApplicationFromUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    RevokeApplicationFromUsersRequest() = default ;
    RevokeApplicationFromUsersRequest(const RevokeApplicationFromUsersRequest &) = default ;
    RevokeApplicationFromUsersRequest(RevokeApplicationFromUsersRequest &&) = default ;
    RevokeApplicationFromUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeApplicationFromUsersRequest() = default ;
    RevokeApplicationFromUsersRequest& operator=(const RevokeApplicationFromUsersRequest &) = default ;
    RevokeApplicationFromUsersRequest& operator=(RevokeApplicationFromUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->instanceId_ == nullptr && return this->userIds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RevokeApplicationFromUsersRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RevokeApplicationFromUsersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline RevokeApplicationFromUsersRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline RevokeApplicationFromUsersRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IDs of the accounts. You can revoke the access permissions from a maximum of 100 accounts at a time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
