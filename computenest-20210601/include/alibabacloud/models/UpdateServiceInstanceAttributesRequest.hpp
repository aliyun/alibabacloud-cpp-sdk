// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceInstanceAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableOperation, enableOperation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableOperation, enableOperation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    UpdateServiceInstanceAttributesRequest() = default ;
    UpdateServiceInstanceAttributesRequest(const UpdateServiceInstanceAttributesRequest &) = default ;
    UpdateServiceInstanceAttributesRequest(UpdateServiceInstanceAttributesRequest &&) = default ;
    UpdateServiceInstanceAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceAttributesRequest() = default ;
    UpdateServiceInstanceAttributesRequest& operator=(const UpdateServiceInstanceAttributesRequest &) = default ;
    UpdateServiceInstanceAttributesRequest& operator=(UpdateServiceInstanceAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableOperation_ != nullptr
        && this->regionId_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // enableOperation Field Functions 
    bool hasEnableOperation() const { return this->enableOperation_ != nullptr;};
    void deleteEnableOperation() { this->enableOperation_ = nullptr;};
    inline bool enableOperation() const { DARABONBA_PTR_GET_DEFAULT(enableOperation_, false) };
    inline UpdateServiceInstanceAttributesRequest& setEnableOperation(bool enableOperation) { DARABONBA_PTR_SET_VALUE(enableOperation_, enableOperation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceInstanceAttributesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceAttributesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // Specifies whether to authorize the service provider to perform O\\&M operations on the service instance.
    std::shared_ptr<bool> enableOperation_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the service instance.
    // 
    // You can call the [ListServiceInstances](https://help.aliyun.com/document_detail/396200.html) operation to obtain the ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
