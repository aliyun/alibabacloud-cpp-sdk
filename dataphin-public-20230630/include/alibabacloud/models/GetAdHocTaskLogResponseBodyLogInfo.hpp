// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADHOCTASKLOGRESPONSEBODYLOGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETADHOCTASKLOGRESPONSEBODYLOGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAdHocTaskLogResponseBodyLogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAdHocTaskLogResponseBodyLogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(HasResult, hasResult_);
      DARABONBA_PTR_TO_JSON(NextOffset, nextOffset_);
      DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetAdHocTaskLogResponseBodyLogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(HasResult, hasResult_);
      DARABONBA_PTR_FROM_JSON(NextOffset, nextOffset_);
      DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetAdHocTaskLogResponseBodyLogInfo() = default ;
    GetAdHocTaskLogResponseBodyLogInfo(const GetAdHocTaskLogResponseBodyLogInfo &) = default ;
    GetAdHocTaskLogResponseBodyLogInfo(GetAdHocTaskLogResponseBodyLogInfo &&) = default ;
    GetAdHocTaskLogResponseBodyLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAdHocTaskLogResponseBodyLogInfo() = default ;
    GetAdHocTaskLogResponseBodyLogInfo& operator=(const GetAdHocTaskLogResponseBodyLogInfo &) = default ;
    GetAdHocTaskLogResponseBodyLogInfo& operator=(GetAdHocTaskLogResponseBodyLogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->hasNext_ == nullptr && return this->hasResult_ == nullptr && return this->nextOffset_ == nullptr && return this->subTaskId_ == nullptr && return this->taskId_ == nullptr
        && return this->taskStatus_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetAdHocTaskLogResponseBodyLogInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline GetAdHocTaskLogResponseBodyLogInfo& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // hasResult Field Functions 
    bool hasHasResult() const { return this->hasResult_ != nullptr;};
    void deleteHasResult() { this->hasResult_ = nullptr;};
    inline bool hasResult() const { DARABONBA_PTR_GET_DEFAULT(hasResult_, false) };
    inline GetAdHocTaskLogResponseBodyLogInfo& setHasResult(bool hasResult) { DARABONBA_PTR_SET_VALUE(hasResult_, hasResult) };


    // nextOffset Field Functions 
    bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
    void deleteNextOffset() { this->nextOffset_ = nullptr;};
    inline int32_t nextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0) };
    inline GetAdHocTaskLogResponseBodyLogInfo& setNextOffset(int32_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


    // subTaskId Field Functions 
    bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
    void deleteSubTaskId() { this->subTaskId_ = nullptr;};
    inline int32_t subTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, 0) };
    inline GetAdHocTaskLogResponseBodyLogInfo& setSubTaskId(int32_t subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAdHocTaskLogResponseBodyLogInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetAdHocTaskLogResponseBodyLogInfo& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> hasNext_ = nullptr;
    std::shared_ptr<bool> hasResult_ = nullptr;
    std::shared_ptr<int32_t> nextOffset_ = nullptr;
    std::shared_ptr<int32_t> subTaskId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
