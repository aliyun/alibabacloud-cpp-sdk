// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGRESPONSEBODYSDGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGRESPONSEBODYSDGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSDGResponseBodySDGsAvaliableRegionIds.hpp>
#include <alibabacloud/models/DescribeSDGResponseBodySDGsPreloadInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGResponseBodySDGs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGResponseBodySDGs& obj) { 
      DARABONBA_PTR_TO_JSON(AvaliableRegionIds, avaliableRegionIds_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(CreationDiskType, creationDiskType_);
      DARABONBA_PTR_TO_JSON(CreationInstanceId, creationInstanceId_);
      DARABONBA_PTR_TO_JSON(CreationRegionId, creationRegionId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ParentSDGId, parentSDGId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(PreloadInfos, preloadInfos_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGResponseBodySDGs& obj) { 
      DARABONBA_PTR_FROM_JSON(AvaliableRegionIds, avaliableRegionIds_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(CreationDiskType, creationDiskType_);
      DARABONBA_PTR_FROM_JSON(CreationInstanceId, creationInstanceId_);
      DARABONBA_PTR_FROM_JSON(CreationRegionId, creationRegionId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ParentSDGId, parentSDGId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(PreloadInfos, preloadInfos_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSDGResponseBodySDGs() = default ;
    DescribeSDGResponseBodySDGs(const DescribeSDGResponseBodySDGs &) = default ;
    DescribeSDGResponseBodySDGs(DescribeSDGResponseBodySDGs &&) = default ;
    DescribeSDGResponseBodySDGs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGResponseBodySDGs() = default ;
    DescribeSDGResponseBodySDGs& operator=(const DescribeSDGResponseBodySDGs &) = default ;
    DescribeSDGResponseBodySDGs& operator=(DescribeSDGResponseBodySDGs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avaliableRegionIds_ == nullptr
        && return this->billingCycle_ == nullptr && return this->creationDiskType_ == nullptr && return this->creationInstanceId_ == nullptr && return this->creationRegionId_ == nullptr && return this->creationTime_ == nullptr
        && return this->description_ == nullptr && return this->parentSDGId_ == nullptr && return this->performanceLevel_ == nullptr && return this->preloadInfos_ == nullptr && return this->SDGId_ == nullptr
        && return this->size_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // avaliableRegionIds Field Functions 
    bool hasAvaliableRegionIds() const { return this->avaliableRegionIds_ != nullptr;};
    void deleteAvaliableRegionIds() { this->avaliableRegionIds_ = nullptr;};
    inline const vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds> & avaliableRegionIds() const { DARABONBA_PTR_GET_CONST(avaliableRegionIds_, vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds>) };
    inline vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds> avaliableRegionIds() { DARABONBA_PTR_GET(avaliableRegionIds_, vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds>) };
    inline DescribeSDGResponseBodySDGs& setAvaliableRegionIds(const vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds> & avaliableRegionIds) { DARABONBA_PTR_SET_VALUE(avaliableRegionIds_, avaliableRegionIds) };
    inline DescribeSDGResponseBodySDGs& setAvaliableRegionIds(vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds> && avaliableRegionIds) { DARABONBA_PTR_SET_RVALUE(avaliableRegionIds_, avaliableRegionIds) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline DescribeSDGResponseBodySDGs& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // creationDiskType Field Functions 
    bool hasCreationDiskType() const { return this->creationDiskType_ != nullptr;};
    void deleteCreationDiskType() { this->creationDiskType_ = nullptr;};
    inline string creationDiskType() const { DARABONBA_PTR_GET_DEFAULT(creationDiskType_, "") };
    inline DescribeSDGResponseBodySDGs& setCreationDiskType(string creationDiskType) { DARABONBA_PTR_SET_VALUE(creationDiskType_, creationDiskType) };


    // creationInstanceId Field Functions 
    bool hasCreationInstanceId() const { return this->creationInstanceId_ != nullptr;};
    void deleteCreationInstanceId() { this->creationInstanceId_ = nullptr;};
    inline string creationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(creationInstanceId_, "") };
    inline DescribeSDGResponseBodySDGs& setCreationInstanceId(string creationInstanceId) { DARABONBA_PTR_SET_VALUE(creationInstanceId_, creationInstanceId) };


    // creationRegionId Field Functions 
    bool hasCreationRegionId() const { return this->creationRegionId_ != nullptr;};
    void deleteCreationRegionId() { this->creationRegionId_ = nullptr;};
    inline string creationRegionId() const { DARABONBA_PTR_GET_DEFAULT(creationRegionId_, "") };
    inline DescribeSDGResponseBodySDGs& setCreationRegionId(string creationRegionId) { DARABONBA_PTR_SET_VALUE(creationRegionId_, creationRegionId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeSDGResponseBodySDGs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSDGResponseBodySDGs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parentSDGId Field Functions 
    bool hasParentSDGId() const { return this->parentSDGId_ != nullptr;};
    void deleteParentSDGId() { this->parentSDGId_ = nullptr;};
    inline string parentSDGId() const { DARABONBA_PTR_GET_DEFAULT(parentSDGId_, "") };
    inline DescribeSDGResponseBodySDGs& setParentSDGId(string parentSDGId) { DARABONBA_PTR_SET_VALUE(parentSDGId_, parentSDGId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeSDGResponseBodySDGs& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // preloadInfos Field Functions 
    bool hasPreloadInfos() const { return this->preloadInfos_ != nullptr;};
    void deletePreloadInfos() { this->preloadInfos_ = nullptr;};
    inline const vector<Models::DescribeSDGResponseBodySDGsPreloadInfos> & preloadInfos() const { DARABONBA_PTR_GET_CONST(preloadInfos_, vector<Models::DescribeSDGResponseBodySDGsPreloadInfos>) };
    inline vector<Models::DescribeSDGResponseBodySDGsPreloadInfos> preloadInfos() { DARABONBA_PTR_GET(preloadInfos_, vector<Models::DescribeSDGResponseBodySDGsPreloadInfos>) };
    inline DescribeSDGResponseBodySDGs& setPreloadInfos(const vector<Models::DescribeSDGResponseBodySDGsPreloadInfos> & preloadInfos) { DARABONBA_PTR_SET_VALUE(preloadInfos_, preloadInfos) };
    inline DescribeSDGResponseBodySDGs& setPreloadInfos(vector<Models::DescribeSDGResponseBodySDGsPreloadInfos> && preloadInfos) { DARABONBA_PTR_SET_RVALUE(preloadInfos_, preloadInfos) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DescribeSDGResponseBodySDGs& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeSDGResponseBodySDGs& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGResponseBodySDGs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSDGResponseBodySDGs& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // SDGs that have snapshots.
    std::shared_ptr<vector<Models::DescribeSDGResponseBodySDGsAvaliableRegionIds>> avaliableRegionIds_ = nullptr;
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<string> creationDiskType_ = nullptr;
    // The ID of the instance on which the SDG is created.
    std::shared_ptr<string> creationInstanceId_ = nullptr;
    // The ID of the node on which the SDG is created.
    std::shared_ptr<string> creationRegionId_ = nullptr;
    // The time when the first SDG in the node was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the SDG.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the source SDG from which you want to create an SDG. The value of this parameter is the value of the **FromSDGId** parameter that you need to specify when you call the [CreateSDG](https://help.aliyun.com/document_detail/608128.html) operation.
    std::shared_ptr<string> parentSDGId_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The preload information.
    std::shared_ptr<vector<Models::DescribeSDGResponseBodySDGsPreloadInfos>> preloadInfos_ = nullptr;
    // The ID of the SDG.
    std::shared_ptr<string> SDGId_ = nullptr;
    // The size of the SDG. Unit: GB.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The status of the SDG creation. Valid values:
    // 
    // *   **sdg_making**
    // *   **sdg_saving**
    // *   **failed**
    // *   **success**
    std::shared_ptr<string> status_ = nullptr;
    // The time when the SDG was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
