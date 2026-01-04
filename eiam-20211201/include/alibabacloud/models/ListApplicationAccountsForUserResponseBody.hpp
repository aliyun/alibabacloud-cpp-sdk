// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSFORUSERRESPONSEBODY_HPP_
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
  class ListApplicationAccountsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccountsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccounts, applicationAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccountsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccounts, applicationAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationAccountsForUserResponseBody() = default ;
    ListApplicationAccountsForUserResponseBody(const ListApplicationAccountsForUserResponseBody &) = default ;
    ListApplicationAccountsForUserResponseBody(ListApplicationAccountsForUserResponseBody &&) = default ;
    ListApplicationAccountsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccountsForUserResponseBody() = default ;
    ListApplicationAccountsForUserResponseBody& operator=(const ListApplicationAccountsForUserResponseBody &) = default ;
    ListApplicationAccountsForUserResponseBody& operator=(ListApplicationAccountsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationAccountId, applicationAccountId_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationUsername, applicationUsername_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationAccountId, applicationAccountId_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationUsername, applicationUsername_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ApplicationAccounts() = default ;
      ApplicationAccounts(const ApplicationAccounts &) = default ;
      ApplicationAccounts(ApplicationAccounts &&) = default ;
      ApplicationAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationAccounts() = default ;
      ApplicationAccounts& operator=(const ApplicationAccounts &) = default ;
      ApplicationAccounts& operator=(ApplicationAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationAccountId_ == nullptr
        && this->applicationId_ == nullptr && this->applicationUsername_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->userId_ == nullptr; };
      // applicationAccountId Field Functions 
      bool hasApplicationAccountId() const { return this->applicationAccountId_ != nullptr;};
      void deleteApplicationAccountId() { this->applicationAccountId_ = nullptr;};
      inline string getApplicationAccountId() const { DARABONBA_PTR_GET_DEFAULT(applicationAccountId_, "") };
      inline ApplicationAccounts& setApplicationAccountId(string applicationAccountId) { DARABONBA_PTR_SET_VALUE(applicationAccountId_, applicationAccountId) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationAccounts& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationUsername Field Functions 
      bool hasApplicationUsername() const { return this->applicationUsername_ != nullptr;};
      void deleteApplicationUsername() { this->applicationUsername_ = nullptr;};
      inline string getApplicationUsername() const { DARABONBA_PTR_GET_DEFAULT(applicationUsername_, "") };
      inline ApplicationAccounts& setApplicationUsername(string applicationUsername) { DARABONBA_PTR_SET_VALUE(applicationUsername_, applicationUsername) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ApplicationAccounts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationAccounts& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline ApplicationAccounts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // IDaaS EIAM 应用账号Id
      shared_ptr<string> applicationAccountId_ {};
      // IDaaS EIAM 应用Id
      shared_ptr<string> applicationId_ {};
      // IDaaS EIAM 应用账号名称
      shared_ptr<string> applicationUsername_ {};
      // 创建时间
      shared_ptr<int64_t> createTime_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // IDaaS EIAM 用户Id
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->applicationAccounts_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationAccounts Field Functions 
    bool hasApplicationAccounts() const { return this->applicationAccounts_ != nullptr;};
    void deleteApplicationAccounts() { this->applicationAccounts_ = nullptr;};
    inline const vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts> & getApplicationAccounts() const { DARABONBA_PTR_GET_CONST(applicationAccounts_, vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts>) };
    inline vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts> getApplicationAccounts() { DARABONBA_PTR_GET(applicationAccounts_, vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts>) };
    inline ListApplicationAccountsForUserResponseBody& setApplicationAccounts(const vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts> & applicationAccounts) { DARABONBA_PTR_SET_VALUE(applicationAccounts_, applicationAccounts) };
    inline ListApplicationAccountsForUserResponseBody& setApplicationAccounts(vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts> && applicationAccounts) { DARABONBA_PTR_SET_RVALUE(applicationAccounts_, applicationAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationAccountsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationAccountsForUserResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationAccountsForUserResponseBody::ApplicationAccounts>> applicationAccounts_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
