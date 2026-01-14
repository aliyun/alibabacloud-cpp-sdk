// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYINDIVIDUATIONTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class BatchQueryIndividuationTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryIndividuationTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(textList, textList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryIndividuationTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(textList, textList_);
    };
    BatchQueryIndividuationTextResponseBody() = default ;
    BatchQueryIndividuationTextResponseBody(const BatchQueryIndividuationTextResponseBody &) = default ;
    BatchQueryIndividuationTextResponseBody(BatchQueryIndividuationTextResponseBody &&) = default ;
    BatchQueryIndividuationTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryIndividuationTextResponseBody() = default ;
    BatchQueryIndividuationTextResponseBody& operator=(const BatchQueryIndividuationTextResponseBody &) = default ;
    BatchQueryIndividuationTextResponseBody& operator=(BatchQueryIndividuationTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TextList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TextList& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(itemId, itemId_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(textId, textId_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TextList& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(itemId, itemId_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(textId, textId_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      TextList() = default ;
      TextList(const TextList &) = default ;
      TextList(TextList &&) = default ;
      TextList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TextList() = default ;
      TextList& operator=(const TextList &) = default ;
      TextList& operator=(TextList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->errorMsg_ == nullptr && this->itemId_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr && this->textId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline TextList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TextList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline TextList& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline TextList& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline TextList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TextList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TextList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // textId Field Functions 
      bool hasTextId() const { return this->textId_ != nullptr;};
      void deleteTextId() { this->textId_ = nullptr;};
      inline string getTextId() const { DARABONBA_PTR_GET_DEFAULT(textId_, "") };
      inline TextList& setTextId(string textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TextList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TextList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorMsg_ {};
      shared_ptr<string> itemId_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> textId_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->textList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryIndividuationTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // textList Field Functions 
    bool hasTextList() const { return this->textList_ != nullptr;};
    void deleteTextList() { this->textList_ = nullptr;};
    inline const vector<BatchQueryIndividuationTextResponseBody::TextList> & getTextList() const { DARABONBA_PTR_GET_CONST(textList_, vector<BatchQueryIndividuationTextResponseBody::TextList>) };
    inline vector<BatchQueryIndividuationTextResponseBody::TextList> getTextList() { DARABONBA_PTR_GET(textList_, vector<BatchQueryIndividuationTextResponseBody::TextList>) };
    inline BatchQueryIndividuationTextResponseBody& setTextList(const vector<BatchQueryIndividuationTextResponseBody::TextList> & textList) { DARABONBA_PTR_SET_VALUE(textList_, textList) };
    inline BatchQueryIndividuationTextResponseBody& setTextList(vector<BatchQueryIndividuationTextResponseBody::TextList> && textList) { DARABONBA_PTR_SET_RVALUE(textList_, textList) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<BatchQueryIndividuationTextResponseBody::TextList>> textList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
