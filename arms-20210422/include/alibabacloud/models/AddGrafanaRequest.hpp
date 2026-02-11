// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGRAFANAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGRAFANAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class AddGrafanaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGrafanaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGrafanaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddGrafanaRequest() = default ;
    AddGrafanaRequest(const AddGrafanaRequest &) = default ;
    AddGrafanaRequest(AddGrafanaRequest &&) = default ;
    AddGrafanaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGrafanaRequest() = default ;
    AddGrafanaRequest& operator=(const AddGrafanaRequest &) = default ;
    AddGrafanaRequest& operator=(AddGrafanaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->integration_ == nullptr && this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AddGrafanaRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline string getIntegration() const { DARABONBA_PTR_GET_DEFAULT(integration_, "") };
    inline AddGrafanaRequest& setIntegration(string integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddGrafanaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // This parameter is required.
    shared_ptr<string> integration_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
