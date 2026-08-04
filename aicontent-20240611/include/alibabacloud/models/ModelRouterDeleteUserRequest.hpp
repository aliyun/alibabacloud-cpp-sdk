// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERDELETEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERDELETEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterDeleteUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterDeleteUserRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterDeleteUserRequest& obj) { 
      (void)j; (void)obj; 
    };
    ModelRouterDeleteUserRequest() = default ;
    ModelRouterDeleteUserRequest(const ModelRouterDeleteUserRequest &) = default ;
    ModelRouterDeleteUserRequest(ModelRouterDeleteUserRequest &&) = default ;
    ModelRouterDeleteUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterDeleteUserRequest() = default ;
    ModelRouterDeleteUserRequest& operator=(const ModelRouterDeleteUserRequest &) = default ;
    ModelRouterDeleteUserRequest& operator=(ModelRouterDeleteUserRequest &&) = default ;
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
