// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEVPCREGION_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEVPCREGION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceVpcRegion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceVpcRegion& obj) { 
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(regionName, regionName_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceVpcRegion& obj) { 
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(regionName, regionName_);
    };
    GrafanaWorkspaceVpcRegion() = default ;
    GrafanaWorkspaceVpcRegion(const GrafanaWorkspaceVpcRegion &) = default ;
    GrafanaWorkspaceVpcRegion(GrafanaWorkspaceVpcRegion &&) = default ;
    GrafanaWorkspaceVpcRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceVpcRegion() = default ;
    GrafanaWorkspaceVpcRegion& operator=(const GrafanaWorkspaceVpcRegion &) = default ;
    GrafanaWorkspaceVpcRegion& operator=(GrafanaWorkspaceVpcRegion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->regionName_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrafanaWorkspaceVpcRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline GrafanaWorkspaceVpcRegion& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> regionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
