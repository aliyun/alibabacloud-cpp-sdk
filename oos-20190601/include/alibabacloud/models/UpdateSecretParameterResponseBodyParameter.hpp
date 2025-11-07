// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECRETPARAMETERRESPONSEBODYPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECRETPARAMETERRESPONSEBODYPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateSecretParameterResponseBodyParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecretParameterResponseBodyParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecretParameterResponseBodyParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParameterVersion, parameterVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
    };
    UpdateSecretParameterResponseBodyParameter() = default ;
    UpdateSecretParameterResponseBodyParameter(const UpdateSecretParameterResponseBodyParameter &) = default ;
    UpdateSecretParameterResponseBodyParameter(UpdateSecretParameterResponseBodyParameter &&) = default ;
    UpdateSecretParameterResponseBodyParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecretParameterResponseBodyParameter() = default ;
    UpdateSecretParameterResponseBodyParameter& operator=(const UpdateSecretParameterResponseBodyParameter &) = default ;
    UpdateSecretParameterResponseBodyParameter& operator=(UpdateSecretParameterResponseBodyParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constraints_ == nullptr
        && return this->createdBy_ == nullptr && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->keyId_ == nullptr
        && return this->name_ == nullptr && return this->parameterVersion_ == nullptr && return this->resourceGroupId_ == nullptr && return this->shareType_ == nullptr && return this->tags_ == nullptr
        && return this->type_ == nullptr && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string constraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterVersion Field Functions 
    bool hasParameterVersion() const { return this->parameterVersion_ != nullptr;};
    void deleteParameterVersion() { this->parameterVersion_ = nullptr;};
    inline int32_t parameterVersion() const { DARABONBA_PTR_GET_DEFAULT(parameterVersion_, 0) };
    inline UpdateSecretParameterResponseBodyParameter& setParameterVersion(int32_t parameterVersion) { DARABONBA_PTR_SET_VALUE(parameterVersion_, parameterVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline UpdateSecretParameterResponseBodyParameter& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The constraints of the parameter.
    std::shared_ptr<string> constraints_ = nullptr;
    // The user who created the parameter.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The time when the parameter was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the parameter.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of customer master key (CMK) of Key Management Service (KMS) that is used for encryption.
    std::shared_ptr<string> keyId_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The version number of the parameter.
    std::shared_ptr<int32_t> parameterVersion_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the parameter.
    std::shared_ptr<string> shareType_ = nullptr;
    // The tags of the parameter.
    std::shared_ptr<string> tags_ = nullptr;
    // The type of the parameter.
    std::shared_ptr<string> type_ = nullptr;
    // The user who updated the parameter.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the parameter was updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
