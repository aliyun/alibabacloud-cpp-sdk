// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESOURCESFROMPROMETHEUSGLOBALVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESOURCESFROMPROMETHEUSGLOBALVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class RemoveSourcesFromPrometheusGlobalViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSourcesFromPrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceNames, sourceNames_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSourcesFromPrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceNames, sourceNames_);
    };
    RemoveSourcesFromPrometheusGlobalViewRequest() = default ;
    RemoveSourcesFromPrometheusGlobalViewRequest(const RemoveSourcesFromPrometheusGlobalViewRequest &) = default ;
    RemoveSourcesFromPrometheusGlobalViewRequest(RemoveSourcesFromPrometheusGlobalViewRequest &&) = default ;
    RemoveSourcesFromPrometheusGlobalViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSourcesFromPrometheusGlobalViewRequest() = default ;
    RemoveSourcesFromPrometheusGlobalViewRequest& operator=(const RemoveSourcesFromPrometheusGlobalViewRequest &) = default ;
    RemoveSourcesFromPrometheusGlobalViewRequest& operator=(RemoveSourcesFromPrometheusGlobalViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalViewClusterId_ == nullptr
        && this->groupName_ == nullptr && this->regionId_ == nullptr && this->sourceNames_ == nullptr; };
    // globalViewClusterId Field Functions 
    bool hasGlobalViewClusterId() const { return this->globalViewClusterId_ != nullptr;};
    void deleteGlobalViewClusterId() { this->globalViewClusterId_ = nullptr;};
    inline string getGlobalViewClusterId() const { DARABONBA_PTR_GET_DEFAULT(globalViewClusterId_, "") };
    inline RemoveSourcesFromPrometheusGlobalViewRequest& setGlobalViewClusterId(string globalViewClusterId) { DARABONBA_PTR_SET_VALUE(globalViewClusterId_, globalViewClusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline RemoveSourcesFromPrometheusGlobalViewRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveSourcesFromPrometheusGlobalViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceNames Field Functions 
    bool hasSourceNames() const { return this->sourceNames_ != nullptr;};
    void deleteSourceNames() { this->sourceNames_ = nullptr;};
    inline string getSourceNames() const { DARABONBA_PTR_GET_DEFAULT(sourceNames_, "") };
    inline RemoveSourcesFromPrometheusGlobalViewRequest& setSourceNames(string sourceNames) { DARABONBA_PTR_SET_VALUE(sourceNames_, sourceNames) };


  protected:
    // The ID of the global aggregation instance.
    // 
    // This parameter is required.
    shared_ptr<string> globalViewClusterId_ {};
    // The name of the global aggregation instance.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of custom data sources. You can specify multiple data sources and separate them with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> sourceNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
