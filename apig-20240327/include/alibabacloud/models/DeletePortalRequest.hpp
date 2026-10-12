// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPORTALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPORTALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeletePortalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePortalRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeletePortalRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeletePortalRequest() = default ;
    DeletePortalRequest(const DeletePortalRequest &) = default ;
    DeletePortalRequest(DeletePortalRequest &&) = default ;
    DeletePortalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePortalRequest() = default ;
    DeletePortalRequest& operator=(const DeletePortalRequest &) = default ;
    DeletePortalRequest& operator=(DeletePortalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
