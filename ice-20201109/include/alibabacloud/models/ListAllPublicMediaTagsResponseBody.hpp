// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPUBLICMEDIATAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAllPublicMediaTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPublicMediaTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaTagList, mediaTagList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPublicMediaTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaTagList, mediaTagList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAllPublicMediaTagsResponseBody() = default ;
    ListAllPublicMediaTagsResponseBody(const ListAllPublicMediaTagsResponseBody &) = default ;
    ListAllPublicMediaTagsResponseBody(ListAllPublicMediaTagsResponseBody &&) = default ;
    ListAllPublicMediaTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPublicMediaTagsResponseBody() = default ;
    ListAllPublicMediaTagsResponseBody& operator=(const ListAllPublicMediaTagsResponseBody &) = default ;
    ListAllPublicMediaTagsResponseBody& operator=(ListAllPublicMediaTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaTagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaTagList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaTagId, mediaTagId_);
        DARABONBA_PTR_TO_JSON(MediaTagNameChinese, mediaTagNameChinese_);
        DARABONBA_PTR_TO_JSON(MediaTagNameEnglish, mediaTagNameEnglish_);
        DARABONBA_PTR_TO_JSON(Options, options_);
      };
      friend void from_json(const Darabonba::Json& j, MediaTagList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaTagId, mediaTagId_);
        DARABONBA_PTR_FROM_JSON(MediaTagNameChinese, mediaTagNameChinese_);
        DARABONBA_PTR_FROM_JSON(MediaTagNameEnglish, mediaTagNameEnglish_);
        DARABONBA_PTR_FROM_JSON(Options, options_);
      };
      MediaTagList() = default ;
      MediaTagList(const MediaTagList &) = default ;
      MediaTagList(MediaTagList &&) = default ;
      MediaTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaTagList() = default ;
      MediaTagList& operator=(const MediaTagList &) = default ;
      MediaTagList& operator=(MediaTagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Options : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Options& obj) { 
          DARABONBA_PTR_TO_JSON(OptionChineseName, optionChineseName_);
          DARABONBA_PTR_TO_JSON(OptionEnglishName, optionEnglishName_);
          DARABONBA_PTR_TO_JSON(OptionId, optionId_);
        };
        friend void from_json(const Darabonba::Json& j, Options& obj) { 
          DARABONBA_PTR_FROM_JSON(OptionChineseName, optionChineseName_);
          DARABONBA_PTR_FROM_JSON(OptionEnglishName, optionEnglishName_);
          DARABONBA_PTR_FROM_JSON(OptionId, optionId_);
        };
        Options() = default ;
        Options(const Options &) = default ;
        Options(Options &&) = default ;
        Options(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Options() = default ;
        Options& operator=(const Options &) = default ;
        Options& operator=(Options &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->optionChineseName_ == nullptr
        && this->optionEnglishName_ == nullptr && this->optionId_ == nullptr; };
        // optionChineseName Field Functions 
        bool hasOptionChineseName() const { return this->optionChineseName_ != nullptr;};
        void deleteOptionChineseName() { this->optionChineseName_ = nullptr;};
        inline string getOptionChineseName() const { DARABONBA_PTR_GET_DEFAULT(optionChineseName_, "") };
        inline Options& setOptionChineseName(string optionChineseName) { DARABONBA_PTR_SET_VALUE(optionChineseName_, optionChineseName) };


        // optionEnglishName Field Functions 
        bool hasOptionEnglishName() const { return this->optionEnglishName_ != nullptr;};
        void deleteOptionEnglishName() { this->optionEnglishName_ = nullptr;};
        inline string getOptionEnglishName() const { DARABONBA_PTR_GET_DEFAULT(optionEnglishName_, "") };
        inline Options& setOptionEnglishName(string optionEnglishName) { DARABONBA_PTR_SET_VALUE(optionEnglishName_, optionEnglishName) };


        // optionId Field Functions 
        bool hasOptionId() const { return this->optionId_ != nullptr;};
        void deleteOptionId() { this->optionId_ = nullptr;};
        inline string getOptionId() const { DARABONBA_PTR_GET_DEFAULT(optionId_, "") };
        inline Options& setOptionId(string optionId) { DARABONBA_PTR_SET_VALUE(optionId_, optionId) };


      protected:
        // The option name in Chinese.
        shared_ptr<string> optionChineseName_ {};
        // The option name in English.
        shared_ptr<string> optionEnglishName_ {};
        // The option ID.
        shared_ptr<string> optionId_ {};
      };

      virtual bool empty() const override { return this->mediaTagId_ == nullptr
        && this->mediaTagNameChinese_ == nullptr && this->mediaTagNameEnglish_ == nullptr && this->options_ == nullptr; };
      // mediaTagId Field Functions 
      bool hasMediaTagId() const { return this->mediaTagId_ != nullptr;};
      void deleteMediaTagId() { this->mediaTagId_ = nullptr;};
      inline string getMediaTagId() const { DARABONBA_PTR_GET_DEFAULT(mediaTagId_, "") };
      inline MediaTagList& setMediaTagId(string mediaTagId) { DARABONBA_PTR_SET_VALUE(mediaTagId_, mediaTagId) };


      // mediaTagNameChinese Field Functions 
      bool hasMediaTagNameChinese() const { return this->mediaTagNameChinese_ != nullptr;};
      void deleteMediaTagNameChinese() { this->mediaTagNameChinese_ = nullptr;};
      inline string getMediaTagNameChinese() const { DARABONBA_PTR_GET_DEFAULT(mediaTagNameChinese_, "") };
      inline MediaTagList& setMediaTagNameChinese(string mediaTagNameChinese) { DARABONBA_PTR_SET_VALUE(mediaTagNameChinese_, mediaTagNameChinese) };


      // mediaTagNameEnglish Field Functions 
      bool hasMediaTagNameEnglish() const { return this->mediaTagNameEnglish_ != nullptr;};
      void deleteMediaTagNameEnglish() { this->mediaTagNameEnglish_ = nullptr;};
      inline string getMediaTagNameEnglish() const { DARABONBA_PTR_GET_DEFAULT(mediaTagNameEnglish_, "") };
      inline MediaTagList& setMediaTagNameEnglish(string mediaTagNameEnglish) { DARABONBA_PTR_SET_VALUE(mediaTagNameEnglish_, mediaTagNameEnglish) };


      // options Field Functions 
      bool hasOptions() const { return this->options_ != nullptr;};
      void deleteOptions() { this->options_ = nullptr;};
      inline const vector<MediaTagList::Options> & getOptions() const { DARABONBA_PTR_GET_CONST(options_, vector<MediaTagList::Options>) };
      inline vector<MediaTagList::Options> getOptions() { DARABONBA_PTR_GET(options_, vector<MediaTagList::Options>) };
      inline MediaTagList& setOptions(const vector<MediaTagList::Options> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
      inline MediaTagList& setOptions(vector<MediaTagList::Options> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    protected:
      // The ID of the media tag.
      shared_ptr<string> mediaTagId_ {};
      // The name of the media tag in Chinese.
      shared_ptr<string> mediaTagNameChinese_ {};
      // The name of the material tag in English.
      shared_ptr<string> mediaTagNameEnglish_ {};
      // The options.
      shared_ptr<vector<MediaTagList::Options>> options_ {};
    };

    virtual bool empty() const override { return this->mediaTagList_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaTagList Field Functions 
    bool hasMediaTagList() const { return this->mediaTagList_ != nullptr;};
    void deleteMediaTagList() { this->mediaTagList_ = nullptr;};
    inline const vector<ListAllPublicMediaTagsResponseBody::MediaTagList> & getMediaTagList() const { DARABONBA_PTR_GET_CONST(mediaTagList_, vector<ListAllPublicMediaTagsResponseBody::MediaTagList>) };
    inline vector<ListAllPublicMediaTagsResponseBody::MediaTagList> getMediaTagList() { DARABONBA_PTR_GET(mediaTagList_, vector<ListAllPublicMediaTagsResponseBody::MediaTagList>) };
    inline ListAllPublicMediaTagsResponseBody& setMediaTagList(const vector<ListAllPublicMediaTagsResponseBody::MediaTagList> & mediaTagList) { DARABONBA_PTR_SET_VALUE(mediaTagList_, mediaTagList) };
    inline ListAllPublicMediaTagsResponseBody& setMediaTagList(vector<ListAllPublicMediaTagsResponseBody::MediaTagList> && mediaTagList) { DARABONBA_PTR_SET_RVALUE(mediaTagList_, mediaTagList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllPublicMediaTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tags of media assets in the public media library.
    shared_ptr<vector<ListAllPublicMediaTagsResponseBody::MediaTagList>> mediaTagList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
