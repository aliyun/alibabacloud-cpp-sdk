// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSRESPONSEBODYRISKRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSRESPONSEBODYRISKRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackOperationRisksResponseBodyRiskResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackOperationRisksResponseBodyRiskResources& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackOperationRisksResponseBodyRiskResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
    };
    ListStackOperationRisksResponseBodyRiskResources() = default ;
    ListStackOperationRisksResponseBodyRiskResources(const ListStackOperationRisksResponseBodyRiskResources &) = default ;
    ListStackOperationRisksResponseBodyRiskResources(ListStackOperationRisksResponseBodyRiskResources &&) = default ;
    ListStackOperationRisksResponseBodyRiskResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackOperationRisksResponseBodyRiskResources() = default ;
    ListStackOperationRisksResponseBodyRiskResources& operator=(const ListStackOperationRisksResponseBodyRiskResources &) = default ;
    ListStackOperationRisksResponseBodyRiskResources& operator=(ListStackOperationRisksResponseBodyRiskResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->logicalResourceId_ != nullptr && this->message_ != nullptr && this->physicalResourceId_ != nullptr && this->reason_ != nullptr && this->requestId_ != nullptr
        && this->resourceType_ != nullptr && this->riskType_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // physicalResourceId Field Functions 
    bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
    void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
    inline string physicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline ListStackOperationRisksResponseBodyRiskResources& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


  protected:
    // The error code that is returned when the risk detection fails.
    // 
    // >  This parameter is not returned if the risk detection is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The logical ID of the resource. The logical ID is the resource name that is defined in the template.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The error message that is returned when the risk detection fails.
    // 
    // >  This parameter is not returned if the risk detection is successful.
    std::shared_ptr<string> message_ = nullptr;
    // The physical ID of the resource. The physical ID is the actual ID of the resource.
    std::shared_ptr<string> physicalResourceId_ = nullptr;
    // The cause of the risk.
    std::shared_ptr<string> reason_ = nullptr;
    // The ID of the request when the risk detection fails.
    // 
    // >  This parameter is not returned if the risk detection is successful.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The type of the risk. Valid values:
    // 
    // *   Referenced: The resource is referenced by other resources.
    // *   MaybeReferenced: The resource may be referenced by other resources.
    // *   AdditionalRiskCheckRequired: An additional risk detection is required for a nested stack.
    // *   OperationIgnored: The operation does not take effect for the resource.
    std::shared_ptr<string> riskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
