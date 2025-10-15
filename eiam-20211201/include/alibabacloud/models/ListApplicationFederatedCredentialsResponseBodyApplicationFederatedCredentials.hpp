// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSRESPONSEBODYAPPLICATIONFEDERATEDCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONFEDERATEDCREDENTIALSRESPONSEBODYAPPLICATIONFEDERATEDCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_TO_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialId, applicationFederatedCredentialId_);
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialName, applicationFederatedCredentialName_);
      DARABONBA_PTR_FROM_JSON(ApplicationFederatedCredentialType, applicationFederatedCredentialType_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastUsedTime, lastUsedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials() = default ;
    ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials(const ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials &) = default ;
    ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials(ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials &&) = default ;
    ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials() = default ;
    ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& operator=(const ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials &) = default ;
    ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& operator=(ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationFederatedCredentialId_ == nullptr
        && return this->applicationFederatedCredentialName_ == nullptr && return this->applicationFederatedCredentialType_ == nullptr && return this->applicationId_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr
        && return this->federatedCredentialProviderId_ == nullptr && return this->instanceId_ == nullptr && return this->lastUsedTime_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // applicationFederatedCredentialId Field Functions 
    bool hasApplicationFederatedCredentialId() const { return this->applicationFederatedCredentialId_ != nullptr;};
    void deleteApplicationFederatedCredentialId() { this->applicationFederatedCredentialId_ = nullptr;};
    inline string applicationFederatedCredentialId() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialId_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setApplicationFederatedCredentialId(string applicationFederatedCredentialId) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialId_, applicationFederatedCredentialId) };


    // applicationFederatedCredentialName Field Functions 
    bool hasApplicationFederatedCredentialName() const { return this->applicationFederatedCredentialName_ != nullptr;};
    void deleteApplicationFederatedCredentialName() { this->applicationFederatedCredentialName_ = nullptr;};
    inline string applicationFederatedCredentialName() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialName_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setApplicationFederatedCredentialName(string applicationFederatedCredentialName) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialName_, applicationFederatedCredentialName) };


    // applicationFederatedCredentialType Field Functions 
    bool hasApplicationFederatedCredentialType() const { return this->applicationFederatedCredentialType_ != nullptr;};
    void deleteApplicationFederatedCredentialType() { this->applicationFederatedCredentialType_ = nullptr;};
    inline string applicationFederatedCredentialType() const { DARABONBA_PTR_GET_DEFAULT(applicationFederatedCredentialType_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setApplicationFederatedCredentialType(string applicationFederatedCredentialType) { DARABONBA_PTR_SET_VALUE(applicationFederatedCredentialType_, applicationFederatedCredentialType) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUsedTime Field Functions 
    bool hasLastUsedTime() const { return this->lastUsedTime_ != nullptr;};
    void deleteLastUsedTime() { this->lastUsedTime_ = nullptr;};
    inline int64_t lastUsedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUsedTime_, 0L) };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setLastUsedTime(int64_t lastUsedTime) { DARABONBA_PTR_SET_VALUE(lastUsedTime_, lastUsedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListApplicationFederatedCredentialsResponseBodyApplicationFederatedCredentials& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // 应用联邦凭证ID
    std::shared_ptr<string> applicationFederatedCredentialId_ = nullptr;
    // 应用联邦凭证名称
    std::shared_ptr<string> applicationFederatedCredentialName_ = nullptr;
    // 应用联邦凭证类型
    std::shared_ptr<string> applicationFederatedCredentialType_ = nullptr;
    // 应用ID
    std::shared_ptr<string> applicationId_ = nullptr;
    // 创建时间
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 应用联邦凭证描述
    std::shared_ptr<string> description_ = nullptr;
    // 应用联邦凭证提供者ID
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    // EAIM 实例ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // 最近使用时间
    std::shared_ptr<int64_t> lastUsedTime_ = nullptr;
    // 应用联邦凭证状态
    std::shared_ptr<string> status_ = nullptr;
    // 更新时间
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
