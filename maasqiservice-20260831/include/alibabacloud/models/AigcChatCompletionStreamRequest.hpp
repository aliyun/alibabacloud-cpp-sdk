// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIGCCHATCOMPLETIONSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AIGCCHATCOMPLETIONSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class AigcChatCompletionStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AigcChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(streamOptions, streamOptions_);
    };
    friend void from_json(const Darabonba::Json& j, AigcChatCompletionStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(streamOptions, streamOptions_);
    };
    AigcChatCompletionStreamRequest() = default ;
    AigcChatCompletionStreamRequest(const AigcChatCompletionStreamRequest &) = default ;
    AigcChatCompletionStreamRequest(AigcChatCompletionStreamRequest &&) = default ;
    AigcChatCompletionStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AigcChatCompletionStreamRequest() = default ;
    AigcChatCompletionStreamRequest& operator=(const AigcChatCompletionStreamRequest &) = default ;
    AigcChatCompletionStreamRequest& operator=(AigcChatCompletionStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamOptions& obj) { 
        DARABONBA_PTR_TO_JSON(includeUsage, includeUsage_);
      };
      friend void from_json(const Darabonba::Json& j, StreamOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(includeUsage, includeUsage_);
      };
      StreamOptions() = default ;
      StreamOptions(const StreamOptions &) = default ;
      StreamOptions(StreamOptions &&) = default ;
      StreamOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamOptions() = default ;
      StreamOptions& operator=(const StreamOptions &) = default ;
      StreamOptions& operator=(StreamOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->includeUsage_ == nullptr; };
      // includeUsage Field Functions 
      bool hasIncludeUsage() const { return this->includeUsage_ != nullptr;};
      void deleteIncludeUsage() { this->includeUsage_ = nullptr;};
      inline bool getIncludeUsage() const { DARABONBA_PTR_GET_DEFAULT(includeUsage_, false) };
      inline StreamOptions& setIncludeUsage(bool includeUsage) { DARABONBA_PTR_SET_VALUE(includeUsage_, includeUsage) };


    protected:
      shared_ptr<bool> includeUsage_ {};
    };

    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(guidanceScale, guidanceScale_);
          DARABONBA_PTR_TO_JSON(n, n_);
          DARABONBA_PTR_TO_JSON(negativePrompt, negativePrompt_);
          DARABONBA_PTR_TO_JSON(numInferenceSteps, numInferenceSteps_);
          DARABONBA_PTR_TO_JSON(seed, seed_);
          DARABONBA_PTR_TO_JSON(size, size_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(guidanceScale, guidanceScale_);
          DARABONBA_PTR_FROM_JSON(n, n_);
          DARABONBA_PTR_FROM_JSON(negativePrompt, negativePrompt_);
          DARABONBA_PTR_FROM_JSON(numInferenceSteps, numInferenceSteps_);
          DARABONBA_PTR_FROM_JSON(seed, seed_);
          DARABONBA_PTR_FROM_JSON(size, size_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->guidanceScale_ == nullptr
        && this->n_ == nullptr && this->negativePrompt_ == nullptr && this->numInferenceSteps_ == nullptr && this->seed_ == nullptr && this->size_ == nullptr; };
        // guidanceScale Field Functions 
        bool hasGuidanceScale() const { return this->guidanceScale_ != nullptr;};
        void deleteGuidanceScale() { this->guidanceScale_ = nullptr;};
        inline double getGuidanceScale() const { DARABONBA_PTR_GET_DEFAULT(guidanceScale_, 0.0) };
        inline Parameters& setGuidanceScale(double guidanceScale) { DARABONBA_PTR_SET_VALUE(guidanceScale_, guidanceScale) };


        // n Field Functions 
        bool hasN() const { return this->n_ != nullptr;};
        void deleteN() { this->n_ = nullptr;};
        inline int64_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0L) };
        inline Parameters& setN(int64_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


        // negativePrompt Field Functions 
        bool hasNegativePrompt() const { return this->negativePrompt_ != nullptr;};
        void deleteNegativePrompt() { this->negativePrompt_ = nullptr;};
        inline string getNegativePrompt() const { DARABONBA_PTR_GET_DEFAULT(negativePrompt_, "") };
        inline Parameters& setNegativePrompt(string negativePrompt) { DARABONBA_PTR_SET_VALUE(negativePrompt_, negativePrompt) };


        // numInferenceSteps Field Functions 
        bool hasNumInferenceSteps() const { return this->numInferenceSteps_ != nullptr;};
        void deleteNumInferenceSteps() { this->numInferenceSteps_ = nullptr;};
        inline int64_t getNumInferenceSteps() const { DARABONBA_PTR_GET_DEFAULT(numInferenceSteps_, 0L) };
        inline Parameters& setNumInferenceSteps(int64_t numInferenceSteps) { DARABONBA_PTR_SET_VALUE(numInferenceSteps_, numInferenceSteps) };


        // seed Field Functions 
        bool hasSeed() const { return this->seed_ != nullptr;};
        void deleteSeed() { this->seed_ = nullptr;};
        inline int64_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0L) };
        inline Parameters& setSeed(int64_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline Parameters& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        shared_ptr<double> guidanceScale_ {};
        shared_ptr<int64_t> n_ {};
        shared_ptr<string> negativePrompt_ {};
        shared_ptr<int64_t> numInferenceSteps_ {};
        shared_ptr<int64_t> seed_ {};
        shared_ptr<string> size_ {};
      };

      virtual bool empty() const override { return this->parameters_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const Metadata::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, Metadata::Parameters) };
      inline Metadata::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, Metadata::Parameters) };
      inline Metadata& setParameters(const Metadata::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline Metadata& setParameters(Metadata::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    protected:
      shared_ptr<Metadata::Parameters> parameters_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(text, text_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(text, text_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoUrl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoUrl& obj) { 
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, VideoUrl& obj) { 
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          VideoUrl() = default ;
          VideoUrl(const VideoUrl &) = default ;
          VideoUrl(VideoUrl &&) = default ;
          VideoUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoUrl() = default ;
          VideoUrl& operator=(const VideoUrl &) = default ;
          VideoUrl& operator=(VideoUrl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->url_ == nullptr; };
          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline VideoUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> url_ {};
        };

        class ImageUrl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ImageUrl& obj) { 
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, ImageUrl& obj) { 
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          ImageUrl() = default ;
          ImageUrl(const ImageUrl &) = default ;
          ImageUrl(ImageUrl &&) = default ;
          ImageUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ImageUrl() = default ;
          ImageUrl& operator=(const ImageUrl &) = default ;
          ImageUrl& operator=(ImageUrl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->url_ == nullptr; };
          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline ImageUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->text_ == nullptr && this->type_ == nullptr && this->videoUrl_ == nullptr; };
        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline const Content::ImageUrl & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, Content::ImageUrl) };
        inline Content::ImageUrl getImageUrl() { DARABONBA_PTR_GET(imageUrl_, Content::ImageUrl) };
        inline Content& setImageUrl(const Content::ImageUrl & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
        inline Content& setImageUrl(Content::ImageUrl && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // videoUrl Field Functions 
        bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
        void deleteVideoUrl() { this->videoUrl_ = nullptr;};
        inline const Content::VideoUrl & getVideoUrl() const { DARABONBA_PTR_GET_CONST(videoUrl_, Content::VideoUrl) };
        inline Content::VideoUrl getVideoUrl() { DARABONBA_PTR_GET(videoUrl_, Content::VideoUrl) };
        inline Content& setVideoUrl(const Content::VideoUrl & videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };
        inline Content& setVideoUrl(Content::VideoUrl && videoUrl) { DARABONBA_PTR_SET_RVALUE(videoUrl_, videoUrl) };


      protected:
        shared_ptr<Content::ImageUrl> imageUrl_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> type_ {};
        shared_ptr<Content::VideoUrl> videoUrl_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Messages::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Messages::Content>) };
      inline vector<Messages::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Messages::Content>) };
      inline Messages& setContent(const vector<Messages::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Messages& setContent(vector<Messages::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<vector<Messages::Content>> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->metadata_ == nullptr && this->model_ == nullptr && this->stream_ == nullptr && this->streamOptions_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<AigcChatCompletionStreamRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<AigcChatCompletionStreamRequest::Messages>) };
    inline vector<AigcChatCompletionStreamRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<AigcChatCompletionStreamRequest::Messages>) };
    inline AigcChatCompletionStreamRequest& setMessages(const vector<AigcChatCompletionStreamRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AigcChatCompletionStreamRequest& setMessages(vector<AigcChatCompletionStreamRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const AigcChatCompletionStreamRequest::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, AigcChatCompletionStreamRequest::Metadata) };
    inline AigcChatCompletionStreamRequest::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, AigcChatCompletionStreamRequest::Metadata) };
    inline AigcChatCompletionStreamRequest& setMetadata(const AigcChatCompletionStreamRequest::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline AigcChatCompletionStreamRequest& setMetadata(AigcChatCompletionStreamRequest::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline AigcChatCompletionStreamRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline AigcChatCompletionStreamRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // streamOptions Field Functions 
    bool hasStreamOptions() const { return this->streamOptions_ != nullptr;};
    void deleteStreamOptions() { this->streamOptions_ = nullptr;};
    inline const AigcChatCompletionStreamRequest::StreamOptions & getStreamOptions() const { DARABONBA_PTR_GET_CONST(streamOptions_, AigcChatCompletionStreamRequest::StreamOptions) };
    inline AigcChatCompletionStreamRequest::StreamOptions getStreamOptions() { DARABONBA_PTR_GET(streamOptions_, AigcChatCompletionStreamRequest::StreamOptions) };
    inline AigcChatCompletionStreamRequest& setStreamOptions(const AigcChatCompletionStreamRequest::StreamOptions & streamOptions) { DARABONBA_PTR_SET_VALUE(streamOptions_, streamOptions) };
    inline AigcChatCompletionStreamRequest& setStreamOptions(AigcChatCompletionStreamRequest::StreamOptions && streamOptions) { DARABONBA_PTR_SET_RVALUE(streamOptions_, streamOptions) };


  protected:
    // This parameter is required.
    shared_ptr<vector<AigcChatCompletionStreamRequest::Messages>> messages_ {};
    shared_ptr<AigcChatCompletionStreamRequest::Metadata> metadata_ {};
    shared_ptr<string> model_ {};
    // This parameter is required.
    shared_ptr<bool> stream_ {};
    shared_ptr<AigcChatCompletionStreamRequest::StreamOptions> streamOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
