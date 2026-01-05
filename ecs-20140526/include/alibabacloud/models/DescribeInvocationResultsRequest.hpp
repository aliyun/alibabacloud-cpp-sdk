// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(IncludeHistory, includeHistory_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(IncludeHistory, includeHistory_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeInvocationResultsRequest() = default ;
    DescribeInvocationResultsRequest(const DescribeInvocationResultsRequest &) = default ;
    DescribeInvocationResultsRequest(DescribeInvocationResultsRequest &&) = default ;
    DescribeInvocationResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultsRequest() = default ;
    DescribeInvocationResultsRequest& operator=(const DescribeInvocationResultsRequest &) = default ;
    DescribeInvocationResultsRequest& operator=(DescribeInvocationResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The ID of the instance.
      shared_ptr<string> key_ {};
      // The ID of the command task. You can call the [DescribeInvocations](https://help.aliyun.com/document_detail/64840.html) operation to query the IDs of all command tasks.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->commandId_ == nullptr
        && this->contentEncoding_ == nullptr && this->includeHistory_ == nullptr && this->instanceId_ == nullptr && this->invokeId_ == nullptr && this->invokeRecordStatus_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tag_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeInvocationResultsRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline DescribeInvocationResultsRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // includeHistory Field Functions 
    bool hasIncludeHistory() const { return this->includeHistory_ != nullptr;};
    void deleteIncludeHistory() { this->includeHistory_ = nullptr;};
    inline bool getIncludeHistory() const { DARABONBA_PTR_GET_DEFAULT(includeHistory_, false) };
    inline DescribeInvocationResultsRequest& setIncludeHistory(bool includeHistory) { DARABONBA_PTR_SET_VALUE(includeHistory_, includeHistory) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInvocationResultsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeInvocationResultsRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeRecordStatus Field Functions 
    bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
    void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
    inline string getInvokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
    inline DescribeInvocationResultsRequest& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInvocationResultsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationResultsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeInvocationResultsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInvocationResultsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInvocationResultsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInvocationResultsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInvocationResultsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInvocationResultsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeInvocationResultsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeInvocationResultsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeInvocationResultsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeInvocationResultsRequest::Tag>) };
    inline vector<DescribeInvocationResultsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeInvocationResultsRequest::Tag>) };
    inline DescribeInvocationResultsRequest& setTag(const vector<DescribeInvocationResultsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeInvocationResultsRequest& setTag(vector<DescribeInvocationResultsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // $.parameters[11].schema.example
    shared_ptr<string> commandId_ {};
    // <DescribeInvocationResultsResponse>
    //     <RequestId>473469C7-AA6F-4DC5-B3DB-A3DC0DE*****</RequestId>
    //     <Invocation>
    //         <InvocationResults>
    //             <InvocationResult>
    //                 <Dropped>0</Dropped>
    //                 <InvocationStatus>Success</InvocationStatus>
    //                 <InstanceId>i-bp1i7gg30r52z2em****</InstanceId>
    //                 <ExitCode>0</ExitCode>
    //                 <ErrorInfo>the specified instance does not exists</ErrorInfo>
    //                 <StartTime>2019-12-20T06:15:55Z</StartTime>
    //                 <Repeats>0</Repeats>
    //                 <InvokeRecordStatus>Running</InvokeRecordStatus>
    //                 <FinishedTime>2019-12-20T06:15:56Z</FinishedTime>
    //                 <Output>MTU6MzA6MDEK</Output>
    //                 <CommandId>c-hz0jdfwcsr****</CommandId>
    //                 <ErrorCode>InstanceNotExists</ErrorCode>
    //                 <InvokeId>t-hz0jdfwd9f****</InvokeId>
    //                 <StopTime>2020-01-19T09:15:47Z</StopTime>
    //                 <ContainerId>ab141ddfbacfe02d9dbc25966ed971536124527097398d419a6746873fea****</ContainerId>
    //                 <ContainerName>test-container</ContainerName>
    //                 <Tags>
    //                     <TagKey>owner</TagKey>
    //                     <TagValue>zhangsan</TagValue>
    //                 </Tags>
    //             </InvocationResult>
    //         </InvocationResults>
    //         <TotalCount>1</TotalCount>
    //         <PageSize>1</PageSize>
    //         <PageNumber>1</PageNumber>
    //     </Invocation>
    // </DescribeInvocationResultsResponse>
    shared_ptr<string> contentEncoding_ {};
    // {
    //   "RequestId" : "473469C7-AA6F-4DC5-B3DB-A3DC0DE*****",
    //   "Invocation" : {
    //     "InvocationResults" : {
    //       "InvocationResult" : [ {
    //         "Dropped" : 0,
    //         "InvocationStatus" : "Success",
    //         "InstanceId" : "i-bp1i7gg30r52z2em****",
    //         "ExitCode" : 0,
    //         "ErrorInfo" : "the specified instance does not exists",
    //         "StartTime" : "2019-12-20T06:15:55Z",
    //         "Repeats" : 0,
    //         "InvokeRecordStatus" : "Running",
    //         "FinishedTime" : "2019-12-20T06:15:56Z",
    //         "Output" : "MTU6MzA6MDEK",
    //         "CommandId" : "c-hz0jdfwcsr****",
    //         "ErrorCode" : "InstanceNotExists",
    //         "InvokeId" : "t-hz0jdfwd9f****",
    //         "StopTime" : "2020-01-19T09:15:47Z",
    //         "ContainerId":"ab141ddfbacfe02d9dbc25966ed971536124527097398d419a6746873fea****",
    //         "ContainerName":"test-container",      
    //         "Tags": [
    //                     {
    //                         "TagKey": "owner",
    //                         "TagValue": "zhangsan"
    //                     }
    //                 ]
    //       } ]
    //     },
    //     "TotalCount" : 1,
    //     "PageSize" : 1,
    //     "PageNumber" : 1
    //   }
    // }
    shared_ptr<bool> includeHistory_ {};
    // $.parameters[11].schema.description
    shared_ptr<string> instanceId_ {};
    // $.parameters[11].schema.items.enumValueTitles
    shared_ptr<string> invokeId_ {};
    // $.parameters[11].schema.enumValueTitles
    shared_ptr<string> invokeRecordStatus_ {};
    // FEATUREecsXZ3H4M
    shared_ptr<int32_t> maxResults_ {};
    // dubbo
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // acs:ecs:{#regionId}:{#accountId}:command/*
    shared_ptr<int64_t> pageNumber_ {};
    // acs:ecs:{#regionId}:{#accountId}:instance/*
    shared_ptr<int64_t> pageSize_ {};
    // $.parameters[11].schema.items.description
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // $.parameters[11].schema.items.example
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The region ID of the command. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    shared_ptr<vector<DescribeInvocationResultsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
