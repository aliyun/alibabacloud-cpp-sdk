// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDRESPONSEBODY_HPP_
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
  class SearchMediaByHybridResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByHybridResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByHybridResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaByHybridResponseBody() = default ;
    SearchMediaByHybridResponseBody(const SearchMediaByHybridResponseBody &) = default ;
    SearchMediaByHybridResponseBody(SearchMediaByHybridResponseBody &&) = default ;
    SearchMediaByHybridResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByHybridResponseBody() = default ;
    SearchMediaByHybridResponseBody& operator=(const SearchMediaByHybridResponseBody &) = default ;
    SearchMediaByHybridResponseBody& operator=(SearchMediaByHybridResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaList& obj) { 
        DARABONBA_PTR_TO_JSON(ClipInfo, clipInfo_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClipInfo, clipInfo_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      MediaList() = default ;
      MediaList(const MediaList &) = default ;
      MediaList(MediaList &&) = default ;
      MediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaList() = default ;
      MediaList& operator=(const MediaList &) = default ;
      MediaList& operator=(MediaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClipInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClipInfo& obj) { 
          DARABONBA_PTR_TO_JSON(From, from_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(To, to_);
        };
        friend void from_json(const Darabonba::Json& j, ClipInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(From, from_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(To, to_);
        };
        ClipInfo() = default ;
        ClipInfo(const ClipInfo &) = default ;
        ClipInfo(ClipInfo &&) = default ;
        ClipInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClipInfo() = default ;
        ClipInfo& operator=(const ClipInfo &) = default ;
        ClipInfo& operator=(ClipInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->from_ == nullptr
        && this->score_ == nullptr && this->to_ == nullptr; };
        // from Field Functions 
        bool hasFrom() const { return this->from_ != nullptr;};
        void deleteFrom() { this->from_ = nullptr;};
        inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
        inline ClipInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline ClipInfo& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // to Field Functions 
        bool hasTo() const { return this->to_ != nullptr;};
        void deleteTo() { this->to_ = nullptr;};
        inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
        inline ClipInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


      protected:
        // The start time of the relevant clip.
        shared_ptr<double> from_ {};
        // The relevance score of the clip for the query.
        shared_ptr<double> score_ {};
        // The end time of the relevant clip.
        shared_ptr<double> to_ {};
      };

      virtual bool empty() const override { return this->clipInfo_ == nullptr
        && this->mediaId_ == nullptr; };
      // clipInfo Field Functions 
      bool hasClipInfo() const { return this->clipInfo_ != nullptr;};
      void deleteClipInfo() { this->clipInfo_ = nullptr;};
      inline const vector<MediaList::ClipInfo> & getClipInfo() const { DARABONBA_PTR_GET_CONST(clipInfo_, vector<MediaList::ClipInfo>) };
      inline vector<MediaList::ClipInfo> getClipInfo() { DARABONBA_PTR_GET(clipInfo_, vector<MediaList::ClipInfo>) };
      inline MediaList& setClipInfo(const vector<MediaList::ClipInfo> & clipInfo) { DARABONBA_PTR_SET_VALUE(clipInfo_, clipInfo) };
      inline MediaList& setClipInfo(vector<MediaList::ClipInfo> && clipInfo) { DARABONBA_PTR_SET_RVALUE(clipInfo_, clipInfo) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      // The information about the relevant clips.
      shared_ptr<vector<MediaList::ClipInfo>> clipInfo_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaByHybridResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const vector<SearchMediaByHybridResponseBody::MediaList> & getMediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, vector<SearchMediaByHybridResponseBody::MediaList>) };
    inline vector<SearchMediaByHybridResponseBody::MediaList> getMediaList() { DARABONBA_PTR_GET(mediaList_, vector<SearchMediaByHybridResponseBody::MediaList>) };
    inline SearchMediaByHybridResponseBody& setMediaList(const vector<SearchMediaByHybridResponseBody::MediaList> & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline SearchMediaByHybridResponseBody& setMediaList(vector<SearchMediaByHybridResponseBody::MediaList> && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaByHybridResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaByHybridResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaByHybridResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The media assets that match the search query.
    shared_ptr<vector<SearchMediaByHybridResponseBody::MediaList>> mediaList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<string> success_ {};
    // The total number of media assets that match the search criteria.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
