// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERVPCENDPOINTCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERVPCENDPOINTCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateClusterVpcEndpointConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterVpcEndpointConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(region, region_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterVpcEndpointConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(region, region_);
    };
    CreateClusterVpcEndpointConnectionRequest() = default ;
    CreateClusterVpcEndpointConnectionRequest(const CreateClusterVpcEndpointConnectionRequest &) = default ;
    CreateClusterVpcEndpointConnectionRequest(CreateClusterVpcEndpointConnectionRequest &&) = default ;
    CreateClusterVpcEndpointConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterVpcEndpointConnectionRequest() = default ;
    CreateClusterVpcEndpointConnectionRequest& operator=(const CreateClusterVpcEndpointConnectionRequest &) = default ;
    CreateClusterVpcEndpointConnectionRequest& operator=(CreateClusterVpcEndpointConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dryRun_ == nullptr && this->region_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateClusterVpcEndpointConnectionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateClusterVpcEndpointConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateClusterVpcEndpointConnectionRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
