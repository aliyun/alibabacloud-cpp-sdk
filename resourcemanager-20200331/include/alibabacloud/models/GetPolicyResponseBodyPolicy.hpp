// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyDocument, policyDocument_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    GetPolicyResponseBodyPolicy() = default ;
    GetPolicyResponseBodyPolicy(const GetPolicyResponseBodyPolicy &) = default ;
    GetPolicyResponseBodyPolicy(GetPolicyResponseBodyPolicy &&) = default ;
    GetPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicy() = default ;
    GetPolicyResponseBodyPolicy& operator=(const GetPolicyResponseBodyPolicy &) = default ;
    GetPolicyResponseBodyPolicy& operator=(GetPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachmentCount_ == nullptr
        && return this->createDate_ == nullptr && return this->defaultVersion_ == nullptr && return this->description_ == nullptr && return this->policyDocument_ == nullptr && return this->policyName_ == nullptr
        && return this->policyType_ == nullptr && return this->updateDate_ == nullptr; };
    // attachmentCount Field Functions 
    bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
    void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
    inline int32_t attachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, 0) };
    inline GetPolicyResponseBodyPolicy& setAttachmentCount(int32_t attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetPolicyResponseBodyPolicy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline string defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
    inline GetPolicyResponseBodyPolicy& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPolicyResponseBodyPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyDocument Field Functions 
    bool hasPolicyDocument() const { return this->policyDocument_ != nullptr;};
    void deletePolicyDocument() { this->policyDocument_ = nullptr;};
    inline string policyDocument() const { DARABONBA_PTR_GET_DEFAULT(policyDocument_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyDocument(string policyDocument) { DARABONBA_PTR_SET_VALUE(policyDocument_, policyDocument) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline GetPolicyResponseBodyPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetPolicyResponseBodyPolicy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The number of references to the permission policy.
    std::shared_ptr<int32_t> attachmentCount_ = nullptr;
    // The time when the permission policy was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The default version of the permission policy.
    std::shared_ptr<string> defaultVersion_ = nullptr;
    // The description of the permission policy.
    std::shared_ptr<string> description_ = nullptr;
    // The document of the permission policy.
    std::shared_ptr<string> policyDocument_ = nullptr;
    // The name of the permission policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the permission policy. Valid values:
    // 
    // *   Custom
    // *   System
    std::shared_ptr<string> policyType_ = nullptr;
    // The time when the permission policy was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
