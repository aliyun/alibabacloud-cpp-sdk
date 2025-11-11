// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSRESPONSEBODYUSERAUTHNSOURCEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSRESPONSEBODYUSERAUTHNSOURCEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& obj) { 
      DARABONBA_PTR_TO_JSON(AuthnSourceType, authnSourceType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthnSourceType, authnSourceType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings() = default ;
    ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings(const ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings &) = default ;
    ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings(ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings &&) = default ;
    ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings() = default ;
    ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& operator=(const ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings &) = default ;
    ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& operator=(ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authnSourceType_ == nullptr
        && return this->createTime_ == nullptr && return this->identityProviderId_ == nullptr && return this->instanceId_ == nullptr && return this->updateTime_ == nullptr && return this->userExternalId_ == nullptr
        && return this->userId_ == nullptr; };
    // authnSourceType Field Functions 
    bool hasAuthnSourceType() const { return this->authnSourceType_ != nullptr;};
    void deleteAuthnSourceType() { this->authnSourceType_ = nullptr;};
    inline string authnSourceType() const { DARABONBA_PTR_GET_DEFAULT(authnSourceType_, "") };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setAuthnSourceType(string authnSourceType) { DARABONBA_PTR_SET_VALUE(authnSourceType_, authnSourceType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserAuthnSourceMappingsResponseBodyUserAuthnSourceMappings& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 来源Idp类型
    std::shared_ptr<string> authnSourceType_ = nullptr;
    // 创建时间
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 来源Idp Id
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // 实例Id
    std::shared_ptr<string> instanceId_ = nullptr;
    // 最近一次更新时间
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // 外部ID
    std::shared_ptr<string> userExternalId_ = nullptr;
    // 用户ID
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
