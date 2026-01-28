// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListAuthorizationRulesForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizationRulesForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizationRulesForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListAuthorizationRulesForUserRequest() = default ;
    ListAuthorizationRulesForUserRequest(const ListAuthorizationRulesForUserRequest &) = default ;
    ListAuthorizationRulesForUserRequest(ListAuthorizationRulesForUserRequest &&) = default ;
    ListAuthorizationRulesForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizationRulesForUserRequest() = default ;
    ListAuthorizationRulesForUserRequest& operator=(const ListAuthorizationRulesForUserRequest &) = default ;
    ListAuthorizationRulesForUserRequest& operator=(ListAuthorizationRulesForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->userId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAuthorizationRulesForUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuthorizationRulesForUserRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthorizationRulesForUserRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAuthorizationRulesForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 分页查询时每页行数。默认值为20，最大值为100。
    shared_ptr<int32_t> maxResults_ {};
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    shared_ptr<string> nextToken_ {};
    // 账户标识。
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
