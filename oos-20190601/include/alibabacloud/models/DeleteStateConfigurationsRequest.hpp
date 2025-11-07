// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTATECONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTATECONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteStateConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStateConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StateConfigurationIds, stateConfigurationIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStateConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StateConfigurationIds, stateConfigurationIds_);
    };
    DeleteStateConfigurationsRequest() = default ;
    DeleteStateConfigurationsRequest(const DeleteStateConfigurationsRequest &) = default ;
    DeleteStateConfigurationsRequest(DeleteStateConfigurationsRequest &&) = default ;
    DeleteStateConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStateConfigurationsRequest() = default ;
    DeleteStateConfigurationsRequest& operator=(const DeleteStateConfigurationsRequest &) = default ;
    DeleteStateConfigurationsRequest& operator=(DeleteStateConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->regionId_ == nullptr && return this->stateConfigurationIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteStateConfigurationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteStateConfigurationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stateConfigurationIds Field Functions 
    bool hasStateConfigurationIds() const { return this->stateConfigurationIds_ != nullptr;};
    void deleteStateConfigurationIds() { this->stateConfigurationIds_ = nullptr;};
    inline string stateConfigurationIds() const { DARABONBA_PTR_GET_DEFAULT(stateConfigurationIds_, "") };
    inline DeleteStateConfigurationsRequest& setStateConfigurationIds(string stateConfigurationIds) { DARABONBA_PTR_SET_VALUE(stateConfigurationIds_, stateConfigurationIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of desired-state configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> stateConfigurationIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
