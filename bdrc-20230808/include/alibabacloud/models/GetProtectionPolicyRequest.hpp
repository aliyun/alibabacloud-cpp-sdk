// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROTECTIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROTECTIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class GetProtectionPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProtectionPolicyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetProtectionPolicyRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetProtectionPolicyRequest() = default ;
    GetProtectionPolicyRequest(const GetProtectionPolicyRequest &) = default ;
    GetProtectionPolicyRequest(GetProtectionPolicyRequest &&) = default ;
    GetProtectionPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProtectionPolicyRequest() = default ;
    GetProtectionPolicyRequest& operator=(const GetProtectionPolicyRequest &) = default ;
    GetProtectionPolicyRequest& operator=(GetProtectionPolicyRequest &&) = default ;
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
