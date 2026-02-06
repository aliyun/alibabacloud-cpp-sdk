// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIJobList, AIJobList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitAIJobResponseBody() = default ;
    SubmitAIJobResponseBody(const SubmitAIJobResponseBody &) = default ;
    SubmitAIJobResponseBody(SubmitAIJobResponseBody &&) = default ;
    SubmitAIJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIJobResponseBody() = default ;
    SubmitAIJobResponseBody& operator=(const SubmitAIJobResponseBody &) = default ;
    SubmitAIJobResponseBody& operator=(SubmitAIJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AIJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AIJobList& obj) { 
        DARABONBA_PTR_TO_JSON(AIJob, AIJob_);
      };
      friend void from_json(const Darabonba::Json& j, AIJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AIJob, AIJob_);
      };
      AIJobList() = default ;
      AIJobList(const AIJobList &) = default ;
      AIJobList(AIJobList &&) = default ;
      AIJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AIJobList() = default ;
      AIJobList& operator=(const AIJobList &) = default ;
      AIJobList& operator=(AIJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AIJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AIJob& obj) { 
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AIJob& obj) { 
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AIJob() = default ;
        AIJob(const AIJob &) = default ;
        AIJob(AIJob &&) = default ;
        AIJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AIJob() = default ;
        AIJob& operator=(const AIJob &) = default ;
        AIJob& operator=(AIJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->jobId_ == nullptr
        && this->mediaId_ == nullptr && this->type_ == nullptr; };
        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline AIJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // mediaId Field Functions 
        bool hasMediaId() const { return this->mediaId_ != nullptr;};
        void deleteMediaId() { this->mediaId_ = nullptr;};
        inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
        inline AIJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AIJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the AI job.
        shared_ptr<string> jobId_ {};
        // The ID of the video.
        shared_ptr<string> mediaId_ {};
        // The type of the AI job. Valid values:
        // 
        // *   **AIMediaDNA**: The media fingerprinting job.
        // *   **AIVideoTag**: The smart tagging job.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->AIJob_ == nullptr; };
      // AIJob Field Functions 
      bool hasAIJob() const { return this->AIJob_ != nullptr;};
      void deleteAIJob() { this->AIJob_ = nullptr;};
      inline const vector<AIJobList::AIJob> & getAIJob() const { DARABONBA_PTR_GET_CONST(AIJob_, vector<AIJobList::AIJob>) };
      inline vector<AIJobList::AIJob> getAIJob() { DARABONBA_PTR_GET(AIJob_, vector<AIJobList::AIJob>) };
      inline AIJobList& setAIJob(const vector<AIJobList::AIJob> & aIJob) { DARABONBA_PTR_SET_VALUE(AIJob_, aIJob) };
      inline AIJobList& setAIJob(vector<AIJobList::AIJob> && aIJob) { DARABONBA_PTR_SET_RVALUE(AIJob_, aIJob) };


    protected:
      shared_ptr<vector<AIJobList::AIJob>> AIJob_ {};
    };

    virtual bool empty() const override { return this->AIJobList_ == nullptr
        && this->requestId_ == nullptr; };
    // AIJobList Field Functions 
    bool hasAIJobList() const { return this->AIJobList_ != nullptr;};
    void deleteAIJobList() { this->AIJobList_ = nullptr;};
    inline const SubmitAIJobResponseBody::AIJobList & getAIJobList() const { DARABONBA_PTR_GET_CONST(AIJobList_, SubmitAIJobResponseBody::AIJobList) };
    inline SubmitAIJobResponseBody::AIJobList getAIJobList() { DARABONBA_PTR_GET(AIJobList_, SubmitAIJobResponseBody::AIJobList) };
    inline SubmitAIJobResponseBody& setAIJobList(const SubmitAIJobResponseBody::AIJobList & aIJobList) { DARABONBA_PTR_SET_VALUE(AIJobList_, aIJobList) };
    inline SubmitAIJobResponseBody& setAIJobList(SubmitAIJobResponseBody::AIJobList && aIJobList) { DARABONBA_PTR_SET_RVALUE(AIJobList_, aIJobList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitAIJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AI jobs.
    shared_ptr<SubmitAIJobResponseBody::AIJobList> AIJobList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
