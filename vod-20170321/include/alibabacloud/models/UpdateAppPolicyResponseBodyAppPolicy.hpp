// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPPOLICYRESPONSEBODYAPPPOLICY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPPOLICYRESPONSEBODYAPPPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateAppPolicyResponseBodyAppPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppPolicyResponseBodyAppPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PolicyValue, policyValue_);
      DARABONBA_PTR_TO_JSON(Products, products_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppPolicyResponseBodyAppPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PolicyValue, policyValue_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
    };
    UpdateAppPolicyResponseBodyAppPolicy() = default ;
    UpdateAppPolicyResponseBodyAppPolicy(const UpdateAppPolicyResponseBodyAppPolicy &) = default ;
    UpdateAppPolicyResponseBodyAppPolicy(UpdateAppPolicyResponseBodyAppPolicy &&) = default ;
    UpdateAppPolicyResponseBodyAppPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppPolicyResponseBodyAppPolicy() = default ;
    UpdateAppPolicyResponseBodyAppPolicy& operator=(const UpdateAppPolicyResponseBodyAppPolicy &) = default ;
    UpdateAppPolicyResponseBodyAppPolicy& operator=(UpdateAppPolicyResponseBodyAppPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->modificationTime_ != nullptr && this->policyName_ != nullptr && this->policyType_ != nullptr && this->policyValue_ != nullptr
        && this->products_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // policyValue Field Functions 
    bool hasPolicyValue() const { return this->policyValue_ != nullptr;};
    void deletePolicyValue() { this->policyValue_ = nullptr;};
    inline string policyValue() const { DARABONBA_PTR_GET_DEFAULT(policyValue_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setPolicyValue(string policyValue) { DARABONBA_PTR_SET_VALUE(policyValue_, policyValue) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline string products() const { DARABONBA_PTR_GET_DEFAULT(products_, "") };
    inline UpdateAppPolicyResponseBodyAppPolicy& setProducts(string products) { DARABONBA_PTR_SET_VALUE(products_, products) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> policyValue_ = nullptr;
    std::shared_ptr<string> products_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
