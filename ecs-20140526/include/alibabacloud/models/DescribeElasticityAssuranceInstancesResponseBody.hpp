// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticityAssuranceInstancesResponseBody() = default ;
    DescribeElasticityAssuranceInstancesResponseBody(const DescribeElasticityAssuranceInstancesResponseBody &) = default ;
    DescribeElasticityAssuranceInstancesResponseBody(DescribeElasticityAssuranceInstancesResponseBody &&) = default ;
    DescribeElasticityAssuranceInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceInstancesResponseBody() = default ;
    DescribeElasticityAssuranceInstancesResponseBody& operator=(const DescribeElasticityAssuranceInstancesResponseBody &) = default ;
    DescribeElasticityAssuranceInstancesResponseBody& operator=(DescribeElasticityAssuranceInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticityAssuranceItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticityAssuranceItem& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticityAssuranceItem& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
      };
      ElasticityAssuranceItem() = default ;
      ElasticityAssuranceItem(const ElasticityAssuranceItem &) = default ;
      ElasticityAssuranceItem(ElasticityAssuranceItem &&) = default ;
      ElasticityAssuranceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticityAssuranceItem() = default ;
      ElasticityAssuranceItem& operator=(const ElasticityAssuranceItem &) = default ;
      ElasticityAssuranceItem& operator=(ElasticityAssuranceItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceIdSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceIdSet& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceIdSet& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        InstanceIdSet() = default ;
        InstanceIdSet(const InstanceIdSet &) = default ;
        InstanceIdSet(InstanceIdSet &&) = default ;
        InstanceIdSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceIdSet() = default ;
        InstanceIdSet& operator=(const InstanceIdSet &) = default ;
        InstanceIdSet& operator=(InstanceIdSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceIdSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The instance ID
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->instanceIdSet_ == nullptr; };
      // instanceIdSet Field Functions 
      bool hasInstanceIdSet() const { return this->instanceIdSet_ != nullptr;};
      void deleteInstanceIdSet() { this->instanceIdSet_ = nullptr;};
      inline const vector<ElasticityAssuranceItem::InstanceIdSet> & getInstanceIdSet() const { DARABONBA_PTR_GET_CONST(instanceIdSet_, vector<ElasticityAssuranceItem::InstanceIdSet>) };
      inline vector<ElasticityAssuranceItem::InstanceIdSet> getInstanceIdSet() { DARABONBA_PTR_GET(instanceIdSet_, vector<ElasticityAssuranceItem::InstanceIdSet>) };
      inline ElasticityAssuranceItem& setInstanceIdSet(const vector<ElasticityAssuranceItem::InstanceIdSet> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
      inline ElasticityAssuranceItem& setInstanceIdSet(vector<ElasticityAssuranceItem::InstanceIdSet> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


    protected:
      shared_ptr<vector<ElasticityAssuranceItem::InstanceIdSet>> instanceIdSet_ {};
    };

    virtual bool empty() const override { return this->elasticityAssuranceItem_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // elasticityAssuranceItem Field Functions 
    bool hasElasticityAssuranceItem() const { return this->elasticityAssuranceItem_ != nullptr;};
    void deleteElasticityAssuranceItem() { this->elasticityAssuranceItem_ = nullptr;};
    inline const DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem & getElasticityAssuranceItem() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceItem_, DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem) };
    inline DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem getElasticityAssuranceItem() { DARABONBA_PTR_GET(elasticityAssuranceItem_, DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setElasticityAssuranceItem(const DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem & elasticityAssuranceItem) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setElasticityAssuranceItem(DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem && elasticityAssuranceItem) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeElasticityAssuranceInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticityAssuranceInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticityAssuranceInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instances that match and use the elasticity assurance.
    shared_ptr<DescribeElasticityAssuranceInstancesResponseBody::ElasticityAssuranceItem> elasticityAssuranceItem_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
