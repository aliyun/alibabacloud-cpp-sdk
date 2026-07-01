// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDIOPRODUCEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDIOPRODUCEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAudioProduceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAudioProduceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAudioProduceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAudioProduceJobRequest() = default ;
    SubmitAudioProduceJobRequest(const SubmitAudioProduceJobRequest &) = default ;
    SubmitAudioProduceJobRequest(SubmitAudioProduceJobRequest &&) = default ;
    SubmitAudioProduceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAudioProduceJobRequest() = default ;
    SubmitAudioProduceJobRequest& operator=(const SubmitAudioProduceJobRequest &) = default ;
    SubmitAudioProduceJobRequest& operator=(SubmitAudioProduceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->editingConfig_ == nullptr && this->inputConfig_ == nullptr && this->outputConfig_ == nullptr && this->overwrite_ == nullptr && this->title_ == nullptr
        && this->userData_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitAudioProduceJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string getEditingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitAudioProduceJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string getInputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitAudioProduceJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string getOutputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitAudioProduceJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline SubmitAudioProduceJobRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAudioProduceJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAudioProduceJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The description of the job.
    // 
    // - Cannot exceed 1,024 bytes.
    // 
    // - Must be UTF-8 encoded.
    shared_ptr<string> description_ {};
    // The audio production configuration:
    // 
    // - `voice`: The [voice type](https://help.aliyun.com/document_detail/449563.html).
    // 
    // - `customizedVoice`: The ID of the custom voice for voice cloning.
    // 
    // - `format`: The output file format. Supported formats: `PCM`, `WAV`, and `MP3`.
    // 
    // - `volume`: The volume. The value ranges from 0 to 100. Default: 50.
    // 
    // - `speech_rate`: The speech rate. The value ranges from -500 to 500. Default: 0.
    // 
    //   - Values of -500, 0, and 500 correspond to 0.5x, 1.0x, and 2.0x speed, respectively.
    // 
    //   - Calculation method:
    // 
    //     - For a 0.8x speed multiplier: (1 - 1/0.8) / 0.002 = -125.
    // 
    //     - For a 1.2x speed multiplier: (1 - 1/1.2) / 0.001 = 166.
    // 
    //     - For speed multipliers less than 1, use a factor of 0.002.
    // 
    //     - For speed multipliers greater than 1, use a factor of 0.001.
    // 
    // - `pitch_rate`: The pitch rate. The value ranges from -500 to 500. Default: 0.
    // 
    // 
    //   >Notice: 
    // 
    //   If you provide both `voice` and `customizedVoice`, `customizedVoice` takes precedence.
    // 
    // This parameter is required.
    shared_ptr<string> editingConfig_ {};
    // The text to synthesize. The maximum length is 10,000 characters. Supports [SSML](https://help.aliyun.com/document_detail/2672807.html).
    // 
    // This parameter is required.
    shared_ptr<string> inputConfig_ {};
    // The audio output configuration.
    // 
    // This parameter is required.
    shared_ptr<string> outputConfig_ {};
    // Specifies whether to overwrite an existing OSS file.
    shared_ptr<bool> overwrite_ {};
    // The title of the job. If you do not provide a title, the system automatically generates one based on the current date.
    // 
    // - Cannot exceed 128 bytes.
    // 
    // - Must be UTF-8 encoded.
    shared_ptr<string> title_ {};
    // Custom settings in JSON format. The maximum length is 512 bytes. This parameter supports [custom callback address configuration](https://help.aliyun.com/document_detail/451631.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
