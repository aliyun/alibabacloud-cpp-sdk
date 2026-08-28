// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHORIZEDSECURITYGROUPRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHORIZEDSECURITYGROUPRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayAuthorizedSecurityGroupRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthorizedSecurityGroupRulesRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthorizedSecurityGroupRulesRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListGatewayAuthorizedSecurityGroupRulesRequest() = default ;
    ListGatewayAuthorizedSecurityGroupRulesRequest(const ListGatewayAuthorizedSecurityGroupRulesRequest &) = default ;
    ListGatewayAuthorizedSecurityGroupRulesRequest(ListGatewayAuthorizedSecurityGroupRulesRequest &&) = default ;
    ListGatewayAuthorizedSecurityGroupRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthorizedSecurityGroupRulesRequest() = default ;
    ListGatewayAuthorizedSecurityGroupRulesRequest& operator=(const ListGatewayAuthorizedSecurityGroupRulesRequest &) = default ;
    ListGatewayAuthorizedSecurityGroupRulesRequest& operator=(ListGatewayAuthorizedSecurityGroupRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
