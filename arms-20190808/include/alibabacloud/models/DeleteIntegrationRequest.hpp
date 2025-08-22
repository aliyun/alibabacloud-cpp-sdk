// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteIntegrationRequest() = default ;
    DeleteIntegrationRequest(const DeleteIntegrationRequest &) = default ;
    DeleteIntegrationRequest(DeleteIntegrationRequest &&) = default ;
    DeleteIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIntegrationRequest() = default ;
    DeleteIntegrationRequest& operator=(const DeleteIntegrationRequest &) = default ;
    DeleteIntegrationRequest& operator=(DeleteIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->integration_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteIntegrationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline string integration() const { DARABONBA_PTR_GET_DEFAULT(integration_, "") };
    inline DeleteIntegrationRequest& setIntegration(string integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteIntegrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the ACK cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The abbreviation of the software that is supported by Application Real-Time Monitoring Service (ARMS). Valid values (case-insensitive): `ASM`, `IoT`, and `Flink`.
    // 
    // This parameter is required.
    std::shared_ptr<string> integration_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
