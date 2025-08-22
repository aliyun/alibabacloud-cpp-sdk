// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENVCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENVCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class OpenVClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenVClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RecreateSwitch, recreateSwitch_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenVClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RecreateSwitch, recreateSwitch_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    OpenVClusterRequest() = default ;
    OpenVClusterRequest(const OpenVClusterRequest &) = default ;
    OpenVClusterRequest(OpenVClusterRequest &&) = default ;
    OpenVClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenVClusterRequest() = default ;
    OpenVClusterRequest& operator=(const OpenVClusterRequest &) = default ;
    OpenVClusterRequest& operator=(OpenVClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterType_ != nullptr
        && this->length_ != nullptr && this->product_ != nullptr && this->recreateSwitch_ != nullptr && this->regionId_ != nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline OpenVClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline OpenVClusterRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline OpenVClusterRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // recreateSwitch Field Functions 
    bool hasRecreateSwitch() const { return this->recreateSwitch_ != nullptr;};
    void deleteRecreateSwitch() { this->recreateSwitch_ = nullptr;};
    inline bool recreateSwitch() const { DARABONBA_PTR_GET_DEFAULT(recreateSwitch_, false) };
    inline OpenVClusterRequest& setRecreateSwitch(bool recreateSwitch) { DARABONBA_PTR_SET_VALUE(recreateSwitch_, recreateSwitch) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenVClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The type of the cluster. For cloud services, set this parameter to `cloud-product-prometheus`.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The length of the cluster ID. Default value: 10.
    std::shared_ptr<int32_t> length_ = nullptr;
    // The name of the cloud service. This parameter must be specified when ClusterType is set to `cloud-product-prometheus`. Valid values: influxdb, mongodb, and DLA. You cannot specify multiple service names.
    std::shared_ptr<string> product_ = nullptr;
    // Specifies whether to create or query a virtual cluster. This parameter provides backward compatibility.
    std::shared_ptr<bool> recreateSwitch_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
