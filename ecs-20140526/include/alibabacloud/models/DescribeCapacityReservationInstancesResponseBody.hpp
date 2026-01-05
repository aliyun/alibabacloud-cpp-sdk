// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONINSTANCESRESPONSEBODY_HPP_
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
  class DescribeCapacityReservationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationItem, capacityReservationItem_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationItem, capacityReservationItem_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCapacityReservationInstancesResponseBody() = default ;
    DescribeCapacityReservationInstancesResponseBody(const DescribeCapacityReservationInstancesResponseBody &) = default ;
    DescribeCapacityReservationInstancesResponseBody(DescribeCapacityReservationInstancesResponseBody &&) = default ;
    DescribeCapacityReservationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationInstancesResponseBody() = default ;
    DescribeCapacityReservationInstancesResponseBody& operator=(const DescribeCapacityReservationInstancesResponseBody &) = default ;
    DescribeCapacityReservationInstancesResponseBody& operator=(DescribeCapacityReservationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CapacityReservationItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapacityReservationItem& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
      };
      friend void from_json(const Darabonba::Json& j, CapacityReservationItem& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
      };
      CapacityReservationItem() = default ;
      CapacityReservationItem(const CapacityReservationItem &) = default ;
      CapacityReservationItem(CapacityReservationItem &&) = default ;
      CapacityReservationItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapacityReservationItem() = default ;
      CapacityReservationItem& operator=(const CapacityReservationItem &) = default ;
      CapacityReservationItem& operator=(CapacityReservationItem &&) = default ;
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
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->instanceIdSet_ == nullptr; };
      // instanceIdSet Field Functions 
      bool hasInstanceIdSet() const { return this->instanceIdSet_ != nullptr;};
      void deleteInstanceIdSet() { this->instanceIdSet_ = nullptr;};
      inline const vector<CapacityReservationItem::InstanceIdSet> & getInstanceIdSet() const { DARABONBA_PTR_GET_CONST(instanceIdSet_, vector<CapacityReservationItem::InstanceIdSet>) };
      inline vector<CapacityReservationItem::InstanceIdSet> getInstanceIdSet() { DARABONBA_PTR_GET(instanceIdSet_, vector<CapacityReservationItem::InstanceIdSet>) };
      inline CapacityReservationItem& setInstanceIdSet(const vector<CapacityReservationItem::InstanceIdSet> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
      inline CapacityReservationItem& setInstanceIdSet(vector<CapacityReservationItem::InstanceIdSet> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


    protected:
      shared_ptr<vector<CapacityReservationItem::InstanceIdSet>> instanceIdSet_ {};
    };

    virtual bool empty() const override { return this->capacityReservationItem_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // capacityReservationItem Field Functions 
    bool hasCapacityReservationItem() const { return this->capacityReservationItem_ != nullptr;};
    void deleteCapacityReservationItem() { this->capacityReservationItem_ = nullptr;};
    inline const DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem & getCapacityReservationItem() const { DARABONBA_PTR_GET_CONST(capacityReservationItem_, DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem) };
    inline DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem getCapacityReservationItem() { DARABONBA_PTR_GET(capacityReservationItem_, DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem) };
    inline DescribeCapacityReservationInstancesResponseBody& setCapacityReservationItem(const DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem & capacityReservationItem) { DARABONBA_PTR_SET_VALUE(capacityReservationItem_, capacityReservationItem) };
    inline DescribeCapacityReservationInstancesResponseBody& setCapacityReservationItem(DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem && capacityReservationItem) { DARABONBA_PTR_SET_RVALUE(capacityReservationItem_, capacityReservationItem) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCapacityReservationInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCapacityReservationInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCapacityReservationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCapacityReservationInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instances that match the capacity reservation.
    shared_ptr<DescribeCapacityReservationInstancesResponseBody::CapacityReservationItem> capacityReservationItem_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
