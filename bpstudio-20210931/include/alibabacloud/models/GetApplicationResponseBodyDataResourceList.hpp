// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATARESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATARESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationResponseBodyDataResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(NodeLabel, nodeLabel_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(NodeLabel, nodeLabel_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceCode, resourceCode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetApplicationResponseBodyDataResourceList() = default ;
    GetApplicationResponseBodyDataResourceList(const GetApplicationResponseBodyDataResourceList &) = default ;
    GetApplicationResponseBodyDataResourceList(GetApplicationResponseBodyDataResourceList &&) = default ;
    GetApplicationResponseBodyDataResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyDataResourceList() = default ;
    GetApplicationResponseBodyDataResourceList& operator=(const GetApplicationResponseBodyDataResourceList &) = default ;
    GetApplicationResponseBodyDataResourceList& operator=(GetApplicationResponseBodyDataResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->lifecycle_ != nullptr && this->nodeLabel_ != nullptr && this->remark_ != nullptr && this->resourceCode_ != nullptr && this->resourceId_ != nullptr
        && this->resourceName_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetApplicationResponseBodyDataResourceList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline string lifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
    inline GetApplicationResponseBodyDataResourceList& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // nodeLabel Field Functions 
    bool hasNodeLabel() const { return this->nodeLabel_ != nullptr;};
    void deleteNodeLabel() { this->nodeLabel_ = nullptr;};
    inline string nodeLabel() const { DARABONBA_PTR_GET_DEFAULT(nodeLabel_, "") };
    inline GetApplicationResponseBodyDataResourceList& setNodeLabel(string nodeLabel) { DARABONBA_PTR_SET_VALUE(nodeLabel_, nodeLabel) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetApplicationResponseBodyDataResourceList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceCode Field Functions 
    bool hasResourceCode() const { return this->resourceCode_ != nullptr;};
    void deleteResourceCode() { this->resourceCode_ = nullptr;};
    inline string resourceCode() const { DARABONBA_PTR_GET_DEFAULT(resourceCode_, "") };
    inline GetApplicationResponseBodyDataResourceList& setResourceCode(string resourceCode) { DARABONBA_PTR_SET_VALUE(resourceCode_, resourceCode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetApplicationResponseBodyDataResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetApplicationResponseBodyDataResourceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetApplicationResponseBodyDataResourceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetApplicationResponseBodyDataResourceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The resource tag.
    std::shared_ptr<string> lifecycle_ = nullptr;
    std::shared_ptr<string> nodeLabel_ = nullptr;
    // The deployment result.
    std::shared_ptr<string> remark_ = nullptr;
    // The service code.
    std::shared_ptr<string> resourceCode_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The resource deployment result.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
