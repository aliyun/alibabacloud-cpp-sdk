// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIAMARKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIAMARKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaMarksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaMarksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaMarkIds, mediaMarkIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaMarksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaMarkIds, mediaMarkIds_);
    };
    ListMediaMarksRequest() = default ;
    ListMediaMarksRequest(const ListMediaMarksRequest &) = default ;
    ListMediaMarksRequest(ListMediaMarksRequest &&) = default ;
    ListMediaMarksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaMarksRequest() = default ;
    ListMediaMarksRequest& operator=(const ListMediaMarksRequest &) = default ;
    ListMediaMarksRequest& operator=(ListMediaMarksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->mediaMarkIds_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListMediaMarksRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaMarkIds Field Functions 
    bool hasMediaMarkIds() const { return this->mediaMarkIds_ != nullptr;};
    void deleteMediaMarkIds() { this->mediaMarkIds_ = nullptr;};
    inline string getMediaMarkIds() const { DARABONBA_PTR_GET_DEFAULT(mediaMarkIds_, "") };
    inline ListMediaMarksRequest& setMediaMarkIds(string mediaMarkIds) { DARABONBA_PTR_SET_VALUE(mediaMarkIds_, mediaMarkIds) };


  protected:
    // The ID of the media asset.
    shared_ptr<string> mediaId_ {};
    // The mark ID. You can specify multiple IDs separated with commas (,). This parameter is discontinued.
    shared_ptr<string> mediaMarkIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
