// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODY_HPP_
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
  class DescribeSendFileResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocations, invocations_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSendFileResultsResponseBody() = default ;
    DescribeSendFileResultsResponseBody(const DescribeSendFileResultsResponseBody &) = default ;
    DescribeSendFileResultsResponseBody(DescribeSendFileResultsResponseBody &&) = default ;
    DescribeSendFileResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBody() = default ;
    DescribeSendFileResultsResponseBody& operator=(const DescribeSendFileResultsResponseBody &) = default ;
    DescribeSendFileResultsResponseBody& operator=(DescribeSendFileResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Invocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Invocations& obj) { 
        DARABONBA_PTR_TO_JSON(Invocation, invocation_);
      };
      friend void from_json(const Darabonba::Json& j, Invocations& obj) { 
        DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
      };
      Invocations() = default ;
      Invocations(const Invocations &) = default ;
      Invocations(Invocations &&) = default ;
      Invocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Invocations() = default ;
      Invocations& operator=(const Invocations &) = default ;
      Invocations& operator=(Invocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Invocation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Invocation& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FileGroup, fileGroup_);
          DARABONBA_PTR_TO_JSON(FileMode, fileMode_);
          DARABONBA_PTR_TO_JSON(FileOwner, fileOwner_);
          DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
          DARABONBA_PTR_TO_JSON(InvokeInstances, invokeInstances_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TargetDir, targetDir_);
          DARABONBA_PTR_TO_JSON(VmCount, vmCount_);
        };
        friend void from_json(const Darabonba::Json& j, Invocation& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FileGroup, fileGroup_);
          DARABONBA_PTR_FROM_JSON(FileMode, fileMode_);
          DARABONBA_PTR_FROM_JSON(FileOwner, fileOwner_);
          DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
          DARABONBA_PTR_FROM_JSON(InvokeInstances, invokeInstances_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TargetDir, targetDir_);
          DARABONBA_PTR_FROM_JSON(VmCount, vmCount_);
        };
        Invocation() = default ;
        Invocation(const Invocation &) = default ;
        Invocation(Invocation &&) = default ;
        Invocation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Invocation() = default ;
        Invocation& operator=(const Invocation &) = default ;
        Invocation& operator=(Invocation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag key of the file sending task.
            shared_ptr<string> tagKey_ {};
            // The tag value of the file sending task.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class InvokeInstances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvokeInstances& obj) { 
            DARABONBA_PTR_TO_JSON(InvokeInstance, invokeInstance_);
          };
          friend void from_json(const Darabonba::Json& j, InvokeInstances& obj) { 
            DARABONBA_PTR_FROM_JSON(InvokeInstance, invokeInstance_);
          };
          InvokeInstances() = default ;
          InvokeInstances(const InvokeInstances &) = default ;
          InvokeInstances(InvokeInstances &&) = default ;
          InvokeInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvokeInstances() = default ;
          InvokeInstances& operator=(const InvokeInstances &) = default ;
          InvokeInstances& operator=(InvokeInstances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InvokeInstance : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InvokeInstance& obj) { 
              DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            };
            friend void from_json(const Darabonba::Json& j, InvokeInstance& obj) { 
              DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            };
            InvokeInstance() = default ;
            InvokeInstance(const InvokeInstance &) = default ;
            InvokeInstance(InvokeInstance &&) = default ;
            InvokeInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InvokeInstance() = default ;
            InvokeInstance& operator=(const InvokeInstance &) = default ;
            InvokeInstance& operator=(InvokeInstance &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->errorCode_ == nullptr && this->errorInfo_ == nullptr && this->finishTime_ == nullptr && this->instanceId_ == nullptr && this->invocationStatus_ == nullptr
        && this->startTime_ == nullptr && this->updateTime_ == nullptr; };
            // creationTime Field Functions 
            bool hasCreationTime() const { return this->creationTime_ != nullptr;};
            void deleteCreationTime() { this->creationTime_ = nullptr;};
            inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
            inline InvokeInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline InvokeInstance& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorInfo Field Functions 
            bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
            void deleteErrorInfo() { this->errorInfo_ = nullptr;};
            inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
            inline InvokeInstance& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


            // finishTime Field Functions 
            bool hasFinishTime() const { return this->finishTime_ != nullptr;};
            void deleteFinishTime() { this->finishTime_ = nullptr;};
            inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
            inline InvokeInstance& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline InvokeInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // invocationStatus Field Functions 
            bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
            void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
            inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
            inline InvokeInstance& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline InvokeInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline InvokeInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          protected:
            // The creation time of the file sending task.
            shared_ptr<string> creationTime_ {};
            // The error code returned when the file failed to be sent to the instance. Valid values:
            // 
            // *   Null: The file is sent to the instance.
            // *   InstanceNotExists: The instance does not exist or has been released.
            // *   InstanceReleased: The instance is released while the file is being sent.
            // *   InstanceNotRunning: The instance is not running when the file sending task is being created.
            // *   AccountNotExists: The specified account does not exist.
            // *   ClientNotRunning: Cloud Assistant Agent is not running.
            // *   ClientNotResponse: Cloud Assistant Agent does not respond.
            // *   ClientIsUpgrading: Cloud Assistant Agent is being upgraded.
            // *   ClientNeedUpgrade: Cloud Assistant Agent needs to be upgraded.
            // *   DeliveryTimeout: The file sending task timed out.
            // *   FileCreateFail: The file failed to be created.
            // *   FileAlreadyExists: A file with the same name exists in the specified directory.
            // *   FileContentInvalid: The file content is invalid.
            // *   FileNameInvalid: The file name is invalid.
            // *   FilePathInvalid: The specified directory is invalid.
            // *   FileAuthorityInvalid: The specified permissions on the file are invalid.
            // *   UserGroupNotExists: The specified user group does not exist.
            shared_ptr<string> errorCode_ {};
            // The error message returned when the file failed to be sent or the file sending task failed to be executed. Valid values:
            // 
            // *   Null: The file is sent to the instance.
            // *   the specified instance does not exists
            // *   the specified instance has been released
            // *   the instance is not running when create task
            // *   the specified account does not exists
            // *   the aliyun service is not running on the instance
            // *   the aliyun service in the instance does not response
            // *   the aliyun service in the instance is upgrading now
            // *   the aliyun service in the instance need upgrade
            // *   the command delivery has been timeout
            // *   the file creation is failed due to unknown error
            // *   the authority of file is invalid
            // *   File content is empty
            // *   the content of file is invalid
            // *   File already exists
            // *   File name is invalid
            // *   File path is invalid
            // *   Owner not exists
            // *   Group not exists
            // *   Mode is invalid
            shared_ptr<string> errorInfo_ {};
            // The time when the file sending task was completed.
            shared_ptr<string> finishTime_ {};
            // The ID of the instance.
            shared_ptr<string> instanceId_ {};
            // The status of the file sending task. Valid values:
            // 
            // *   Pending: The file is being verified or sent.
            // *   Invalid: The file is invalid.
            // *   Running: The file is being sent to the instance.
            // *   Aborted: The file failed to be sent to the instance.
            // *   Success: The file is sent.
            // *   Failed: The file failed to be created on the instance.
            // *   Error: An error occurred and interrupted the file sending task.
            // *   Timeout: The file sending task timed out.
            shared_ptr<string> invocationStatus_ {};
            // The time when the file sending task started to be executed on the instance.
            shared_ptr<string> startTime_ {};
            // The time when the task status was last updated.
            shared_ptr<string> updateTime_ {};
          };

          virtual bool empty() const override { return this->invokeInstance_ == nullptr; };
          // invokeInstance Field Functions 
          bool hasInvokeInstance() const { return this->invokeInstance_ != nullptr;};
          void deleteInvokeInstance() { this->invokeInstance_ = nullptr;};
          inline const vector<InvokeInstances::InvokeInstance> & getInvokeInstance() const { DARABONBA_PTR_GET_CONST(invokeInstance_, vector<InvokeInstances::InvokeInstance>) };
          inline vector<InvokeInstances::InvokeInstance> getInvokeInstance() { DARABONBA_PTR_GET(invokeInstance_, vector<InvokeInstances::InvokeInstance>) };
          inline InvokeInstances& setInvokeInstance(const vector<InvokeInstances::InvokeInstance> & invokeInstance) { DARABONBA_PTR_SET_VALUE(invokeInstance_, invokeInstance) };
          inline InvokeInstances& setInvokeInstance(vector<InvokeInstances::InvokeInstance> && invokeInstance) { DARABONBA_PTR_SET_RVALUE(invokeInstance_, invokeInstance) };


        protected:
          shared_ptr<vector<InvokeInstances::InvokeInstance>> invokeInstance_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->fileGroup_ == nullptr && this->fileMode_ == nullptr
        && this->fileOwner_ == nullptr && this->invocationStatus_ == nullptr && this->invokeId_ == nullptr && this->invokeInstances_ == nullptr && this->name_ == nullptr
        && this->overwrite_ == nullptr && this->tags_ == nullptr && this->targetDir_ == nullptr && this->vmCount_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Invocation& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline Invocation& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Invocation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Invocation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fileGroup Field Functions 
        bool hasFileGroup() const { return this->fileGroup_ != nullptr;};
        void deleteFileGroup() { this->fileGroup_ = nullptr;};
        inline string getFileGroup() const { DARABONBA_PTR_GET_DEFAULT(fileGroup_, "") };
        inline Invocation& setFileGroup(string fileGroup) { DARABONBA_PTR_SET_VALUE(fileGroup_, fileGroup) };


        // fileMode Field Functions 
        bool hasFileMode() const { return this->fileMode_ != nullptr;};
        void deleteFileMode() { this->fileMode_ = nullptr;};
        inline string getFileMode() const { DARABONBA_PTR_GET_DEFAULT(fileMode_, "") };
        inline Invocation& setFileMode(string fileMode) { DARABONBA_PTR_SET_VALUE(fileMode_, fileMode) };


        // fileOwner Field Functions 
        bool hasFileOwner() const { return this->fileOwner_ != nullptr;};
        void deleteFileOwner() { this->fileOwner_ = nullptr;};
        inline string getFileOwner() const { DARABONBA_PTR_GET_DEFAULT(fileOwner_, "") };
        inline Invocation& setFileOwner(string fileOwner) { DARABONBA_PTR_SET_VALUE(fileOwner_, fileOwner) };


        // invocationStatus Field Functions 
        bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
        void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
        inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
        inline Invocation& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


        // invokeId Field Functions 
        bool hasInvokeId() const { return this->invokeId_ != nullptr;};
        void deleteInvokeId() { this->invokeId_ = nullptr;};
        inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
        inline Invocation& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


        // invokeInstances Field Functions 
        bool hasInvokeInstances() const { return this->invokeInstances_ != nullptr;};
        void deleteInvokeInstances() { this->invokeInstances_ = nullptr;};
        inline const Invocation::InvokeInstances & getInvokeInstances() const { DARABONBA_PTR_GET_CONST(invokeInstances_, Invocation::InvokeInstances) };
        inline Invocation::InvokeInstances getInvokeInstances() { DARABONBA_PTR_GET(invokeInstances_, Invocation::InvokeInstances) };
        inline Invocation& setInvokeInstances(const Invocation::InvokeInstances & invokeInstances) { DARABONBA_PTR_SET_VALUE(invokeInstances_, invokeInstances) };
        inline Invocation& setInvokeInstances(Invocation::InvokeInstances && invokeInstances) { DARABONBA_PTR_SET_RVALUE(invokeInstances_, invokeInstances) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Invocation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // overwrite Field Functions 
        bool hasOverwrite() const { return this->overwrite_ != nullptr;};
        void deleteOverwrite() { this->overwrite_ = nullptr;};
        inline string getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, "") };
        inline Invocation& setOverwrite(string overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Invocation::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Invocation::Tags) };
        inline Invocation::Tags getTags() { DARABONBA_PTR_GET(tags_, Invocation::Tags) };
        inline Invocation& setTags(const Invocation::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Invocation& setTags(Invocation::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // targetDir Field Functions 
        bool hasTargetDir() const { return this->targetDir_ != nullptr;};
        void deleteTargetDir() { this->targetDir_ = nullptr;};
        inline string getTargetDir() const { DARABONBA_PTR_GET_DEFAULT(targetDir_, "") };
        inline Invocation& setTargetDir(string targetDir) { DARABONBA_PTR_SET_VALUE(targetDir_, targetDir) };


        // vmCount Field Functions 
        bool hasVmCount() const { return this->vmCount_ != nullptr;};
        void deleteVmCount() { this->vmCount_ = nullptr;};
        inline int32_t getVmCount() const { DARABONBA_PTR_GET_DEFAULT(vmCount_, 0) };
        inline Invocation& setVmCount(int32_t vmCount) { DARABONBA_PTR_SET_VALUE(vmCount_, vmCount) };


      protected:
        // The content of the file.
        shared_ptr<string> content_ {};
        // The type of the file content. Valid values:
        // 
        // *   PlainText: The file content is not encoded.
        // *   Base64: The file content is encoded in Base64.
        shared_ptr<string> contentType_ {};
        // The time when the file sending task was created.
        shared_ptr<string> creationTime_ {};
        // The description of the file.
        shared_ptr<string> description_ {};
        // The group of the file.
        shared_ptr<string> fileGroup_ {};
        // The permissions on the file.
        shared_ptr<string> fileMode_ {};
        // The owner of the file.
        shared_ptr<string> fileOwner_ {};
        // The overall sending status of the file. The overall sending status of the file varies based on the sending status of the file on all destination instances. Valid values:
        // 
        // *   Pending: The file is being verified or sent. If the sending state of the file on at least one instance is Pending, the overall sending state of the file is Pending.
        // 
        // *   Running: The file is being sent to the instances. If the sending state of the file on at least one instance is Running, the overall sending state of the file is Running.
        // 
        // *   Success: If the sending state of the file on all instances is Success, the overall sending state of the file is Success.
        // 
        // *   If the sending state of the file on all instances is Failed, the overall sending state of the file is Failed. If the sending state of the file on one or more instances is one of the following values, the overall sending state of the file is Failed:
        // 
        //     *   Invalid: The file is invalid.
        //     *   Aborted: The file failed to be sent to the instances.
        //     *   Failed: The file failed to be created on the instances.
        //     *   Timeout: The file sending task timed out.
        //     *   Error: An error occurred and interrupted the file sending task.
        // 
        // *   PartialFailed: The file sending task was completed on some instances but failed on other instances. If the sending state of the file is Success on some instances and is Failed on other instances, the overall sending state of the file is PartialFailed.
        shared_ptr<string> invocationStatus_ {};
        // The ID of the file sending task.
        shared_ptr<string> invokeId_ {};
        // The destination instances.
        shared_ptr<Invocation::InvokeInstances> invokeInstances_ {};
        // The name of the file.
        shared_ptr<string> name_ {};
        // Indicates whether a file in the destination directory is overwritten if the file has the same name as the sent file.
        shared_ptr<string> overwrite_ {};
        // The tags of the file sending task.
        shared_ptr<Invocation::Tags> tags_ {};
        // The destination directory.
        shared_ptr<string> targetDir_ {};
        // The number of the destination instances.
        shared_ptr<int32_t> vmCount_ {};
      };

      virtual bool empty() const override { return this->invocation_ == nullptr; };
      // invocation Field Functions 
      bool hasInvocation() const { return this->invocation_ != nullptr;};
      void deleteInvocation() { this->invocation_ = nullptr;};
      inline const vector<Invocations::Invocation> & getInvocation() const { DARABONBA_PTR_GET_CONST(invocation_, vector<Invocations::Invocation>) };
      inline vector<Invocations::Invocation> getInvocation() { DARABONBA_PTR_GET(invocation_, vector<Invocations::Invocation>) };
      inline Invocations& setInvocation(const vector<Invocations::Invocation> & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
      inline Invocations& setInvocation(vector<Invocations::Invocation> && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


    protected:
      shared_ptr<vector<Invocations::Invocation>> invocation_ {};
    };

    virtual bool empty() const override { return this->invocations_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const DescribeSendFileResultsResponseBody::Invocations & getInvocations() const { DARABONBA_PTR_GET_CONST(invocations_, DescribeSendFileResultsResponseBody::Invocations) };
    inline DescribeSendFileResultsResponseBody::Invocations getInvocations() { DARABONBA_PTR_GET(invocations_, DescribeSendFileResultsResponseBody::Invocations) };
    inline DescribeSendFileResultsResponseBody& setInvocations(const DescribeSendFileResultsResponseBody::Invocations & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline DescribeSendFileResultsResponseBody& setInvocations(DescribeSendFileResultsResponseBody::Invocations && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSendFileResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSendFileResultsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSendFileResultsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSendFileResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSendFileResultsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The file sending records.
    shared_ptr<DescribeSendFileResultsResponseBody::Invocations> invocations_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of file sending tasks queried.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
