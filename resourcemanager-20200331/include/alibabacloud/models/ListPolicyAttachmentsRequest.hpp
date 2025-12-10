// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyAttachmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListPolicyAttachmentsRequest() = default ;
    ListPolicyAttachmentsRequest(const ListPolicyAttachmentsRequest &) = default ;
    ListPolicyAttachmentsRequest(ListPolicyAttachmentsRequest &&) = default ;
    ListPolicyAttachmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentsRequest() = default ;
    ListPolicyAttachmentsRequest& operator=(const ListPolicyAttachmentsRequest &) = default ;
    ListPolicyAttachmentsRequest& operator=(ListPolicyAttachmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->policyName_ == nullptr && return this->policyType_ == nullptr && return this->principalName_ == nullptr
        && return this->principalType_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListPolicyAttachmentsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPolicyAttachmentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPolicyAttachmentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListPolicyAttachmentsRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListPolicyAttachmentsRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // principalName Field Functions 
    bool hasPrincipalName() const { return this->principalName_ != nullptr;};
    void deletePrincipalName() { this->principalName_ = nullptr;};
    inline string principalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
    inline ListPolicyAttachmentsRequest& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string principalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline ListPolicyAttachmentsRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPolicyAttachmentsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The language in which you want to return the description of the system policy. Valid values:
    // 
    // *   en: English
    // *   zh-CN: Chinese
    // *   ja: Japanese
    std::shared_ptr<string> language_ = nullptr;
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the permission policy.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, and hyphen (-).
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the permission policy. If you do not configure this parameter, all types of policies are returned. Valid values:
    // 
    // *   Custom
    // *   System
    std::shared_ptr<string> policyType_ = nullptr;
    // The name of the object to which you want to attach the permission policy.
    std::shared_ptr<string> principalName_ = nullptr;
    // The type of the object to which you want to attach the permission policy. If you do not configure this parameter, the system lists all types of objects. Valid values:
    // 
    // *   IMSUser: RAM user
    // *   IMSGroup: RAM user group
    // *   ServiceRole: RAM role
    std::shared_ptr<string> principalType_ = nullptr;
    // The ID of the resource group or the ID of the Alibaba Cloud account to which the resource group belongs. If you do not configure this parameter, the system lists all policy attachment records within the current account.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
