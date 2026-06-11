// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListRayJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(submissionId, submissionId_);
      DARABONBA_PTR_TO_JSON(submitTime, submitTimeShrink_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(submissionId, submissionId_);
      DARABONBA_PTR_FROM_JSON(submitTime, submitTimeShrink_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
    };
    ListRayJobShrinkRequest() = default ;
    ListRayJobShrinkRequest(const ListRayJobShrinkRequest &) = default ;
    ListRayJobShrinkRequest(ListRayJobShrinkRequest &&) = default ;
    ListRayJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayJobShrinkRequest() = default ;
    ListRayJobShrinkRequest& operator=(const ListRayJobShrinkRequest &) = default ;
    ListRayJobShrinkRequest& operator=(ListRayJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->submissionId_ == nullptr && this->submitTimeShrink_ == nullptr && this->taskBizId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRayJobShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListRayJobShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRayJobShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // submissionId Field Functions 
    bool hasSubmissionId() const { return this->submissionId_ != nullptr;};
    void deleteSubmissionId() { this->submissionId_ = nullptr;};
    inline string getSubmissionId() const { DARABONBA_PTR_GET_DEFAULT(submissionId_, "") };
    inline ListRayJobShrinkRequest& setSubmissionId(string submissionId) { DARABONBA_PTR_SET_VALUE(submissionId_, submissionId) };


    // submitTimeShrink Field Functions 
    bool hasSubmitTimeShrink() const { return this->submitTimeShrink_ != nullptr;};
    void deleteSubmitTimeShrink() { this->submitTimeShrink_ = nullptr;};
    inline string getSubmitTimeShrink() const { DARABONBA_PTR_GET_DEFAULT(submitTimeShrink_, "") };
    inline ListRayJobShrinkRequest& setSubmitTimeShrink(string submitTimeShrink) { DARABONBA_PTR_SET_VALUE(submitTimeShrink_, submitTimeShrink) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string getTaskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline ListRayJobShrinkRequest& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> submissionId_ {};
    shared_ptr<string> submitTimeShrink_ {};
    shared_ptr<string> taskBizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
