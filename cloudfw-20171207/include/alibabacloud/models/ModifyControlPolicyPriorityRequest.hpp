// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTROLPOLICYPRIORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTROLPOLICYPRIORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyControlPolicyPriorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyControlPolicyPriorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(Order, order_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyControlPolicyPriorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
    };
    ModifyControlPolicyPriorityRequest() = default ;
    ModifyControlPolicyPriorityRequest(const ModifyControlPolicyPriorityRequest &) = default ;
    ModifyControlPolicyPriorityRequest(ModifyControlPolicyPriorityRequest &&) = default ;
    ModifyControlPolicyPriorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyControlPolicyPriorityRequest() = default ;
    ModifyControlPolicyPriorityRequest& operator=(const ModifyControlPolicyPriorityRequest &) = default ;
    ModifyControlPolicyPriorityRequest& operator=(ModifyControlPolicyPriorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && this->order_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline ModifyControlPolicyPriorityRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ModifyControlPolicyPriorityRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    // The UUID of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> aclUuid_ {};
    // The priority of the access control policy.
    // 
    // This parameter is required.
    shared_ptr<string> order_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
