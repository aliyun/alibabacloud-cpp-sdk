// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADCLUSTERMANAGEDCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADCLUSTERMANAGEDCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class DownloadClusterManagedCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadClusterManagedCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadClusterManagedCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    DownloadClusterManagedCertRequest() = default ;
    DownloadClusterManagedCertRequest(const DownloadClusterManagedCertRequest &) = default ;
    DownloadClusterManagedCertRequest(DownloadClusterManagedCertRequest &&) = default ;
    DownloadClusterManagedCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadClusterManagedCertRequest() = default ;
    DownloadClusterManagedCertRequest& operator=(const DownloadClusterManagedCertRequest &) = default ;
    DownloadClusterManagedCertRequest& operator=(DownloadClusterManagedCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DownloadClusterManagedCertRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
