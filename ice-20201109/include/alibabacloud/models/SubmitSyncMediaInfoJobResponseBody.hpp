// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSYNCMEDIAINFOJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSyncMediaInfoJobResponseBodyMediaInfoJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSyncMediaInfoJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSyncMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSyncMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitSyncMediaInfoJobResponseBody() = default ;
    SubmitSyncMediaInfoJobResponseBody(const SubmitSyncMediaInfoJobResponseBody &) = default ;
    SubmitSyncMediaInfoJobResponseBody(SubmitSyncMediaInfoJobResponseBody &&) = default ;
    SubmitSyncMediaInfoJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSyncMediaInfoJobResponseBody() = default ;
    SubmitSyncMediaInfoJobResponseBody& operator=(const SubmitSyncMediaInfoJobResponseBody &) = default ;
    SubmitSyncMediaInfoJobResponseBody& operator=(SubmitSyncMediaInfoJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaInfoJob_ != nullptr
        && this->requestId_ != nullptr; };
    // mediaInfoJob Field Functions 
    bool hasMediaInfoJob() const { return this->mediaInfoJob_ != nullptr;};
    void deleteMediaInfoJob() { this->mediaInfoJob_ = nullptr;};
    inline const SubmitSyncMediaInfoJobResponseBodyMediaInfoJob & mediaInfoJob() const { DARABONBA_PTR_GET_CONST(mediaInfoJob_, SubmitSyncMediaInfoJobResponseBodyMediaInfoJob) };
    inline SubmitSyncMediaInfoJobResponseBodyMediaInfoJob mediaInfoJob() { DARABONBA_PTR_GET(mediaInfoJob_, SubmitSyncMediaInfoJobResponseBodyMediaInfoJob) };
    inline SubmitSyncMediaInfoJobResponseBody& setMediaInfoJob(const SubmitSyncMediaInfoJobResponseBodyMediaInfoJob & mediaInfoJob) { DARABONBA_PTR_SET_VALUE(mediaInfoJob_, mediaInfoJob) };
    inline SubmitSyncMediaInfoJobResponseBody& setMediaInfoJob(SubmitSyncMediaInfoJobResponseBodyMediaInfoJob && mediaInfoJob) { DARABONBA_PTR_SET_RVALUE(mediaInfoJob_, mediaInfoJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSyncMediaInfoJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // MediaInfoJobDTO
    std::shared_ptr<SubmitSyncMediaInfoJobResponseBodyMediaInfoJob> mediaInfoJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
