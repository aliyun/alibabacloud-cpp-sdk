// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINESAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINESAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
    };
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources() = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources(const DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources &) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources(DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources &&) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources() = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources& operator=(const DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources &) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources& operator=(DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->DBNodeClass_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


  protected:
    // The edition of the cluster. Valid values:
    // 
    // *   **Normal**: Cluster Edition.
    // *   **Basic**: Single Node Edition.
    // *   **ArchiveNormal**: X-Engine.
    // *   **NormalMultimaster**: Multi-master Cluster (Database/Table) Edition.
    // *   **SENormal**: Standard Edition.
    // 
    // >- Only PolarDB for MySQL supports Single Node Edition.
    // >- Only PolarDB for MySQL 8.0 supports X-Engine Edition and Multi-master Cluster (Database/Table) Edition.
    std::shared_ptr<string> category_ = nullptr;
    // The specifications of the node.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
