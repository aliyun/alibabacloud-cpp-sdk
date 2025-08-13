// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODYDATACLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTANSSERVICECLUSTERSRESPONSEBODYDATACLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListAnsServiceClustersResponseBodyDataClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnsServiceClustersResponseBodyDataClusters& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultCheckPort, defaultCheckPort_);
      DARABONBA_PTR_TO_JSON(DefaultPort, defaultPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckerType, healthCheckerType_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UseIPPort4Check, useIPPort4Check_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnsServiceClustersResponseBodyDataClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultCheckPort, defaultCheckPort_);
      DARABONBA_PTR_FROM_JSON(DefaultPort, defaultPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckerType, healthCheckerType_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UseIPPort4Check, useIPPort4Check_);
    };
    ListAnsServiceClustersResponseBodyDataClusters() = default ;
    ListAnsServiceClustersResponseBodyDataClusters(const ListAnsServiceClustersResponseBodyDataClusters &) = default ;
    ListAnsServiceClustersResponseBodyDataClusters(ListAnsServiceClustersResponseBodyDataClusters &&) = default ;
    ListAnsServiceClustersResponseBodyDataClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnsServiceClustersResponseBodyDataClusters() = default ;
    ListAnsServiceClustersResponseBodyDataClusters& operator=(const ListAnsServiceClustersResponseBodyDataClusters &) = default ;
    ListAnsServiceClustersResponseBodyDataClusters& operator=(ListAnsServiceClustersResponseBodyDataClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultCheckPort_ != nullptr
        && this->defaultPort_ != nullptr && this->healthCheckerType_ != nullptr && this->metadata_ != nullptr && this->name_ != nullptr && this->serviceName_ != nullptr
        && this->useIPPort4Check_ != nullptr; };
    // defaultCheckPort Field Functions 
    bool hasDefaultCheckPort() const { return this->defaultCheckPort_ != nullptr;};
    void deleteDefaultCheckPort() { this->defaultCheckPort_ = nullptr;};
    inline int32_t defaultCheckPort() const { DARABONBA_PTR_GET_DEFAULT(defaultCheckPort_, 0) };
    inline ListAnsServiceClustersResponseBodyDataClusters& setDefaultCheckPort(int32_t defaultCheckPort) { DARABONBA_PTR_SET_VALUE(defaultCheckPort_, defaultCheckPort) };


    // defaultPort Field Functions 
    bool hasDefaultPort() const { return this->defaultPort_ != nullptr;};
    void deleteDefaultPort() { this->defaultPort_ = nullptr;};
    inline int32_t defaultPort() const { DARABONBA_PTR_GET_DEFAULT(defaultPort_, 0) };
    inline ListAnsServiceClustersResponseBodyDataClusters& setDefaultPort(int32_t defaultPort) { DARABONBA_PTR_SET_VALUE(defaultPort_, defaultPort) };


    // healthCheckerType Field Functions 
    bool hasHealthCheckerType() const { return this->healthCheckerType_ != nullptr;};
    void deleteHealthCheckerType() { this->healthCheckerType_ = nullptr;};
    inline string healthCheckerType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckerType_, "") };
    inline ListAnsServiceClustersResponseBodyDataClusters& setHealthCheckerType(string healthCheckerType) { DARABONBA_PTR_SET_VALUE(healthCheckerType_, healthCheckerType) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ListAnsServiceClustersResponseBodyDataClusters& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ListAnsServiceClustersResponseBodyDataClusters& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAnsServiceClustersResponseBodyDataClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListAnsServiceClustersResponseBodyDataClusters& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // useIPPort4Check Field Functions 
    bool hasUseIPPort4Check() const { return this->useIPPort4Check_ != nullptr;};
    void deleteUseIPPort4Check() { this->useIPPort4Check_ = nullptr;};
    inline bool useIPPort4Check() const { DARABONBA_PTR_GET_DEFAULT(useIPPort4Check_, false) };
    inline ListAnsServiceClustersResponseBodyDataClusters& setUseIPPort4Check(bool useIPPort4Check) { DARABONBA_PTR_SET_VALUE(useIPPort4Check_, useIPPort4Check) };


  protected:
    // The default port used for a health check.
    std::shared_ptr<int32_t> defaultCheckPort_ = nullptr;
    // The default port.
    std::shared_ptr<int32_t> defaultPort_ = nullptr;
    // The type of the health check.
    std::shared_ptr<string> healthCheckerType_ = nullptr;
    // The metadata of the cluster.
    Darabonba::Json metadata_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The full name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // Indicates whether an end-to-end health check was initiated by the server. This parameter is valid only if the service is not a temporary service.
    std::shared_ptr<bool> useIPPort4Check_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
