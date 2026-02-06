// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAuditSecurityIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditSecurityIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditSecurityIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    ListAuditSecurityIpRequest() = default ;
    ListAuditSecurityIpRequest(const ListAuditSecurityIpRequest &) = default ;
    ListAuditSecurityIpRequest(ListAuditSecurityIpRequest &&) = default ;
    ListAuditSecurityIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditSecurityIpRequest() = default ;
    ListAuditSecurityIpRequest& operator=(const ListAuditSecurityIpRequest &) = default ;
    ListAuditSecurityIpRequest& operator=(ListAuditSecurityIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupName_ == nullptr; };
    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline ListAuditSecurityIpRequest& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The name of the review security group in which you want to query IP addresses. If you do not specify this parameter, IP addresses in all review security groups are queried.
    shared_ptr<string> securityGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
