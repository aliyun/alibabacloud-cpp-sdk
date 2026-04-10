// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDELIVERYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDELIVERYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteDeliveryTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeliveryTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeliveryTaskRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteDeliveryTaskRequest() = default ;
    DeleteDeliveryTaskRequest(const DeleteDeliveryTaskRequest &) = default ;
    DeleteDeliveryTaskRequest(DeleteDeliveryTaskRequest &&) = default ;
    DeleteDeliveryTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeliveryTaskRequest() = default ;
    DeleteDeliveryTaskRequest& operator=(const DeleteDeliveryTaskRequest &) = default ;
    DeleteDeliveryTaskRequest& operator=(DeleteDeliveryTaskRequest &&) = default ;
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
