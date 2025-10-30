// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourcesResponseBodyResourcesSupportedEngines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAvailableResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedEngines, supportedEngines_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedEngines, supportedEngines_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailableResourcesResponseBodyResources() = default ;
    DescribeAvailableResourcesResponseBodyResources(const DescribeAvailableResourcesResponseBodyResources &) = default ;
    DescribeAvailableResourcesResponseBodyResources(DescribeAvailableResourcesResponseBodyResources &&) = default ;
    DescribeAvailableResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourcesResponseBodyResources() = default ;
    DescribeAvailableResourcesResponseBodyResources& operator=(const DescribeAvailableResourcesResponseBodyResources &) = default ;
    DescribeAvailableResourcesResponseBodyResources& operator=(DescribeAvailableResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedEngines_ == nullptr
        && return this->zoneId_ == nullptr; };
    // supportedEngines Field Functions 
    bool hasSupportedEngines() const { return this->supportedEngines_ != nullptr;};
    void deleteSupportedEngines() { this->supportedEngines_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines> & supportedEngines() const { DARABONBA_PTR_GET_CONST(supportedEngines_, vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>) };
    inline vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines> supportedEngines() { DARABONBA_PTR_GET(supportedEngines_, vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>) };
    inline DescribeAvailableResourcesResponseBodyResources& setSupportedEngines(const vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines> & supportedEngines) { DARABONBA_PTR_SET_VALUE(supportedEngines_, supportedEngines) };
    inline DescribeAvailableResourcesResponseBodyResources& setSupportedEngines(vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines> && supportedEngines) { DARABONBA_PTR_SET_RVALUE(supportedEngines_, supportedEngines) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableResourcesResponseBodyResources& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The available engine version and specifications.
    std::shared_ptr<vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>> supportedEngines_ = nullptr;
    // The ID of the zone.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
