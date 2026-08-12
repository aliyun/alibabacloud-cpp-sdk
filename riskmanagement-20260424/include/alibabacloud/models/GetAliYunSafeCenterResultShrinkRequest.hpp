// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIYUNSAFECENTERRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIYUNSAFECENTERRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetAliYunSafeCenterResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAliYunSafeCenterResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSimilarSecurityEventsQueryTaskRequest, createSimilarSecurityEventsQueryTaskRequestShrink_);
      DARABONBA_PTR_TO_JSON(DescribeInstancesFullStatusRequest, describeInstancesFullStatusRequestShrink_);
      DARABONBA_PTR_TO_JSON(DescribeSecurityEventOperationStatusRequest, describeSecurityEventOperationStatusRequestShrink_);
      DARABONBA_PTR_TO_JSON(DescribeSimilarSecurityEventsRequest, describeSimilarSecurityEventsRequestShrink_);
      DARABONBA_PTR_TO_JSON(GetAssetDetailByUuidRequest, getAssetDetailByUuidRequestShrink_);
      DARABONBA_PTR_TO_JSON(HandleSecurityEventsRequest, handleSecurityEventsRequestShrink_);
      DARABONBA_PTR_TO_JSON(HandleSimilarSecurityEventsRequest, handleSimilarSecurityEventsRequestShrink_);
      DARABONBA_PTR_TO_JSON(InterfaceCode, interfaceCode_);
      DARABONBA_PTR_TO_JSON(ListInstancesRequest, listInstancesRequestShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAliYunSafeCenterResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSimilarSecurityEventsQueryTaskRequest, createSimilarSecurityEventsQueryTaskRequestShrink_);
      DARABONBA_PTR_FROM_JSON(DescribeInstancesFullStatusRequest, describeInstancesFullStatusRequestShrink_);
      DARABONBA_PTR_FROM_JSON(DescribeSecurityEventOperationStatusRequest, describeSecurityEventOperationStatusRequestShrink_);
      DARABONBA_PTR_FROM_JSON(DescribeSimilarSecurityEventsRequest, describeSimilarSecurityEventsRequestShrink_);
      DARABONBA_PTR_FROM_JSON(GetAssetDetailByUuidRequest, getAssetDetailByUuidRequestShrink_);
      DARABONBA_PTR_FROM_JSON(HandleSecurityEventsRequest, handleSecurityEventsRequestShrink_);
      DARABONBA_PTR_FROM_JSON(HandleSimilarSecurityEventsRequest, handleSimilarSecurityEventsRequestShrink_);
      DARABONBA_PTR_FROM_JSON(InterfaceCode, interfaceCode_);
      DARABONBA_PTR_FROM_JSON(ListInstancesRequest, listInstancesRequestShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAliYunSafeCenterResultShrinkRequest() = default ;
    GetAliYunSafeCenterResultShrinkRequest(const GetAliYunSafeCenterResultShrinkRequest &) = default ;
    GetAliYunSafeCenterResultShrinkRequest(GetAliYunSafeCenterResultShrinkRequest &&) = default ;
    GetAliYunSafeCenterResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAliYunSafeCenterResultShrinkRequest() = default ;
    GetAliYunSafeCenterResultShrinkRequest& operator=(const GetAliYunSafeCenterResultShrinkRequest &) = default ;
    GetAliYunSafeCenterResultShrinkRequest& operator=(GetAliYunSafeCenterResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createSimilarSecurityEventsQueryTaskRequestShrink_ == nullptr
        && this->describeInstancesFullStatusRequestShrink_ == nullptr && this->describeSecurityEventOperationStatusRequestShrink_ == nullptr && this->describeSimilarSecurityEventsRequestShrink_ == nullptr && this->getAssetDetailByUuidRequestShrink_ == nullptr && this->handleSecurityEventsRequestShrink_ == nullptr
        && this->handleSimilarSecurityEventsRequestShrink_ == nullptr && this->interfaceCode_ == nullptr && this->listInstancesRequestShrink_ == nullptr && this->regionId_ == nullptr; };
    // createSimilarSecurityEventsQueryTaskRequestShrink Field Functions 
    bool hasCreateSimilarSecurityEventsQueryTaskRequestShrink() const { return this->createSimilarSecurityEventsQueryTaskRequestShrink_ != nullptr;};
    void deleteCreateSimilarSecurityEventsQueryTaskRequestShrink() { this->createSimilarSecurityEventsQueryTaskRequestShrink_ = nullptr;};
    inline string getCreateSimilarSecurityEventsQueryTaskRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(createSimilarSecurityEventsQueryTaskRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setCreateSimilarSecurityEventsQueryTaskRequestShrink(string createSimilarSecurityEventsQueryTaskRequestShrink) { DARABONBA_PTR_SET_VALUE(createSimilarSecurityEventsQueryTaskRequestShrink_, createSimilarSecurityEventsQueryTaskRequestShrink) };


    // describeInstancesFullStatusRequestShrink Field Functions 
    bool hasDescribeInstancesFullStatusRequestShrink() const { return this->describeInstancesFullStatusRequestShrink_ != nullptr;};
    void deleteDescribeInstancesFullStatusRequestShrink() { this->describeInstancesFullStatusRequestShrink_ = nullptr;};
    inline string getDescribeInstancesFullStatusRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(describeInstancesFullStatusRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setDescribeInstancesFullStatusRequestShrink(string describeInstancesFullStatusRequestShrink) { DARABONBA_PTR_SET_VALUE(describeInstancesFullStatusRequestShrink_, describeInstancesFullStatusRequestShrink) };


    // describeSecurityEventOperationStatusRequestShrink Field Functions 
    bool hasDescribeSecurityEventOperationStatusRequestShrink() const { return this->describeSecurityEventOperationStatusRequestShrink_ != nullptr;};
    void deleteDescribeSecurityEventOperationStatusRequestShrink() { this->describeSecurityEventOperationStatusRequestShrink_ = nullptr;};
    inline string getDescribeSecurityEventOperationStatusRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(describeSecurityEventOperationStatusRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setDescribeSecurityEventOperationStatusRequestShrink(string describeSecurityEventOperationStatusRequestShrink) { DARABONBA_PTR_SET_VALUE(describeSecurityEventOperationStatusRequestShrink_, describeSecurityEventOperationStatusRequestShrink) };


    // describeSimilarSecurityEventsRequestShrink Field Functions 
    bool hasDescribeSimilarSecurityEventsRequestShrink() const { return this->describeSimilarSecurityEventsRequestShrink_ != nullptr;};
    void deleteDescribeSimilarSecurityEventsRequestShrink() { this->describeSimilarSecurityEventsRequestShrink_ = nullptr;};
    inline string getDescribeSimilarSecurityEventsRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(describeSimilarSecurityEventsRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setDescribeSimilarSecurityEventsRequestShrink(string describeSimilarSecurityEventsRequestShrink) { DARABONBA_PTR_SET_VALUE(describeSimilarSecurityEventsRequestShrink_, describeSimilarSecurityEventsRequestShrink) };


    // getAssetDetailByUuidRequestShrink Field Functions 
    bool hasGetAssetDetailByUuidRequestShrink() const { return this->getAssetDetailByUuidRequestShrink_ != nullptr;};
    void deleteGetAssetDetailByUuidRequestShrink() { this->getAssetDetailByUuidRequestShrink_ = nullptr;};
    inline string getGetAssetDetailByUuidRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(getAssetDetailByUuidRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setGetAssetDetailByUuidRequestShrink(string getAssetDetailByUuidRequestShrink) { DARABONBA_PTR_SET_VALUE(getAssetDetailByUuidRequestShrink_, getAssetDetailByUuidRequestShrink) };


    // handleSecurityEventsRequestShrink Field Functions 
    bool hasHandleSecurityEventsRequestShrink() const { return this->handleSecurityEventsRequestShrink_ != nullptr;};
    void deleteHandleSecurityEventsRequestShrink() { this->handleSecurityEventsRequestShrink_ = nullptr;};
    inline string getHandleSecurityEventsRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(handleSecurityEventsRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setHandleSecurityEventsRequestShrink(string handleSecurityEventsRequestShrink) { DARABONBA_PTR_SET_VALUE(handleSecurityEventsRequestShrink_, handleSecurityEventsRequestShrink) };


    // handleSimilarSecurityEventsRequestShrink Field Functions 
    bool hasHandleSimilarSecurityEventsRequestShrink() const { return this->handleSimilarSecurityEventsRequestShrink_ != nullptr;};
    void deleteHandleSimilarSecurityEventsRequestShrink() { this->handleSimilarSecurityEventsRequestShrink_ = nullptr;};
    inline string getHandleSimilarSecurityEventsRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(handleSimilarSecurityEventsRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setHandleSimilarSecurityEventsRequestShrink(string handleSimilarSecurityEventsRequestShrink) { DARABONBA_PTR_SET_VALUE(handleSimilarSecurityEventsRequestShrink_, handleSimilarSecurityEventsRequestShrink) };


    // interfaceCode Field Functions 
    bool hasInterfaceCode() const { return this->interfaceCode_ != nullptr;};
    void deleteInterfaceCode() { this->interfaceCode_ = nullptr;};
    inline string getInterfaceCode() const { DARABONBA_PTR_GET_DEFAULT(interfaceCode_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setInterfaceCode(string interfaceCode) { DARABONBA_PTR_SET_VALUE(interfaceCode_, interfaceCode) };


    // listInstancesRequestShrink Field Functions 
    bool hasListInstancesRequestShrink() const { return this->listInstancesRequestShrink_ != nullptr;};
    void deleteListInstancesRequestShrink() { this->listInstancesRequestShrink_ = nullptr;};
    inline string getListInstancesRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(listInstancesRequestShrink_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setListInstancesRequestShrink(string listInstancesRequestShrink) { DARABONBA_PTR_SET_VALUE(listInstancesRequestShrink_, listInstancesRequestShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAliYunSafeCenterResultShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Creates a node to query security alerting events triggered by the same rule or alerting type.
    shared_ptr<string> createSimilarSecurityEventsQueryTaskRequestShrink_ {};
    // Queries the running status of ECS instances.
    shared_ptr<string> describeInstancesFullStatusRequestShrink_ {};
    // Queries whether the list of security alerting events that match the same IP rule or same alerting type as the alerting event to be handled is empty.
    shared_ptr<string> describeSecurityEventOperationStatusRequestShrink_ {};
    // Queries identical security alert events in Security Center.
    shared_ptr<string> describeSimilarSecurityEventsRequestShrink_ {};
    // The request parameters for querying the Security Center Agent status.
    shared_ptr<string> getAssetDetailByUuidRequestShrink_ {};
    // Handles security alert events.
    shared_ptr<string> handleSecurityEventsRequestShrink_ {};
    // Handles security alert events in batches based on the same IP rule or type.
    shared_ptr<string> handleSimilarSecurityEventsRequestShrink_ {};
    // The code of the public API operation.
    // 
    // - **GetAssetDetailByUuid**: Retrieves the Agent status. Request parameter: GetAssetDetailByUuidRequest.
    // 
    // - **DescribeSimilarSecurityEvents**: Retrieves the list of instance IDs for identical security alerting events. Request parameter: DescribeSimilarSecurityEventsRequest.
    // 
    // - **CreateSimilarSecurityEventsQueryTask**: Creates a node to query security alerting events triggered by the same rule or alerting type. Request parameter: CreateSimilarSecurityEventsQueryTaskRequest.
    // 
    // - **DescribeSecurityEventOperationStatus**: Queries whether the list of security alerting events that match the same IP rule or same alerting type as the alerting event to be handled is empty. Request parameter: DescribeSecurityEventOperationStatusRequest.
    // 
    // - **HandleSimilarSecurityEvents**: Handles security alerting events in batches based on the same IP rule or type. Request parameter: HandleSimilarSecurityEventsRequest.
    // HandleSecurityEvents: Handles security alerting events. Request parameter: HandleSecurityEventsRequest.
    // 
    // - **DescribeInstancesFullStatus**: Queries the running status of ECS instances. Request parameter: DescribeInstancesFullStatusRequest.
    // 
    // - **ListInstances**: Queries the running status of simple application servers. Request parameter: ListInstancesRequest.
    // 
    // - **StartConfigRuleEvaluation**: Re-evaluates security check rules.
    // 
    // > Each API operation name corresponds to its own request parameters.
    // 
    // This parameter is required.
    shared_ptr<string> interfaceCode_ {};
    // Queries the running status of simple application servers.
    shared_ptr<string> listInstancesRequestShrink_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
