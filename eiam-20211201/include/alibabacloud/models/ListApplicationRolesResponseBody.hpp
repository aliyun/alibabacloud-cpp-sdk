// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONROLESRESPONSEBODY_HPP_
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
  class ListApplicationRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationRoles, applicationRoles_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationRoles, applicationRoles_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationRolesResponseBody() = default ;
    ListApplicationRolesResponseBody(const ListApplicationRolesResponseBody &) = default ;
    ListApplicationRolesResponseBody(ListApplicationRolesResponseBody &&) = default ;
    ListApplicationRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationRolesResponseBody() = default ;
    ListApplicationRolesResponseBody& operator=(const ListApplicationRolesResponseBody &) = default ;
    ListApplicationRolesResponseBody& operator=(ListApplicationRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationRoles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationRoles& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
        DARABONBA_PTR_TO_JSON(ApplicationRoleName, applicationRoleName_);
        DARABONBA_PTR_TO_JSON(ApplicationRoleValue, applicationRoleValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationRoles& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoleName, applicationRoleName_);
        DARABONBA_PTR_FROM_JSON(ApplicationRoleValue, applicationRoleValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      ApplicationRoles() = default ;
      ApplicationRoles(const ApplicationRoles &) = default ;
      ApplicationRoles(ApplicationRoles &&) = default ;
      ApplicationRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationRoles() = default ;
      ApplicationRoles& operator=(const ApplicationRoles &) = default ;
      ApplicationRoles& operator=(ApplicationRoles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationRoleId_ == nullptr && this->applicationRoleName_ == nullptr && this->applicationRoleValue_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ApplicationRoles& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationRoleId Field Functions 
      bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
      void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
      inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
      inline ApplicationRoles& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


      // applicationRoleName Field Functions 
      bool hasApplicationRoleName() const { return this->applicationRoleName_ != nullptr;};
      void deleteApplicationRoleName() { this->applicationRoleName_ = nullptr;};
      inline string getApplicationRoleName() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleName_, "") };
      inline ApplicationRoles& setApplicationRoleName(string applicationRoleName) { DARABONBA_PTR_SET_VALUE(applicationRoleName_, applicationRoleName) };


      // applicationRoleValue Field Functions 
      bool hasApplicationRoleValue() const { return this->applicationRoleValue_ != nullptr;};
      void deleteApplicationRoleValue() { this->applicationRoleValue_ = nullptr;};
      inline string getApplicationRoleValue() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleValue_, "") };
      inline ApplicationRoles& setApplicationRoleValue(string applicationRoleValue) { DARABONBA_PTR_SET_VALUE(applicationRoleValue_, applicationRoleValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApplicationRoles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApplicationRoles& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<string> applicationId_ {};
      // 应用角色的唯一标识
      shared_ptr<string> applicationRoleId_ {};
      // 应用角色名称
      shared_ptr<string> applicationRoleName_ {};
      shared_ptr<string> applicationRoleValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->applicationRoles_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationRoles Field Functions 
    bool hasApplicationRoles() const { return this->applicationRoles_ != nullptr;};
    void deleteApplicationRoles() { this->applicationRoles_ = nullptr;};
    inline const vector<ListApplicationRolesResponseBody::ApplicationRoles> & getApplicationRoles() const { DARABONBA_PTR_GET_CONST(applicationRoles_, vector<ListApplicationRolesResponseBody::ApplicationRoles>) };
    inline vector<ListApplicationRolesResponseBody::ApplicationRoles> getApplicationRoles() { DARABONBA_PTR_GET(applicationRoles_, vector<ListApplicationRolesResponseBody::ApplicationRoles>) };
    inline ListApplicationRolesResponseBody& setApplicationRoles(const vector<ListApplicationRolesResponseBody::ApplicationRoles> & applicationRoles) { DARABONBA_PTR_SET_VALUE(applicationRoles_, applicationRoles) };
    inline ListApplicationRolesResponseBody& setApplicationRoles(vector<ListApplicationRolesResponseBody::ApplicationRoles> && applicationRoles) { DARABONBA_PTR_SET_RVALUE(applicationRoles_, applicationRoles) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationRolesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationRolesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationRolesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationRolesResponseBody::ApplicationRoles>> applicationRoles_ {};
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
