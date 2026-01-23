// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIssue, instanceIssue_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceSpecification, instanceSpecification_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIssue, instanceIssue_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceSpecification, instanceSpecification_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->instanceIssue_ == nullptr && this->instanceName_ == nullptr && this->instanceSpecification_ == nullptr
        && this->instanceStatus_ == nullptr && this->isSuccess_ == nullptr && this->modifiedTime_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetInstanceResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIssue Field Functions 
    bool hasInstanceIssue() const { return this->instanceIssue_ != nullptr;};
    void deleteInstanceIssue() { this->instanceIssue_ = nullptr;};
    inline string getInstanceIssue() const { DARABONBA_PTR_GET_DEFAULT(instanceIssue_, "") };
    inline GetInstanceResponseBody& setInstanceIssue(string instanceIssue) { DARABONBA_PTR_SET_VALUE(instanceIssue_, instanceIssue) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceSpecification Field Functions 
    bool hasInstanceSpecification() const { return this->instanceSpecification_ != nullptr;};
    void deleteInstanceSpecification() { this->instanceSpecification_ = nullptr;};
    inline string getInstanceSpecification() const { DARABONBA_PTR_GET_DEFAULT(instanceSpecification_, "") };
    inline GetInstanceResponseBody& setInstanceSpecification(string instanceSpecification) { DARABONBA_PTR_SET_VALUE(instanceSpecification_, instanceSpecification) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetInstanceResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetInstanceResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetInstanceResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetInstanceResponseBody::Tags>) };
    inline vector<GetInstanceResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetInstanceResponseBody::Tags>) };
    inline GetInstanceResponseBody& setTags(const vector<GetInstanceResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBody& setTags(vector<GetInstanceResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> code_ {};
    // The time when the instance was created.
    shared_ptr<int64_t> createTime_ {};
    // The ID of the Container Registry instance.
    shared_ptr<string> instanceId_ {};
    // The issue occurs on the instance.
    shared_ptr<string> instanceIssue_ {};
    // The name of the instance.
    shared_ptr<string> instanceName_ {};
    // The edition of the instance. Valid values: Enterprise_Basic: Basic Edition instances Enterprise_Standard: Standard Edition instances Enterprise_Advanced: Advanced Edition instances
    shared_ptr<string> instanceSpecification_ {};
    // The status of the instance. Valid values:
    // 
    // *   `PENDING`: The instance is being initialized.
    // *   `INIT_ERROR`: The instance failed to be initialized.
    // *   `STARTING`: The instance is being started.
    // *   `RUNNING`: The instance is running.
    // *   `STOPPING`: The instance is being stopped.
    // *   `STOPPED`: The instance is stopped.
    // *   `DELETING`: The instance is being deleted.
    // *   `DELETED`: The instance is deleted.
    shared_ptr<string> instanceStatus_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The time when the instance was last modified.
    shared_ptr<int64_t> modifiedTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tags of the instance.
    shared_ptr<vector<GetInstanceResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
