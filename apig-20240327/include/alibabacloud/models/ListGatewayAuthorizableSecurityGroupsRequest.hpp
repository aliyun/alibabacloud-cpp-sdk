// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHORIZABLESECURITYGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHORIZABLESECURITYGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayAuthorizableSecurityGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthorizableSecurityGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(csClusterId, csClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthorizableSecurityGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(csClusterId, csClusterId_);
    };
    ListGatewayAuthorizableSecurityGroupsRequest() = default ;
    ListGatewayAuthorizableSecurityGroupsRequest(const ListGatewayAuthorizableSecurityGroupsRequest &) = default ;
    ListGatewayAuthorizableSecurityGroupsRequest(ListGatewayAuthorizableSecurityGroupsRequest &&) = default ;
    ListGatewayAuthorizableSecurityGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthorizableSecurityGroupsRequest() = default ;
    ListGatewayAuthorizableSecurityGroupsRequest& operator=(const ListGatewayAuthorizableSecurityGroupsRequest &) = default ;
    ListGatewayAuthorizableSecurityGroupsRequest& operator=(ListGatewayAuthorizableSecurityGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->csClusterId_ == nullptr; };
    // csClusterId Field Functions 
    bool hasCsClusterId() const { return this->csClusterId_ != nullptr;};
    void deleteCsClusterId() { this->csClusterId_ = nullptr;};
    inline string getCsClusterId() const { DARABONBA_PTR_GET_DEFAULT(csClusterId_, "") };
    inline ListGatewayAuthorizableSecurityGroupsRequest& setCsClusterId(string csClusterId) { DARABONBA_PTR_SET_VALUE(csClusterId_, csClusterId) };


  protected:
    // The cluster ID.
    shared_ptr<string> csClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
