// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endpointZones, endpointZones_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointZones, endpointZones_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateEndpointRequest() = default ;
    UpdateEndpointRequest(const UpdateEndpointRequest &) = default ;
    UpdateEndpointRequest(UpdateEndpointRequest &&) = default ;
    UpdateEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEndpointRequest() = default ;
    UpdateEndpointRequest& operator=(const UpdateEndpointRequest &) = default ;
    UpdateEndpointRequest& operator=(UpdateEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointZones& obj) { 
        DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointZones& obj) { 
        DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      EndpointZones() = default ;
      EndpointZones(const EndpointZones &) = default ;
      EndpointZones(EndpointZones &&) = default ;
      EndpointZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointZones() = default ;
      EndpointZones& operator=(const EndpointZones &) = default ;
      EndpointZones& operator=(EndpointZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline EndpointZones& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline EndpointZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->endpointZones_ == nullptr
        && this->name_ == nullptr; };
    // endpointZones Field Functions 
    bool hasEndpointZones() const { return this->endpointZones_ != nullptr;};
    void deleteEndpointZones() { this->endpointZones_ = nullptr;};
    inline const vector<UpdateEndpointRequest::EndpointZones> & getEndpointZones() const { DARABONBA_PTR_GET_CONST(endpointZones_, vector<UpdateEndpointRequest::EndpointZones>) };
    inline vector<UpdateEndpointRequest::EndpointZones> getEndpointZones() { DARABONBA_PTR_GET(endpointZones_, vector<UpdateEndpointRequest::EndpointZones>) };
    inline UpdateEndpointRequest& setEndpointZones(const vector<UpdateEndpointRequest::EndpointZones> & endpointZones) { DARABONBA_PTR_SET_VALUE(endpointZones_, endpointZones) };
    inline UpdateEndpointRequest& setEndpointZones(vector<UpdateEndpointRequest::EndpointZones> && endpointZones) { DARABONBA_PTR_SET_RVALUE(endpointZones_, endpointZones) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    shared_ptr<vector<UpdateEndpointRequest::EndpointZones>> endpointZones_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
