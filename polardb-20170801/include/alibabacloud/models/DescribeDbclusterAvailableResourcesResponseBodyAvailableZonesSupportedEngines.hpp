// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERAVAILABLERESOURCESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
    };
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines() = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines(const DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines &) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines(DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines &&) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines() = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& operator=(const DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines &) = default ;
    DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& operator=(DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableResources_ != nullptr
        && this->engine_ != nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources> & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources>) };
    inline vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources> availableResources() { DARABONBA_PTR_GET(availableResources_, vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources>) };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& setAvailableResources(const vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources> & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& setAvailableResources(vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources> && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEngines& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


  protected:
    // The available resources.
    std::shared_ptr<vector<Models::DescribeDBClusterAvailableResourcesResponseBodyAvailableZonesSupportedEnginesAvailableResources>> availableResources_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> engine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
