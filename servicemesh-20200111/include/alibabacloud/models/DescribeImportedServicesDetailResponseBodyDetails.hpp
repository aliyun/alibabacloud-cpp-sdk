// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDSERVICESDETAILRESPONSEBODYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDSERVICESDETAILRESPONSEBODYDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DescribeImportedServicesDetailResponseBodyDetailsPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeImportedServicesDetailResponseBodyDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedServicesDetailResponseBodyDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedServicesDetailResponseBodyDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    DescribeImportedServicesDetailResponseBodyDetails() = default ;
    DescribeImportedServicesDetailResponseBodyDetails(const DescribeImportedServicesDetailResponseBodyDetails &) = default ;
    DescribeImportedServicesDetailResponseBodyDetails(DescribeImportedServicesDetailResponseBodyDetails &&) = default ;
    DescribeImportedServicesDetailResponseBodyDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedServicesDetailResponseBodyDetails() = default ;
    DescribeImportedServicesDetailResponseBodyDetails& operator=(const DescribeImportedServicesDetailResponseBodyDetails &) = default ;
    DescribeImportedServicesDetailResponseBodyDetails& operator=(DescribeImportedServicesDetailResponseBodyDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && return this->labels_ == nullptr && return this->namespace_ == nullptr && return this->ports_ == nullptr && return this->serviceName_ == nullptr && return this->serviceType_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & clusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> clusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline DescribeImportedServicesDetailResponseBodyDetails& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline DescribeImportedServicesDetailResponseBodyDetails& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline DescribeImportedServicesDetailResponseBodyDetails& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeImportedServicesDetailResponseBodyDetails& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeImportedServicesDetailResponseBodyDetails& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts>) };
    inline vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts>) };
    inline DescribeImportedServicesDetailResponseBodyDetails& setPorts(const vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeImportedServicesDetailResponseBodyDetails& setPorts(vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeImportedServicesDetailResponseBodyDetails& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeImportedServicesDetailResponseBodyDetails& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The clusters on the data plane.
    std::shared_ptr<vector<string>> clusterIds_ = nullptr;
    // The labels of the service.
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // The namespace in which the service resides.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ports declared for the service.
    std::shared_ptr<vector<Models::DescribeImportedServicesDetailResponseBodyDetailsPorts>> ports_ = nullptr;
    // The name of a service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> serviceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
