// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListRayJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(submissionId, submissionId_);
      DARABONBA_PTR_TO_JSON(submitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(submissionId, submissionId_);
      DARABONBA_PTR_FROM_JSON(submitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
    };
    ListRayJobRequest() = default ;
    ListRayJobRequest(const ListRayJobRequest &) = default ;
    ListRayJobRequest(ListRayJobRequest &&) = default ;
    ListRayJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayJobRequest() = default ;
    ListRayJobRequest& operator=(const ListRayJobRequest &) = default ;
    ListRayJobRequest& operator=(ListRayJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitTime& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitTime& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      SubmitTime() = default ;
      SubmitTime(const SubmitTime &) = default ;
      SubmitTime(SubmitTime &&) = default ;
      SubmitTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitTime() = default ;
      SubmitTime& operator=(const SubmitTime &) = default ;
      SubmitTime& operator=(SubmitTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline SubmitTime& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SubmitTime& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->submissionId_ == nullptr && this->submitTime_ == nullptr && this->taskBizId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRayJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListRayJobRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRayJobRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // submissionId Field Functions 
    bool hasSubmissionId() const { return this->submissionId_ != nullptr;};
    void deleteSubmissionId() { this->submissionId_ = nullptr;};
    inline string getSubmissionId() const { DARABONBA_PTR_GET_DEFAULT(submissionId_, "") };
    inline ListRayJobRequest& setSubmissionId(string submissionId) { DARABONBA_PTR_SET_VALUE(submissionId_, submissionId) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline const ListRayJobRequest::SubmitTime & getSubmitTime() const { DARABONBA_PTR_GET_CONST(submitTime_, ListRayJobRequest::SubmitTime) };
    inline ListRayJobRequest::SubmitTime getSubmitTime() { DARABONBA_PTR_GET(submitTime_, ListRayJobRequest::SubmitTime) };
    inline ListRayJobRequest& setSubmitTime(const ListRayJobRequest::SubmitTime & submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };
    inline ListRayJobRequest& setSubmitTime(ListRayJobRequest::SubmitTime && submitTime) { DARABONBA_PTR_SET_RVALUE(submitTime_, submitTime) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string getTaskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline ListRayJobRequest& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> submissionId_ {};
    shared_ptr<ListRayJobRequest::SubmitTime> submitTime_ {};
    shared_ptr<string> taskBizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
