// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateEndpointRequestEndpointZones.hpp>
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
    virtual bool empty() const override { this->endpointZones_ != nullptr
        && this->name_ != nullptr; };
    // endpointZones Field Functions 
    bool hasEndpointZones() const { return this->endpointZones_ != nullptr;};
    void deleteEndpointZones() { this->endpointZones_ = nullptr;};
    inline const vector<UpdateEndpointRequestEndpointZones> & endpointZones() const { DARABONBA_PTR_GET_CONST(endpointZones_, vector<UpdateEndpointRequestEndpointZones>) };
    inline vector<UpdateEndpointRequestEndpointZones> endpointZones() { DARABONBA_PTR_GET(endpointZones_, vector<UpdateEndpointRequestEndpointZones>) };
    inline UpdateEndpointRequest& setEndpointZones(const vector<UpdateEndpointRequestEndpointZones> & endpointZones) { DARABONBA_PTR_SET_VALUE(endpointZones_, endpointZones) };
    inline UpdateEndpointRequest& setEndpointZones(vector<UpdateEndpointRequestEndpointZones> && endpointZones) { DARABONBA_PTR_SET_RVALUE(endpointZones_, endpointZones) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEndpointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateEndpointRequestEndpointZones>> endpointZones_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
