// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUserAuthnSourceMappingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAuthnSourceMappingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAuthnSourceMappingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUserAuthnSourceMappingsRequest() = default ;
    ListUserAuthnSourceMappingsRequest(const ListUserAuthnSourceMappingsRequest &) = default ;
    ListUserAuthnSourceMappingsRequest(ListUserAuthnSourceMappingsRequest &&) = default ;
    ListUserAuthnSourceMappingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAuthnSourceMappingsRequest() = default ;
    ListUserAuthnSourceMappingsRequest& operator=(const ListUserAuthnSourceMappingsRequest &) = default ;
    ListUserAuthnSourceMappingsRequest& operator=(ListUserAuthnSourceMappingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && return this->instanceId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr && return this->userExternalId_ == nullptr
        && return this->userId_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline ListUserAuthnSourceMappingsRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserAuthnSourceMappingsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserAuthnSourceMappingsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAuthnSourceMappingsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListUserAuthnSourceMappingsRequest& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline ListUserAuthnSourceMappingsRequest& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserAuthnSourceMappingsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 来源Idp Id
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 查询上一页凭证（Token），取值为上一次API调用返回的previousToken参数值。
    std::shared_ptr<string> previousToken_ = nullptr;
    // 外部关联ID
    std::shared_ptr<string> userExternalId_ = nullptr;
    // 用户ID
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
