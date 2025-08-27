// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTNODEGROUPSNODESDATADISK_HPP_
#define ALIBABACLOUD_MODELS_EXTENDCLUSTERREQUESTNODEGROUPSNODESDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ExtendClusterRequestNodeGroupsNodesDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExtendClusterRequestNodeGroupsNodesDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteWithNode, deleteWithNode_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ExtendClusterRequestNodeGroupsNodesDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteWithNode, deleteWithNode_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ExtendClusterRequestNodeGroupsNodesDataDisk() = default ;
    ExtendClusterRequestNodeGroupsNodesDataDisk(const ExtendClusterRequestNodeGroupsNodesDataDisk &) = default ;
    ExtendClusterRequestNodeGroupsNodesDataDisk(ExtendClusterRequestNodeGroupsNodesDataDisk &&) = default ;
    ExtendClusterRequestNodeGroupsNodesDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExtendClusterRequestNodeGroupsNodesDataDisk() = default ;
    ExtendClusterRequestNodeGroupsNodesDataDisk& operator=(const ExtendClusterRequestNodeGroupsNodesDataDisk &) = default ;
    ExtendClusterRequestNodeGroupsNodesDataDisk& operator=(ExtendClusterRequestNodeGroupsNodesDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->deleteWithNode_ != nullptr && this->performanceLevel_ != nullptr && this->size_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ExtendClusterRequestNodeGroupsNodesDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteWithNode Field Functions 
    bool hasDeleteWithNode() const { return this->deleteWithNode_ != nullptr;};
    void deleteDeleteWithNode() { this->deleteWithNode_ = nullptr;};
    inline bool deleteWithNode() const { DARABONBA_PTR_GET_DEFAULT(deleteWithNode_, false) };
    inline ExtendClusterRequestNodeGroupsNodesDataDisk& setDeleteWithNode(bool deleteWithNode) { DARABONBA_PTR_SET_VALUE(deleteWithNode_, deleteWithNode) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ExtendClusterRequestNodeGroupsNodesDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ExtendClusterRequestNodeGroupsNodesDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // Type
    std::shared_ptr<string> category_ = nullptr;
    // Whether the data disk is deleted with the node
    std::shared_ptr<bool> deleteWithNode_ = nullptr;
    // Data Disk Performance Level
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // Disk Size
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
