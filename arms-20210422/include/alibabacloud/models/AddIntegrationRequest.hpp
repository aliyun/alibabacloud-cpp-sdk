// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class AddIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddIntegrationRequest() = default ;
    AddIntegrationRequest(const AddIntegrationRequest &) = default ;
    AddIntegrationRequest(AddIntegrationRequest &&) = default ;
    AddIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIntegrationRequest() = default ;
    AddIntegrationRequest& operator=(const AddIntegrationRequest &) = default ;
    AddIntegrationRequest& operator=(AddIntegrationRequest &&) = default ;
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
    inline AddIntegrationRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline string getIntegration() const { DARABONBA_PTR_GET_DEFAULT(integration_, "") };
    inline AddIntegrationRequest& setIntegration(string integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddIntegrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
