// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDRESPONSEBODYMEDIALIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDRESPONSEBODYMEDIALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaByHybridResponseBodyMediaListClipInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByHybridResponseBodyMediaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByHybridResponseBodyMediaList& obj) { 
      DARABONBA_PTR_TO_JSON(ClipInfo, clipInfo_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByHybridResponseBodyMediaList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipInfo, clipInfo_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
    };
    SearchMediaByHybridResponseBodyMediaList() = default ;
    SearchMediaByHybridResponseBodyMediaList(const SearchMediaByHybridResponseBodyMediaList &) = default ;
    SearchMediaByHybridResponseBodyMediaList(SearchMediaByHybridResponseBodyMediaList &&) = default ;
    SearchMediaByHybridResponseBodyMediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByHybridResponseBodyMediaList() = default ;
    SearchMediaByHybridResponseBodyMediaList& operator=(const SearchMediaByHybridResponseBodyMediaList &) = default ;
    SearchMediaByHybridResponseBodyMediaList& operator=(SearchMediaByHybridResponseBodyMediaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clipInfo_ != nullptr
        && this->mediaId_ != nullptr; };
    // clipInfo Field Functions 
    bool hasClipInfo() const { return this->clipInfo_ != nullptr;};
    void deleteClipInfo() { this->clipInfo_ = nullptr;};
    inline const vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo> & clipInfo() const { DARABONBA_PTR_GET_CONST(clipInfo_, vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo>) };
    inline vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo> clipInfo() { DARABONBA_PTR_GET(clipInfo_, vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo>) };
    inline SearchMediaByHybridResponseBodyMediaList& setClipInfo(const vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo> & clipInfo) { DARABONBA_PTR_SET_VALUE(clipInfo_, clipInfo) };
    inline SearchMediaByHybridResponseBodyMediaList& setClipInfo(vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo> && clipInfo) { DARABONBA_PTR_SET_RVALUE(clipInfo_, clipInfo) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SearchMediaByHybridResponseBodyMediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


  protected:
    std::shared_ptr<vector<Models::SearchMediaByHybridResponseBodyMediaListClipInfo>> clipInfo_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
