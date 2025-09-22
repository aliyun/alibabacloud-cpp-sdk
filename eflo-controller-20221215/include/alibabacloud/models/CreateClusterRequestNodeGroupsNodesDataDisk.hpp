// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPSNODESDATADISK_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTNODEGROUPSNODESDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequestNodeGroupsNodesDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestNodeGroupsNodesDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteWithNode, deleteWithNode_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestNodeGroupsNodesDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteWithNode, deleteWithNode_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateClusterRequestNodeGroupsNodesDataDisk() = default ;
    CreateClusterRequestNodeGroupsNodesDataDisk(const CreateClusterRequestNodeGroupsNodesDataDisk &) = default ;
    CreateClusterRequestNodeGroupsNodesDataDisk(CreateClusterRequestNodeGroupsNodesDataDisk &&) = default ;
    CreateClusterRequestNodeGroupsNodesDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestNodeGroupsNodesDataDisk() = default ;
    CreateClusterRequestNodeGroupsNodesDataDisk& operator=(const CreateClusterRequestNodeGroupsNodesDataDisk &) = default ;
    CreateClusterRequestNodeGroupsNodesDataDisk& operator=(CreateClusterRequestNodeGroupsNodesDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->burstingEnabled_ != nullptr
        && this->category_ != nullptr && this->deleteWithNode_ != nullptr && this->performanceLevel_ != nullptr && this->provisionedIops_ != nullptr && this->size_ != nullptr; };
    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateClusterRequestNodeGroupsNodesDataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateClusterRequestNodeGroupsNodesDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithNode Field Functions 
    bool hasDeleteWithNode() const { return this->deleteWithNode_ != nullptr;};
    void deleteDeleteWithNode() { this->deleteWithNode_ = nullptr;};
    inline bool deleteWithNode() const { DARABONBA_PTR_GET_DEFAULT(deleteWithNode_, false) };
    inline CreateClusterRequestNodeGroupsNodesDataDisk& setDeleteWithNode(bool deleteWithNode) { DARABONBA_PTR_SET_VALUE(deleteWithNode_, deleteWithNode) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateClusterRequestNodeGroupsNodesDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateClusterRequestNodeGroupsNodesDataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateClusterRequestNodeGroupsNodesDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // Type
    std::shared_ptr<string> category_ = nullptr;
    // Whether the data disk is deleted with the node when it is unsubscribed
    std::shared_ptr<bool> deleteWithNode_ = nullptr;
    // Data disk performance level
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // Disk size
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
