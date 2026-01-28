// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESFORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESFORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListAuthorizationRulesForGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizationRulesForGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizationRulesForGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListAuthorizationRulesForGroupRequest() = default ;
    ListAuthorizationRulesForGroupRequest(const ListAuthorizationRulesForGroupRequest &) = default ;
    ListAuthorizationRulesForGroupRequest(ListAuthorizationRulesForGroupRequest &&) = default ;
    ListAuthorizationRulesForGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizationRulesForGroupRequest() = default ;
    ListAuthorizationRulesForGroupRequest& operator=(const ListAuthorizationRulesForGroupRequest &) = default ;
    ListAuthorizationRulesForGroupRequest& operator=(ListAuthorizationRulesForGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListAuthorizationRulesForGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAuthorizationRulesForGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuthorizationRulesForGroupRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthorizationRulesForGroupRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // 组标识。
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 分页查询时每页行数。默认值为20，最大值为100。
    shared_ptr<int32_t> maxResults_ {};
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
