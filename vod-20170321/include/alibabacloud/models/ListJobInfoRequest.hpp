// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListJobInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    ListJobInfoRequest() = default ;
    ListJobInfoRequest(const ListJobInfoRequest &) = default ;
    ListJobInfoRequest(ListJobInfoRequest &&) = default ;
    ListJobInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobInfoRequest() = default ;
    ListJobInfoRequest& operator=(const ListJobInfoRequest &) = default ;
    ListJobInfoRequest& operator=(ListJobInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobType_ == nullptr
        && this->mediaId_ == nullptr; };
    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobInfoRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListJobInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The type of the task. Valid values:
    // 
    // *   transcode
    // *   snapshot
    // *   ai
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The ID of the media asset.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
