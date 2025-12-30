// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHMEDIAPRODUCINGJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListBatchMediaProducingJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EditingBatchJobList, editingBatchJobList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchMediaProducingJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingBatchJobList, editingBatchJobList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBatchMediaProducingJobsResponseBody() = default ;
    ListBatchMediaProducingJobsResponseBody(const ListBatchMediaProducingJobsResponseBody &) = default ;
    ListBatchMediaProducingJobsResponseBody(ListBatchMediaProducingJobsResponseBody &&) = default ;
    ListBatchMediaProducingJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchMediaProducingJobsResponseBody() = default ;
    ListBatchMediaProducingJobsResponseBody& operator=(const ListBatchMediaProducingJobsResponseBody &) = default ;
    ListBatchMediaProducingJobsResponseBody& operator=(ListBatchMediaProducingJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EditingBatchJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EditingBatchJobList& obj) { 
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, EditingBatchJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      EditingBatchJobList() = default ;
      EditingBatchJobList(const EditingBatchJobList &) = default ;
      EditingBatchJobList(EditingBatchJobList &&) = default ;
      EditingBatchJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EditingBatchJobList() = default ;
      EditingBatchJobList& operator=(const EditingBatchJobList &) = default ;
      EditingBatchJobList& operator=(EditingBatchJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->createTime_ == nullptr && this->editingConfig_ == nullptr && this->extend_ == nullptr && this->inputConfig_ == nullptr && this->jobId_ == nullptr
        && this->jobType_ == nullptr && this->modifiedTime_ == nullptr && this->outputConfig_ == nullptr && this->status_ == nullptr && this->userData_ == nullptr; };
      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
      inline EditingBatchJobList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline EditingBatchJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // editingConfig Field Functions 
      bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
      void deleteEditingConfig() { this->editingConfig_ = nullptr;};
      inline string getEditingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
      inline EditingBatchJobList& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline EditingBatchJobList& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // inputConfig Field Functions 
      bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
      void deleteInputConfig() { this->inputConfig_ = nullptr;};
      inline string getInputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
      inline EditingBatchJobList& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline EditingBatchJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline EditingBatchJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline EditingBatchJobList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // outputConfig Field Functions 
      bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
      void deleteOutputConfig() { this->outputConfig_ = nullptr;};
      inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
      inline EditingBatchJobList& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline EditingBatchJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline EditingBatchJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The time when the job was complete. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> completeTime_ {};
      // The time when the job was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The editing configurations. For more information, see [EditingConfig](~~2692547#1be9bba03b7qu~~).
      shared_ptr<string> editingConfig_ {};
      // The extended information of the job.
      shared_ptr<string> extend_ {};
      // The input configurations.
      shared_ptr<string> inputConfig_ {};
      // The ID of the quick video production job.
      shared_ptr<string> jobId_ {};
      // The job type.
      // 
      // Valid values:
      // 
      // *   Script: script-based editing job that mixes media assets.
      // *   Smart_Mix: intelligent editing job that mixes media assets.
      shared_ptr<string> jobType_ {};
      // The time when the job was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The output configurations. For more information, see [OutputConfig](~~2692547#447b928fcbuoa~~).
      shared_ptr<string> outputConfig_ {};
      // The job state.
      // 
      // Valid values:
      // 
      // *   Finished
      // *   Init
      // *   Failed
      // *   Processing
      shared_ptr<string> status_ {};
      // The user-defined data in the JSON format, which can be up to 512 bytes in length. You can specify a custom callback URL. For more information, see [Configure a callback upon editing completion](https://help.aliyun.com/document_detail/451631.html).
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->editingBatchJobList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // editingBatchJobList Field Functions 
    bool hasEditingBatchJobList() const { return this->editingBatchJobList_ != nullptr;};
    void deleteEditingBatchJobList() { this->editingBatchJobList_ = nullptr;};
    inline const vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList> & getEditingBatchJobList() const { DARABONBA_PTR_GET_CONST(editingBatchJobList_, vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList>) };
    inline vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList> getEditingBatchJobList() { DARABONBA_PTR_GET(editingBatchJobList_, vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList>) };
    inline ListBatchMediaProducingJobsResponseBody& setEditingBatchJobList(const vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList> & editingBatchJobList) { DARABONBA_PTR_SET_VALUE(editingBatchJobList_, editingBatchJobList) };
    inline ListBatchMediaProducingJobsResponseBody& setEditingBatchJobList(vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList> && editingBatchJobList) { DARABONBA_PTR_SET_RVALUE(editingBatchJobList_, editingBatchJobList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBatchMediaProducingJobsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBatchMediaProducingJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBatchMediaProducingJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried quick video production jobs.
    shared_ptr<vector<ListBatchMediaProducingJobsResponseBody::EditingBatchJobList>> editingBatchJobList_ {};
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
