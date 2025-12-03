// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    DeleteStreamRequest() = default ;
    DeleteStreamRequest(const DeleteStreamRequest &) = default ;
    DeleteStreamRequest(DeleteStreamRequest &&) = default ;
    DeleteStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStreamRequest() = default ;
    DeleteStreamRequest& operator=(const DeleteStreamRequest &) = default ;
    DeleteStreamRequest& operator=(DeleteStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIds_ == nullptr
        && return this->referenceId_ == nullptr && return this->videoId_ == nullptr; };
    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string jobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline DeleteStreamRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string referenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline DeleteStreamRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline DeleteStreamRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The job IDs for deleting media streams.
    // 
    // *   Separate multiple IDs with commas (,). A maximum of 20 IDs can be specified for one video.
    // *   You can obtain job IDs from the PlayInfo parameter that is returned after you call the [GetPlayInfo](https://help.aliyun.com/document_detail/56124.html) operation. Each media stream has a unique job ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobIds_ = nullptr;
    std::shared_ptr<string> referenceId_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
