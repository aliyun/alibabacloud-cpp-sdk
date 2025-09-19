// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHYBRIDPROXYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHYBRIDPROXYCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteHybridProxyClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHybridProxyClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHybridProxyClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
    };
    DeleteHybridProxyClusterRequest() = default ;
    DeleteHybridProxyClusterRequest(const DeleteHybridProxyClusterRequest &) = default ;
    DeleteHybridProxyClusterRequest(DeleteHybridProxyClusterRequest &&) = default ;
    DeleteHybridProxyClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHybridProxyClusterRequest() = default ;
    DeleteHybridProxyClusterRequest& operator=(const DeleteHybridProxyClusterRequest &) = default ;
    DeleteHybridProxyClusterRequest& operator=(DeleteHybridProxyClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DeleteHybridProxyClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


  protected:
    // The name of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
