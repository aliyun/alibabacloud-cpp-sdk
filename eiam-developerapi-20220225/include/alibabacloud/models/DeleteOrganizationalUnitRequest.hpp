// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class DeleteOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOrganizationalUnitRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteOrganizationalUnitRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteOrganizationalUnitRequest() = default ;
    DeleteOrganizationalUnitRequest(const DeleteOrganizationalUnitRequest &) = default ;
    DeleteOrganizationalUnitRequest(DeleteOrganizationalUnitRequest &&) = default ;
    DeleteOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOrganizationalUnitRequest() = default ;
    DeleteOrganizationalUnitRequest& operator=(const DeleteOrganizationalUnitRequest &) = default ;
    DeleteOrganizationalUnitRequest& operator=(DeleteOrganizationalUnitRequest &&) = default ;
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
