// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteServiceRequest() = default ;
    DeleteServiceRequest(const DeleteServiceRequest &) = default ;
    DeleteServiceRequest(DeleteServiceRequest &&) = default ;
    DeleteServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceRequest() = default ;
    DeleteServiceRequest& operator=(const DeleteServiceRequest &) = default ;
    DeleteServiceRequest& operator=(DeleteServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
