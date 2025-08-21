// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOSICATENETWORKACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCOSICATENETWORKACLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AccosicateNetworkAclRequestResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AccosicateNetworkAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccosicateNetworkAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, AccosicateNetworkAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    AccosicateNetworkAclRequest() = default ;
    AccosicateNetworkAclRequest(const AccosicateNetworkAclRequest &) = default ;
    AccosicateNetworkAclRequest(AccosicateNetworkAclRequest &&) = default ;
    AccosicateNetworkAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccosicateNetworkAclRequest() = default ;
    AccosicateNetworkAclRequest& operator=(const AccosicateNetworkAclRequest &) = default ;
    AccosicateNetworkAclRequest& operator=(AccosicateNetworkAclRequest &&) = default ;
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
    inline AccosicateNetworkAclRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<AccosicateNetworkAclRequestResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<AccosicateNetworkAclRequestResource>) };
    inline vector<AccosicateNetworkAclRequestResource> resource() { DARABONBA_PTR_GET(resource_, vector<AccosicateNetworkAclRequestResource>) };
    inline AccosicateNetworkAclRequest& setResource(const vector<AccosicateNetworkAclRequestResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline AccosicateNetworkAclRequest& setResource(vector<AccosicateNetworkAclRequestResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // The ID of the network ACL.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The type of resource with which you want to associate the network ACL.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AccosicateNetworkAclRequestResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
