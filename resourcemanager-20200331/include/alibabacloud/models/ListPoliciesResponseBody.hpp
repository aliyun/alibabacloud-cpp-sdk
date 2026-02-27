// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
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
  class ListPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPoliciesResponseBody() = default ;
    ListPoliciesResponseBody(const ListPoliciesResponseBody &) = default ;
    ListPoliciesResponseBody(ListPoliciesResponseBody &&) = default ;
    ListPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesResponseBody() = default ;
    ListPoliciesResponseBody& operator=(const ListPoliciesResponseBody &) = default ;
    ListPoliciesResponseBody& operator=(ListPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Policy, policy_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policy& obj) { 
          DARABONBA_PTR_TO_JSON(AttachmentCount, attachmentCount_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        };
        friend void from_json(const Darabonba::Json& j, Policy& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachmentCount, attachmentCount_);
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        };
        Policy() = default ;
        Policy(const Policy &) = default ;
        Policy(Policy &&) = default ;
        Policy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policy() = default ;
        Policy& operator=(const Policy &) = default ;
        Policy& operator=(Policy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachmentCount_ == nullptr
        && this->createDate_ == nullptr && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr
        && this->updateDate_ == nullptr; };
        // attachmentCount Field Functions 
        bool hasAttachmentCount() const { return this->attachmentCount_ != nullptr;};
        void deleteAttachmentCount() { this->attachmentCount_ = nullptr;};
        inline int32_t getAttachmentCount() const { DARABONBA_PTR_GET_DEFAULT(attachmentCount_, 0) };
        inline Policy& setAttachmentCount(int32_t attachmentCount) { DARABONBA_PTR_SET_VALUE(attachmentCount_, attachmentCount) };


        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline Policy& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // defaultVersion Field Functions 
        bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
        void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
        inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
        inline Policy& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Policy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline Policy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline Policy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // updateDate Field Functions 
        bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
        void deleteUpdateDate() { this->updateDate_ = nullptr;};
        inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
        inline Policy& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      protected:
        shared_ptr<int32_t> attachmentCount_ {};
        shared_ptr<string> createDate_ {};
        shared_ptr<string> defaultVersion_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> policyName_ {};
        shared_ptr<string> policyType_ {};
        shared_ptr<string> updateDate_ {};
      };

      virtual bool empty() const override { return this->policy_ == nullptr; };
      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline const vector<Policies::Policy> & getPolicy() const { DARABONBA_PTR_GET_CONST(policy_, vector<Policies::Policy>) };
      inline vector<Policies::Policy> getPolicy() { DARABONBA_PTR_GET(policy_, vector<Policies::Policy>) };
      inline Policies& setPolicy(const vector<Policies::Policy> & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
      inline Policies& setPolicy(vector<Policies::Policy> && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    protected:
      shared_ptr<vector<Policies::Policy>> policy_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->policies_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const ListPoliciesResponseBody::Policies & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, ListPoliciesResponseBody::Policies) };
    inline ListPoliciesResponseBody::Policies getPolicies() { DARABONBA_PTR_GET(policies_, ListPoliciesResponseBody::Policies) };
    inline ListPoliciesResponseBody& setPolicies(const ListPoliciesResponseBody::Policies & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListPoliciesResponseBody& setPolicies(ListPoliciesResponseBody::Policies && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<ListPoliciesResponseBody::Policies> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
