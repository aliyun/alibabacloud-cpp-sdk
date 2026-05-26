// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListPolicySetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicySetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicySets, policySets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicySetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicySets, policySets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPolicySetsResponseBody() = default ;
    ListPolicySetsResponseBody(const ListPolicySetsResponseBody &) = default ;
    ListPolicySetsResponseBody(ListPolicySetsResponseBody &&) = default ;
    ListPolicySetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicySetsResponseBody() = default ;
    ListPolicySetsResponseBody& operator=(const ListPolicySetsResponseBody &) = default ;
    ListPolicySetsResponseBody& operator=(ListPolicySetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicySets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicySets& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PolicySetArn, policySetArn_);
        DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PolicySets& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PolicySetArn, policySetArn_);
        DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PolicySets() = default ;
      PolicySets(const PolicySets &) = default ;
      PolicySets(PolicySets &&) = default ;
      PolicySets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicySets() = default ;
      PolicySets& operator=(const PolicySets &) = default ;
      PolicySets& operator=(PolicySets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->policySetArn_ == nullptr && this->policySetName_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PolicySets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PolicySets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // policySetArn Field Functions 
      bool hasPolicySetArn() const { return this->policySetArn_ != nullptr;};
      void deletePolicySetArn() { this->policySetArn_ = nullptr;};
      inline string getPolicySetArn() const { DARABONBA_PTR_GET_DEFAULT(policySetArn_, "") };
      inline PolicySets& setPolicySetArn(string policySetArn) { DARABONBA_PTR_SET_VALUE(policySetArn_, policySetArn) };


      // policySetName Field Functions 
      bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
      void deletePolicySetName() { this->policySetName_ = nullptr;};
      inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
      inline PolicySets& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PolicySets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> policySetArn_ {};
      shared_ptr<string> policySetName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->policySets_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPolicySetsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPolicySetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policySets Field Functions 
    bool hasPolicySets() const { return this->policySets_ != nullptr;};
    void deletePolicySets() { this->policySets_ = nullptr;};
    inline const vector<ListPolicySetsResponseBody::PolicySets> & getPolicySets() const { DARABONBA_PTR_GET_CONST(policySets_, vector<ListPolicySetsResponseBody::PolicySets>) };
    inline vector<ListPolicySetsResponseBody::PolicySets> getPolicySets() { DARABONBA_PTR_GET(policySets_, vector<ListPolicySetsResponseBody::PolicySets>) };
    inline ListPolicySetsResponseBody& setPolicySets(const vector<ListPolicySetsResponseBody::PolicySets> & policySets) { DARABONBA_PTR_SET_VALUE(policySets_, policySets) };
    inline ListPolicySetsResponseBody& setPolicySets(vector<ListPolicySetsResponseBody::PolicySets> && policySets) { DARABONBA_PTR_SET_RVALUE(policySets_, policySets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicySetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPolicySetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListPolicySetsResponseBody::PolicySets>> policySets_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
