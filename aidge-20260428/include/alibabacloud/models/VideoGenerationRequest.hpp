// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VideoGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Intent, intent_);
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, VideoGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Intent, intent_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    VideoGenerationRequest() = default ;
    VideoGenerationRequest(const VideoGenerationRequest &) = default ;
    VideoGenerationRequest(VideoGenerationRequest &&) = default ;
    VideoGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoGenerationRequest() = default ;
    VideoGenerationRequest& operator=(const VideoGenerationRequest &) = default ;
    VideoGenerationRequest& operator=(VideoGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Quality, quality_);
        DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Quality, quality_);
        DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->quality_ == nullptr && this->ratio_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Output& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // quality Field Functions 
      bool hasQuality() const { return this->quality_ != nullptr;};
      void deleteQuality() { this->quality_ = nullptr;};
      inline string getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, "") };
      inline Output& setQuality(string quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
      inline Output& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    protected:
      // The video duration in seconds. Currently supports integers between 5 and 15. More options will be available in the future.
      // 
      // This parameter is required.
      shared_ptr<int64_t> duration_ {};
      // The output resolution.
      // 
      // This parameter is required.
      shared_ptr<string> quality_ {};
      // The video aspect ratio.
      shared_ptr<string> ratio_ {};
    };

    class Intent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Intent& obj) { 
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Goal, goal_);
        DARABONBA_PTR_TO_JSON(Script, script_);
      };
      friend void from_json(const Darabonba::Json& j, Intent& obj) { 
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Goal, goal_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
      };
      Intent() = default ;
      Intent(const Intent &) = default ;
      Intent(Intent &&) = default ;
      Intent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Intent() = default ;
      Intent& operator=(const Intent &) = default ;
      Intent& operator=(Intent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channel_ == nullptr
        && this->goal_ == nullptr && this->script_ == nullptr; };
      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Intent& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // goal Field Functions 
      bool hasGoal() const { return this->goal_ != nullptr;};
      void deleteGoal() { this->goal_ = nullptr;};
      inline string getGoal() const { DARABONBA_PTR_GET_DEFAULT(goal_, "") };
      inline Intent& setGoal(string goal) { DARABONBA_PTR_SET_VALUE(goal_, goal) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
      inline Intent& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    protected:
      // The distribution channel.
      shared_ptr<string> channel_ {};
      // The business goal.
      shared_ptr<string> goal_ {};
      // Required when goal is set to scripted_video.
      shared_ptr<string> script_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(AssetBindings, assetBindings_);
        DARABONBA_ANY_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(Images, images_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetBindings, assetBindings_);
        DARABONBA_ANY_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(Images, images_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      class AssetBindings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssetBindings& obj) { 
          DARABONBA_PTR_TO_JSON(AssetIndex, assetIndex_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Slot, slot_);
        };
        friend void from_json(const Darabonba::Json& j, AssetBindings& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetIndex, assetIndex_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Slot, slot_);
        };
        AssetBindings() = default ;
        AssetBindings(const AssetBindings &) = default ;
        AssetBindings(AssetBindings &&) = default ;
        AssetBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssetBindings() = default ;
        AssetBindings& operator=(const AssetBindings &) = default ;
        AssetBindings& operator=(AssetBindings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetIndex_ == nullptr
        && this->description_ == nullptr && this->slot_ == nullptr; };
        // assetIndex Field Functions 
        bool hasAssetIndex() const { return this->assetIndex_ != nullptr;};
        void deleteAssetIndex() { this->assetIndex_ = nullptr;};
        inline int32_t getAssetIndex() const { DARABONBA_PTR_GET_DEFAULT(assetIndex_, 0) };
        inline AssetBindings& setAssetIndex(int32_t assetIndex) { DARABONBA_PTR_SET_VALUE(assetIndex_, assetIndex) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AssetBindings& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // slot Field Functions 
        bool hasSlot() const { return this->slot_ != nullptr;};
        void deleteSlot() { this->slot_ = nullptr;};
        inline string getSlot() const { DARABONBA_PTR_GET_DEFAULT(slot_, "") };
        inline AssetBindings& setSlot(string slot) { DARABONBA_PTR_SET_VALUE(slot_, slot) };


      protected:
        // The asset index.
        shared_ptr<int32_t> assetIndex_ {};
        // The natural language description of the asset.
        shared_ptr<string> description_ {};
        // Valid values:
        // - look_reference: appearance reference.
        // - scene_reference: scene reference.
        shared_ptr<string> slot_ {};
      };

      virtual bool empty() const override { return this->assetBindings_ == nullptr
        && this->extra_ == nullptr && this->images_ == nullptr && this->title_ == nullptr; };
      // assetBindings Field Functions 
      bool hasAssetBindings() const { return this->assetBindings_ != nullptr;};
      void deleteAssetBindings() { this->assetBindings_ = nullptr;};
      inline const vector<Input::AssetBindings> & getAssetBindings() const { DARABONBA_PTR_GET_CONST(assetBindings_, vector<Input::AssetBindings>) };
      inline vector<Input::AssetBindings> getAssetBindings() { DARABONBA_PTR_GET(assetBindings_, vector<Input::AssetBindings>) };
      inline Input& setAssetBindings(const vector<Input::AssetBindings> & assetBindings) { DARABONBA_PTR_SET_VALUE(assetBindings_, assetBindings) };
      inline Input& setAssetBindings(vector<Input::AssetBindings> && assetBindings) { DARABONBA_PTR_SET_RVALUE(assetBindings_, assetBindings) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline       const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
      Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
      inline Input& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
      inline Input& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
      inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
      inline Input& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline Input& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Input& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Specifies the purpose and description of images by asset index.
      shared_ptr<vector<Input::AssetBindings>> assetBindings_ {};
      // The extended information.
      Darabonba::Json extra_ {};
      // The list of product image URLs (1 to 6 images). The URLs must be publicly accessible.
      // 
      // This parameter is required.
      shared_ptr<vector<string>> images_ {};
      // The product title. A maximum of the first 60 characters are used.
      // 
      // This parameter is required.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->intent_ == nullptr && this->output_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const VideoGenerationRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, VideoGenerationRequest::Input) };
    inline VideoGenerationRequest::Input getInput() { DARABONBA_PTR_GET(input_, VideoGenerationRequest::Input) };
    inline VideoGenerationRequest& setInput(const VideoGenerationRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline VideoGenerationRequest& setInput(VideoGenerationRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // intent Field Functions 
    bool hasIntent() const { return this->intent_ != nullptr;};
    void deleteIntent() { this->intent_ = nullptr;};
    inline const VideoGenerationRequest::Intent & getIntent() const { DARABONBA_PTR_GET_CONST(intent_, VideoGenerationRequest::Intent) };
    inline VideoGenerationRequest::Intent getIntent() { DARABONBA_PTR_GET(intent_, VideoGenerationRequest::Intent) };
    inline VideoGenerationRequest& setIntent(const VideoGenerationRequest::Intent & intent) { DARABONBA_PTR_SET_VALUE(intent_, intent) };
    inline VideoGenerationRequest& setIntent(VideoGenerationRequest::Intent && intent) { DARABONBA_PTR_SET_RVALUE(intent_, intent) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const VideoGenerationRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, VideoGenerationRequest::Output) };
    inline VideoGenerationRequest::Output getOutput() { DARABONBA_PTR_GET(output_, VideoGenerationRequest::Output) };
    inline VideoGenerationRequest& setOutput(const VideoGenerationRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline VideoGenerationRequest& setOutput(VideoGenerationRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


  protected:
    // The product input.
    // 
    // This parameter is required.
    shared_ptr<VideoGenerationRequest::Input> input_ {};
    // The intent parameters. Currently unavailable.
    shared_ptr<VideoGenerationRequest::Intent> intent_ {};
    // The output parameters.
    // 
    // This parameter is required.
    shared_ptr<VideoGenerationRequest::Output> output_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
