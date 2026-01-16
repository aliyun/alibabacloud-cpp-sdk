// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDYNAMICSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDYNAMICSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateDynamicSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDynamicSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDynamicSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
    };
    UpdateDynamicSettingsRequest() = default ;
    UpdateDynamicSettingsRequest(const UpdateDynamicSettingsRequest &) = default ;
    UpdateDynamicSettingsRequest(UpdateDynamicSettingsRequest &&) = default ;
    UpdateDynamicSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDynamicSettingsRequest() = default ;
    UpdateDynamicSettingsRequest& operator=(const UpdateDynamicSettingsRequest &) = default ;
    UpdateDynamicSettingsRequest& operator=(UpdateDynamicSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->regionId_ == nullptr && this->body_ == nullptr && this->mode_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateDynamicSettingsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDynamicSettingsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateDynamicSettingsRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline UpdateDynamicSettingsRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> body_ {};
    shared_ptr<string> mode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
