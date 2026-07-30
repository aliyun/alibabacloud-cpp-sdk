// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOGENERATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOGENERATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VideoGenerationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(Intent, intentShrink_);
      DARABONBA_PTR_TO_JSON(Output, outputShrink_);
    };
    friend void from_json(const Darabonba::Json& j, VideoGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(Intent, intentShrink_);
      DARABONBA_PTR_FROM_JSON(Output, outputShrink_);
    };
    VideoGenerationShrinkRequest() = default ;
    VideoGenerationShrinkRequest(const VideoGenerationShrinkRequest &) = default ;
    VideoGenerationShrinkRequest(VideoGenerationShrinkRequest &&) = default ;
    VideoGenerationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoGenerationShrinkRequest() = default ;
    VideoGenerationShrinkRequest& operator=(const VideoGenerationShrinkRequest &) = default ;
    VideoGenerationShrinkRequest& operator=(VideoGenerationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputShrink_ == nullptr
        && this->intentShrink_ == nullptr && this->outputShrink_ == nullptr; };
    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline VideoGenerationShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // intentShrink Field Functions 
    bool hasIntentShrink() const { return this->intentShrink_ != nullptr;};
    void deleteIntentShrink() { this->intentShrink_ = nullptr;};
    inline string getIntentShrink() const { DARABONBA_PTR_GET_DEFAULT(intentShrink_, "") };
    inline VideoGenerationShrinkRequest& setIntentShrink(string intentShrink) { DARABONBA_PTR_SET_VALUE(intentShrink_, intentShrink) };


    // outputShrink Field Functions 
    bool hasOutputShrink() const { return this->outputShrink_ != nullptr;};
    void deleteOutputShrink() { this->outputShrink_ = nullptr;};
    inline string getOutputShrink() const { DARABONBA_PTR_GET_DEFAULT(outputShrink_, "") };
    inline VideoGenerationShrinkRequest& setOutputShrink(string outputShrink) { DARABONBA_PTR_SET_VALUE(outputShrink_, outputShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> inputShrink_ {};
    shared_ptr<string> intentShrink_ {};
    // This parameter is required.
    shared_ptr<string> outputShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
