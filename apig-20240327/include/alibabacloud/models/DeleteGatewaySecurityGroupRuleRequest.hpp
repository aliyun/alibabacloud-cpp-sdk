// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYSECURITYGROUPRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYSECURITYGROUPRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeleteGatewaySecurityGroupRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewaySecurityGroupRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cascadingDelete, cascadingDelete_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewaySecurityGroupRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cascadingDelete, cascadingDelete_);
    };
    DeleteGatewaySecurityGroupRuleRequest() = default ;
    DeleteGatewaySecurityGroupRuleRequest(const DeleteGatewaySecurityGroupRuleRequest &) = default ;
    DeleteGatewaySecurityGroupRuleRequest(DeleteGatewaySecurityGroupRuleRequest &&) = default ;
    DeleteGatewaySecurityGroupRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewaySecurityGroupRuleRequest() = default ;
    DeleteGatewaySecurityGroupRuleRequest& operator=(const DeleteGatewaySecurityGroupRuleRequest &) = default ;
    DeleteGatewaySecurityGroupRuleRequest& operator=(DeleteGatewaySecurityGroupRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cascadingDelete_ == nullptr; };
    // cascadingDelete Field Functions 
    bool hasCascadingDelete() const { return this->cascadingDelete_ != nullptr;};
    void deleteCascadingDelete() { this->cascadingDelete_ = nullptr;};
    inline bool getCascadingDelete() const { DARABONBA_PTR_GET_DEFAULT(cascadingDelete_, false) };
    inline DeleteGatewaySecurityGroupRuleRequest& setCascadingDelete(bool cascadingDelete) { DARABONBA_PTR_SET_VALUE(cascadingDelete_, cascadingDelete) };


  protected:
    // Whether to cascade delete the security group rules.
    shared_ptr<bool> cascadingDelete_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
