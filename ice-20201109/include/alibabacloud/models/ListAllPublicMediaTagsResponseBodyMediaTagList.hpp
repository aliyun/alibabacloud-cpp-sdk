// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODYMEDIATAGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODYMEDIATAGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllPublicMediaTagsResponseBodyMediaTagListOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAllPublicMediaTagsResponseBodyMediaTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPublicMediaTagsResponseBodyMediaTagList& obj) { 
      DARABONBA_PTR_TO_JSON(MediaTagId, mediaTagId_);
      DARABONBA_PTR_TO_JSON(MediaTagNameChinese, mediaTagNameChinese_);
      DARABONBA_PTR_TO_JSON(MediaTagNameEnglish, mediaTagNameEnglish_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPublicMediaTagsResponseBodyMediaTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaTagId, mediaTagId_);
      DARABONBA_PTR_FROM_JSON(MediaTagNameChinese, mediaTagNameChinese_);
      DARABONBA_PTR_FROM_JSON(MediaTagNameEnglish, mediaTagNameEnglish_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    ListAllPublicMediaTagsResponseBodyMediaTagList() = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagList(const ListAllPublicMediaTagsResponseBodyMediaTagList &) = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagList(ListAllPublicMediaTagsResponseBodyMediaTagList &&) = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPublicMediaTagsResponseBodyMediaTagList() = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagList& operator=(const ListAllPublicMediaTagsResponseBodyMediaTagList &) = default ;
    ListAllPublicMediaTagsResponseBodyMediaTagList& operator=(ListAllPublicMediaTagsResponseBodyMediaTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaTagId_ == nullptr
        && return this->mediaTagNameChinese_ == nullptr && return this->mediaTagNameEnglish_ == nullptr && return this->options_ == nullptr; };
    // mediaTagId Field Functions 
    bool hasMediaTagId() const { return this->mediaTagId_ != nullptr;};
    void deleteMediaTagId() { this->mediaTagId_ = nullptr;};
    inline string mediaTagId() const { DARABONBA_PTR_GET_DEFAULT(mediaTagId_, "") };
    inline ListAllPublicMediaTagsResponseBodyMediaTagList& setMediaTagId(string mediaTagId) { DARABONBA_PTR_SET_VALUE(mediaTagId_, mediaTagId) };


    // mediaTagNameChinese Field Functions 
    bool hasMediaTagNameChinese() const { return this->mediaTagNameChinese_ != nullptr;};
    void deleteMediaTagNameChinese() { this->mediaTagNameChinese_ = nullptr;};
    inline string mediaTagNameChinese() const { DARABONBA_PTR_GET_DEFAULT(mediaTagNameChinese_, "") };
    inline ListAllPublicMediaTagsResponseBodyMediaTagList& setMediaTagNameChinese(string mediaTagNameChinese) { DARABONBA_PTR_SET_VALUE(mediaTagNameChinese_, mediaTagNameChinese) };


    // mediaTagNameEnglish Field Functions 
    bool hasMediaTagNameEnglish() const { return this->mediaTagNameEnglish_ != nullptr;};
    void deleteMediaTagNameEnglish() { this->mediaTagNameEnglish_ = nullptr;};
    inline string mediaTagNameEnglish() const { DARABONBA_PTR_GET_DEFAULT(mediaTagNameEnglish_, "") };
    inline ListAllPublicMediaTagsResponseBodyMediaTagList& setMediaTagNameEnglish(string mediaTagNameEnglish) { DARABONBA_PTR_SET_VALUE(mediaTagNameEnglish_, mediaTagNameEnglish) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions> & options() const { DARABONBA_PTR_GET_CONST(options_, vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions>) };
    inline vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions> options() { DARABONBA_PTR_GET(options_, vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions>) };
    inline ListAllPublicMediaTagsResponseBodyMediaTagList& setOptions(const vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ListAllPublicMediaTagsResponseBodyMediaTagList& setOptions(vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


  protected:
    // The ID of the media tag.
    std::shared_ptr<string> mediaTagId_ = nullptr;
    // The name of the media tag in Chinese.
    std::shared_ptr<string> mediaTagNameChinese_ = nullptr;
    // The name of the material tag in English.
    std::shared_ptr<string> mediaTagNameEnglish_ = nullptr;
    // The options.
    std::shared_ptr<vector<Models::ListAllPublicMediaTagsResponseBodyMediaTagListOptions>> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
