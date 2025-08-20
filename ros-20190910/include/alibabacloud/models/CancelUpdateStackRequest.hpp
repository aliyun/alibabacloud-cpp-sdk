// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELUPDATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELUPDATESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CancelUpdateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelUpdateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CancelType, cancelType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelUpdateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelType, cancelType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    CancelUpdateStackRequest() = default ;
    CancelUpdateStackRequest(const CancelUpdateStackRequest &) = default ;
    CancelUpdateStackRequest(CancelUpdateStackRequest &&) = default ;
    CancelUpdateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelUpdateStackRequest() = default ;
    CancelUpdateStackRequest& operator=(const CancelUpdateStackRequest &) = default ;
    CancelUpdateStackRequest& operator=(CancelUpdateStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelType_ != nullptr
        && this->regionId_ != nullptr && this->stackId_ != nullptr; };
    // cancelType Field Functions 
    bool hasCancelType() const { return this->cancelType_ != nullptr;};
    void deleteCancelType() { this->cancelType_ = nullptr;};
    inline string cancelType() const { DARABONBA_PTR_GET_DEFAULT(cancelType_, "") };
    inline CancelUpdateStackRequest& setCancelType(string cancelType) { DARABONBA_PTR_SET_VALUE(cancelType_, cancelType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelUpdateStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline CancelUpdateStackRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The method to cancel the update operation. Valid values:
    // 
    // *   Quick: cancels the update of a stack as soon as possible.
    // *   Safe: cancels the update of a stack as safely as possible.
    std::shared_ptr<string> cancelType_ = nullptr;
    // The region ID of the stack. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the stack.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
