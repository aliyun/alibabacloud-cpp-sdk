// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAVATARVIDEOJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAVATARVIDEOJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAvatarVideoJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAvatarVideoJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAvatarVideoJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAvatarVideoJobRequest() = default ;
    SubmitAvatarVideoJobRequest(const SubmitAvatarVideoJobRequest &) = default ;
    SubmitAvatarVideoJobRequest(SubmitAvatarVideoJobRequest &&) = default ;
    SubmitAvatarVideoJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAvatarVideoJobRequest() = default ;
    SubmitAvatarVideoJobRequest& operator=(const SubmitAvatarVideoJobRequest &) = default ;
    SubmitAvatarVideoJobRequest& operator=(SubmitAvatarVideoJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->editingConfig_ != nullptr && this->inputConfig_ != nullptr && this->outputConfig_ != nullptr && this->title_ != nullptr && this->userData_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitAvatarVideoJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline string editingConfig() const { DARABONBA_PTR_GET_DEFAULT(editingConfig_, "") };
    inline SubmitAvatarVideoJobRequest& setEditingConfig(string editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline string inputConfig() const { DARABONBA_PTR_GET_DEFAULT(inputConfig_, "") };
    inline SubmitAvatarVideoJobRequest& setInputConfig(string inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline string outputConfig() const { DARABONBA_PTR_GET_DEFAULT(outputConfig_, "") };
    inline SubmitAvatarVideoJobRequest& setOutputConfig(string outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAvatarVideoJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAvatarVideoJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> editingConfig_ = nullptr;
    // The input configurations of the video rendering job for an avatar. You can specify text, the Object Storage Service (OSS) URL of an audio file, or the ID of a media asset. The audio file must be in the MP3 or WAV format.
    // 
    // >  The text must be at least five words in length.
    std::shared_ptr<string> inputConfig_ = nullptr;
    std::shared_ptr<string> outputConfig_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
