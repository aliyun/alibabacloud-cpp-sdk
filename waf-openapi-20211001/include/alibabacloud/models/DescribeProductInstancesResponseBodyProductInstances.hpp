// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols.hpp>
#include <alibabacloud/models/DescribeProductInstancesResponseBodyProductInstancesResourcePorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeProductInstancesResponseBodyProductInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesResponseBodyProductInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(AccessPortAndProtocols, accessPortAndProtocols_);
      DARABONBA_PTR_TO_JSON(AccessPorts, accessPorts_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceAccessStatus, resourceInstanceAccessStatus_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceEdition, resourceInstanceEdition_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceIp, resourceInstanceIp_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceIp, resourceIp_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourcePorts, resourcePorts_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesResponseBodyProductInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(AccessPortAndProtocols, accessPortAndProtocols_);
      DARABONBA_PTR_FROM_JSON(AccessPorts, accessPorts_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceAccessStatus, resourceInstanceAccessStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceEdition, resourceInstanceEdition_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceIp, resourceInstanceIp_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceIp, resourceIp_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourcePorts, resourcePorts_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
    };
    DescribeProductInstancesResponseBodyProductInstances() = default ;
    DescribeProductInstancesResponseBodyProductInstances(const DescribeProductInstancesResponseBodyProductInstances &) = default ;
    DescribeProductInstancesResponseBodyProductInstances(DescribeProductInstancesResponseBodyProductInstances &&) = default ;
    DescribeProductInstancesResponseBodyProductInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesResponseBodyProductInstances() = default ;
    DescribeProductInstancesResponseBodyProductInstances& operator=(const DescribeProductInstancesResponseBodyProductInstances &) = default ;
    DescribeProductInstancesResponseBodyProductInstances& operator=(DescribeProductInstancesResponseBodyProductInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessInstanceId_ != nullptr
        && this->accessPortAndProtocols_ != nullptr && this->accessPorts_ != nullptr && this->ownerUserId_ != nullptr && this->resourceInstanceAccessStatus_ != nullptr && this->resourceInstanceEdition_ != nullptr
        && this->resourceInstanceId_ != nullptr && this->resourceInstanceIp_ != nullptr && this->resourceInstanceName_ != nullptr && this->resourceIp_ != nullptr && this->resourceName_ != nullptr
        && this->resourcePorts_ != nullptr && this->resourceProduct_ != nullptr && this->resourceRegionId_ != nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // accessPortAndProtocols Field Functions 
    bool hasAccessPortAndProtocols() const { return this->accessPortAndProtocols_ != nullptr;};
    void deleteAccessPortAndProtocols() { this->accessPortAndProtocols_ = nullptr;};
    inline const vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols> & accessPortAndProtocols() const { DARABONBA_PTR_GET_CONST(accessPortAndProtocols_, vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols>) };
    inline vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols> accessPortAndProtocols() { DARABONBA_PTR_GET(accessPortAndProtocols_, vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols>) };
    inline DescribeProductInstancesResponseBodyProductInstances& setAccessPortAndProtocols(const vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols> & accessPortAndProtocols) { DARABONBA_PTR_SET_VALUE(accessPortAndProtocols_, accessPortAndProtocols) };
    inline DescribeProductInstancesResponseBodyProductInstances& setAccessPortAndProtocols(vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols> && accessPortAndProtocols) { DARABONBA_PTR_SET_RVALUE(accessPortAndProtocols_, accessPortAndProtocols) };


    // accessPorts Field Functions 
    bool hasAccessPorts() const { return this->accessPorts_ != nullptr;};
    void deleteAccessPorts() { this->accessPorts_ = nullptr;};
    inline const vector<int32_t> & accessPorts() const { DARABONBA_PTR_GET_CONST(accessPorts_, vector<int32_t>) };
    inline vector<int32_t> accessPorts() { DARABONBA_PTR_GET(accessPorts_, vector<int32_t>) };
    inline DescribeProductInstancesResponseBodyProductInstances& setAccessPorts(const vector<int32_t> & accessPorts) { DARABONBA_PTR_SET_VALUE(accessPorts_, accessPorts) };
    inline DescribeProductInstancesResponseBodyProductInstances& setAccessPorts(vector<int32_t> && accessPorts) { DARABONBA_PTR_SET_RVALUE(accessPorts_, accessPorts) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // resourceInstanceAccessStatus Field Functions 
    bool hasResourceInstanceAccessStatus() const { return this->resourceInstanceAccessStatus_ != nullptr;};
    void deleteResourceInstanceAccessStatus() { this->resourceInstanceAccessStatus_ = nullptr;};
    inline string resourceInstanceAccessStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceAccessStatus_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceInstanceAccessStatus(string resourceInstanceAccessStatus) { DARABONBA_PTR_SET_VALUE(resourceInstanceAccessStatus_, resourceInstanceAccessStatus) };


    // resourceInstanceEdition Field Functions 
    bool hasResourceInstanceEdition() const { return this->resourceInstanceEdition_ != nullptr;};
    void deleteResourceInstanceEdition() { this->resourceInstanceEdition_ = nullptr;};
    inline string resourceInstanceEdition() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceEdition_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceInstanceEdition(string resourceInstanceEdition) { DARABONBA_PTR_SET_VALUE(resourceInstanceEdition_, resourceInstanceEdition) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceIp Field Functions 
    bool hasResourceInstanceIp() const { return this->resourceInstanceIp_ != nullptr;};
    void deleteResourceInstanceIp() { this->resourceInstanceIp_ = nullptr;};
    inline string resourceInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceIp_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceInstanceIp(string resourceInstanceIp) { DARABONBA_PTR_SET_VALUE(resourceInstanceIp_, resourceInstanceIp) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceIp Field Functions 
    bool hasResourceIp() const { return this->resourceIp_ != nullptr;};
    void deleteResourceIp() { this->resourceIp_ = nullptr;};
    inline string resourceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceIp_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceIp(string resourceIp) { DARABONBA_PTR_SET_VALUE(resourceIp_, resourceIp) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourcePorts Field Functions 
    bool hasResourcePorts() const { return this->resourcePorts_ != nullptr;};
    void deleteResourcePorts() { this->resourcePorts_ = nullptr;};
    inline const vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts> & resourcePorts() const { DARABONBA_PTR_GET_CONST(resourcePorts_, vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts>) };
    inline vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts> resourcePorts() { DARABONBA_PTR_GET(resourcePorts_, vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts>) };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourcePorts(const vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts> & resourcePorts) { DARABONBA_PTR_SET_VALUE(resourcePorts_, resourcePorts) };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourcePorts(vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts> && resourcePorts) { DARABONBA_PTR_SET_RVALUE(resourcePorts_, resourcePorts) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string resourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeProductInstancesResponseBodyProductInstances& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


  protected:
    std::shared_ptr<string> accessInstanceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeProductInstancesResponseBodyProductInstancesAccessPortAndProtocols>> accessPortAndProtocols_ = nullptr;
    std::shared_ptr<vector<int32_t>> accessPorts_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<string> resourceInstanceAccessStatus_ = nullptr;
    std::shared_ptr<string> resourceInstanceEdition_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The IP address of the instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceIp_ = nullptr;
    // The name of the instance that is added to WAF.
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    // The public IP address of the instance.
    std::shared_ptr<string> resourceIp_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The information about the ports.
    std::shared_ptr<vector<Models::DescribeProductInstancesResponseBodyProductInstancesResourcePorts>> resourcePorts_ = nullptr;
    // The cloud service to which the instance belongs. Valid values:
    // 
    // *   **clb4**: Layer 4 CLB.
    // *   **clb7**: Layer 7 CLB.
    // *   **ecs**: ECS.
    std::shared_ptr<string> resourceProduct_ = nullptr;
    // The region ID of the instance. Valid values:
    // 
    // *   **cn-chengdu**: China (Chengdu).
    // *   **cn-beijing**: China (Beijing).
    // *   **cn-zhangjiakou**: China (Zhangjiakou).
    // *   **cn-hangzhou**: China (Hangzhou).
    // *   **cn-shanghai**: China (Shanghai).
    // *   **cn-shenzhen**: China (Shenzhen).
    // *   **cn-qingdao**: China (Qingdao).
    // *   **cn-hongkong**: China (Hong Kong).
    // *   **ap-southeast-3**: Malaysia (Kuala Lumpur).
    // *   **ap-southeast-5**: Indonesia (Jakarta).
    std::shared_ptr<string> resourceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
