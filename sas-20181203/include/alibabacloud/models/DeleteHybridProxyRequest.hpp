// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHYBRIDPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHYBRIDPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteHybridProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHybridProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHybridProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DeleteHybridProxyRequest() = default ;
    DeleteHybridProxyRequest(const DeleteHybridProxyRequest &) = default ;
    DeleteHybridProxyRequest(DeleteHybridProxyRequest &&) = default ;
    DeleteHybridProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHybridProxyRequest() = default ;
    DeleteHybridProxyRequest& operator=(const DeleteHybridProxyRequest &) = default ;
    DeleteHybridProxyRequest& operator=(DeleteHybridProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr
        && this->uuid_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DeleteHybridProxyRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DeleteHybridProxyRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The UUID of the proxy node that you want to remove. The value starts with inet-proxy.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
