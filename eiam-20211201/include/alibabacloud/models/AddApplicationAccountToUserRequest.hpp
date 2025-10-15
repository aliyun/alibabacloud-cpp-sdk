// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAPPLICATIONACCOUNTTOUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAPPLICATIONACCOUNTTOUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AddApplicationAccountToUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddApplicationAccountToUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationUsername, applicationUsername_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddApplicationAccountToUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationUsername, applicationUsername_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddApplicationAccountToUserRequest() = default ;
    AddApplicationAccountToUserRequest(const AddApplicationAccountToUserRequest &) = default ;
    AddApplicationAccountToUserRequest(AddApplicationAccountToUserRequest &&) = default ;
    AddApplicationAccountToUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddApplicationAccountToUserRequest() = default ;
    AddApplicationAccountToUserRequest& operator=(const AddApplicationAccountToUserRequest &) = default ;
    AddApplicationAccountToUserRequest& operator=(AddApplicationAccountToUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationUsername_ == nullptr && return this->instanceId_ == nullptr && return this->userId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AddApplicationAccountToUserRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationUsername Field Functions 
    bool hasApplicationUsername() const { return this->applicationUsername_ != nullptr;};
    void deleteApplicationUsername() { this->applicationUsername_ = nullptr;};
    inline string applicationUsername() const { DARABONBA_PTR_GET_DEFAULT(applicationUsername_, "") };
    inline AddApplicationAccountToUserRequest& setApplicationUsername(string applicationUsername) { DARABONBA_PTR_SET_VALUE(applicationUsername_, applicationUsername) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddApplicationAccountToUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddApplicationAccountToUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // IDaaS的应用主键id
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // 应用账号名称
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationUsername_ = nullptr;
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 用户Id
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
