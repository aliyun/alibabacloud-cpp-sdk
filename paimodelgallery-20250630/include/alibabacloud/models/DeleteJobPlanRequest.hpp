// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
namespace Models
{
  class DeleteJobPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobPlanRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobPlanRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteJobPlanRequest() = default ;
    DeleteJobPlanRequest(const DeleteJobPlanRequest &) = default ;
    DeleteJobPlanRequest(DeleteJobPlanRequest &&) = default ;
    DeleteJobPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobPlanRequest() = default ;
    DeleteJobPlanRequest& operator=(const DeleteJobPlanRequest &) = default ;
    DeleteJobPlanRequest& operator=(DeleteJobPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
