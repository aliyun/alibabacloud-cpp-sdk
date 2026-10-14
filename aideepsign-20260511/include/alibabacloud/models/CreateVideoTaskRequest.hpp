// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateVideoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptExtend, promptExtend_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptExtend, promptExtend_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    CreateVideoTaskRequest() = default ;
    CreateVideoTaskRequest(const CreateVideoTaskRequest &) = default ;
    CreateVideoTaskRequest(CreateVideoTaskRequest &&) = default ;
    CreateVideoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoTaskRequest() = default ;
    CreateVideoTaskRequest& operator=(const CreateVideoTaskRequest &) = default ;
    CreateVideoTaskRequest& operator=(CreateVideoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Media : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Media& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Media& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
      virtual bool empty() const override { return this->type_ == nullptr
        && this->url_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Media& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Media& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The media type for the first item. Valid values: first_frame, last_frame, reference_image, reference_video, reference_audio, file, and link.
      shared_ptr<string> type_ {};
      // The media URL for the first item. You can specify a public HTTP or HTTPS URL, a temporary oss:// URL, or inline data in the format of data:{mime};base64,....
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->media_ == nullptr
        && this->audio_ == nullptr && this->clientToken_ == nullptr && this->duration_ == nullptr && this->model_ == nullptr && this->prompt_ == nullptr
        && this->promptExtend_ == nullptr && this->ratio_ == nullptr && this->resolution_ == nullptr && this->seed_ == nullptr && this->watermark_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline const vector<CreateVideoTaskRequest::Media> & getMedia() const { DARABONBA_PTR_GET_CONST(media_, vector<CreateVideoTaskRequest::Media>) };
    inline vector<CreateVideoTaskRequest::Media> getMedia() { DARABONBA_PTR_GET(media_, vector<CreateVideoTaskRequest::Media>) };
    inline CreateVideoTaskRequest& setMedia(const vector<CreateVideoTaskRequest::Media> & media) { DARABONBA_PTR_SET_VALUE(media_, media) };
    inline CreateVideoTaskRequest& setMedia(vector<CreateVideoTaskRequest::Media> && media) { DARABONBA_PTR_SET_RVALUE(media_, media) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline bool getAudio() const { DARABONBA_PTR_GET_DEFAULT(audio_, false) };
    inline CreateVideoTaskRequest& setAudio(bool audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVideoTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateVideoTaskRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateVideoTaskRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateVideoTaskRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptExtend Field Functions 
    bool hasPromptExtend() const { return this->promptExtend_ != nullptr;};
    void deletePromptExtend() { this->promptExtend_ = nullptr;};
    inline bool getPromptExtend() const { DARABONBA_PTR_GET_DEFAULT(promptExtend_, false) };
    inline CreateVideoTaskRequest& setPromptExtend(bool promptExtend) { DARABONBA_PTR_SET_VALUE(promptExtend_, promptExtend) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline CreateVideoTaskRequest& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline CreateVideoTaskRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline CreateVideoTaskRequest& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline bool getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, false) };
    inline CreateVideoTaskRequest& setWatermark(bool watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


  protected:
    shared_ptr<vector<CreateVideoTaskRequest::Media>> media_ {};
    // Specifies whether to include an audio track. Default value: true.
    shared_ptr<bool> audio_ {};
    // The idempotency parameter.
    shared_ptr<string> clientToken_ {};
    // The video duration in seconds. Valid values: an integer from 2 to 30, -1 (intelligent duration), and 0 (server default of 5 seconds).
    shared_ptr<int32_t> duration_ {};
    // The model name. Valid values: wan3.0-video (default) and wan3.0-video-prime (high-speed version).
    shared_ptr<string> model_ {};
    // The video description prompt. You must specify either this parameter or Media. For text-to-video generation, only Prompt is required.
    shared_ptr<string> prompt_ {};
    // Specifies whether to enable intelligent rewriting (prompt_extend). Default value: true.
    shared_ptr<bool> promptExtend_ {};
    // The aspect ratio. Valid values: adaptive (default), 16:9, 4:3, 1:1, 3:4, and 9:16.
    shared_ptr<string> ratio_ {};
    // The resolution. Valid values: 1080P (default), 720P, and 480P.
    shared_ptr<string> resolution_ {};
    // The random seed. Valid values: -1 (random), an integer from 0 to 2147483647, and 0 (server default of random).
    shared_ptr<int32_t> seed_ {};
    // Specifies whether to add a Model Studio watermark. Default value: false.
    shared_ptr<bool> watermark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
