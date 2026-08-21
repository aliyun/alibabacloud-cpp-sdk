// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETMEDIAINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BatchGetMediaInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetMediaInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(ReferenceIds, referenceIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(ReferenceIds, referenceIds_);
    };
    BatchGetMediaInfosRequest() = default ;
    BatchGetMediaInfosRequest(const BatchGetMediaInfosRequest &) = default ;
    BatchGetMediaInfosRequest(BatchGetMediaInfosRequest &&) = default ;
    BatchGetMediaInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetMediaInfosRequest() = default ;
    BatchGetMediaInfosRequest& operator=(const BatchGetMediaInfosRequest &) = default ;
    BatchGetMediaInfosRequest& operator=(BatchGetMediaInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr
        && this->referenceIds_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline BatchGetMediaInfosRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // referenceIds Field Functions 
    bool hasReferenceIds() const { return this->referenceIds_ != nullptr;};
    void deleteReferenceIds() { this->referenceIds_ = nullptr;};
    inline string getReferenceIds() const { DARABONBA_PTR_GET_DEFAULT(referenceIds_, "") };
    inline BatchGetMediaInfosRequest& setReferenceIds(string referenceIds) { DARABONBA_PTR_SET_VALUE(referenceIds_, referenceIds) };


  protected:
    // The media asset IDs, which are audio/video IDs (VideoId). Separate multiple IDs with commas (,). You can specify up to 20 IDs. You can obtain the IDs by using the following methods:
    // 
    // - For audio/video files uploaded through the console, log on to the ApsaraVideo VOD console and choose Media Files > Audio/Video to view the audio/video IDs.
    // - When you call the operation to obtain the upload URL and credential for audio/video files, the VideoId value is returned as a response parameter.
    // - After an audio/video file is uploaded, you can call the SearchMedia operation to query the VideoId value in the response.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The list of custom IDs. Separate multiple custom IDs with commas (,). You can specify up to 20 IDs.
    shared_ptr<string> referenceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
