// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICEAUTOSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICEAUTOSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteServiceAutoScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceAutoScalerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceAutoScalerRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteServiceAutoScalerRequest() = default ;
    DeleteServiceAutoScalerRequest(const DeleteServiceAutoScalerRequest &) = default ;
    DeleteServiceAutoScalerRequest(DeleteServiceAutoScalerRequest &&) = default ;
    DeleteServiceAutoScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceAutoScalerRequest() = default ;
    DeleteServiceAutoScalerRequest& operator=(const DeleteServiceAutoScalerRequest &) = default ;
    DeleteServiceAutoScalerRequest& operator=(DeleteServiceAutoScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
