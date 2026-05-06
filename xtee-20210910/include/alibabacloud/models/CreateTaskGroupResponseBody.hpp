// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateTaskGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CreateTaskGroupResponseBody() = default ;
    CreateTaskGroupResponseBody(const CreateTaskGroupResponseBody &) = default ;
    CreateTaskGroupResponseBody(CreateTaskGroupResponseBody &&) = default ;
    CreateTaskGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskGroupResponseBody() = default ;
    CreateTaskGroupResponseBody& operator=(const CreateTaskGroupResponseBody &) = default ;
    CreateTaskGroupResponseBody& operator=(CreateTaskGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_TO_JSON(GroupStatus, groupStatus_);
        DARABONBA_PTR_TO_JSON(SampleNames, sampleNames_);
        DARABONBA_PTR_TO_JSON(SubTaskCount, subTaskCount_);
        DARABONBA_PTR_TO_JSON(Tab, tab_);
        DARABONBA_PTR_TO_JSON(TaskGroupId, taskGroupId_);
        DARABONBA_PTR_TO_JSON(TaskGroupName, taskGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_FROM_JSON(GroupStatus, groupStatus_);
        DARABONBA_PTR_FROM_JSON(SampleNames, sampleNames_);
        DARABONBA_PTR_FROM_JSON(SubTaskCount, subTaskCount_);
        DARABONBA_PTR_FROM_JSON(Tab, tab_);
        DARABONBA_PTR_FROM_JSON(TaskGroupId, taskGroupId_);
        DARABONBA_PTR_FROM_JSON(TaskGroupName, taskGroupName_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorUserId_ == nullptr && this->groupStatus_ == nullptr && this->sampleNames_ == nullptr && this->subTaskCount_ == nullptr && this->tab_ == nullptr
        && this->taskGroupId_ == nullptr && this->taskGroupName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ResultObject& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorUserId Field Functions 
      bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
      void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
      inline int32_t getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, 0) };
      inline ResultObject& setCreatorUserId(int32_t creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


      // groupStatus Field Functions 
      bool hasGroupStatus() const { return this->groupStatus_ != nullptr;};
      void deleteGroupStatus() { this->groupStatus_ = nullptr;};
      inline string getGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(groupStatus_, "") };
      inline ResultObject& setGroupStatus(string groupStatus) { DARABONBA_PTR_SET_VALUE(groupStatus_, groupStatus) };


      // sampleNames Field Functions 
      bool hasSampleNames() const { return this->sampleNames_ != nullptr;};
      void deleteSampleNames() { this->sampleNames_ = nullptr;};
      inline const vector<string> & getSampleNames() const { DARABONBA_PTR_GET_CONST(sampleNames_, vector<string>) };
      inline vector<string> getSampleNames() { DARABONBA_PTR_GET(sampleNames_, vector<string>) };
      inline ResultObject& setSampleNames(const vector<string> & sampleNames) { DARABONBA_PTR_SET_VALUE(sampleNames_, sampleNames) };
      inline ResultObject& setSampleNames(vector<string> && sampleNames) { DARABONBA_PTR_SET_RVALUE(sampleNames_, sampleNames) };


      // subTaskCount Field Functions 
      bool hasSubTaskCount() const { return this->subTaskCount_ != nullptr;};
      void deleteSubTaskCount() { this->subTaskCount_ = nullptr;};
      inline int32_t getSubTaskCount() const { DARABONBA_PTR_GET_DEFAULT(subTaskCount_, 0) };
      inline ResultObject& setSubTaskCount(int32_t subTaskCount) { DARABONBA_PTR_SET_VALUE(subTaskCount_, subTaskCount) };


      // tab Field Functions 
      bool hasTab() const { return this->tab_ != nullptr;};
      void deleteTab() { this->tab_ = nullptr;};
      inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
      inline ResultObject& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


      // taskGroupId Field Functions 
      bool hasTaskGroupId() const { return this->taskGroupId_ != nullptr;};
      void deleteTaskGroupId() { this->taskGroupId_ = nullptr;};
      inline int32_t getTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(taskGroupId_, 0) };
      inline ResultObject& setTaskGroupId(int32_t taskGroupId) { DARABONBA_PTR_SET_VALUE(taskGroupId_, taskGroupId) };


      // taskGroupName Field Functions 
      bool hasTaskGroupName() const { return this->taskGroupName_ != nullptr;};
      void deleteTaskGroupName() { this->taskGroupName_ = nullptr;};
      inline string getTaskGroupName() const { DARABONBA_PTR_GET_DEFAULT(taskGroupName_, "") };
      inline ResultObject& setTaskGroupName(string taskGroupName) { DARABONBA_PTR_SET_VALUE(taskGroupName_, taskGroupName) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<int32_t> creatorUserId_ {};
      shared_ptr<string> groupStatus_ {};
      shared_ptr<vector<string>> sampleNames_ {};
      shared_ptr<int32_t> subTaskCount_ {};
      shared_ptr<string> tab_ {};
      shared_ptr<int32_t> taskGroupId_ {};
      shared_ptr<string> taskGroupName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTaskGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline CreateTaskGroupResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTaskGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTaskGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CreateTaskGroupResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CreateTaskGroupResponseBody::ResultObject) };
    inline CreateTaskGroupResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CreateTaskGroupResponseBody::ResultObject) };
    inline CreateTaskGroupResponseBody& setResultObject(const CreateTaskGroupResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CreateTaskGroupResponseBody& setResultObject(CreateTaskGroupResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateTaskGroupResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
