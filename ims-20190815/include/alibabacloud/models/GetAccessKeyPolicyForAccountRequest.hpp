// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYPOLICYFORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYPOLICYFORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyPolicyForAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyPolicyForAccountRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyPolicyForAccountRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAccessKeyPolicyForAccountRequest() = default ;
    GetAccessKeyPolicyForAccountRequest(const GetAccessKeyPolicyForAccountRequest &) = default ;
    GetAccessKeyPolicyForAccountRequest(GetAccessKeyPolicyForAccountRequest &&) = default ;
    GetAccessKeyPolicyForAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyPolicyForAccountRequest() = default ;
    GetAccessKeyPolicyForAccountRequest& operator=(const GetAccessKeyPolicyForAccountRequest &) = default ;
    GetAccessKeyPolicyForAccountRequest& operator=(GetAccessKeyPolicyForAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
