// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEndpointRequestEndpointZones.hpp>
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
    virtual bool empty() const override { this->endpointZones_ != nullptr
        && this->name_ != nullptr && this->vpcId_ != nullptr && this->type_ != nullptr; };
    // endpointZones Field Functions 
    bool hasEndpointZones() const { return this->endpointZones_ != nullptr;};
    void deleteEndpointZones() { this->endpointZones_ = nullptr;};
    inline const vector<CreateEndpointRequestEndpointZones> & endpointZones() const { DARABONBA_PTR_GET_CONST(endpointZones_, vector<CreateEndpointRequestEndpointZones>) };
    inline vector<CreateEndpointRequestEndpointZones> endpointZones() { DARABONBA_PTR_GET(endpointZones_, vector<CreateEndpointRequestEndpointZones>) };
    inline CreateEndpointRequest& setEndpointZones(const vector<CreateEndpointRequestEndpointZones> & endpointZones) { DARABONBA_PTR_SET_VALUE(endpointZones_, endpointZones) };
    inline CreateEndpointRequest& setEndpointZones(vector<CreateEndpointRequestEndpointZones> && endpointZones) { DARABONBA_PTR_SET_RVALUE(endpointZones_, endpointZones) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateEndpointRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateEndpointRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateEndpointRequestEndpointZones>> endpointZones_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
