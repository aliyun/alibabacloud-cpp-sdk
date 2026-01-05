// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSREQUEST_HPP_
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
  class DescribeInvocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(CommandName, commandName_);
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(IncludeOutput, includeOutput_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeStatus, invokeStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Timed, timed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(IncludeOutput, includeOutput_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeStatus, invokeStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Timed, timed_);
    };
    DescribeInvocationsRequest() = default ;
    DescribeInvocationsRequest(const DescribeInvocationsRequest &) = default ;
    DescribeInvocationsRequest(DescribeInvocationsRequest &&) = default ;
    DescribeInvocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsRequest() = default ;
    DescribeInvocationsRequest& operator=(const DescribeInvocationsRequest &) = default ;
    DescribeInvocationsRequest& operator=(DescribeInvocationsRequest &&) = default ;
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
      // The command task ID.
      shared_ptr<string> key_ {};
      // The ID of the resource group. After you set this parameter, command execution results in the specified resource group are queried.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->commandId_ == nullptr
        && this->commandName_ == nullptr && this->commandType_ == nullptr && this->contentEncoding_ == nullptr && this->includeOutput_ == nullptr && this->instanceId_ == nullptr
        && this->invokeId_ == nullptr && this->invokeStatus_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->repeatMode_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->timed_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeInvocationsRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // commandName Field Functions 
    bool hasCommandName() const { return this->commandName_ != nullptr;};
    void deleteCommandName() { this->commandName_ = nullptr;};
    inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
    inline DescribeInvocationsRequest& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DescribeInvocationsRequest& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline DescribeInvocationsRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // includeOutput Field Functions 
    bool hasIncludeOutput() const { return this->includeOutput_ != nullptr;};
    void deleteIncludeOutput() { this->includeOutput_ = nullptr;};
    inline bool getIncludeOutput() const { DARABONBA_PTR_GET_DEFAULT(includeOutput_, false) };
    inline DescribeInvocationsRequest& setIncludeOutput(bool includeOutput) { DARABONBA_PTR_SET_VALUE(includeOutput_, includeOutput) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInvocationsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeInvocationsRequest& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeStatus Field Functions 
    bool hasInvokeStatus() const { return this->invokeStatus_ != nullptr;};
    void deleteInvokeStatus() { this->invokeStatus_ = nullptr;};
    inline string getInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeStatus_, "") };
    inline DescribeInvocationsRequest& setInvokeStatus(string invokeStatus) { DARABONBA_PTR_SET_VALUE(invokeStatus_, invokeStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInvocationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeInvocationsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInvocationsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInvocationsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInvocationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInvocationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline DescribeInvocationsRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInvocationsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeInvocationsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeInvocationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeInvocationsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeInvocationsRequest::Tag>) };
    inline vector<DescribeInvocationsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeInvocationsRequest::Tag>) };
    inline DescribeInvocationsRequest& setTag(const vector<DescribeInvocationsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeInvocationsRequest& setTag(vector<DescribeInvocationsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline bool getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
    inline DescribeInvocationsRequest& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


  protected:
    // $.parameters[15].schema.items.description
    shared_ptr<string> commandId_ {};
    // $.parameters[15].schema.items.example
    shared_ptr<string> commandName_ {};
    // $.parameters[15].schema.items.enumValueTitles
    shared_ptr<string> commandType_ {};
    shared_ptr<string> contentEncoding_ {};
    shared_ptr<bool> includeOutput_ {};
    // $.parameters[15].schema.enumValueTitles
    shared_ptr<string> instanceId_ {};
    // $.parameters[15].schema.items.properties.Value.enumValueTitles
    shared_ptr<string> invokeId_ {};
    // $.parameters[15].schema.example
    shared_ptr<string> invokeStatus_ {};
    // acs:ecs:{#regionId}:{#accountId}:instance/*
    shared_ptr<int32_t> maxResults_ {};
    // Instance
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // acs:ecs:{#regionId}:{#accountId}:command/*
    shared_ptr<int64_t> pageNumber_ {};
    // Command
    shared_ptr<int64_t> pageSize_ {};
    // $.parameters[15].schema.items.properties.Value.description
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // FEATUREecsXZ3H4M
    shared_ptr<string> repeatMode_ {};
    // $.parameters[15].schema.items.properties.Value.example
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // dubbo
    shared_ptr<vector<DescribeInvocationsRequest::Tag>> tag_ {};
    // $.parameters[15].schema.description
    shared_ptr<bool> timed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
