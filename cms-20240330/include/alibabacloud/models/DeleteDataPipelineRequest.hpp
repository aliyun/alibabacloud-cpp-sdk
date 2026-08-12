// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteDataPipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataPipelineRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataPipelineRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteDataPipelineRequest() = default ;
    DeleteDataPipelineRequest(const DeleteDataPipelineRequest &) = default ;
    DeleteDataPipelineRequest(DeleteDataPipelineRequest &&) = default ;
    DeleteDataPipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataPipelineRequest() = default ;
    DeleteDataPipelineRequest& operator=(const DeleteDataPipelineRequest &) = default ;
    DeleteDataPipelineRequest& operator=(DeleteDataPipelineRequest &&) = default ;
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
