// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEKUBECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REVOKEKUBECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class RevokeKubeconfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Kubeconfig, kubeconfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Kubeconfig, kubeconfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RevokeKubeconfigResponseBody() = default ;
    RevokeKubeconfigResponseBody(const RevokeKubeconfigResponseBody &) = default ;
    RevokeKubeconfigResponseBody(RevokeKubeconfigResponseBody &&) = default ;
    RevokeKubeconfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeKubeconfigResponseBody() = default ;
    RevokeKubeconfigResponseBody& operator=(const RevokeKubeconfigResponseBody &) = default ;
    RevokeKubeconfigResponseBody& operator=(RevokeKubeconfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kubeconfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // kubeconfig Field Functions 
    bool hasKubeconfig() const { return this->kubeconfig_ != nullptr;};
    void deleteKubeconfig() { this->kubeconfig_ = nullptr;};
    inline string kubeconfig() const { DARABONBA_PTR_GET_DEFAULT(kubeconfig_, "") };
    inline RevokeKubeconfigResponseBody& setKubeconfig(string kubeconfig) { DARABONBA_PTR_SET_VALUE(kubeconfig_, kubeconfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RevokeKubeconfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The new kubeconfig file generated.
    std::shared_ptr<string> kubeconfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
