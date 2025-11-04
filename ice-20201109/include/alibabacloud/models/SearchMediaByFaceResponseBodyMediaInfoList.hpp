// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYFACERESPONSEBODYMEDIAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYFACERESPONSEBODYMEDIAINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByFaceResponseBodyMediaInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByFaceResponseBodyMediaInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByFaceResponseBodyMediaInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    SearchMediaByFaceResponseBodyMediaInfoList() = default ;
    SearchMediaByFaceResponseBodyMediaInfoList(const SearchMediaByFaceResponseBodyMediaInfoList &) = default ;
    SearchMediaByFaceResponseBodyMediaInfoList(SearchMediaByFaceResponseBodyMediaInfoList &&) = default ;
    SearchMediaByFaceResponseBodyMediaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByFaceResponseBodyMediaInfoList() = default ;
    SearchMediaByFaceResponseBodyMediaInfoList& operator=(const SearchMediaByFaceResponseBodyMediaInfoList &) = default ;
    SearchMediaByFaceResponseBodyMediaInfoList& operator=(SearchMediaByFaceResponseBodyMediaInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaByFaceResponseBodyMediaInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
