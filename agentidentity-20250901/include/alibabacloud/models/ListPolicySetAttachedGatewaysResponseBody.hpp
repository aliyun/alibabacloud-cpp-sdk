// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYSETATTACHEDGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYSETATTACHEDGATEWAYSRESPONSEBODY_HPP_
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
  class ListPolicySetAttachedGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicySetAttachedGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedGateways, attachedGateways_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicySetAttachedGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedGateways, attachedGateways_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPolicySetAttachedGatewaysResponseBody() = default ;
    ListPolicySetAttachedGatewaysResponseBody(const ListPolicySetAttachedGatewaysResponseBody &) = default ;
    ListPolicySetAttachedGatewaysResponseBody(ListPolicySetAttachedGatewaysResponseBody &&) = default ;
    ListPolicySetAttachedGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicySetAttachedGatewaysResponseBody() = default ;
    ListPolicySetAttachedGatewaysResponseBody& operator=(const ListPolicySetAttachedGatewaysResponseBody &) = default ;
    ListPolicySetAttachedGatewaysResponseBody& operator=(ListPolicySetAttachedGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachedGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachedGateways& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedPolicySetName, attachedPolicySetName_);
        DARABONBA_PTR_TO_JSON(AttachedTime, attachedTime_);
        DARABONBA_PTR_TO_JSON(EnforcementMode, enforcementMode_);
        DARABONBA_PTR_TO_JSON(GatewayArn, gatewayArn_);
        DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      };
      friend void from_json(const Darabonba::Json& j, AttachedGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedPolicySetName, attachedPolicySetName_);
        DARABONBA_PTR_FROM_JSON(AttachedTime, attachedTime_);
        DARABONBA_PTR_FROM_JSON(EnforcementMode, enforcementMode_);
        DARABONBA_PTR_FROM_JSON(GatewayArn, gatewayArn_);
        DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      };
      AttachedGateways() = default ;
      AttachedGateways(const AttachedGateways &) = default ;
      AttachedGateways(AttachedGateways &&) = default ;
      AttachedGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachedGateways() = default ;
      AttachedGateways& operator=(const AttachedGateways &) = default ;
      AttachedGateways& operator=(AttachedGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachedPolicySetName_ == nullptr
        && this->attachedTime_ == nullptr && this->enforcementMode_ == nullptr && this->gatewayArn_ == nullptr && this->gatewayType_ == nullptr; };
      // attachedPolicySetName Field Functions 
      bool hasAttachedPolicySetName() const { return this->attachedPolicySetName_ != nullptr;};
      void deleteAttachedPolicySetName() { this->attachedPolicySetName_ = nullptr;};
      inline string getAttachedPolicySetName() const { DARABONBA_PTR_GET_DEFAULT(attachedPolicySetName_, "") };
      inline AttachedGateways& setAttachedPolicySetName(string attachedPolicySetName) { DARABONBA_PTR_SET_VALUE(attachedPolicySetName_, attachedPolicySetName) };


      // attachedTime Field Functions 
      bool hasAttachedTime() const { return this->attachedTime_ != nullptr;};
      void deleteAttachedTime() { this->attachedTime_ = nullptr;};
      inline string getAttachedTime() const { DARABONBA_PTR_GET_DEFAULT(attachedTime_, "") };
      inline AttachedGateways& setAttachedTime(string attachedTime) { DARABONBA_PTR_SET_VALUE(attachedTime_, attachedTime) };


      // enforcementMode Field Functions 
      bool hasEnforcementMode() const { return this->enforcementMode_ != nullptr;};
      void deleteEnforcementMode() { this->enforcementMode_ = nullptr;};
      inline string getEnforcementMode() const { DARABONBA_PTR_GET_DEFAULT(enforcementMode_, "") };
      inline AttachedGateways& setEnforcementMode(string enforcementMode) { DARABONBA_PTR_SET_VALUE(enforcementMode_, enforcementMode) };


      // gatewayArn Field Functions 
      bool hasGatewayArn() const { return this->gatewayArn_ != nullptr;};
      void deleteGatewayArn() { this->gatewayArn_ = nullptr;};
      inline string getGatewayArn() const { DARABONBA_PTR_GET_DEFAULT(gatewayArn_, "") };
      inline AttachedGateways& setGatewayArn(string gatewayArn) { DARABONBA_PTR_SET_VALUE(gatewayArn_, gatewayArn) };


      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline AttachedGateways& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    protected:
      shared_ptr<string> attachedPolicySetName_ {};
      shared_ptr<string> attachedTime_ {};
      shared_ptr<string> enforcementMode_ {};
      shared_ptr<string> gatewayArn_ {};
      shared_ptr<string> gatewayType_ {};
    };

    virtual bool empty() const override { return this->attachedGateways_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // attachedGateways Field Functions 
    bool hasAttachedGateways() const { return this->attachedGateways_ != nullptr;};
    void deleteAttachedGateways() { this->attachedGateways_ = nullptr;};
    inline const vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways> & getAttachedGateways() const { DARABONBA_PTR_GET_CONST(attachedGateways_, vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways>) };
    inline vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways> getAttachedGateways() { DARABONBA_PTR_GET(attachedGateways_, vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways>) };
    inline ListPolicySetAttachedGatewaysResponseBody& setAttachedGateways(const vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways> & attachedGateways) { DARABONBA_PTR_SET_VALUE(attachedGateways_, attachedGateways) };
    inline ListPolicySetAttachedGatewaysResponseBody& setAttachedGateways(vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways> && attachedGateways) { DARABONBA_PTR_SET_RVALUE(attachedGateways_, attachedGateways) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPolicySetAttachedGatewaysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPolicySetAttachedGatewaysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicySetAttachedGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPolicySetAttachedGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListPolicySetAttachedGatewaysResponseBody::AttachedGateways>> attachedGateways_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
