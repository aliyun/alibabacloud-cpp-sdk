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
    // The media asset IDs, namely the audio or video IDs (VideoId). Separate multiple IDs with commas (,). A maximum of 20 IDs are supported. You can obtain the IDs by using one of the following methods:
    // 
    // - For audio or video files uploaded through the console, log on to the ApsaraVideo VOD console and choose Media Library > Audio/Video to view the audio or video IDs.
    // - When you call the operation to obtain the upload URL and credential for an audio or video file, the ID is the value of the VideoId response parameter.
    // - After an audio or video file is uploaded, you can call the operation to search for media asset information. The ID is the value of the VideoId response parameter.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The custom ID list. It consists of one or more custom IDs. Separate multiple IDs with commas (,). A maximum of 20 IDs are supported.
    shared_ptr<string> referenceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
