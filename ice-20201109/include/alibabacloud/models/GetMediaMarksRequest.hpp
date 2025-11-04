// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAMARKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAMARKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaMarksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaMarksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaMarkIds, mediaMarkIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaMarksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaMarkIds, mediaMarkIds_);
    };
    GetMediaMarksRequest() = default ;
    GetMediaMarksRequest(const GetMediaMarksRequest &) = default ;
    GetMediaMarksRequest(GetMediaMarksRequest &&) = default ;
    GetMediaMarksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaMarksRequest() = default ;
    GetMediaMarksRequest& operator=(const GetMediaMarksRequest &) = default ;
    GetMediaMarksRequest& operator=(GetMediaMarksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && return this->mediaMarkIds_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaMarksRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaMarkIds Field Functions 
    bool hasMediaMarkIds() const { return this->mediaMarkIds_ != nullptr;};
    void deleteMediaMarkIds() { this->mediaMarkIds_ = nullptr;};
    inline string mediaMarkIds() const { DARABONBA_PTR_GET_DEFAULT(mediaMarkIds_, "") };
    inline GetMediaMarksRequest& setMediaMarkIds(string mediaMarkIds) { DARABONBA_PTR_SET_VALUE(mediaMarkIds_, mediaMarkIds) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The mark ID. You can specify multiple mark IDs separated with commas (,).
    std::shared_ptr<string> mediaMarkIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
