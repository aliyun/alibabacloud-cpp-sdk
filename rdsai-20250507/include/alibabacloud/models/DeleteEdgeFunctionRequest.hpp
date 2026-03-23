// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DeleteEdgeFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEdgeFunctionRequest() = default ;
    DeleteEdgeFunctionRequest(const DeleteEdgeFunctionRequest &) = default ;
    DeleteEdgeFunctionRequest(DeleteEdgeFunctionRequest &&) = default ;
    DeleteEdgeFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeFunctionRequest() = default ;
    DeleteEdgeFunctionRequest& operator=(const DeleteEdgeFunctionRequest &) = default ;
    DeleteEdgeFunctionRequest& operator=(DeleteEdgeFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->edgeFunctionName_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEdgeFunctionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // edgeFunctionName Field Functions 
    bool hasEdgeFunctionName() const { return this->edgeFunctionName_ != nullptr;};
    void deleteEdgeFunctionName() { this->edgeFunctionName_ = nullptr;};
    inline string getEdgeFunctionName() const { DARABONBA_PTR_GET_DEFAULT(edgeFunctionName_, "") };
    inline DeleteEdgeFunctionRequest& setEdgeFunctionName(string edgeFunctionName) { DARABONBA_PTR_SET_VALUE(edgeFunctionName_, edgeFunctionName) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeleteEdgeFunctionRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEdgeFunctionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The name of the edge function.
    shared_ptr<string> edgeFunctionName_ {};
    // The ID of the RDS Supabase instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
