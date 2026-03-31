// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETPARAMETERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETPARAMETERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateSecretParameterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretParameterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretParameterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateSecretParameterShrinkRequest() = default ;
    CreateSecretParameterShrinkRequest(const CreateSecretParameterShrinkRequest &) = default ;
    CreateSecretParameterShrinkRequest(CreateSecretParameterShrinkRequest &&) = default ;
    CreateSecretParameterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretParameterShrinkRequest() = default ;
    CreateSecretParameterShrinkRequest& operator=(const CreateSecretParameterShrinkRequest &) = default ;
    CreateSecretParameterShrinkRequest& operator=(CreateSecretParameterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->constraints_ == nullptr && this->DKMSInstanceId_ == nullptr && this->description_ == nullptr && this->keyId_ == nullptr && this->name_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tagsShrink_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSecretParameterShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string getConstraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline CreateSecretParameterShrinkRequest& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string getDKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline CreateSecretParameterShrinkRequest& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSecretParameterShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline CreateSecretParameterShrinkRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSecretParameterShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSecretParameterShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSecretParameterShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateSecretParameterShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSecretParameterShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateSecretParameterShrinkRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). For more information, see "How to ensure idempotence".
    shared_ptr<string> clientToken_ {};
    // The constraints of the encryption parameter. By default, this parameter is null. Valid values:
    // 
    // *   AllowedValues: The value that is allowed for the encryption parameter. It must be an array string.
    // *   AllowedPattern: The pattern that is allowed for the encryption parameter. It must be a regular expression.
    // *   MinLength: The minimum length of the encryption parameter.
    // *   MaxLength: The maximum length of the encryption parameter.
    shared_ptr<string> constraints_ {};
    // The instance ID of the KMS instance.
    shared_ptr<string> DKMSInstanceId_ {};
    // The description of the encryption parameter. The description must be 1 to 200 characters in length.
    shared_ptr<string> description_ {};
    // The key ID of Key Management Service (KMS) that is used to encrypt the parameter.
    shared_ptr<string> keyId_ {};
    // The name of the parameter. The name must be 1 to 180 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). It cannot start with ALIYUN, ACS, ALIBABA, ALICLOUD, or OOS.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<string> tagsShrink_ {};
    // The type of the parameter. Set the value to Secret.
    shared_ptr<string> type_ {};
    // The value of the encryption parameter. The value must be 1 to 4096 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
