// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCClusterConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCClusterConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCClusterConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRCClusterConfigRequest() = default ;
    DescribeRCClusterConfigRequest(const DescribeRCClusterConfigRequest &) = default ;
    DescribeRCClusterConfigRequest(DescribeRCClusterConfigRequest &&) = default ;
    DescribeRCClusterConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCClusterConfigRequest() = default ;
    DescribeRCClusterConfigRequest& operator=(const DescribeRCClusterConfigRequest &) = default ;
    DescribeRCClusterConfigRequest& operator=(DescribeRCClusterConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->temporaryDurationMinutes_ == nullptr && return this->vpcId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCClusterConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // temporaryDurationMinutes Field Functions 
    bool hasTemporaryDurationMinutes() const { return this->temporaryDurationMinutes_ != nullptr;};
    void deleteTemporaryDurationMinutes() { this->temporaryDurationMinutes_ = nullptr;};
    inline int32_t temporaryDurationMinutes() const { DARABONBA_PTR_GET_DEFAULT(temporaryDurationMinutes_, 0) };
    inline DescribeRCClusterConfigRequest& setTemporaryDurationMinutes(int32_t temporaryDurationMinutes) { DARABONBA_PTR_SET_VALUE(temporaryDurationMinutes_, temporaryDurationMinutes) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCClusterConfigRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The validity period of the temporary kubeconfig file. Unit: minutes. Valid values: 15 to 4320.
    // 
    // >  If you do not specify this parameter, the system specifies a longer validity period. The validity period is returned in the `expiration` parameter.
    std::shared_ptr<int32_t> temporaryDurationMinutes_ = nullptr;
    // The virtual private cloud (VPC) ID.
    // 
    // >  This is a reserved parameter.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
