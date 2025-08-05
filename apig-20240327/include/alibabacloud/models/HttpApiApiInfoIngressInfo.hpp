// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIAPIINFOINGRESSINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIAPIINFOINGRESSINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiApiInfoIngressInfoEnvironmentInfo.hpp>
#include <alibabacloud/models/HttpApiApiInfoIngressInfoK8sClusterInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiApiInfoIngressInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiApiInfoIngressInfo& obj) { 
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
      DARABONBA_PTR_TO_JSON(k8sClusterInfo, k8sClusterInfo_);
      DARABONBA_PTR_TO_JSON(overrideIngressIp, overrideIngressIp_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiApiInfoIngressInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
      DARABONBA_PTR_FROM_JSON(k8sClusterInfo, k8sClusterInfo_);
      DARABONBA_PTR_FROM_JSON(overrideIngressIp, overrideIngressIp_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
    };
    HttpApiApiInfoIngressInfo() = default ;
    HttpApiApiInfoIngressInfo(const HttpApiApiInfoIngressInfo &) = default ;
    HttpApiApiInfoIngressInfo(HttpApiApiInfoIngressInfo &&) = default ;
    HttpApiApiInfoIngressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiApiInfoIngressInfo() = default ;
    HttpApiApiInfoIngressInfo& operator=(const HttpApiApiInfoIngressInfo &) = default ;
    HttpApiApiInfoIngressInfo& operator=(HttpApiApiInfoIngressInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentInfo_ != nullptr
        && this->ingressClass_ != nullptr && this->k8sClusterInfo_ != nullptr && this->overrideIngressIp_ != nullptr && this->sourceId_ != nullptr && this->watchNamespace_ != nullptr; };
    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const Models::HttpApiApiInfoIngressInfoEnvironmentInfo & environmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, Models::HttpApiApiInfoIngressInfoEnvironmentInfo) };
    inline Models::HttpApiApiInfoIngressInfoEnvironmentInfo environmentInfo() { DARABONBA_PTR_GET(environmentInfo_, Models::HttpApiApiInfoIngressInfoEnvironmentInfo) };
    inline HttpApiApiInfoIngressInfo& setEnvironmentInfo(const Models::HttpApiApiInfoIngressInfoEnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline HttpApiApiInfoIngressInfo& setEnvironmentInfo(Models::HttpApiApiInfoIngressInfoEnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // ingressClass Field Functions 
    bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
    void deleteIngressClass() { this->ingressClass_ = nullptr;};
    inline string ingressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
    inline HttpApiApiInfoIngressInfo& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


    // k8sClusterInfo Field Functions 
    bool hasK8sClusterInfo() const { return this->k8sClusterInfo_ != nullptr;};
    void deleteK8sClusterInfo() { this->k8sClusterInfo_ = nullptr;};
    inline const Models::HttpApiApiInfoIngressInfoK8sClusterInfo & k8sClusterInfo() const { DARABONBA_PTR_GET_CONST(k8sClusterInfo_, Models::HttpApiApiInfoIngressInfoK8sClusterInfo) };
    inline Models::HttpApiApiInfoIngressInfoK8sClusterInfo k8sClusterInfo() { DARABONBA_PTR_GET(k8sClusterInfo_, Models::HttpApiApiInfoIngressInfoK8sClusterInfo) };
    inline HttpApiApiInfoIngressInfo& setK8sClusterInfo(const Models::HttpApiApiInfoIngressInfoK8sClusterInfo & k8sClusterInfo) { DARABONBA_PTR_SET_VALUE(k8sClusterInfo_, k8sClusterInfo) };
    inline HttpApiApiInfoIngressInfo& setK8sClusterInfo(Models::HttpApiApiInfoIngressInfoK8sClusterInfo && k8sClusterInfo) { DARABONBA_PTR_SET_RVALUE(k8sClusterInfo_, k8sClusterInfo) };


    // overrideIngressIp Field Functions 
    bool hasOverrideIngressIp() const { return this->overrideIngressIp_ != nullptr;};
    void deleteOverrideIngressIp() { this->overrideIngressIp_ = nullptr;};
    inline bool overrideIngressIp() const { DARABONBA_PTR_GET_DEFAULT(overrideIngressIp_, false) };
    inline HttpApiApiInfoIngressInfo& setOverrideIngressIp(bool overrideIngressIp) { DARABONBA_PTR_SET_VALUE(overrideIngressIp_, overrideIngressIp) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline HttpApiApiInfoIngressInfo& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // watchNamespace Field Functions 
    bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
    void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
    inline string watchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
    inline HttpApiApiInfoIngressInfo& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


  protected:
    std::shared_ptr<Models::HttpApiApiInfoIngressInfoEnvironmentInfo> environmentInfo_ = nullptr;
    std::shared_ptr<string> ingressClass_ = nullptr;
    std::shared_ptr<Models::HttpApiApiInfoIngressInfoK8sClusterInfo> k8sClusterInfo_ = nullptr;
    std::shared_ptr<bool> overrideIngressIp_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> watchNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
