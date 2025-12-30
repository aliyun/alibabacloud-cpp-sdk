// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTJOBSRESPONSEBODY_HPP_
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
  class ListSmartJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmartJobList, smartJobList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmartJobList, smartJobList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSmartJobsResponseBody() = default ;
    ListSmartJobsResponseBody(const ListSmartJobsResponseBody &) = default ;
    ListSmartJobsResponseBody(ListSmartJobsResponseBody &&) = default ;
    ListSmartJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartJobsResponseBody() = default ;
    ListSmartJobsResponseBody& operator=(const ListSmartJobsResponseBody &) = default ;
    ListSmartJobsResponseBody& operator=(ListSmartJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmartJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmartJobList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
        DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobState, jobState_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, SmartJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
        DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobState, jobState_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      SmartJobList() = default ;
      SmartJobList(const SmartJobList &) = default ;
      SmartJobList(SmartJobList &&) = default ;
      SmartJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmartJobList() = default ;
      SmartJobList& operator=(const SmartJobList &) = default ;
      SmartJobList& operator=(SmartJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OutputConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OutputConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Object, object_);
        };
        friend void from_json(const Darabonba::Json& j, OutputConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Object, object_);
        };
        OutputConfig() = default ;
        OutputConfig(const OutputConfig &) = default ;
        OutputConfig(OutputConfig &&) = default ;
        OutputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OutputConfig() = default ;
        OutputConfig& operator=(const OutputConfig &) = default ;
        OutputConfig& operator=(OutputConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->object_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline OutputConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline OutputConfig& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      protected:
        // The Object Storage Service (OSS) bucket.
        shared_ptr<string> bucket_ {};
        // The OSS object.
        shared_ptr<string> object_ {};
      };

      class InputConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputConfig& obj) { 
          DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
          DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        };
        friend void from_json(const Darabonba::Json& j, InputConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
          DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        };
        InputConfig() = default ;
        InputConfig(const InputConfig &) = default ;
        InputConfig(InputConfig &&) = default ;
        InputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputConfig() = default ;
        InputConfig& operator=(const InputConfig &) = default ;
        InputConfig& operator=(InputConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->inputFile_ == nullptr
        && this->keyword_ == nullptr; };
        // inputFile Field Functions 
        bool hasInputFile() const { return this->inputFile_ != nullptr;};
        void deleteInputFile() { this->inputFile_ = nullptr;};
        inline string getInputFile() const { DARABONBA_PTR_GET_DEFAULT(inputFile_, "") };
        inline InputConfig& setInputFile(string inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };


        // keyword Field Functions 
        bool hasKeyword() const { return this->keyword_ != nullptr;};
        void deleteKeyword() { this->keyword_ = nullptr;};
        inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
        inline InputConfig& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      protected:
        // The information about the input file.
        shared_ptr<string> inputFile_ {};
        // The keyword information.
        shared_ptr<string> keyword_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->editingConfig_ == nullptr && this->inputConfig_ == nullptr && this->jobId_ == nullptr && this->jobState_ == nullptr
        && this->jobType_ == nullptr && this->modifiedTime_ == nullptr && this->outputConfig_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr
        && this->userId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SmartJobList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SmartJobList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // editingConfig Field Functions 
      bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
      void deleteEditingConfig() { this->editingConfig_ = nullptr;};
      inline string getEditingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
      inline SmartJobList& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


      // inputConfig Field Functions 
      bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
      void deleteInputConfig() { this->inputConfig_ = nullptr;};
      inline const SmartJobList::InputConfig & getInputConfig() const { DARABONBA_PTR_GET_CONST(inputConfig_, SmartJobList::InputConfig) };
      inline SmartJobList::InputConfig getInputConfig() { DARABONBA_PTR_GET(inputConfig_, SmartJobList::InputConfig) };
      inline SmartJobList& setInputConfig(const SmartJobList::InputConfig & inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };
      inline SmartJobList& setInputConfig(SmartJobList::InputConfig && inputConfig) { DARABONBA_PTR_SET_RVALUE(inputConfig_, inputConfig) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SmartJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobState Field Functions 
      bool hasJobState() const { return this->jobState_ != nullptr;};
      void deleteJobState() { this->jobState_ = nullptr;};
      inline string getJobState() const { DARABONBA_PTR_GET_DEFAULT(jobState_, "") };
      inline SmartJobList& setJobState(string jobState) { DARABONBA_PTR_SET_VALUE(jobState_, jobState) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline SmartJobList& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline SmartJobList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // outputConfig Field Functions 
      bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
      void deleteOutputConfig() { this->outputConfig_ = nullptr;};
      inline const SmartJobList::OutputConfig & getOutputConfig() const { DARABONBA_PTR_GET_CONST(outputConfig_, SmartJobList::OutputConfig) };
      inline SmartJobList::OutputConfig getOutputConfig() { DARABONBA_PTR_GET(outputConfig_, SmartJobList::OutputConfig) };
      inline SmartJobList& setOutputConfig(const SmartJobList::OutputConfig & outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };
      inline SmartJobList& setOutputConfig(SmartJobList::OutputConfig && outputConfig) { DARABONBA_PTR_SET_RVALUE(outputConfig_, outputConfig) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SmartJobList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline SmartJobList& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline SmartJobList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The job description.
      shared_ptr<string> description_ {};
      // The editing configurations.
      shared_ptr<string> editingConfig_ {};
      // The input configurations.
      shared_ptr<SmartJobList::InputConfig> inputConfig_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The job state.
      // 
      // Valid values:
      // 
      // *   Finished: The job is complete.
      // *   Failed: The job failed.
      // *   Executing: The job is in progress.
      // *   Created: The job is created.
      shared_ptr<string> jobState_ {};
      // The job type.
      // 
      // Valid values:
      // 
      // *   ASR: ASR job.
      // *   DynamicChart: dynamic chart job.
      // *   TextToSpeech: intelligent audio production job.
      shared_ptr<string> jobType_ {};
      // The time when the job was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The output configurations.
      shared_ptr<SmartJobList::OutputConfig> outputConfig_ {};
      // The job title.
      shared_ptr<string> title_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
      // The user ID.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->smartJobList_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListSmartJobsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSmartJobsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smartJobList Field Functions 
    bool hasSmartJobList() const { return this->smartJobList_ != nullptr;};
    void deleteSmartJobList() { this->smartJobList_ = nullptr;};
    inline const vector<ListSmartJobsResponseBody::SmartJobList> & getSmartJobList() const { DARABONBA_PTR_GET_CONST(smartJobList_, vector<ListSmartJobsResponseBody::SmartJobList>) };
    inline vector<ListSmartJobsResponseBody::SmartJobList> getSmartJobList() { DARABONBA_PTR_GET(smartJobList_, vector<ListSmartJobsResponseBody::SmartJobList>) };
    inline ListSmartJobsResponseBody& setSmartJobList(const vector<ListSmartJobsResponseBody::SmartJobList> & smartJobList) { DARABONBA_PTR_SET_VALUE(smartJobList_, smartJobList) };
    inline ListSmartJobsResponseBody& setSmartJobList(vector<ListSmartJobsResponseBody::SmartJobList> && smartJobList) { DARABONBA_PTR_SET_RVALUE(smartJobList_, smartJobList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListSmartJobsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned on a single page. The value is set to the maximum number of entries returned on each page except for the last page. Valid example: 10,10,5. Invalid example: 10,5,10.
    shared_ptr<string> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried intelligent jobs.
    shared_ptr<vector<ListSmartJobsResponseBody::SmartJobList>> smartJobList_ {};
    // Optional. The total number of entries returned. By default, this parameter is not returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
