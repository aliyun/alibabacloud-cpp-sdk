// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIABYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIABYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadMediaByURLResponseBodyUploadJobs.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->uploadJobs_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadMediaByURLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadJobs Field Functions 
    bool hasUploadJobs() const { return this->uploadJobs_ != nullptr;};
    void deleteUploadJobs() { this->uploadJobs_ = nullptr;};
    inline const vector<UploadMediaByURLResponseBodyUploadJobs> & uploadJobs() const { DARABONBA_PTR_GET_CONST(uploadJobs_, vector<UploadMediaByURLResponseBodyUploadJobs>) };
    inline vector<UploadMediaByURLResponseBodyUploadJobs> uploadJobs() { DARABONBA_PTR_GET(uploadJobs_, vector<UploadMediaByURLResponseBodyUploadJobs>) };
    inline UploadMediaByURLResponseBody& setUploadJobs(const vector<UploadMediaByURLResponseBodyUploadJobs> & uploadJobs) { DARABONBA_PTR_SET_VALUE(uploadJobs_, uploadJobs) };
    inline UploadMediaByURLResponseBody& setUploadJobs(vector<UploadMediaByURLResponseBodyUploadJobs> && uploadJobs) { DARABONBA_PTR_SET_RVALUE(uploadJobs_, uploadJobs) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the upload job.
    std::shared_ptr<vector<UploadMediaByURLResponseBodyUploadJobs>> uploadJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
