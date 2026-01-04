// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSecurityGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DeleteSecurityGroupRequest() = default ;
    DeleteSecurityGroupRequest(const DeleteSecurityGroupRequest &) = default ;
    DeleteSecurityGroupRequest(DeleteSecurityGroupRequest &&) = default ;
    DeleteSecurityGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityGroupRequest() = default ;
    DeleteSecurityGroupRequest& operator=(const DeleteSecurityGroupRequest &) = default ;
    DeleteSecurityGroupRequest& operator=(DeleteSecurityGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DeleteSecurityGroupRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The security group ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
