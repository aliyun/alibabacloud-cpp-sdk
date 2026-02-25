// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddMediaResponseBody() = default ;
    AddMediaResponseBody(const AddMediaResponseBody &) = default ;
    AddMediaResponseBody(AddMediaResponseBody &&) = default ;
    AddMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaResponseBody() = default ;
    AddMediaResponseBody& operator=(const AddMediaResponseBody &) = default ;
    AddMediaResponseBody& operator=(AddMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Media : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Media& obj) { 
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CensorState, censorState_);
        DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(File, file_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Fps, fps_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(PublishState, publishState_);
        DARABONBA_PTR_TO_JSON(RunIdList, runIdList_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Media& obj) { 
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CensorState, censorState_);
        DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(File, file_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Fps, fps_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(PublishState, publishState_);
        DARABONBA_PTR_FROM_JSON(RunIdList, runIdList_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      Media() = default ;
      Media(const Media &) = default ;
      Media(Media &&) = default ;
      Media(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Media() = default ;
      Media& operator=(const Media &) = default ;
      Media& operator=(Media &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tag_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const vector<string> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
        inline vector<string> getTag() { DARABONBA_PTR_GET(tag_, vector<string>) };
        inline Tags& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline Tags& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      protected:
        shared_ptr<vector<string>> tag_ {};
      };

      class RunIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunIdList& obj) { 
          DARABONBA_PTR_TO_JSON(RunId, runId_);
        };
        friend void from_json(const Darabonba::Json& j, RunIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(RunId, runId_);
        };
        RunIdList() = default ;
        RunIdList(const RunIdList &) = default ;
        RunIdList(RunIdList &&) = default ;
        RunIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunIdList() = default ;
        RunIdList& operator=(const RunIdList &) = default ;
        RunIdList& operator=(RunIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->runId_ == nullptr; };
        // runId Field Functions 
        bool hasRunId() const { return this->runId_ != nullptr;};
        void deleteRunId() { this->runId_ = nullptr;};
        inline const vector<string> & getRunId() const { DARABONBA_PTR_GET_CONST(runId_, vector<string>) };
        inline vector<string> getRunId() { DARABONBA_PTR_GET(runId_, vector<string>) };
        inline RunIdList& setRunId(const vector<string> & runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };
        inline RunIdList& setRunId(vector<string> && runId) { DARABONBA_PTR_SET_RVALUE(runId_, runId) };


      protected:
        shared_ptr<vector<string>> runId_ {};
      };

      class File : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const File& obj) { 
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(URL, URL_);
        };
        friend void from_json(const Darabonba::Json& j, File& obj) { 
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(URL, URL_);
        };
        File() = default ;
        File(const File &) = default ;
        File(File &&) = default ;
        File(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~File() = default ;
        File& operator=(const File &) = default ;
        File& operator=(File &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->state_ == nullptr
        && this->URL_ == nullptr; };
        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline File& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // URL Field Functions 
        bool hasURL() const { return this->URL_ != nullptr;};
        void deleteURL() { this->URL_ = nullptr;};
        inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
        inline File& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


      protected:
        // The status of the file. The default value is **Normal**.
        shared_ptr<string> state_ {};
        // The URL of the media file.
        shared_ptr<string> URL_ {};
      };

      virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->cateId_ == nullptr && this->censorState_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->file_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr && this->height_ == nullptr
        && this->mediaId_ == nullptr && this->publishState_ == nullptr && this->runIdList_ == nullptr && this->size_ == nullptr && this->tags_ == nullptr
        && this->title_ == nullptr && this->width_ == nullptr; };
      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
      inline Media& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline Media& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // censorState Field Functions 
      bool hasCensorState() const { return this->censorState_ != nullptr;};
      void deleteCensorState() { this->censorState_ = nullptr;};
      inline string getCensorState() const { DARABONBA_PTR_GET_DEFAULT(censorState_, "") };
      inline Media& setCensorState(string censorState) { DARABONBA_PTR_SET_VALUE(censorState_, censorState) };


      // coverURL Field Functions 
      bool hasCoverURL() const { return this->coverURL_ != nullptr;};
      void deleteCoverURL() { this->coverURL_ = nullptr;};
      inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
      inline Media& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Media& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Media& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Media& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline const Media::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, Media::File) };
      inline Media::File getFile() { DARABONBA_PTR_GET(file_, Media::File) };
      inline Media& setFile(const Media::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
      inline Media& setFile(Media::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Media& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // fps Field Functions 
      bool hasFps() const { return this->fps_ != nullptr;};
      void deleteFps() { this->fps_ = nullptr;};
      inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
      inline Media& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
      inline Media& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline Media& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // publishState Field Functions 
      bool hasPublishState() const { return this->publishState_ != nullptr;};
      void deletePublishState() { this->publishState_ = nullptr;};
      inline string getPublishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, "") };
      inline Media& setPublishState(string publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


      // runIdList Field Functions 
      bool hasRunIdList() const { return this->runIdList_ != nullptr;};
      void deleteRunIdList() { this->runIdList_ = nullptr;};
      inline const Media::RunIdList & getRunIdList() const { DARABONBA_PTR_GET_CONST(runIdList_, Media::RunIdList) };
      inline Media::RunIdList getRunIdList() { DARABONBA_PTR_GET(runIdList_, Media::RunIdList) };
      inline Media& setRunIdList(const Media::RunIdList & runIdList) { DARABONBA_PTR_SET_VALUE(runIdList_, runIdList) };
      inline Media& setRunIdList(Media::RunIdList && runIdList) { DARABONBA_PTR_SET_RVALUE(runIdList_, runIdList) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Media& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const Media::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Media::Tags) };
      inline Media::Tags getTags() { DARABONBA_PTR_GET(tags_, Media::Tags) };
      inline Media& setTags(const Media::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Media& setTags(Media::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Media& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
      inline Media& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The bitrate.
      shared_ptr<string> bitrate_ {};
      // The ID of the category to which the media file belongs.
      shared_ptr<int64_t> cateId_ {};
      // The review status of the media file. Valid values:
      // 
      // *   **Initiated**: The media file is uploaded but not reviewed.
      // *   **Pass**: The media file is uploaded and passes the review.
      shared_ptr<string> censorState_ {};
      // The URL of the thumbnail.
      shared_ptr<string> coverURL_ {};
      // The time when the media file was created.
      shared_ptr<string> creationTime_ {};
      // The description of the media file. The description can be up to 1,024 bytes in length.
      shared_ptr<string> description_ {};
      // The duration of the media file.
      shared_ptr<string> duration_ {};
      // The information about the input file.
      shared_ptr<Media::File> file_ {};
      // The format of the media file. Valid values: mov, mp4, m4a, 3gp, 3g2, and mj2.
      shared_ptr<string> format_ {};
      // The frame rate of the media file.
      shared_ptr<string> fps_ {};
      // The height of the media file.
      shared_ptr<string> height_ {};
      // The ID of the media file.
      shared_ptr<string> mediaId_ {};
      // The publishing status of the media file. Valid values:
      // 
      // *   **Initiated**: The media file is in the initial state.
      // *   **UnPublish**: The media file has not been published, and the playback permission on the OSS object is Private.
      // *   **Published**: The media file has been published, and the playback permission on the OSS object is Default.
      shared_ptr<string> publishState_ {};
      shared_ptr<Media::RunIdList> runIdList_ {};
      // The size of the media file.
      shared_ptr<string> size_ {};
      shared_ptr<Media::Tags> tags_ {};
      // The title of the media file. The title can be up to 128 bytes in length.
      shared_ptr<string> title_ {};
      // The width of the media file.
      shared_ptr<string> width_ {};
    };

    virtual bool empty() const override { return this->media_ == nullptr
        && this->requestId_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline const AddMediaResponseBody::Media & getMedia() const { DARABONBA_PTR_GET_CONST(media_, AddMediaResponseBody::Media) };
    inline AddMediaResponseBody::Media getMedia() { DARABONBA_PTR_GET(media_, AddMediaResponseBody::Media) };
    inline AddMediaResponseBody& setMedia(const AddMediaResponseBody::Media & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
    inline AddMediaResponseBody& setMedia(AddMediaResponseBody::Media && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the media file.
    shared_ptr<AddMediaResponseBody::Media> media_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
