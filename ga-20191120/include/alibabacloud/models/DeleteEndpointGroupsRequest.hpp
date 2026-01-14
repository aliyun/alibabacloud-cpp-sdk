// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEENDPOINTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEENDPOINTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteEndpointGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointGroupIds, endpointGroupIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupIds, endpointGroupIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteEndpointGroupsRequest() = default ;
    DeleteEndpointGroupsRequest(const DeleteEndpointGroupsRequest &) = default ;
    DeleteEndpointGroupsRequest(DeleteEndpointGroupsRequest &&) = default ;
    DeleteEndpointGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEndpointGroupsRequest() = default ;
    DeleteEndpointGroupsRequest& operator=(const DeleteEndpointGroupsRequest &) = default ;
    DeleteEndpointGroupsRequest& operator=(DeleteEndpointGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->endpointGroupIds_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteEndpointGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteEndpointGroupsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointGroupIds Field Functions 
    bool hasEndpointGroupIds() const { return this->endpointGroupIds_ != nullptr;};
    void deleteEndpointGroupIds() { this->endpointGroupIds_ = nullptr;};
    inline const vector<string> & getEndpointGroupIds() const { DARABONBA_PTR_GET_CONST(endpointGroupIds_, vector<string>) };
    inline vector<string> getEndpointGroupIds() { DARABONBA_PTR_GET(endpointGroupIds_, vector<string>) };
    inline DeleteEndpointGroupsRequest& setEndpointGroupIds(const vector<string> & endpointGroupIds) { DARABONBA_PTR_SET_VALUE(endpointGroupIds_, endpointGroupIds) };
    inline DeleteEndpointGroupsRequest& setEndpointGroupIds(vector<string> && endpointGroupIds) { DARABONBA_PTR_SET_RVALUE(endpointGroupIds_, endpointGroupIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteEndpointGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The IDs of endpoint groups.
    // 
    // You can specify up to 10 endpoint group IDs in each request.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> endpointGroupIds_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
