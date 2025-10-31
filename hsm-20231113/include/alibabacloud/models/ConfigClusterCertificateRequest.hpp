// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGCLUSTERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGCLUSTERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigClusterCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigClusterCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCertificate, clusterCertificate_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(IssuerCertificate, issuerCertificate_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigClusterCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCertificate, clusterCertificate_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(IssuerCertificate, issuerCertificate_);
    };
    ConfigClusterCertificateRequest() = default ;
    ConfigClusterCertificateRequest(const ConfigClusterCertificateRequest &) = default ;
    ConfigClusterCertificateRequest(ConfigClusterCertificateRequest &&) = default ;
    ConfigClusterCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigClusterCertificateRequest() = default ;
    ConfigClusterCertificateRequest& operator=(const ConfigClusterCertificateRequest &) = default ;
    ConfigClusterCertificateRequest& operator=(ConfigClusterCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterCertificate_ == nullptr
        && return this->clusterId_ == nullptr && return this->issuerCertificate_ == nullptr; };
    // clusterCertificate Field Functions 
    bool hasClusterCertificate() const { return this->clusterCertificate_ != nullptr;};
    void deleteClusterCertificate() { this->clusterCertificate_ = nullptr;};
    inline string clusterCertificate() const { DARABONBA_PTR_GET_DEFAULT(clusterCertificate_, "") };
    inline ConfigClusterCertificateRequest& setClusterCertificate(string clusterCertificate) { DARABONBA_PTR_SET_VALUE(clusterCertificate_, clusterCertificate) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ConfigClusterCertificateRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // issuerCertificate Field Functions 
    bool hasIssuerCertificate() const { return this->issuerCertificate_ != nullptr;};
    void deleteIssuerCertificate() { this->issuerCertificate_ = nullptr;};
    inline string issuerCertificate() const { DARABONBA_PTR_GET_DEFAULT(issuerCertificate_, "") };
    inline ConfigClusterCertificateRequest& setIssuerCertificate(string issuerCertificate) { DARABONBA_PTR_SET_VALUE(issuerCertificate_, issuerCertificate) };


  protected:
    // The cluster certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterCertificate_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The self-signed certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> issuerCertificate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
