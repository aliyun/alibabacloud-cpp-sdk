// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateSecretParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateSecretParameterRequest() = default ;
    CreateSecretParameterRequest(const CreateSecretParameterRequest &) = default ;
    CreateSecretParameterRequest(CreateSecretParameterRequest &&) = default ;
    CreateSecretParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretParameterRequest() = default ;
    CreateSecretParameterRequest& operator=(const CreateSecretParameterRequest &) = default ;
    CreateSecretParameterRequest& operator=(CreateSecretParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->constraints_ == nullptr && return this->DKMSInstanceId_ == nullptr && return this->description_ == nullptr && return this->keyId_ == nullptr && return this->name_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->type_ == nullptr && return this->value_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSecretParameterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string constraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline CreateSecretParameterRequest& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string DKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretParameterRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecretParameterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline CreateSecretParameterRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSecretParameterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSecretParameterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSecretParameterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateSecretParameterRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateSecretParameterRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSecretParameterRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateSecretParameterRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). For more information, see "How to ensure idempotence".
    std::shared_ptr<string> clientToken_ = nullptr;
    // The constraints of the encryption parameter. By default, this parameter is null. Valid values:
    // 
    // *   AllowedValues: The value that is allowed for the encryption parameter. It must be an array string.
    // *   AllowedPattern: The pattern that is allowed for the encryption parameter. It must be a regular expression.
    // *   MinLength: The minimum length of the encryption parameter.
    // *   MaxLength: The maximum length of the encryption parameter.
    std::shared_ptr<string> constraints_ = nullptr;
    // The instance ID of the KMS instance.
    std::shared_ptr<string> DKMSInstanceId_ = nullptr;
    // The description of the encryption parameter. The description must be 1 to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The key ID of Key Management Service (KMS) that is used to encrypt the parameter.
    std::shared_ptr<string> keyId_ = nullptr;
    // The name of the parameter. The name must be 1 to 180 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). It cannot start with ALIYUN, ACS, ALIBABA, ALICLOUD, or OOS.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    Darabonba::Json tags_ = nullptr;
    // The type of the parameter. Set the value to Secret.
    std::shared_ptr<string> type_ = nullptr;
    // The value of the encryption parameter. The value must be 1 to 4096 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
