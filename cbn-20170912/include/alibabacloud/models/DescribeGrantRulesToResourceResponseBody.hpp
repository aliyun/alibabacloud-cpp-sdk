// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCERESPONSEBODY_HPP_
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
  class DescribeGrantRulesToResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRules, grantRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGrantRulesToResourceResponseBody() = default ;
    DescribeGrantRulesToResourceResponseBody(const DescribeGrantRulesToResourceResponseBody &) = default ;
    DescribeGrantRulesToResourceResponseBody(DescribeGrantRulesToResourceResponseBody &&) = default ;
    DescribeGrantRulesToResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToResourceResponseBody() = default ;
    DescribeGrantRulesToResourceResponseBody& operator=(const DescribeGrantRulesToResourceResponseBody &) = default ;
    DescribeGrantRulesToResourceResponseBody& operator=(DescribeGrantRulesToResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GrantRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GrantRules& obj) { 
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EffectiveOrderType, effectiveOrderType_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      };
      friend void from_json(const Darabonba::Json& j, GrantRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EffectiveOrderType, effectiveOrderType_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
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
      virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->createTime_ == nullptr && this->effectiveOrderType_ == nullptr && this->orderType_ == nullptr; };
      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline GrantRules& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // cenOwnerId Field Functions 
      bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
      void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
      inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
      inline GrantRules& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline GrantRules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // effectiveOrderType Field Functions 
      bool hasEffectiveOrderType() const { return this->effectiveOrderType_ != nullptr;};
      void deleteEffectiveOrderType() { this->effectiveOrderType_ = nullptr;};
      inline string getEffectiveOrderType() const { DARABONBA_PTR_GET_DEFAULT(effectiveOrderType_, "") };
      inline GrantRules& setEffectiveOrderType(string effectiveOrderType) { DARABONBA_PTR_SET_VALUE(effectiveOrderType_, effectiveOrderType) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline GrantRules& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    protected:
      // The ID of the Cloud Enterprise Network (CEN) instance.
      shared_ptr<string> cenId_ {};
      // The ID of the main account that owns the Cloud Enterprise Network (CEN) instance.
      shared_ptr<int64_t> cenOwnerId_ {};
      // The timestamp when the permission was granted. The value is in UTC and follows the ISO 8601 standard: `YYYY-MM-DDThh:mmZ`.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> effectiveOrderType_ {};
      // The payer for the network instance. Valid values:
      // 
      // - **PayByCenOwner**: The CEN instance owner pays the Transit Router connection and data processing fees for the network instance.
      // 
      // - **PayByResourceOwner**: The network instance owner pays the Transit Router connection and data processing fees for the network instance.
      shared_ptr<string> orderType_ {};
    };

    virtual bool empty() const override { return this->grantRules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // grantRules Field Functions 
    bool hasGrantRules() const { return this->grantRules_ != nullptr;};
    void deleteGrantRules() { this->grantRules_ = nullptr;};
    inline const vector<DescribeGrantRulesToResourceResponseBody::GrantRules> & getGrantRules() const { DARABONBA_PTR_GET_CONST(grantRules_, vector<DescribeGrantRulesToResourceResponseBody::GrantRules>) };
    inline vector<DescribeGrantRulesToResourceResponseBody::GrantRules> getGrantRules() { DARABONBA_PTR_GET(grantRules_, vector<DescribeGrantRulesToResourceResponseBody::GrantRules>) };
    inline DescribeGrantRulesToResourceResponseBody& setGrantRules(const vector<DescribeGrantRulesToResourceResponseBody::GrantRules> & grantRules) { DARABONBA_PTR_SET_VALUE(grantRules_, grantRules) };
    inline DescribeGrantRulesToResourceResponseBody& setGrantRules(vector<DescribeGrantRulesToResourceResponseBody::GrantRules> && grantRules) { DARABONBA_PTR_SET_RVALUE(grantRules_, grantRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeGrantRulesToResourceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGrantRulesToResourceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGrantRulesToResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGrantRulesToResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of permission records.
    shared_ptr<vector<DescribeGrantRulesToResourceResponseBody::GrantRules>> grantRules_ {};
    // - If the **MaxResults** parameter was not included in the request, this field indicates the total number of entries.
    // 
    // - If the **MaxResults** parameter was included in the request, this field indicates the number of entries on the current page.
    shared_ptr<int32_t> maxResults_ {};
    // The token to use in your next request to retrieve a new page of results. Valid values:
    // 
    // - If the **NextToken** parameter is empty, no more results are available.
    // 
    // - If a value is returned for **NextToken**, use it for the next request to get the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
