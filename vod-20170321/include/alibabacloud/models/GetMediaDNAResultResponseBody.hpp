// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaDNAResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaDNAResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DNAResult, DNAResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaDNAResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DNAResult, DNAResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaDNAResultResponseBody() = default ;
    GetMediaDNAResultResponseBody(const GetMediaDNAResultResponseBody &) = default ;
    GetMediaDNAResultResponseBody(GetMediaDNAResultResponseBody &&) = default ;
    GetMediaDNAResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaDNAResultResponseBody() = default ;
    GetMediaDNAResultResponseBody& operator=(const GetMediaDNAResultResponseBody &) = default ;
    GetMediaDNAResultResponseBody& operator=(GetMediaDNAResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DNAResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DNAResult& obj) { 
        DARABONBA_PTR_TO_JSON(VideoDNA, videoDNA_);
      };
      friend void from_json(const Darabonba::Json& j, DNAResult& obj) { 
        DARABONBA_PTR_FROM_JSON(VideoDNA, videoDNA_);
      };
      DNAResult() = default ;
      DNAResult(const DNAResult &) = default ;
      DNAResult(DNAResult &&) = default ;
      DNAResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DNAResult() = default ;
      DNAResult& operator=(const DNAResult &) = default ;
      DNAResult& operator=(DNAResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoDNA : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoDNA& obj) { 
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_TO_JSON(Similarity, similarity_);
        };
        friend void from_json(const Darabonba::Json& j, VideoDNA& obj) { 
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
          DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
        };
        VideoDNA() = default ;
        VideoDNA(const VideoDNA &) = default ;
        VideoDNA(VideoDNA &&) = default ;
        VideoDNA(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoDNA() = default ;
        VideoDNA& operator=(const VideoDNA &) = default ;
        VideoDNA& operator=(VideoDNA &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(Duplication, duplication_);
            DARABONBA_PTR_TO_JSON(Input, input_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(Duplication, duplication_);
            DARABONBA_PTR_FROM_JSON(Input, input_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Input : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Input& obj) { 
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(Start, start_);
            };
            friend void from_json(const Darabonba::Json& j, Input& obj) { 
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(Start, start_);
            };
            Input() = default ;
            Input(const Input &) = default ;
            Input(Input &&) = default ;
            Input(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Input() = default ;
            Input& operator=(const Input &) = default ;
            Input& operator=(Input &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline Input& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // start Field Functions 
            bool hasStart() const { return this->start_ != nullptr;};
            void deleteStart() { this->start_ = nullptr;};
            inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
            inline Input& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          protected:
            // The duration of the video. Unit: seconds.
            shared_ptr<string> duration_ {};
            // The start time of the video. Unit: seconds.
            shared_ptr<string> start_ {};
          };

          class Duplication : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Duplication& obj) { 
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(Start, start_);
            };
            friend void from_json(const Darabonba::Json& j, Duplication& obj) { 
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(Start, start_);
            };
            Duplication() = default ;
            Duplication(const Duplication &) = default ;
            Duplication(Duplication &&) = default ;
            Duplication(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Duplication() = default ;
            Duplication& operator=(const Duplication &) = default ;
            Duplication& operator=(Duplication &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline Duplication& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // start Field Functions 
            bool hasStart() const { return this->start_ != nullptr;};
            void deleteStart() { this->start_ = nullptr;};
            inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
            inline Duplication& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          protected:
            // The duration of the video. Unit: seconds.
            shared_ptr<string> duration_ {};
            // The start time of the video. Unit: seconds.
            shared_ptr<string> start_ {};
          };

          virtual bool empty() const override { return this->duplication_ == nullptr
        && this->input_ == nullptr; };
          // duplication Field Functions 
          bool hasDuplication() const { return this->duplication_ != nullptr;};
          void deleteDuplication() { this->duplication_ = nullptr;};
          inline const Detail::Duplication & getDuplication() const { DARABONBA_PTR_GET_CONST(duplication_, Detail::Duplication) };
          inline Detail::Duplication getDuplication() { DARABONBA_PTR_GET(duplication_, Detail::Duplication) };
          inline Detail& setDuplication(const Detail::Duplication & duplication) { DARABONBA_PTR_SET_VALUE(duplication_, duplication) };
          inline Detail& setDuplication(Detail::Duplication && duplication) { DARABONBA_PTR_SET_RVALUE(duplication_, duplication) };


          // input Field Functions 
          bool hasInput() const { return this->input_ != nullptr;};
          void deleteInput() { this->input_ = nullptr;};
          inline const Detail::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Detail::Input) };
          inline Detail::Input getInput() { DARABONBA_PTR_GET(input_, Detail::Input) };
          inline Detail& setInput(const Detail::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
          inline Detail& setInput(Detail::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        protected:
          // The start time and duration of the matched video.
          shared_ptr<Detail::Duplication> duplication_ {};
          // The start time and duration of the input video.
          shared_ptr<Detail::Input> input_ {};
        };

        virtual bool empty() const override { return this->detail_ == nullptr
        && this->primaryKey_ == nullptr && this->similarity_ == nullptr; };
        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const vector<VideoDNA::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<VideoDNA::Detail>) };
        inline vector<VideoDNA::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<VideoDNA::Detail>) };
        inline VideoDNA& setDetail(const vector<VideoDNA::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline VideoDNA& setDetail(vector<VideoDNA::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // primaryKey Field Functions 
        bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
        void deletePrimaryKey() { this->primaryKey_ = nullptr;};
        inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
        inline VideoDNA& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


        // similarity Field Functions 
        bool hasSimilarity() const { return this->similarity_ != nullptr;};
        void deleteSimilarity() { this->similarity_ = nullptr;};
        inline string getSimilarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
        inline VideoDNA& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


      protected:
        // The details of the matched video. Information such as the location and duration of the video is returned.
        shared_ptr<vector<VideoDNA::Detail>> detail_ {};
        // The ID of the video that has a similar fingerprint.
        shared_ptr<string> primaryKey_ {};
        // The similarity between the fingerprints of the input video and the matched video. 1 indicates that the fingerprints of the two videos are the same.
        shared_ptr<string> similarity_ {};
      };

      virtual bool empty() const override { return this->videoDNA_ == nullptr; };
      // videoDNA Field Functions 
      bool hasVideoDNA() const { return this->videoDNA_ != nullptr;};
      void deleteVideoDNA() { this->videoDNA_ = nullptr;};
      inline const vector<DNAResult::VideoDNA> & getVideoDNA() const { DARABONBA_PTR_GET_CONST(videoDNA_, vector<DNAResult::VideoDNA>) };
      inline vector<DNAResult::VideoDNA> getVideoDNA() { DARABONBA_PTR_GET(videoDNA_, vector<DNAResult::VideoDNA>) };
      inline DNAResult& setVideoDNA(const vector<DNAResult::VideoDNA> & videoDNA) { DARABONBA_PTR_SET_VALUE(videoDNA_, videoDNA) };
      inline DNAResult& setVideoDNA(vector<DNAResult::VideoDNA> && videoDNA) { DARABONBA_PTR_SET_RVALUE(videoDNA_, videoDNA) };


    protected:
      // The video fingerprint recognition result.
      shared_ptr<vector<DNAResult::VideoDNA>> videoDNA_ {};
    };

    virtual bool empty() const override { return this->DNAResult_ == nullptr
        && this->requestId_ == nullptr; };
    // DNAResult Field Functions 
    bool hasDNAResult() const { return this->DNAResult_ != nullptr;};
    void deleteDNAResult() { this->DNAResult_ = nullptr;};
    inline const GetMediaDNAResultResponseBody::DNAResult & getDNAResult() const { DARABONBA_PTR_GET_CONST(DNAResult_, GetMediaDNAResultResponseBody::DNAResult) };
    inline GetMediaDNAResultResponseBody::DNAResult getDNAResult() { DARABONBA_PTR_GET(DNAResult_, GetMediaDNAResultResponseBody::DNAResult) };
    inline GetMediaDNAResultResponseBody& setDNAResult(const GetMediaDNAResultResponseBody::DNAResult & dNAResult) { DARABONBA_PTR_SET_VALUE(DNAResult_, dNAResult) };
    inline GetMediaDNAResultResponseBody& setDNAResult(GetMediaDNAResultResponseBody::DNAResult && dNAResult) { DARABONBA_PTR_SET_RVALUE(DNAResult_, dNAResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaDNAResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media fingerprinting results.
    shared_ptr<GetMediaDNAResultResponseBody::DNAResult> DNAResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
