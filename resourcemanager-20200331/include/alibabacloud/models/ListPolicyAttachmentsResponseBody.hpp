// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyAttachments, policyAttachments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyAttachments, policyAttachments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPolicyAttachmentsResponseBody() = default ;
    ListPolicyAttachmentsResponseBody(const ListPolicyAttachmentsResponseBody &) = default ;
    ListPolicyAttachmentsResponseBody(ListPolicyAttachmentsResponseBody &&) = default ;
    ListPolicyAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentsResponseBody() = default ;
    ListPolicyAttachmentsResponseBody& operator=(const ListPolicyAttachmentsResponseBody &) = default ;
    ListPolicyAttachmentsResponseBody& operator=(ListPolicyAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyAttachment, policyAttachment_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyAttachment, policyAttachment_);
      };
      PolicyAttachments() = default ;
      PolicyAttachments(const PolicyAttachments &) = default ;
      PolicyAttachments(PolicyAttachments &&) = default ;
      PolicyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyAttachments() = default ;
      PolicyAttachments& operator=(const PolicyAttachments &) = default ;
      PolicyAttachments& operator=(PolicyAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PolicyAttachment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolicyAttachment& obj) { 
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, PolicyAttachment& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        };
        PolicyAttachment() = default ;
        PolicyAttachment(const PolicyAttachment &) = default ;
        PolicyAttachment(PolicyAttachment &&) = default ;
        PolicyAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolicyAttachment() = default ;
        PolicyAttachment& operator=(const PolicyAttachment &) = default ;
        PolicyAttachment& operator=(PolicyAttachment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->description_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr
        && this->resourceGroupId_ == nullptr; };
        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline PolicyAttachment& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PolicyAttachment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline PolicyAttachment& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline PolicyAttachment& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // principalName Field Functions 
        bool hasPrincipalName() const { return this->principalName_ != nullptr;};
        void deletePrincipalName() { this->principalName_ = nullptr;};
        inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
        inline PolicyAttachment& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline PolicyAttachment& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline PolicyAttachment& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      protected:
        shared_ptr<string> attachDate_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> policyName_ {};
        shared_ptr<string> policyType_ {};
        shared_ptr<string> principalName_ {};
        shared_ptr<string> principalType_ {};
        shared_ptr<string> resourceGroupId_ {};
      };

      virtual bool empty() const override { return this->policyAttachment_ == nullptr; };
      // policyAttachment Field Functions 
      bool hasPolicyAttachment() const { return this->policyAttachment_ != nullptr;};
      void deletePolicyAttachment() { this->policyAttachment_ = nullptr;};
      inline const vector<PolicyAttachments::PolicyAttachment> & getPolicyAttachment() const { DARABONBA_PTR_GET_CONST(policyAttachment_, vector<PolicyAttachments::PolicyAttachment>) };
      inline vector<PolicyAttachments::PolicyAttachment> getPolicyAttachment() { DARABONBA_PTR_GET(policyAttachment_, vector<PolicyAttachments::PolicyAttachment>) };
      inline PolicyAttachments& setPolicyAttachment(const vector<PolicyAttachments::PolicyAttachment> & policyAttachment) { DARABONBA_PTR_SET_VALUE(policyAttachment_, policyAttachment) };
      inline PolicyAttachments& setPolicyAttachment(vector<PolicyAttachments::PolicyAttachment> && policyAttachment) { DARABONBA_PTR_SET_RVALUE(policyAttachment_, policyAttachment) };


    protected:
      shared_ptr<vector<PolicyAttachments::PolicyAttachment>> policyAttachment_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->policyAttachments_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPolicyAttachmentsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPolicyAttachmentsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyAttachments Field Functions 
    bool hasPolicyAttachments() const { return this->policyAttachments_ != nullptr;};
    void deletePolicyAttachments() { this->policyAttachments_ = nullptr;};
    inline const ListPolicyAttachmentsResponseBody::PolicyAttachments & getPolicyAttachments() const { DARABONBA_PTR_GET_CONST(policyAttachments_, ListPolicyAttachmentsResponseBody::PolicyAttachments) };
    inline ListPolicyAttachmentsResponseBody::PolicyAttachments getPolicyAttachments() { DARABONBA_PTR_GET(policyAttachments_, ListPolicyAttachmentsResponseBody::PolicyAttachments) };
    inline ListPolicyAttachmentsResponseBody& setPolicyAttachments(const ListPolicyAttachmentsResponseBody::PolicyAttachments & policyAttachments) { DARABONBA_PTR_SET_VALUE(policyAttachments_, policyAttachments) };
    inline ListPolicyAttachmentsResponseBody& setPolicyAttachments(ListPolicyAttachmentsResponseBody::PolicyAttachments && policyAttachments) { DARABONBA_PTR_SET_RVALUE(policyAttachments_, policyAttachments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPolicyAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<ListPolicyAttachmentsResponseBody::PolicyAttachments> policyAttachments_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
