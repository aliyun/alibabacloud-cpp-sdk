// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERDELETEMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERDELETEMODELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterDeleteModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterDeleteModelGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterDeleteModelGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    ModelRouterDeleteModelGroupRequest() = default ;
    ModelRouterDeleteModelGroupRequest(const ModelRouterDeleteModelGroupRequest &) = default ;
    ModelRouterDeleteModelGroupRequest(ModelRouterDeleteModelGroupRequest &&) = default ;
    ModelRouterDeleteModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterDeleteModelGroupRequest() = default ;
    ModelRouterDeleteModelGroupRequest& operator=(const ModelRouterDeleteModelGroupRequest &) = default ;
    ModelRouterDeleteModelGroupRequest& operator=(ModelRouterDeleteModelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
