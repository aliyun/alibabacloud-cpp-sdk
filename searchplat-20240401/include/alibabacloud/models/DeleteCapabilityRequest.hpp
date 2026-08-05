// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECAPABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECAPABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class DeleteCapabilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCapabilityRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteCapabilityRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteCapabilityRequest() = default ;
    DeleteCapabilityRequest(const DeleteCapabilityRequest &) = default ;
    DeleteCapabilityRequest(DeleteCapabilityRequest &&) = default ;
    DeleteCapabilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCapabilityRequest() = default ;
    DeleteCapabilityRequest& operator=(const DeleteCapabilityRequest &) = default ;
    DeleteCapabilityRequest& operator=(DeleteCapabilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
