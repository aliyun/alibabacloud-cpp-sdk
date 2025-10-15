// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAPPLICATIONACCOUNTFROMUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAPPLICATIONACCOUNTFROMUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RemoveApplicationAccountFromUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveApplicationAccountFromUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveApplicationAccountFromUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RemoveApplicationAccountFromUserRequest() = default ;
    RemoveApplicationAccountFromUserRequest(const RemoveApplicationAccountFromUserRequest &) = default ;
    RemoveApplicationAccountFromUserRequest(RemoveApplicationAccountFromUserRequest &&) = default ;
    RemoveApplicationAccountFromUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveApplicationAccountFromUserRequest() = default ;
    RemoveApplicationAccountFromUserRequest& operator=(const RemoveApplicationAccountFromUserRequest &) = default ;
    RemoveApplicationAccountFromUserRequest& operator=(RemoveApplicationAccountFromUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccountId_ == nullptr
        && return this->applicationId_ == nullptr && return this->instanceId_ == nullptr && return this->userId_ == nullptr; };
    // applicationAccountId Field Functions 
    bool hasApplicationAccountId() const { return this->applicationAccountId_ != nullptr;};
    void deleteApplicationAccountId() { this->applicationAccountId_ = nullptr;};
    inline string applicationAccountId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccountId_, "") };
    inline RemoveApplicationAccountFromUserRequest& setApplicationAccountId(string applicationAccountId) { DARABONBA_PTR_SET_VALUE(applicationAccountId_, applicationAccountId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemoveApplicationAccountFromUserRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveApplicationAccountFromUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemoveApplicationAccountFromUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 应用账号Id
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationAccountId_ = nullptr;
    // IDaaS的应用主键id
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
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
