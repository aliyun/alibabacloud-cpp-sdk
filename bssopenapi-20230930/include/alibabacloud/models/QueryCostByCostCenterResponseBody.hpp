// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTBYCOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTBYCOSTCENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostByCostCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostByCostCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeAmountList, consumeAmountList_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostByCostCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeAmountList, consumeAmountList_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
    };
    QueryCostByCostCenterResponseBody() = default ;
    QueryCostByCostCenterResponseBody(const QueryCostByCostCenterResponseBody &) = default ;
    QueryCostByCostCenterResponseBody(QueryCostByCostCenterResponseBody &&) = default ;
    QueryCostByCostCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostByCostCenterResponseBody() = default ;
    QueryCostByCostCenterResponseBody& operator=(const QueryCostByCostCenterResponseBody &) = default ;
    QueryCostByCostCenterResponseBody& operator=(QueryCostByCostCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConsumeAmountList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumeAmountList& obj) { 
        DARABONBA_PTR_TO_JSON(AllocatedAmount, allocatedAmount_);
        DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
        DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_TO_JSON(DirectAmount, directAmount_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_TO_JSON(OwnerAccountName, ownerAccountName_);
        DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
        DARABONBA_PTR_TO_JSON(PreCostCenterId, preCostCenterId_);
        DARABONBA_PTR_TO_JSON(TotalAllocatedAmount, totalAllocatedAmount_);
        DARABONBA_PTR_TO_JSON(TotalAllocatedAmountPercent, totalAllocatedAmountPercent_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumeAmountList& obj) { 
        DARABONBA_PTR_FROM_JSON(AllocatedAmount, allocatedAmount_);
        DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
        DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_FROM_JSON(DirectAmount, directAmount_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountName, ownerAccountName_);
        DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
        DARABONBA_PTR_FROM_JSON(PreCostCenterId, preCostCenterId_);
        DARABONBA_PTR_FROM_JSON(TotalAllocatedAmount, totalAllocatedAmount_);
        DARABONBA_PTR_FROM_JSON(TotalAllocatedAmountPercent, totalAllocatedAmountPercent_);
      };
      ConsumeAmountList() = default ;
      ConsumeAmountList(const ConsumeAmountList &) = default ;
      ConsumeAmountList(ConsumeAmountList &&) = default ;
      ConsumeAmountList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumeAmountList() = default ;
      ConsumeAmountList& operator=(const ConsumeAmountList &) = default ;
      ConsumeAmountList& operator=(ConsumeAmountList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allocatedAmount_ == nullptr
        && this->costCenterCode_ == nullptr && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->directAmount_ == nullptr && this->level_ == nullptr
        && this->ownerAccountId_ == nullptr && this->ownerAccountName_ == nullptr && this->parentCostCenterId_ == nullptr && this->preCostCenterId_ == nullptr && this->totalAllocatedAmount_ == nullptr
        && this->totalAllocatedAmountPercent_ == nullptr; };
      // allocatedAmount Field Functions 
      bool hasAllocatedAmount() const { return this->allocatedAmount_ != nullptr;};
      void deleteAllocatedAmount() { this->allocatedAmount_ = nullptr;};
      inline string getAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(allocatedAmount_, "") };
      inline ConsumeAmountList& setAllocatedAmount(string allocatedAmount) { DARABONBA_PTR_SET_VALUE(allocatedAmount_, allocatedAmount) };


      // costCenterCode Field Functions 
      bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
      void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
      inline string getCostCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
      inline ConsumeAmountList& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline ConsumeAmountList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline ConsumeAmountList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // directAmount Field Functions 
      bool hasDirectAmount() const { return this->directAmount_ != nullptr;};
      void deleteDirectAmount() { this->directAmount_ = nullptr;};
      inline string getDirectAmount() const { DARABONBA_PTR_GET_DEFAULT(directAmount_, "") };
      inline ConsumeAmountList& setDirectAmount(string directAmount) { DARABONBA_PTR_SET_VALUE(directAmount_, directAmount) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
      inline ConsumeAmountList& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline ConsumeAmountList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


      // ownerAccountName Field Functions 
      bool hasOwnerAccountName() const { return this->ownerAccountName_ != nullptr;};
      void deleteOwnerAccountName() { this->ownerAccountName_ = nullptr;};
      inline string getOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountName_, "") };
      inline ConsumeAmountList& setOwnerAccountName(string ownerAccountName) { DARABONBA_PTR_SET_VALUE(ownerAccountName_, ownerAccountName) };


      // parentCostCenterId Field Functions 
      bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
      void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
      inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
      inline ConsumeAmountList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


      // preCostCenterId Field Functions 
      bool hasPreCostCenterId() const { return this->preCostCenterId_ != nullptr;};
      void deletePreCostCenterId() { this->preCostCenterId_ = nullptr;};
      inline int64_t getPreCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(preCostCenterId_, 0L) };
      inline ConsumeAmountList& setPreCostCenterId(int64_t preCostCenterId) { DARABONBA_PTR_SET_VALUE(preCostCenterId_, preCostCenterId) };


      // totalAllocatedAmount Field Functions 
      bool hasTotalAllocatedAmount() const { return this->totalAllocatedAmount_ != nullptr;};
      void deleteTotalAllocatedAmount() { this->totalAllocatedAmount_ = nullptr;};
      inline string getTotalAllocatedAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAllocatedAmount_, "") };
      inline ConsumeAmountList& setTotalAllocatedAmount(string totalAllocatedAmount) { DARABONBA_PTR_SET_VALUE(totalAllocatedAmount_, totalAllocatedAmount) };


      // totalAllocatedAmountPercent Field Functions 
      bool hasTotalAllocatedAmountPercent() const { return this->totalAllocatedAmountPercent_ != nullptr;};
      void deleteTotalAllocatedAmountPercent() { this->totalAllocatedAmountPercent_ = nullptr;};
      inline string getTotalAllocatedAmountPercent() const { DARABONBA_PTR_GET_DEFAULT(totalAllocatedAmountPercent_, "") };
      inline ConsumeAmountList& setTotalAllocatedAmountPercent(string totalAllocatedAmountPercent) { DARABONBA_PTR_SET_VALUE(totalAllocatedAmountPercent_, totalAllocatedAmountPercent) };


    protected:
      shared_ptr<string> allocatedAmount_ {};
      shared_ptr<string> costCenterCode_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<string> directAmount_ {};
      shared_ptr<int32_t> level_ {};
      shared_ptr<int64_t> ownerAccountId_ {};
      shared_ptr<string> ownerAccountName_ {};
      shared_ptr<int64_t> parentCostCenterId_ {};
      shared_ptr<int64_t> preCostCenterId_ {};
      shared_ptr<string> totalAllocatedAmount_ {};
      shared_ptr<string> totalAllocatedAmountPercent_ {};
    };

    virtual bool empty() const override { return this->consumeAmountList_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr && this->totalAmount_ == nullptr; };
    // consumeAmountList Field Functions 
    bool hasConsumeAmountList() const { return this->consumeAmountList_ != nullptr;};
    void deleteConsumeAmountList() { this->consumeAmountList_ = nullptr;};
    inline const vector<QueryCostByCostCenterResponseBody::ConsumeAmountList> & getConsumeAmountList() const { DARABONBA_PTR_GET_CONST(consumeAmountList_, vector<QueryCostByCostCenterResponseBody::ConsumeAmountList>) };
    inline vector<QueryCostByCostCenterResponseBody::ConsumeAmountList> getConsumeAmountList() { DARABONBA_PTR_GET(consumeAmountList_, vector<QueryCostByCostCenterResponseBody::ConsumeAmountList>) };
    inline QueryCostByCostCenterResponseBody& setConsumeAmountList(const vector<QueryCostByCostCenterResponseBody::ConsumeAmountList> & consumeAmountList) { DARABONBA_PTR_SET_VALUE(consumeAmountList_, consumeAmountList) };
    inline QueryCostByCostCenterResponseBody& setConsumeAmountList(vector<QueryCostByCostCenterResponseBody::ConsumeAmountList> && consumeAmountList) { DARABONBA_PTR_SET_RVALUE(consumeAmountList_, consumeAmountList) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline QueryCostByCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostByCostCenterResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostByCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
    inline QueryCostByCostCenterResponseBody& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


  protected:
    shared_ptr<vector<QueryCostByCostCenterResponseBody::ConsumeAmountList>> consumeAmountList_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
