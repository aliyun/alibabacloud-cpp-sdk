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
    };
    friend void from_json(const Darabonba::Json& j, BatchGetMediaInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
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
    virtual bool empty() const override { this->mediaIds_ != nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline BatchGetMediaInfosRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    // The ID of the media asset. The ID can be the video ID or audio ID. Separate IDs with commas (,). You can specify a maximum of 20 IDs. You can use one of the following methods to obtain the ID of the media asset:
    // 
    // *   Log on to the ApsaraVideo VOD console. In the left-side navigation pane, choose Media Files > Audio/Video. On the Video and Audio page, view the ID of the media asset. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of VideoId from the response to the CreateUploadVideo operation that you call to upload media assets.
    // *   Obtain the value of VideoId from the response to the SearchMedia operation that you call to query the media ID after the media asset is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
