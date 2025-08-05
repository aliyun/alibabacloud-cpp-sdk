// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODYRESOURCESSUPPORTEDENGINESSUPPORTEDINSTANCECLASSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODYRESOURCESSUPPORTEDENGINESSUPPORTEDINSTANCECLASSES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount.hpp>
#include <alibabacloud/models/DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayClass, displayClass_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayClass, displayClass_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses() = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses(const DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses &) = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses(DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses &&) = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses() = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& operator=(const DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses &) = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& operator=(DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->description_ != nullptr && this->displayClass_ != nullptr && this->instanceClass_ != nullptr && this->nodeCount_ != nullptr && this->storageSize_ != nullptr
        && this->storageType_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayClass Field Functions 
    bool hasDisplayClass() const { return this->displayClass_ != nullptr;};
    void deleteDisplayClass() { this->displayClass_ = nullptr;};
    inline string displayClass() const { DARABONBA_PTR_GET_DEFAULT(displayClass_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setDisplayClass(string displayClass) { DARABONBA_PTR_SET_VALUE(displayClass_, displayClass) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline const Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount & nodeCount() const { DARABONBA_PTR_GET_CONST(nodeCount_, Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount) };
    inline Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount nodeCount() { DARABONBA_PTR_GET(nodeCount_, Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount) };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setNodeCount(const Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount & nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setNodeCount(Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount && nodeCount) { DARABONBA_PTR_SET_RVALUE(nodeCount_, nodeCount) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline const Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize & storageSize() const { DARABONBA_PTR_GET_CONST(storageSize_, Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize) };
    inline Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize storageSize() { DARABONBA_PTR_GET(storageSize_, Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize) };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setStorageSize(const Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize & storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setStorageSize(Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize && storageSize) { DARABONBA_PTR_SET_RVALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The instance edition. Valid values:
    // 
    // *   **HighAvailability**: High-availability Edition
    // *   **Basic**: Basic Edition
    std::shared_ptr<string> category_ = nullptr;
    // The description of compute node specifications.
    std::shared_ptr<string> description_ = nullptr;
    // The specifications of each compute node.
    std::shared_ptr<string> displayClass_ = nullptr;
    // The specifications of each compute node.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // Details about the compute nodes.
    std::shared_ptr<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount> nodeCount_ = nullptr;
    // Details about the storage capacity of compute nodes.
    std::shared_ptr<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize> storageSize_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   **cloud_essd**: enhanced SSD (ESSD)
    // *   **cloud_efficiency**: ultra disk
    // *   **oss**: Object Storage Service (OSS)
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
