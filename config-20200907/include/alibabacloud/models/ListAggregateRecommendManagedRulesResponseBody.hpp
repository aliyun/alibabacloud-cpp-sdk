// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERECOMMENDMANAGEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERECOMMENDMANAGEDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRecommendManagedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRecommendManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecommendedManagedRules, recommendedManagedRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRecommendManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecommendedManagedRules, recommendedManagedRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateRecommendManagedRulesResponseBody() = default ;
    ListAggregateRecommendManagedRulesResponseBody(const ListAggregateRecommendManagedRulesResponseBody &) = default ;
    ListAggregateRecommendManagedRulesResponseBody(ListAggregateRecommendManagedRulesResponseBody &&) = default ;
    ListAggregateRecommendManagedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRecommendManagedRulesResponseBody() = default ;
    ListAggregateRecommendManagedRulesResponseBody& operator=(const ListAggregateRecommendManagedRulesResponseBody &) = default ;
    ListAggregateRecommendManagedRulesResponseBody& operator=(ListAggregateRecommendManagedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecommendedManagedRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecommendedManagedRules& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(RecommendedManagedRuleList, recommendedManagedRuleList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, RecommendedManagedRules& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(RecommendedManagedRuleList, recommendedManagedRuleList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      RecommendedManagedRules() = default ;
      RecommendedManagedRules(const RecommendedManagedRules &) = default ;
      RecommendedManagedRules(RecommendedManagedRules &&) = default ;
      RecommendedManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecommendedManagedRules() = default ;
      RecommendedManagedRules& operator=(const RecommendedManagedRules &) = default ;
      RecommendedManagedRules& operator=(RecommendedManagedRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecommendedManagedRuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecommendedManagedRuleList& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
          DARABONBA_PTR_TO_JSON(ResourceTypeScope, resourceTypeScope_);
        };
        friend void from_json(const Darabonba::Json& j, RecommendedManagedRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(ResourceTypeScope, resourceTypeScope_);
        };
        RecommendedManagedRuleList() = default ;
        RecommendedManagedRuleList(const RecommendedManagedRuleList &) = default ;
        RecommendedManagedRuleList(RecommendedManagedRuleList &&) = default ;
        RecommendedManagedRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecommendedManagedRuleList() = default ;
        RecommendedManagedRuleList& operator=(const RecommendedManagedRuleList &) = default ;
        RecommendedManagedRuleList& operator=(RecommendedManagedRuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configRuleName_ == nullptr
        && this->description_ == nullptr && this->identifier_ == nullptr && this->resourceTypeScope_ == nullptr; };
        // configRuleName Field Functions 
        bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
        void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
        inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
        inline RecommendedManagedRuleList& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RecommendedManagedRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline RecommendedManagedRuleList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // resourceTypeScope Field Functions 
        bool hasResourceTypeScope() const { return this->resourceTypeScope_ != nullptr;};
        void deleteResourceTypeScope() { this->resourceTypeScope_ = nullptr;};
        inline string getResourceTypeScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeScope_, "") };
        inline RecommendedManagedRuleList& setResourceTypeScope(string resourceTypeScope) { DARABONBA_PTR_SET_VALUE(resourceTypeScope_, resourceTypeScope) };


      protected:
        shared_ptr<string> configRuleName_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> identifier_ {};
        shared_ptr<string> resourceTypeScope_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->recommendedManagedRuleList_ == nullptr && this->totalCount_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline RecommendedManagedRules& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline RecommendedManagedRules& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // recommendedManagedRuleList Field Functions 
      bool hasRecommendedManagedRuleList() const { return this->recommendedManagedRuleList_ != nullptr;};
      void deleteRecommendedManagedRuleList() { this->recommendedManagedRuleList_ = nullptr;};
      inline const vector<RecommendedManagedRules::RecommendedManagedRuleList> & getRecommendedManagedRuleList() const { DARABONBA_PTR_GET_CONST(recommendedManagedRuleList_, vector<RecommendedManagedRules::RecommendedManagedRuleList>) };
      inline vector<RecommendedManagedRules::RecommendedManagedRuleList> getRecommendedManagedRuleList() { DARABONBA_PTR_GET(recommendedManagedRuleList_, vector<RecommendedManagedRules::RecommendedManagedRuleList>) };
      inline RecommendedManagedRules& setRecommendedManagedRuleList(const vector<RecommendedManagedRules::RecommendedManagedRuleList> & recommendedManagedRuleList) { DARABONBA_PTR_SET_VALUE(recommendedManagedRuleList_, recommendedManagedRuleList) };
      inline RecommendedManagedRules& setRecommendedManagedRuleList(vector<RecommendedManagedRules::RecommendedManagedRuleList> && recommendedManagedRuleList) { DARABONBA_PTR_SET_RVALUE(recommendedManagedRuleList_, recommendedManagedRuleList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline RecommendedManagedRules& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<vector<RecommendedManagedRules::RecommendedManagedRuleList>> recommendedManagedRuleList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->recommendedManagedRules_ == nullptr
        && this->requestId_ == nullptr; };
    // recommendedManagedRules Field Functions 
    bool hasRecommendedManagedRules() const { return this->recommendedManagedRules_ != nullptr;};
    void deleteRecommendedManagedRules() { this->recommendedManagedRules_ = nullptr;};
    inline const ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules & getRecommendedManagedRules() const { DARABONBA_PTR_GET_CONST(recommendedManagedRules_, ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules) };
    inline ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules getRecommendedManagedRules() { DARABONBA_PTR_GET(recommendedManagedRules_, ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules) };
    inline ListAggregateRecommendManagedRulesResponseBody& setRecommendedManagedRules(const ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules & recommendedManagedRules) { DARABONBA_PTR_SET_VALUE(recommendedManagedRules_, recommendedManagedRules) };
    inline ListAggregateRecommendManagedRulesResponseBody& setRecommendedManagedRules(ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules && recommendedManagedRules) { DARABONBA_PTR_SET_RVALUE(recommendedManagedRules_, recommendedManagedRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateRecommendManagedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListAggregateRecommendManagedRulesResponseBody::RecommendedManagedRules> recommendedManagedRules_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
