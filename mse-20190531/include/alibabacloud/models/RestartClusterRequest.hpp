// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RestartClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PodNameList, podNameList_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, RestartClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PodNameList, podNameList_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    RestartClusterRequest() = default ;
    RestartClusterRequest(const RestartClusterRequest &) = default ;
    RestartClusterRequest(RestartClusterRequest &&) = default ;
    RestartClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartClusterRequest() = default ;
    RestartClusterRequest& operator=(const RestartClusterRequest &) = default ;
    RestartClusterRequest& operator=(RestartClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->clusterId_ != nullptr && this->instanceId_ != nullptr && this->podNameList_ != nullptr && this->requestPars_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline RestartClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RestartClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RestartClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // podNameList Field Functions 
    bool hasPodNameList() const { return this->podNameList_ != nullptr;};
    void deletePodNameList() { this->podNameList_ = nullptr;};
    inline string podNameList() const { DARABONBA_PTR_GET_DEFAULT(podNameList_, "") };
    inline RestartClusterRequest& setPodNameList(string podNameList) { DARABONBA_PTR_SET_VALUE(podNameList_, podNameList) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline RestartClusterRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The names of pods. You can specify the names of multiple pods at a time. Separate multiple pod names with commas (,). Example: mse-a8aba010-1629719288255-reg-center-0-1,mse-a8aba010-1629719288255-reg-center-0-2.
    // 
    // The specified pods must belong to the current cluster and be associated with the specified instance. Otherwise, a restart exception occurs.
    std::shared_ptr<string> podNameList_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
