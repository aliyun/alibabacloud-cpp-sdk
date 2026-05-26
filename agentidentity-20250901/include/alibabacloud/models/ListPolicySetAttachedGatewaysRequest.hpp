// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYSETATTACHEDGATEWAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYSETATTACHEDGATEWAYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListPolicySetAttachedGatewaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicySetAttachedGatewaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicySetName, policySetName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicySetAttachedGatewaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicySetName, policySetName_);
    };
    ListPolicySetAttachedGatewaysRequest() = default ;
    ListPolicySetAttachedGatewaysRequest(const ListPolicySetAttachedGatewaysRequest &) = default ;
    ListPolicySetAttachedGatewaysRequest(ListPolicySetAttachedGatewaysRequest &&) = default ;
    ListPolicySetAttachedGatewaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicySetAttachedGatewaysRequest() = default ;
    ListPolicySetAttachedGatewaysRequest& operator=(const ListPolicySetAttachedGatewaysRequest &) = default ;
    ListPolicySetAttachedGatewaysRequest& operator=(ListPolicySetAttachedGatewaysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->policySetName_ == nullptr; };
    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListPolicySetAttachedGatewaysRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPolicySetAttachedGatewaysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPolicySetAttachedGatewaysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policySetName Field Functions 
    bool hasPolicySetName() const { return this->policySetName_ != nullptr;};
    void deletePolicySetName() { this->policySetName_ = nullptr;};
    inline string getPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(policySetName_, "") };
    inline ListPolicySetAttachedGatewaysRequest& setPolicySetName(string policySetName) { DARABONBA_PTR_SET_VALUE(policySetName_, policySetName) };


  protected:
    shared_ptr<string> gatewayType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> policySetName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
