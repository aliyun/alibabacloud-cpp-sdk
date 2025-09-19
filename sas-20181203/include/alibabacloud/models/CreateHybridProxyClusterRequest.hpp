// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDPROXYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDPROXYCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHybridProxyClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridProxyClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridProxyClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    CreateHybridProxyClusterRequest() = default ;
    CreateHybridProxyClusterRequest(const CreateHybridProxyClusterRequest &) = default ;
    CreateHybridProxyClusterRequest(CreateHybridProxyClusterRequest &&) = default ;
    CreateHybridProxyClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridProxyClusterRequest() = default ;
    CreateHybridProxyClusterRequest& operator=(const CreateHybridProxyClusterRequest &) = default ;
    CreateHybridProxyClusterRequest& operator=(CreateHybridProxyClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr
        && this->ip_ != nullptr && this->remark_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateHybridProxyClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline CreateHybridProxyClusterRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateHybridProxyClusterRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The name of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The endpoint of the cluster.
    // >  You can specify an IP address or a domain name
    std::shared_ptr<string> ip_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
