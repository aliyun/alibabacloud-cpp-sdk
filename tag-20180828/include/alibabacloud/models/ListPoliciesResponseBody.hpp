// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class PolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyContent, policyContent_);
        DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(UserType, userType_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyContent, policyContent_);
        DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(UserType, userType_);
      };
      PolicyList() = default ;
      PolicyList(const PolicyList &) = default ;
      PolicyList(PolicyList &&) = default ;
      PolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyList() = default ;
      PolicyList& operator=(const PolicyList &) = default ;
      PolicyList& operator=(PolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->policyContent_ == nullptr
        && this->policyDesc_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->userType_ == nullptr; };
      // policyContent Field Functions 
      bool hasPolicyContent() const { return this->policyContent_ != nullptr;};
      void deletePolicyContent() { this->policyContent_ = nullptr;};
      inline string getPolicyContent() const { DARABONBA_PTR_GET_DEFAULT(policyContent_, "") };
      inline PolicyList& setPolicyContent(string policyContent) { DARABONBA_PTR_SET_VALUE(policyContent_, policyContent) };


      // policyDesc Field Functions 
      bool hasPolicyDesc() const { return this->policyDesc_ != nullptr;};
      void deletePolicyDesc() { this->policyDesc_ = nullptr;};
      inline string getPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(policyDesc_, "") };
      inline PolicyList& setPolicyDesc(string policyDesc) { DARABONBA_PTR_SET_VALUE(policyDesc_, policyDesc) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline PolicyList& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline PolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // userType Field Functions 
      bool hasUserType() const { return this->userType_ != nullptr;};
      void deleteUserType() { this->userType_ = nullptr;};
      inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
      inline PolicyList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    protected:
      // The document of the tag policy.
      shared_ptr<string> policyContent_ {};
      // The description of the tag policy.
      shared_ptr<string> policyDesc_ {};
      // The ID of the tag policy.
      shared_ptr<string> policyId_ {};
      // The name of the tag policy.
      shared_ptr<string> policyName_ {};
      // The mode of the Tag Policy feature. Valid values:
      // 
      // - USER: single-account mode
      // 
      // - RD: multi-account mode
      // 
      // For more information about the modes of the Tag Policy feature, see [Modes of the Tag Policy feature](https://help.aliyun.com/document_detail/417434.html).
      shared_ptr<string> userType_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->policyList_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyList Field Functions 
    bool hasPolicyList() const { return this->policyList_ != nullptr;};
    void deletePolicyList() { this->policyList_ = nullptr;};
    inline const vector<ListPoliciesResponseBody::PolicyList> & getPolicyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<ListPoliciesResponseBody::PolicyList>) };
    inline vector<ListPoliciesResponseBody::PolicyList> getPolicyList() { DARABONBA_PTR_GET(policyList_, vector<ListPoliciesResponseBody::PolicyList>) };
    inline ListPoliciesResponseBody& setPolicyList(const vector<ListPoliciesResponseBody::PolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
    inline ListPoliciesResponseBody& setPolicyList(vector<ListPoliciesResponseBody::PolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the next query is required.
    // 
    // - If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // 
    // - If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The tag policies.
    shared_ptr<vector<ListPoliciesResponseBody::PolicyList>> policyList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
