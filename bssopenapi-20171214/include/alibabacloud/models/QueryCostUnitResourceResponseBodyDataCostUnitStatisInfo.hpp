// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTUNITRESOURCERESPONSEBODYDATACOSTUNITSTATISINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTUNITRESOURCERESPONSEBODYDATACOSTUNITSTATISINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupCount, resourceGroupCount_);
      DARABONBA_PTR_TO_JSON(SubUnitCount, subUnitCount_);
      DARABONBA_PTR_TO_JSON(TotalResourceCount, totalResourceCount_);
      DARABONBA_PTR_TO_JSON(TotalResourceGroupCount, totalResourceGroupCount_);
      DARABONBA_PTR_TO_JSON(TotalUserCount, totalUserCount_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupCount, resourceGroupCount_);
      DARABONBA_PTR_FROM_JSON(SubUnitCount, subUnitCount_);
      DARABONBA_PTR_FROM_JSON(TotalResourceCount, totalResourceCount_);
      DARABONBA_PTR_FROM_JSON(TotalResourceGroupCount, totalResourceGroupCount_);
      DARABONBA_PTR_FROM_JSON(TotalUserCount, totalUserCount_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo() = default ;
    QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo(const QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo &) = default ;
    QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo(QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo &&) = default ;
    QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo() = default ;
    QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& operator=(const QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo &) = default ;
    QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& operator=(QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceCount_ != nullptr
        && this->resourceGroupCount_ != nullptr && this->subUnitCount_ != nullptr && this->totalResourceCount_ != nullptr && this->totalResourceGroupCount_ != nullptr && this->totalUserCount_ != nullptr
        && this->userCount_ != nullptr; };
    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int64_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // resourceGroupCount Field Functions 
    bool hasResourceGroupCount() const { return this->resourceGroupCount_ != nullptr;};
    void deleteResourceGroupCount() { this->resourceGroupCount_ = nullptr;};
    inline int64_t resourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setResourceGroupCount(int64_t resourceGroupCount) { DARABONBA_PTR_SET_VALUE(resourceGroupCount_, resourceGroupCount) };


    // subUnitCount Field Functions 
    bool hasSubUnitCount() const { return this->subUnitCount_ != nullptr;};
    void deleteSubUnitCount() { this->subUnitCount_ = nullptr;};
    inline int64_t subUnitCount() const { DARABONBA_PTR_GET_DEFAULT(subUnitCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setSubUnitCount(int64_t subUnitCount) { DARABONBA_PTR_SET_VALUE(subUnitCount_, subUnitCount) };


    // totalResourceCount Field Functions 
    bool hasTotalResourceCount() const { return this->totalResourceCount_ != nullptr;};
    void deleteTotalResourceCount() { this->totalResourceCount_ = nullptr;};
    inline int64_t totalResourceCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setTotalResourceCount(int64_t totalResourceCount) { DARABONBA_PTR_SET_VALUE(totalResourceCount_, totalResourceCount) };


    // totalResourceGroupCount Field Functions 
    bool hasTotalResourceGroupCount() const { return this->totalResourceGroupCount_ != nullptr;};
    void deleteTotalResourceGroupCount() { this->totalResourceGroupCount_ = nullptr;};
    inline int64_t totalResourceGroupCount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceGroupCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setTotalResourceGroupCount(int64_t totalResourceGroupCount) { DARABONBA_PTR_SET_VALUE(totalResourceGroupCount_, totalResourceGroupCount) };


    // totalUserCount Field Functions 
    bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
    void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
    inline int64_t totalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setTotalUserCount(int64_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int64_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0L) };
    inline QueryCostUnitResourceResponseBodyDataCostUnitStatisInfo& setUserCount(int64_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    // The number of resource instances in the cost center.
    std::shared_ptr<int64_t> resourceCount_ = nullptr;
    // The number of resource groups in the cost center.
    std::shared_ptr<int64_t> resourceGroupCount_ = nullptr;
    // The number of sub-cost centers in the cost center.
    std::shared_ptr<int64_t> subUnitCount_ = nullptr;
    // The total number of resource instances, including resource instances of sub-cost centers, in the cost center.
    std::shared_ptr<int64_t> totalResourceCount_ = nullptr;
    // The total number of resource groups, including resource groups of sub-cost centers, in the cost center.
    std::shared_ptr<int64_t> totalResourceGroupCount_ = nullptr;
    // The total number of the associated accounts, including associated accounts of sub-cost centers, in the cost center.
    std::shared_ptr<int64_t> totalUserCount_ = nullptr;
    // The number of sub-cost centers in the cost center.
    std::shared_ptr<int64_t> userCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
