// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETENANTKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETENANTKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateTenantKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTenantKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, CreateTenantKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    CreateTenantKeyRequest() = default ;
    CreateTenantKeyRequest(const CreateTenantKeyRequest &) = default ;
    CreateTenantKeyRequest(CreateTenantKeyRequest &&) = default ;
    CreateTenantKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTenantKeyRequest() = default ;
    CreateTenantKeyRequest& operator=(const CreateTenantKeyRequest &) = default ;
    CreateTenantKeyRequest& operator=(CreateTenantKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
