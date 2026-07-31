// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYMODELGROUPSBYAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYMODELGROUPSBYAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryModelGroupsByApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryModelGroupsByApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryModelGroupsByApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    ModelRouterQueryModelGroupsByApiKeyRequest() = default ;
    ModelRouterQueryModelGroupsByApiKeyRequest(const ModelRouterQueryModelGroupsByApiKeyRequest &) = default ;
    ModelRouterQueryModelGroupsByApiKeyRequest(ModelRouterQueryModelGroupsByApiKeyRequest &&) = default ;
    ModelRouterQueryModelGroupsByApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryModelGroupsByApiKeyRequest() = default ;
    ModelRouterQueryModelGroupsByApiKeyRequest& operator=(const ModelRouterQueryModelGroupsByApiKeyRequest &) = default ;
    ModelRouterQueryModelGroupsByApiKeyRequest& operator=(ModelRouterQueryModelGroupsByApiKeyRequest &&) = default ;
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
