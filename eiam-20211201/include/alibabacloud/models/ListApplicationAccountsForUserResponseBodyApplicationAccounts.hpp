// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSFORUSERRESPONSEBODYAPPLICATIONACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSFORUSERRESPONSEBODYAPPLICATIONACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationAccountsForUserResponseBodyApplicationAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccountsForUserResponseBodyApplicationAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationUsername, applicationUsername_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccountsForUserResponseBodyApplicationAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationUsername, applicationUsername_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListApplicationAccountsForUserResponseBodyApplicationAccounts() = default ;
    ListApplicationAccountsForUserResponseBodyApplicationAccounts(const ListApplicationAccountsForUserResponseBodyApplicationAccounts &) = default ;
    ListApplicationAccountsForUserResponseBodyApplicationAccounts(ListApplicationAccountsForUserResponseBodyApplicationAccounts &&) = default ;
    ListApplicationAccountsForUserResponseBodyApplicationAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccountsForUserResponseBodyApplicationAccounts() = default ;
    ListApplicationAccountsForUserResponseBodyApplicationAccounts& operator=(const ListApplicationAccountsForUserResponseBodyApplicationAccounts &) = default ;
    ListApplicationAccountsForUserResponseBodyApplicationAccounts& operator=(ListApplicationAccountsForUserResponseBodyApplicationAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccountId_ == nullptr
        && return this->applicationId_ == nullptr && return this->applicationUsername_ == nullptr && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->userId_ == nullptr; };
    // applicationAccountId Field Functions 
    bool hasApplicationAccountId() const { return this->applicationAccountId_ != nullptr;};
    void deleteApplicationAccountId() { this->applicationAccountId_ = nullptr;};
    inline string applicationAccountId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccountId_, "") };
    inline ListApplicationAccountsForUserResponseBodyApplicationAccounts& setApplicationAccountId(string applicationAccountId) { DARABONBA_PTR_SET_VALUE(applicationAccountId_, applicationAccountId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationAccountsForUserResponseBodyApplicationAccounts& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationUsername Field Functions 
    bool hasApplicationUsername() const { return this->applicationUsername_ != nullptr;};
    void deleteApplicationUsername() { this->applicationUsername_ = nullptr;};
    inline string applicationUsername() const { DARABONBA_PTR_GET_DEFAULT(applicationUsername_, "") };
    inline ListApplicationAccountsForUserResponseBodyApplicationAccounts& setApplicationUsername(string applicationUsername) { DARABONBA_PTR_SET_VALUE(applicationUsername_, applicationUsername) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationAccountsForUserResponseBodyApplicationAccounts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationAccountsForUserResponseBodyApplicationAccounts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListApplicationAccountsForUserResponseBodyApplicationAccounts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // IDaaS EIAM 应用账号Id
    std::shared_ptr<string> applicationAccountId_ = nullptr;
    // IDaaS EIAM 应用Id
    std::shared_ptr<string> applicationId_ = nullptr;
    // IDaaS EIAM 应用账号名称
    std::shared_ptr<string> applicationUsername_ = nullptr;
    // 创建时间
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // IDaaS EIAM 实例Id
    std::shared_ptr<string> instanceId_ = nullptr;
    // IDaaS EIAM 用户Id
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
