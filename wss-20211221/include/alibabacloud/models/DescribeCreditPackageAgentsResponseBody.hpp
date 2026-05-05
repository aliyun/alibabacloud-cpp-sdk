// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEAGENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeCreditPackageAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditPackageAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditPackageAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCreditPackageAgentsResponseBody() = default ;
    DescribeCreditPackageAgentsResponseBody(const DescribeCreditPackageAgentsResponseBody &) = default ;
    DescribeCreditPackageAgentsResponseBody(DescribeCreditPackageAgentsResponseBody &&) = default ;
    DescribeCreditPackageAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditPackageAgentsResponseBody() = default ;
    DescribeCreditPackageAgentsResponseBody& operator=(const DescribeCreditPackageAgentsResponseBody &) = default ;
    DescribeCreditPackageAgentsResponseBody& operator=(DescribeCreditPackageAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agents& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(CreditPackageId, creditPackageId_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(TotalCredit, totalCredit_);
        DARABONBA_PTR_TO_JSON(UsedCredit, usedCredit_);
        DARABONBA_PTR_TO_JSON(WarnPercent, warnPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Agents& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(CreditPackageId, creditPackageId_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(TotalCredit, totalCredit_);
        DARABONBA_PTR_FROM_JSON(UsedCredit, usedCredit_);
        DARABONBA_PTR_FROM_JSON(WarnPercent, warnPercent_);
      };
      Agents() = default ;
      Agents(const Agents &) = default ;
      Agents(Agents &&) = default ;
      Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Agents() = default ;
      Agents& operator=(const Agents &) = default ;
      Agents& operator=(Agents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createdTime_ == nullptr && this->creditPackageId_ == nullptr && this->expiredTime_ == nullptr && this->instanceType_ == nullptr && this->totalCredit_ == nullptr
        && this->usedCredit_ == nullptr && this->warnPercent_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Agents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Agents& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // creditPackageId Field Functions 
      bool hasCreditPackageId() const { return this->creditPackageId_ != nullptr;};
      void deleteCreditPackageId() { this->creditPackageId_ = nullptr;};
      inline string getCreditPackageId() const { DARABONBA_PTR_GET_DEFAULT(creditPackageId_, "") };
      inline Agents& setCreditPackageId(string creditPackageId) { DARABONBA_PTR_SET_VALUE(creditPackageId_, creditPackageId) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Agents& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Agents& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // totalCredit Field Functions 
      bool hasTotalCredit() const { return this->totalCredit_ != nullptr;};
      void deleteTotalCredit() { this->totalCredit_ = nullptr;};
      inline int64_t getTotalCredit() const { DARABONBA_PTR_GET_DEFAULT(totalCredit_, 0L) };
      inline Agents& setTotalCredit(int64_t totalCredit) { DARABONBA_PTR_SET_VALUE(totalCredit_, totalCredit) };


      // usedCredit Field Functions 
      bool hasUsedCredit() const { return this->usedCredit_ != nullptr;};
      void deleteUsedCredit() { this->usedCredit_ = nullptr;};
      inline int64_t getUsedCredit() const { DARABONBA_PTR_GET_DEFAULT(usedCredit_, 0L) };
      inline Agents& setUsedCredit(int64_t usedCredit) { DARABONBA_PTR_SET_VALUE(usedCredit_, usedCredit) };


      // warnPercent Field Functions 
      bool hasWarnPercent() const { return this->warnPercent_ != nullptr;};
      void deleteWarnPercent() { this->warnPercent_ = nullptr;};
      inline int32_t getWarnPercent() const { DARABONBA_PTR_GET_DEFAULT(warnPercent_, 0) };
      inline Agents& setWarnPercent(int32_t warnPercent) { DARABONBA_PTR_SET_VALUE(warnPercent_, warnPercent) };


    protected:
      // Agent ID
      shared_ptr<string> agentId_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> creditPackageId_ {};
      shared_ptr<string> expiredTime_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<int64_t> totalCredit_ {};
      shared_ptr<int64_t> usedCredit_ {};
      shared_ptr<int32_t> warnPercent_ {};
    };

    virtual bool empty() const override { return this->agents_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline const vector<DescribeCreditPackageAgentsResponseBody::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<DescribeCreditPackageAgentsResponseBody::Agents>) };
    inline vector<DescribeCreditPackageAgentsResponseBody::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<DescribeCreditPackageAgentsResponseBody::Agents>) };
    inline DescribeCreditPackageAgentsResponseBody& setAgents(const vector<DescribeCreditPackageAgentsResponseBody::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
    inline DescribeCreditPackageAgentsResponseBody& setAgents(vector<DescribeCreditPackageAgentsResponseBody::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCreditPackageAgentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCreditPackageAgentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreditPackageAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCreditPackageAgentsResponseBody::Agents>> agents_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
