// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYSECRETLISTSECRET_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYSECRETLISTSECRET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSecretsResponseBodySecretListSecretTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretsResponseBodySecretListSecret : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBodySecretListSecret& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(OwingService, owingService_);
      DARABONBA_PTR_TO_JSON(PlannedDeleteTime, plannedDeleteTime_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBodySecretListSecret& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(OwingService, owingService_);
      DARABONBA_PTR_FROM_JSON(PlannedDeleteTime, plannedDeleteTime_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListSecretsResponseBodySecretListSecret() = default ;
    ListSecretsResponseBodySecretListSecret(const ListSecretsResponseBodySecretListSecret &) = default ;
    ListSecretsResponseBodySecretListSecret(ListSecretsResponseBodySecretListSecret &&) = default ;
    ListSecretsResponseBodySecretListSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBodySecretListSecret() = default ;
    ListSecretsResponseBodySecretListSecret& operator=(const ListSecretsResponseBodySecretListSecret &) = default ;
    ListSecretsResponseBodySecretListSecret& operator=(ListSecretsResponseBodySecretListSecret &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->owingService_ == nullptr && return this->plannedDeleteTime_ == nullptr && return this->secretName_ == nullptr && return this->secretType_ == nullptr && return this->tags_ == nullptr
        && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSecretsResponseBodySecretListSecret& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // owingService Field Functions 
    bool hasOwingService() const { return this->owingService_ != nullptr;};
    void deleteOwingService() { this->owingService_ = nullptr;};
    inline string owingService() const { DARABONBA_PTR_GET_DEFAULT(owingService_, "") };
    inline ListSecretsResponseBodySecretListSecret& setOwingService(string owingService) { DARABONBA_PTR_SET_VALUE(owingService_, owingService) };


    // plannedDeleteTime Field Functions 
    bool hasPlannedDeleteTime() const { return this->plannedDeleteTime_ != nullptr;};
    void deletePlannedDeleteTime() { this->plannedDeleteTime_ = nullptr;};
    inline string plannedDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(plannedDeleteTime_, "") };
    inline ListSecretsResponseBodySecretListSecret& setPlannedDeleteTime(string plannedDeleteTime) { DARABONBA_PTR_SET_VALUE(plannedDeleteTime_, plannedDeleteTime) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListSecretsResponseBodySecretListSecret& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline ListSecretsResponseBodySecretListSecret& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::ListSecretsResponseBodySecretListSecretTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::ListSecretsResponseBodySecretListSecretTags) };
    inline Models::ListSecretsResponseBodySecretListSecretTags tags() { DARABONBA_PTR_GET(tags_, Models::ListSecretsResponseBodySecretListSecretTags) };
    inline ListSecretsResponseBodySecretListSecret& setTags(const Models::ListSecretsResponseBodySecretListSecretTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListSecretsResponseBodySecretListSecret& setTags(Models::ListSecretsResponseBodySecretListSecretTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListSecretsResponseBodySecretListSecret& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The tag value.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> owingService_ = nullptr;
    // The resource tags of the secret.
    // 
    // This parameter is not returned if you set the FetchTags parameter to false or do not specify the FetchTags parameter.
    std::shared_ptr<string> plannedDeleteTime_ = nullptr;
    // The type of the secret. Valid values:
    // 
    // *   Generic: indicates a generic secret.
    // *   Rds: indicates a managed ApsaraDB RDS secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The time when the secret was created.
    std::shared_ptr<string> secretType_ = nullptr;
    // The tag key.
    std::shared_ptr<Models::ListSecretsResponseBodySecretListSecretTags> tags_ = nullptr;
    // The time when the secret is scheduled to be deleted.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
