// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPSTACKGROUPOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPSTACKGROUPOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class StopStackGroupOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopStackGroupOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StopStackGroupOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StopStackGroupOperationRequest() = default ;
    StopStackGroupOperationRequest(const StopStackGroupOperationRequest &) = default ;
    StopStackGroupOperationRequest(StopStackGroupOperationRequest &&) = default ;
    StopStackGroupOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopStackGroupOperationRequest() = default ;
    StopStackGroupOperationRequest& operator=(const StopStackGroupOperationRequest &) = default ;
    StopStackGroupOperationRequest& operator=(StopStackGroupOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationId_ != nullptr
        && this->regionId_ != nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline StopStackGroupOperationRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopStackGroupOperationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the operation.
    // 
    // You can call the [ListStackGroupOperations](https://help.aliyun.com/document_detail/151342.html) operation to obtain the operation ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> operationId_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
