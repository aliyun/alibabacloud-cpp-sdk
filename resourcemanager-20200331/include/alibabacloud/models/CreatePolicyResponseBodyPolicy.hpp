// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreatePolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    CreatePolicyResponseBodyPolicy() = default ;
    CreatePolicyResponseBodyPolicy(const CreatePolicyResponseBodyPolicy &) = default ;
    CreatePolicyResponseBodyPolicy(CreatePolicyResponseBodyPolicy &&) = default ;
    CreatePolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyResponseBodyPolicy() = default ;
    CreatePolicyResponseBodyPolicy& operator=(const CreatePolicyResponseBodyPolicy &) = default ;
    CreatePolicyResponseBodyPolicy& operator=(CreatePolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && return this->defaultVersion_ == nullptr && return this->description_ == nullptr && return this->policyName_ == nullptr && return this->policyType_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline CreatePolicyResponseBodyPolicy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline string defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
    inline CreatePolicyResponseBodyPolicy& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePolicyResponseBodyPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreatePolicyResponseBodyPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The time when the permission policy was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The version number of the permission policy. Default value: v1.
    std::shared_ptr<string> defaultVersion_ = nullptr;
    // The description of the permission policy.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the permission policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the permission policy. Valid values:
    // 
    // *   Custom
    // *   System
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
