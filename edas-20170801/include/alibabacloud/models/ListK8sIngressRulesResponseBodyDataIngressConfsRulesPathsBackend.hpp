// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFSRULESPATHSBACKEND_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFSRULESPATHSBACKEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
    };
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend(const ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend(ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend &&) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend& operator=(const ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend& operator=(ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceName_ == nullptr
        && return this->servicePort_ == nullptr; };
    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline string servicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfsRulesPathsBackend& setServicePort(string servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


  protected:
    // The name of the backend Service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The port of the backend Service.
    std::shared_ptr<string> servicePort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
