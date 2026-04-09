// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrganizationalUnitRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetOrganizationalUnitRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetOrganizationalUnitRequest() = default ;
    GetOrganizationalUnitRequest(const GetOrganizationalUnitRequest &) = default ;
    GetOrganizationalUnitRequest(GetOrganizationalUnitRequest &&) = default ;
    GetOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrganizationalUnitRequest() = default ;
    GetOrganizationalUnitRequest& operator=(const GetOrganizationalUnitRequest &) = default ;
    GetOrganizationalUnitRequest& operator=(GetOrganizationalUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
