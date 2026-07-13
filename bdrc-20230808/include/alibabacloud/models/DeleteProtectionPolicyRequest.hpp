// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROTECTIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROTECTIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DeleteProtectionPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProtectionPolicyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteProtectionPolicyRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteProtectionPolicyRequest() = default ;
    DeleteProtectionPolicyRequest(const DeleteProtectionPolicyRequest &) = default ;
    DeleteProtectionPolicyRequest(DeleteProtectionPolicyRequest &&) = default ;
    DeleteProtectionPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProtectionPolicyRequest() = default ;
    DeleteProtectionPolicyRequest& operator=(const DeleteProtectionPolicyRequest &) = default ;
    DeleteProtectionPolicyRequest& operator=(DeleteProtectionPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
