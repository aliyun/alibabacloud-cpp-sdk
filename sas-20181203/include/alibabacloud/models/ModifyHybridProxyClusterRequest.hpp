// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDPROXYCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDPROXYCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyHybridProxyClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridProxyClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridProxyClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    ModifyHybridProxyClusterRequest() = default ;
    ModifyHybridProxyClusterRequest(const ModifyHybridProxyClusterRequest &) = default ;
    ModifyHybridProxyClusterRequest(ModifyHybridProxyClusterRequest &&) = default ;
    ModifyHybridProxyClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridProxyClusterRequest() = default ;
    ModifyHybridProxyClusterRequest& operator=(const ModifyHybridProxyClusterRequest &) = default ;
    ModifyHybridProxyClusterRequest& operator=(ModifyHybridProxyClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && return this->remark_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyHybridProxyClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyHybridProxyClusterRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The name of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The remarks.
    // 
    // This parameter is required.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
