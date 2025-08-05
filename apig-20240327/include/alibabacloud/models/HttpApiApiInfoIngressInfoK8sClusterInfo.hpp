// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIAPIINFOINGRESSINFOK8SCLUSTERINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIAPIINFOINGRESSINFOK8SCLUSTERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiApiInfoIngressInfoK8sClusterInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiApiInfoIngressInfoK8sClusterInfo& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiApiInfoIngressInfoK8sClusterInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
    };
    HttpApiApiInfoIngressInfoK8sClusterInfo() = default ;
    HttpApiApiInfoIngressInfoK8sClusterInfo(const HttpApiApiInfoIngressInfoK8sClusterInfo &) = default ;
    HttpApiApiInfoIngressInfoK8sClusterInfo(HttpApiApiInfoIngressInfoK8sClusterInfo &&) = default ;
    HttpApiApiInfoIngressInfoK8sClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiApiInfoIngressInfoK8sClusterInfo() = default ;
    HttpApiApiInfoIngressInfoK8sClusterInfo& operator=(const HttpApiApiInfoIngressInfoK8sClusterInfo &) = default ;
    HttpApiApiInfoIngressInfoK8sClusterInfo& operator=(HttpApiApiInfoIngressInfoK8sClusterInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline HttpApiApiInfoIngressInfoK8sClusterInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
