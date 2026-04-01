// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UpdateClusterCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UpdateClusterCertificateRequest() = default ;
    UpdateClusterCertificateRequest(const UpdateClusterCertificateRequest &) = default ;
    UpdateClusterCertificateRequest(UpdateClusterCertificateRequest &&) = default ;
    UpdateClusterCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterCertificateRequest() = default ;
    UpdateClusterCertificateRequest& operator=(const UpdateClusterCertificateRequest &) = default ;
    UpdateClusterCertificateRequest& operator=(UpdateClusterCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateClusterCertificateRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
