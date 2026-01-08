// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTREQUEST_HPP_
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
  class CreateEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endpointZones, endpointZones_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endpointZones, endpointZones_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateEndpointRequest() = default ;
    CreateEndpointRequest(const CreateEndpointRequest &) = default ;
    CreateEndpointRequest(CreateEndpointRequest &&) = default ;
    CreateEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEndpointRequest() = default ;
    CreateEndpointRequest& operator=(const CreateEndpointRequest &) = default ;
    CreateEndpointRequest& operator=(CreateEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointZones& obj) { 
        DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointZones& obj) { 
        DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
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
      virtual bool empty() const override { return this->vswitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline EndpointZones& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline EndpointZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> vswitchId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->endpointZones_ == nullptr
        && this->name_ == nullptr && this->vpcId_ == nullptr && this->type_ == nullptr; };
    // endpointZones Field Functions 
    bool hasEndpointZones() const { return this->endpointZones_ != nullptr;};
    void deleteEndpointZones() { this->endpointZones_ = nullptr;};
    inline const vector<CreateEndpointRequest::EndpointZones> & getEndpointZones() const { DARABONBA_PTR_GET_CONST(endpointZones_, vector<CreateEndpointRequest::EndpointZones>) };
    inline vector<CreateEndpointRequest::EndpointZones> getEndpointZones() { DARABONBA_PTR_GET(endpointZones_, vector<CreateEndpointRequest::EndpointZones>) };
    inline CreateEndpointRequest& setEndpointZones(const vector<CreateEndpointRequest::EndpointZones> & endpointZones) { DARABONBA_PTR_SET_VALUE(endpointZones_, endpointZones) };
    inline CreateEndpointRequest& setEndpointZones(vector<CreateEndpointRequest::EndpointZones> && endpointZones) { DARABONBA_PTR_SET_RVALUE(endpointZones_, endpointZones) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateEndpointRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<vector<CreateEndpointRequest::EndpointZones>> endpointZones_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
