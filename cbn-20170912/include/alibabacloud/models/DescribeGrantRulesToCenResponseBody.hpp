// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToCenResponseBody() = default ;
    DescribeGrantRulesToCenResponseBody(const DescribeGrantRulesToCenResponseBody &) = default ;
    DescribeGrantRulesToCenResponseBody(DescribeGrantRulesToCenResponseBody &&) = default ;
    DescribeGrantRulesToCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBody() = default ;
    DescribeGrantRulesToCenResponseBody& operator=(const DescribeGrantRulesToCenResponseBody &) = default ;
    DescribeGrantRulesToCenResponseBody& operator=(DescribeGrantRulesToCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantRules& obj) { 
        DARABONBA_PTR_TO_JSON(GrantRule, grantRule_);
      };
      friend void from_json(const Darabonba::Json& j, GrantRules& obj) { 
        DARABONBA_PTR_FROM_JSON(GrantRule, grantRule_);
      };
      GrantRules() = default ;
      GrantRules(const GrantRules &) = default ;
      GrantRules(GrantRules &&) = default ;
      GrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GrantRules() = default ;
      GrantRules& operator=(const GrantRules &) = default ;
      GrantRules& operator=(GrantRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GrantRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrantRule& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
          DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        };
        friend void from_json(const Darabonba::Json& j, GrantRule& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
          DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        };
        GrantRule() = default ;
        GrantRule(const GrantRule &) = default ;
        GrantRule(GrantRule &&) = default ;
        GrantRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrantRule() = default ;
        GrantRule& operator=(const GrantRule &) = default ;
        GrantRule& operator=(GrantRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->childInstanceId_ == nullptr && this->childInstanceOwnerId_ == nullptr && this->childInstanceRegionId_ == nullptr && this->childInstanceType_ == nullptr
        && this->createTime_ == nullptr && this->orderType_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline GrantRule& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cenOwnerId Field Functions 
        bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
        void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
        inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
        inline GrantRule& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


        // childInstanceId Field Functions 
        bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
        void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
        inline string getChildInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
        inline GrantRule& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


        // childInstanceOwnerId Field Functions 
        bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
        void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
        inline int64_t getChildInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
        inline GrantRule& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


        // childInstanceRegionId Field Functions 
        bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
        void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
        inline string getChildInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
        inline GrantRule& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


        // childInstanceType Field Functions 
        bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
        void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
        inline string getChildInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
        inline GrantRule& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline GrantRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline GrantRule& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      protected:
        // The ID of the CEN instance.
        shared_ptr<string> cenId_ {};
        // The ID of the Alibaba Cloud account to which the CEN instance belongs.
        shared_ptr<int64_t> cenOwnerId_ {};
        // The ID of the network instance.
        shared_ptr<string> childInstanceId_ {};
        // The ID of the Alibaba Cloud account to which the network instance belongs.
        shared_ptr<int64_t> childInstanceOwnerId_ {};
        // The region ID of the network instance.
        shared_ptr<string> childInstanceRegionId_ {};
        // The type of the network instance. Valid values:
        // 
        // *   **VPC**: VPC
        // *   **VBR**: VBR
        // *   **CCN**: CCN instance
        // *   **VPN**: IPsec-VPN connection
        shared_ptr<string> childInstanceType_ {};
        // The time when the permissions were granted to the CEN instance.
        // 
        // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<int64_t> createTime_ {};
        // The entity that pays the fees of the network instance. Valid values:
        // 
        // *   **PayByCenOwner**: The fees of the connections and data forwarding on the transit router are paid by the Alibaba Cloud account to which the CEN instance belongs.
        // *   **PayByResourceOwner**: The fees of the connections and data forwarding on the transit router are paid by the Alibaba Cloud account to which the network instance belongs.
        shared_ptr<string> orderType_ {};
      };

      virtual bool empty() const override { return this->grantRule_ == nullptr; };
      // grantRule Field Functions 
      bool hasGrantRule() const { return this->grantRule_ != nullptr;};
      void deleteGrantRule() { this->grantRule_ = nullptr;};
      inline const vector<GrantRules::GrantRule> & getGrantRule() const { DARABONBA_PTR_GET_CONST(grantRule_, vector<GrantRules::GrantRule>) };
      inline vector<GrantRules::GrantRule> getGrantRule() { DARABONBA_PTR_GET(grantRule_, vector<GrantRules::GrantRule>) };
      inline GrantRules& setGrantRule(const vector<GrantRules::GrantRule> & grantRule) { DARABONBA_PTR_SET_VALUE(grantRule_, grantRule) };
      inline GrantRules& setGrantRule(vector<GrantRules::GrantRule> && grantRule) { DARABONBA_PTR_SET_RVALUE(grantRule_, grantRule) };


    protected:
      shared_ptr<vector<GrantRules::GrantRule>> grantRule_ {};
    };

    virtual bool empty() const override { return this->grantRules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // grantRules Field Functions 
    bool hasGrantRules() const { return this->grantRules_ != nullptr;};
    void deleteGrantRules() { this->grantRules_ = nullptr;};
    inline const DescribeGrantRulesToCenResponseBody::GrantRules & getGrantRules() const { DARABONBA_PTR_GET_CONST(grantRules_, DescribeGrantRulesToCenResponseBody::GrantRules) };
    inline DescribeGrantRulesToCenResponseBody::GrantRules getGrantRules() { DARABONBA_PTR_GET(grantRules_, DescribeGrantRulesToCenResponseBody::GrantRules) };
    inline DescribeGrantRulesToCenResponseBody& setGrantRules(const DescribeGrantRulesToCenResponseBody::GrantRules & grantRules) { DARABONBA_PTR_SET_VALUE(grantRules_, grantRules) };
    inline DescribeGrantRulesToCenResponseBody& setGrantRules(DescribeGrantRulesToCenResponseBody::GrantRules && grantRules) { DARABONBA_PTR_SET_RVALUE(grantRules_, grantRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeGrantRulesToCenResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGrantRulesToCenResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeGrantRulesToCenResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The permissions that are granted to the CEN instance.
    shared_ptr<DescribeGrantRulesToCenResponseBody::GrantRules> grantRules_ {};
    // *   If no value is specified for **MaxResults**, query results are returned in one batch. The value of **MaxResults** indicates the total number of entries.
    // *   If a value is specified for **MaxResults**, it indicates that you need to query results in batches. The value of **MaxResults** in the response indicates the number of entries in the current batch.
    shared_ptr<int64_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
