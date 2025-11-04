// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYMULTIMODALRESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYMULTIMODALRESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaByMultimodalResponseBodyMediaListClipInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByMultimodalResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByMultimodalResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(ClipInfo, clipInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByMultimodalResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipInfo, clipInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    SearchMediaByMultimodalResponseBodyMediaList() = default ;
    SearchMediaByMultimodalResponseBodyMediaList(const SearchMediaByMultimodalResponseBodyMediaList &) = default ;
    SearchMediaByMultimodalResponseBodyMediaList(SearchMediaByMultimodalResponseBodyMediaList &&) = default ;
    SearchMediaByMultimodalResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByMultimodalResponseBodyMediaList() = default ;
    SearchMediaByMultimodalResponseBodyMediaList& operator=(const SearchMediaByMultimodalResponseBodyMediaList &) = default ;
    SearchMediaByMultimodalResponseBodyMediaList& operator=(SearchMediaByMultimodalResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipInfo_ == nullptr
        && return this->mediaId_ == nullptr; };
    // clipInfo Field Functions 
    bool hasClipInfo() const { return this->clipInfo_ != nullptr;};
    void deleteClipInfo() { this->clipInfo_ = nullptr;};
    inline const vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo> & clipInfo() const { DARABONBA_PTR_GET_CONST(clipInfo_, vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo>) };
    inline vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo> clipInfo() { DARABONBA_PTR_GET(clipInfo_, vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo>) };
    inline SearchMediaByMultimodalResponseBodyMediaList& setClipInfo(const vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo> & clipInfo) { DARABONBA_PTR_SET_VALUE(clipInfo_, clipInfo) };
    inline SearchMediaByMultimodalResponseBodyMediaList& setClipInfo(vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo> && clipInfo) { DARABONBA_PTR_SET_RVALUE(clipInfo_, clipInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaByMultimodalResponseBodyMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    // The information about the clip.
    std::shared_ptr<vector<Models::SearchMediaByMultimodalResponseBodyMediaListClipInfo>> clipInfo_ = nullptr;
    // The ID of the media asset.
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
