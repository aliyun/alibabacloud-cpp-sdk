// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERGETUSERROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERGETUSERROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterGetUserRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterGetUserRolesRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterGetUserRolesRequest& obj) { 
      (void)j; (void)obj; 
    };
    ModelRouterGetUserRolesRequest() = default ;
    ModelRouterGetUserRolesRequest(const ModelRouterGetUserRolesRequest &) = default ;
    ModelRouterGetUserRolesRequest(ModelRouterGetUserRolesRequest &&) = default ;
    ModelRouterGetUserRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterGetUserRolesRequest() = default ;
    ModelRouterGetUserRolesRequest& operator=(const ModelRouterGetUserRolesRequest &) = default ;
    ModelRouterGetUserRolesRequest& operator=(ModelRouterGetUserRolesRequest &&) = default ;
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
