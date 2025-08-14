// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFOJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFOJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaInfoJobResponseBodyMediaInfoJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaInfoJobResponseBody() = default ;
    GetMediaInfoJobResponseBody(const GetMediaInfoJobResponseBody &) = default ;
    GetMediaInfoJobResponseBody(GetMediaInfoJobResponseBody &&) = default ;
    GetMediaInfoJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoJobResponseBody() = default ;
    GetMediaInfoJobResponseBody& operator=(const GetMediaInfoJobResponseBody &) = default ;
    GetMediaInfoJobResponseBody& operator=(GetMediaInfoJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaInfoJob_ != nullptr
        && this->requestId_ != nullptr; };
    // mediaInfoJob Field Functions 
    bool hasMediaInfoJob() const { return this->mediaInfoJob_ != nullptr;};
    void deleteMediaInfoJob() { this->mediaInfoJob_ = nullptr;};
    inline const GetMediaInfoJobResponseBodyMediaInfoJob & mediaInfoJob() const { DARABONBA_PTR_GET_CONST(mediaInfoJob_, GetMediaInfoJobResponseBodyMediaInfoJob) };
    inline GetMediaInfoJobResponseBodyMediaInfoJob mediaInfoJob() { DARABONBA_PTR_GET(mediaInfoJob_, GetMediaInfoJobResponseBodyMediaInfoJob) };
    inline GetMediaInfoJobResponseBody& setMediaInfoJob(const GetMediaInfoJobResponseBodyMediaInfoJob & mediaInfoJob) { DARABONBA_PTR_SET_VALUE(mediaInfoJob_, mediaInfoJob) };
    inline GetMediaInfoJobResponseBody& setMediaInfoJob(GetMediaInfoJobResponseBodyMediaInfoJob && mediaInfoJob) { DARABONBA_PTR_SET_RVALUE(mediaInfoJob_, mediaInfoJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaInfoJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // MediaInfoJobDTO
    std::shared_ptr<GetMediaInfoJobResponseBodyMediaInfoJob> mediaInfoJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
