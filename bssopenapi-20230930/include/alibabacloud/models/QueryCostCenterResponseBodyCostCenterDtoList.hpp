// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESPONSEBODYCOSTCENTERDTOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRESPONSEBODYCOSTCENTERDTOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterResponseBodyCostCenterDtoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterResponseBodyCostCenterDtoList& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterCode, costCenterCode_);
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
      DARABONBA_PTR_TO_JSON(PrevCostCenterId, prevCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterResponseBodyCostCenterDtoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterCode, costCenterCode_);
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
      DARABONBA_PTR_FROM_JSON(PrevCostCenterId, prevCostCenterId_);
    };
    QueryCostCenterResponseBodyCostCenterDtoList() = default ;
    QueryCostCenterResponseBodyCostCenterDtoList(const QueryCostCenterResponseBodyCostCenterDtoList &) = default ;
    QueryCostCenterResponseBodyCostCenterDtoList(QueryCostCenterResponseBodyCostCenterDtoList &&) = default ;
    QueryCostCenterResponseBodyCostCenterDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterResponseBodyCostCenterDtoList() = default ;
    QueryCostCenterResponseBodyCostCenterDtoList& operator=(const QueryCostCenterResponseBodyCostCenterDtoList &) = default ;
    QueryCostCenterResponseBodyCostCenterDtoList& operator=(QueryCostCenterResponseBodyCostCenterDtoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterCode_ != nullptr
        && this->costCenterId_ != nullptr && this->costCenterName_ != nullptr && this->level_ != nullptr && this->ownerAccountId_ != nullptr && this->parentCostCenterId_ != nullptr
        && this->prevCostCenterId_ != nullptr; };
    // costCenterCode Field Functions 
    bool hasCostCenterCode() const { return this->costCenterCode_ != nullptr;};
    void deleteCostCenterCode() { this->costCenterCode_ = nullptr;};
    inline string costCenterCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterCode_, "") };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setCostCenterCode(string costCenterCode) { DARABONBA_PTR_SET_VALUE(costCenterCode_, costCenterCode) };


    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // costCenterName Field Functions 
    bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
    void deleteCostCenterName() { this->costCenterName_ = nullptr;};
    inline string costCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // parentCostCenterId Field Functions 
    bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
    void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
    inline int64_t parentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


    // prevCostCenterId Field Functions 
    bool hasPrevCostCenterId() const { return this->prevCostCenterId_ != nullptr;};
    void deletePrevCostCenterId() { this->prevCostCenterId_ = nullptr;};
    inline int64_t prevCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(prevCostCenterId_, 0L) };
    inline QueryCostCenterResponseBodyCostCenterDtoList& setPrevCostCenterId(int64_t prevCostCenterId) { DARABONBA_PTR_SET_VALUE(prevCostCenterId_, prevCostCenterId) };


  protected:
    std::shared_ptr<string> costCenterCode_ = nullptr;
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<string> costCenterName_ = nullptr;
    std::shared_ptr<int32_t> level_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    std::shared_ptr<int64_t> parentCostCenterId_ = nullptr;
    std::shared_ptr<int64_t> prevCostCenterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
