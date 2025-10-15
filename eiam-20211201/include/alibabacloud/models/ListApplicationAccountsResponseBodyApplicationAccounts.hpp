// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSRESPONSEBODYAPPLICATIONACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSRESPONSEBODYAPPLICATIONACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationAccountsResponseBodyApplicationAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccountsResponseBodyApplicationAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationUsername, applicationUsername_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccountsResponseBodyApplicationAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccountId, applicationAccountId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationUsername, applicationUsername_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListApplicationAccountsResponseBodyApplicationAccounts() = default ;
    ListApplicationAccountsResponseBodyApplicationAccounts(const ListApplicationAccountsResponseBodyApplicationAccounts &) = default ;
    ListApplicationAccountsResponseBodyApplicationAccounts(ListApplicationAccountsResponseBodyApplicationAccounts &&) = default ;
    ListApplicationAccountsResponseBodyApplicationAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccountsResponseBodyApplicationAccounts() = default ;
    ListApplicationAccountsResponseBodyApplicationAccounts& operator=(const ListApplicationAccountsResponseBodyApplicationAccounts &) = default ;
    ListApplicationAccountsResponseBodyApplicationAccounts& operator=(ListApplicationAccountsResponseBodyApplicationAccounts &&) = default ;
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
    inline ListApplicationAccountsResponseBodyApplicationAccounts& setApplicationAccountId(string applicationAccountId) { DARABONBA_PTR_SET_VALUE(applicationAccountId_, applicationAccountId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationAccountsResponseBodyApplicationAccounts& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationUsername Field Functions 
    bool hasApplicationUsername() const { return this->applicationUsername_ != nullptr;};
    void deleteApplicationUsername() { this->applicationUsername_ = nullptr;};
    inline string applicationUsername() const { DARABONBA_PTR_GET_DEFAULT(applicationUsername_, "") };
    inline ListApplicationAccountsResponseBodyApplicationAccounts& setApplicationUsername(string applicationUsername) { DARABONBA_PTR_SET_VALUE(applicationUsername_, applicationUsername) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationAccountsResponseBodyApplicationAccounts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationAccountsResponseBodyApplicationAccounts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListApplicationAccountsResponseBodyApplicationAccounts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


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
