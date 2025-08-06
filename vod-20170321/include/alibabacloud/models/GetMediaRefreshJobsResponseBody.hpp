// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAREFRESHJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaRefreshJobsResponseBodyMediaRefreshJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaRefreshJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaRefreshJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaRefreshJobs, mediaRefreshJobs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaRefreshJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaRefreshJobs, mediaRefreshJobs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaRefreshJobsResponseBody() = default ;
    GetMediaRefreshJobsResponseBody(const GetMediaRefreshJobsResponseBody &) = default ;
    GetMediaRefreshJobsResponseBody(GetMediaRefreshJobsResponseBody &&) = default ;
    GetMediaRefreshJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaRefreshJobsResponseBody() = default ;
    GetMediaRefreshJobsResponseBody& operator=(const GetMediaRefreshJobsResponseBody &) = default ;
    GetMediaRefreshJobsResponseBody& operator=(GetMediaRefreshJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaRefreshJobs_ != nullptr
        && this->requestId_ != nullptr; };
    // mediaRefreshJobs Field Functions 
    bool hasMediaRefreshJobs() const { return this->mediaRefreshJobs_ != nullptr;};
    void deleteMediaRefreshJobs() { this->mediaRefreshJobs_ = nullptr;};
    inline const vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs> & mediaRefreshJobs() const { DARABONBA_PTR_GET_CONST(mediaRefreshJobs_, vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs>) };
    inline vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs> mediaRefreshJobs() { DARABONBA_PTR_GET(mediaRefreshJobs_, vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs>) };
    inline GetMediaRefreshJobsResponseBody& setMediaRefreshJobs(const vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs> & mediaRefreshJobs) { DARABONBA_PTR_SET_VALUE(mediaRefreshJobs_, mediaRefreshJobs) };
    inline GetMediaRefreshJobsResponseBody& setMediaRefreshJobs(vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs> && mediaRefreshJobs) { DARABONBA_PTR_SET_RVALUE(mediaRefreshJobs_, mediaRefreshJobs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaRefreshJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media refresh or prefetch jobs.
    std::shared_ptr<vector<GetMediaRefreshJobsResponseBodyMediaRefreshJobs>> mediaRefreshJobs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
