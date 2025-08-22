// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPENDINSTANCESTOPROMETHEUSGLOBALVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPENDINSTANCESTOPROMETHEUSGLOBALVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AppendInstancesToPrometheusGlobalViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppendInstancesToPrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AppendInstancesToPrometheusGlobalViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(GlobalViewClusterId, globalViewClusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AppendInstancesToPrometheusGlobalViewRequest() = default ;
    AppendInstancesToPrometheusGlobalViewRequest(const AppendInstancesToPrometheusGlobalViewRequest &) = default ;
    AppendInstancesToPrometheusGlobalViewRequest(AppendInstancesToPrometheusGlobalViewRequest &&) = default ;
    AppendInstancesToPrometheusGlobalViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppendInstancesToPrometheusGlobalViewRequest() = default ;
    AppendInstancesToPrometheusGlobalViewRequest& operator=(const AppendInstancesToPrometheusGlobalViewRequest &) = default ;
    AppendInstancesToPrometheusGlobalViewRequest& operator=(AppendInstancesToPrometheusGlobalViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusters_ != nullptr
        && this->globalViewClusterId_ != nullptr && this->groupName_ != nullptr && this->regionId_ != nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline string clusters() const { DARABONBA_PTR_GET_DEFAULT(clusters_, "") };
    inline AppendInstancesToPrometheusGlobalViewRequest& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


    // globalViewClusterId Field Functions 
    bool hasGlobalViewClusterId() const { return this->globalViewClusterId_ != nullptr;};
    void deleteGlobalViewClusterId() { this->globalViewClusterId_ = nullptr;};
    inline string globalViewClusterId() const { DARABONBA_PTR_GET_DEFAULT(globalViewClusterId_, "") };
    inline AppendInstancesToPrometheusGlobalViewRequest& setGlobalViewClusterId(string globalViewClusterId) { DARABONBA_PTR_SET_VALUE(globalViewClusterId_, globalViewClusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline AppendInstancesToPrometheusGlobalViewRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AppendInstancesToPrometheusGlobalViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The list of global aggregation instances. The value is a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusters_ = nullptr;
    // The ID of the global aggregation instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> globalViewClusterId_ = nullptr;
    // The name of the global aggregation instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
