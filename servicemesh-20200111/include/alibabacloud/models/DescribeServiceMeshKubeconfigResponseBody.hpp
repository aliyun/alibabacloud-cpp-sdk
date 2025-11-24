// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHKUBECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHKUBECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshKubeconfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Kubeconfig, kubeconfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Kubeconfig, kubeconfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceMeshKubeconfigResponseBody() = default ;
    DescribeServiceMeshKubeconfigResponseBody(const DescribeServiceMeshKubeconfigResponseBody &) = default ;
    DescribeServiceMeshKubeconfigResponseBody(DescribeServiceMeshKubeconfigResponseBody &&) = default ;
    DescribeServiceMeshKubeconfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshKubeconfigResponseBody() = default ;
    DescribeServiceMeshKubeconfigResponseBody& operator=(const DescribeServiceMeshKubeconfigResponseBody &) = default ;
    DescribeServiceMeshKubeconfigResponseBody& operator=(DescribeServiceMeshKubeconfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->kubeconfig_ == nullptr && return this->requestId_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeServiceMeshKubeconfigResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // kubeconfig Field Functions 
    bool hasKubeconfig() const { return this->kubeconfig_ != nullptr;};
    void deleteKubeconfig() { this->kubeconfig_ = nullptr;};
    inline string kubeconfig() const { DARABONBA_PTR_GET_DEFAULT(kubeconfig_, "") };
    inline DescribeServiceMeshKubeconfigResponseBody& setKubeconfig(string kubeconfig) { DARABONBA_PTR_SET_VALUE(kubeconfig_, kubeconfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshKubeconfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The expiration time of the kubeconfig certificate. The format is: YYYY-MM-DD hh: mm: ss.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The content of the kubeconfig file of the cluster.
    std::shared_ptr<string> kubeconfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
