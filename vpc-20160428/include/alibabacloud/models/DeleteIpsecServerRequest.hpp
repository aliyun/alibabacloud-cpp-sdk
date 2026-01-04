// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPSECSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPSECSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteIpsecServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpsecServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpsecServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteIpsecServerRequest() = default ;
    DeleteIpsecServerRequest(const DeleteIpsecServerRequest &) = default ;
    DeleteIpsecServerRequest(DeleteIpsecServerRequest &&) = default ;
    DeleteIpsecServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpsecServerRequest() = default ;
    DeleteIpsecServerRequest& operator=(const DeleteIpsecServerRequest &) = default ;
    DeleteIpsecServerRequest& operator=(DeleteIpsecServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipsecServerId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteIpsecServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline DeleteIpsecServerRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipsecServerId Field Functions 
    bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
    void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
    inline string getIpsecServerId() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerId_, "") };
    inline DeleteIpsecServerRequest& setIpsecServerId(string ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteIpsecServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<string> dryRun_ {};
    // The ID of the IPsec server.
    // 
    // This parameter is required.
    shared_ptr<string> ipsecServerId_ {};
    // The ID of the region where the IPsec server is created.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
