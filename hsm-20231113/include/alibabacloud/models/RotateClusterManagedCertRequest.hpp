// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROTATECLUSTERMANAGEDCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROTATECLUSTERMANAGEDCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class RotateClusterManagedCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RotateClusterManagedCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, RotateClusterManagedCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    RotateClusterManagedCertRequest() = default ;
    RotateClusterManagedCertRequest(const RotateClusterManagedCertRequest &) = default ;
    RotateClusterManagedCertRequest(RotateClusterManagedCertRequest &&) = default ;
    RotateClusterManagedCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RotateClusterManagedCertRequest() = default ;
    RotateClusterManagedCertRequest& operator=(const RotateClusterManagedCertRequest &) = default ;
    RotateClusterManagedCertRequest& operator=(RotateClusterManagedCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RotateClusterManagedCertRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
