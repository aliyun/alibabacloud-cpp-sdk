// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATENETWORKACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATENETWORKACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UnassociateNetworkAclRequestResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnassociateNetworkAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassociateNetworkAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, UnassociateNetworkAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    UnassociateNetworkAclRequest() = default ;
    UnassociateNetworkAclRequest(const UnassociateNetworkAclRequest &) = default ;
    UnassociateNetworkAclRequest(UnassociateNetworkAclRequest &&) = default ;
    UnassociateNetworkAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassociateNetworkAclRequest() = default ;
    UnassociateNetworkAclRequest& operator=(const UnassociateNetworkAclRequest &) = default ;
    UnassociateNetworkAclRequest& operator=(UnassociateNetworkAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkAclId_ != nullptr
        && this->resource_ != nullptr; };
    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline UnassociateNetworkAclRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<UnassociateNetworkAclRequestResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<UnassociateNetworkAclRequestResource>) };
    inline vector<UnassociateNetworkAclRequestResource> resource() { DARABONBA_PTR_GET(resource_, vector<UnassociateNetworkAclRequestResource>) };
    inline UnassociateNetworkAclRequest& setResource(const vector<UnassociateNetworkAclRequestResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline UnassociateNetworkAclRequest& setResource(vector<UnassociateNetworkAclRequestResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The ID of the network ACL that you want to disassociate from a resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // Resources that you want to disassociate. Valid values of **N**: 0 to 29. A maximum of 30 resources can be unbound.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UnassociateNetworkAclRequestResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
