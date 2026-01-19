// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEK8SCLUSTERKUBECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKEK8SCLUSTERKUBECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class RevokeK8sClusterKubeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeK8sClusterKubeConfigResponseBody& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, RevokeK8sClusterKubeConfigResponseBody& obj) { 
    };
    RevokeK8sClusterKubeConfigResponseBody() = default ;
    RevokeK8sClusterKubeConfigResponseBody(const RevokeK8sClusterKubeConfigResponseBody &) = default ;
    RevokeK8sClusterKubeConfigResponseBody(RevokeK8sClusterKubeConfigResponseBody &&) = default ;
    RevokeK8sClusterKubeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeK8sClusterKubeConfigResponseBody() = default ;
    RevokeK8sClusterKubeConfigResponseBody& operator=(const RevokeK8sClusterKubeConfigResponseBody &) = default ;
    RevokeK8sClusterKubeConfigResponseBody& operator=(RevokeK8sClusterKubeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
