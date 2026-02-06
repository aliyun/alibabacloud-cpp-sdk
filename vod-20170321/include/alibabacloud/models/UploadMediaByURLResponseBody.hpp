// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIABYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIABYURLRESPONSEBODY_HPP_
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
  class UploadMediaByURLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMediaByURLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadJobs, uploadJobs_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMediaByURLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadJobs, uploadJobs_);
    };
    UploadMediaByURLResponseBody() = default ;
    UploadMediaByURLResponseBody(const UploadMediaByURLResponseBody &) = default ;
    UploadMediaByURLResponseBody(UploadMediaByURLResponseBody &&) = default ;
    UploadMediaByURLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMediaByURLResponseBody() = default ;
    UploadMediaByURLResponseBody& operator=(const UploadMediaByURLResponseBody &) = default ;
    UploadMediaByURLResponseBody& operator=(UploadMediaByURLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadJobs& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(SourceURL, sourceURL_);
      };
      friend void from_json(const Darabonba::Json& j, UploadJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(SourceURL, sourceURL_);
      };
      UploadJobs() = default ;
      UploadJobs(const UploadJobs &) = default ;
      UploadJobs(UploadJobs &&) = default ;
      UploadJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadJobs() = default ;
      UploadJobs& operator=(const UploadJobs &) = default ;
      UploadJobs& operator=(UploadJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->jobId_ == nullptr
        && this->sourceURL_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline UploadJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // sourceURL Field Functions 
      bool hasSourceURL() const { return this->sourceURL_ != nullptr;};
      void deleteSourceURL() { this->sourceURL_ = nullptr;};
      inline string getSourceURL() const { DARABONBA_PTR_GET_DEFAULT(sourceURL_, "") };
      inline UploadJobs& setSourceURL(string sourceURL) { DARABONBA_PTR_SET_VALUE(sourceURL_, sourceURL) };


    protected:
      // The ID of the upload job.
      shared_ptr<string> jobId_ {};
      // The URL of the source file that is uploaded in the upload job.
      shared_ptr<string> sourceURL_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadJobs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadMediaByURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadJobs Field Functions 
    bool hasUploadJobs() const { return this->uploadJobs_ != nullptr;};
    void deleteUploadJobs() { this->uploadJobs_ = nullptr;};
    inline const vector<UploadMediaByURLResponseBody::UploadJobs> & getUploadJobs() const { DARABONBA_PTR_GET_CONST(uploadJobs_, vector<UploadMediaByURLResponseBody::UploadJobs>) };
    inline vector<UploadMediaByURLResponseBody::UploadJobs> getUploadJobs() { DARABONBA_PTR_GET(uploadJobs_, vector<UploadMediaByURLResponseBody::UploadJobs>) };
    inline UploadMediaByURLResponseBody& setUploadJobs(const vector<UploadMediaByURLResponseBody::UploadJobs> & uploadJobs) { DARABONBA_PTR_SET_VALUE(uploadJobs_, uploadJobs) };
    inline UploadMediaByURLResponseBody& setUploadJobs(vector<UploadMediaByURLResponseBody::UploadJobs> && uploadJobs) { DARABONBA_PTR_SET_RVALUE(uploadJobs_, uploadJobs) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the upload job.
    shared_ptr<vector<UploadMediaByURLResponseBody::UploadJobs>> uploadJobs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
