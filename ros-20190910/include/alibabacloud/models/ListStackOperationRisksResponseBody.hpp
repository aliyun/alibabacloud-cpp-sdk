// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKOPERATIONRISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackOperationRisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackOperationRisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MissingPolicyActions, missingPolicyActions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskResources, riskResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackOperationRisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MissingPolicyActions, missingPolicyActions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskResources, riskResources_);
    };
    ListStackOperationRisksResponseBody() = default ;
    ListStackOperationRisksResponseBody(const ListStackOperationRisksResponseBody &) = default ;
    ListStackOperationRisksResponseBody(ListStackOperationRisksResponseBody &&) = default ;
    ListStackOperationRisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackOperationRisksResponseBody() = default ;
    ListStackOperationRisksResponseBody& operator=(const ListStackOperationRisksResponseBody &) = default ;
    ListStackOperationRisksResponseBody& operator=(ListStackOperationRisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskResources& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      };
      friend void from_json(const Darabonba::Json& j, RiskResources& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      };
      RiskResources() = default ;
      RiskResources(const RiskResources &) = default ;
      RiskResources(RiskResources &&) = default ;
      RiskResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskResources() = default ;
      RiskResources& operator=(const RiskResources &) = default ;
      RiskResources& operator=(RiskResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->logicalResourceId_ == nullptr && this->message_ == nullptr && this->physicalResourceId_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr
        && this->resourceType_ == nullptr && this->riskType_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline RiskResources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // logicalResourceId Field Functions 
      bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
      void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
      inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
      inline RiskResources& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline RiskResources& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // physicalResourceId Field Functions 
      bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
      void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
      inline string getPhysicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
      inline RiskResources& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline RiskResources& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline RiskResources& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline RiskResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline RiskResources& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    protected:
      // The error code that is returned when the risk detection fails.
      // 
      // >  This parameter is not returned if the risk detection is successful.
      shared_ptr<string> code_ {};
      // The logical ID of the resource. The logical ID is the resource name that is defined in the template.
      shared_ptr<string> logicalResourceId_ {};
      // The error message that is returned when the risk detection fails.
      // 
      // >  This parameter is not returned if the risk detection is successful.
      shared_ptr<string> message_ {};
      // The physical ID of the resource. The physical ID is the actual ID of the resource.
      shared_ptr<string> physicalResourceId_ {};
      // The cause of the risk.
      shared_ptr<string> reason_ {};
      // The ID of the request when the risk detection fails.
      // 
      // >  This parameter is not returned if the risk detection is successful.
      shared_ptr<string> requestId_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The type of the risk. Valid values:
      // 
      // *   Referenced: The resource is referenced by other resources.
      // *   MaybeReferenced: The resource may be referenced by other resources.
      // *   AdditionalRiskCheckRequired: An additional risk detection is required for a nested stack.
      // *   OperationIgnored: The operation does not take effect for the resource.
      shared_ptr<string> riskType_ {};
    };

    virtual bool empty() const override { return this->missingPolicyActions_ == nullptr
        && this->requestId_ == nullptr && this->riskResources_ == nullptr; };
    // missingPolicyActions Field Functions 
    bool hasMissingPolicyActions() const { return this->missingPolicyActions_ != nullptr;};
    void deleteMissingPolicyActions() { this->missingPolicyActions_ = nullptr;};
    inline const vector<string> & getMissingPolicyActions() const { DARABONBA_PTR_GET_CONST(missingPolicyActions_, vector<string>) };
    inline vector<string> getMissingPolicyActions() { DARABONBA_PTR_GET(missingPolicyActions_, vector<string>) };
    inline ListStackOperationRisksResponseBody& setMissingPolicyActions(const vector<string> & missingPolicyActions) { DARABONBA_PTR_SET_VALUE(missingPolicyActions_, missingPolicyActions) };
    inline ListStackOperationRisksResponseBody& setMissingPolicyActions(vector<string> && missingPolicyActions) { DARABONBA_PTR_SET_RVALUE(missingPolicyActions_, missingPolicyActions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackOperationRisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskResources Field Functions 
    bool hasRiskResources() const { return this->riskResources_ != nullptr;};
    void deleteRiskResources() { this->riskResources_ = nullptr;};
    inline const vector<ListStackOperationRisksResponseBody::RiskResources> & getRiskResources() const { DARABONBA_PTR_GET_CONST(riskResources_, vector<ListStackOperationRisksResponseBody::RiskResources>) };
    inline vector<ListStackOperationRisksResponseBody::RiskResources> getRiskResources() { DARABONBA_PTR_GET(riskResources_, vector<ListStackOperationRisksResponseBody::RiskResources>) };
    inline ListStackOperationRisksResponseBody& setRiskResources(const vector<ListStackOperationRisksResponseBody::RiskResources> & riskResources) { DARABONBA_PTR_SET_VALUE(riskResources_, riskResources) };
    inline ListStackOperationRisksResponseBody& setRiskResources(vector<ListStackOperationRisksResponseBody::RiskResources> && riskResources) { DARABONBA_PTR_SET_RVALUE(riskResources_, riskResources) };


  protected:
    // The operations on which the permissions are not granted to the Alibaba Cloud account of the caller.
    shared_ptr<vector<string>> missingPolicyActions_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resources that are at risk.
    shared_ptr<vector<ListStackOperationRisksResponseBody::RiskResources>> riskResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
