// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZECHARACTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZECHARACTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeCharacterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeCharacterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(MinHeight, minHeight_);
      DARABONBA_PTR_TO_JSON(OutputProbability, outputProbability_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeCharacterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(MinHeight, minHeight_);
      DARABONBA_PTR_FROM_JSON(OutputProbability, outputProbability_);
    };
    RecognizeCharacterRequest() = default ;
    RecognizeCharacterRequest(const RecognizeCharacterRequest &) = default ;
    RecognizeCharacterRequest(RecognizeCharacterRequest &&) = default ;
    RecognizeCharacterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeCharacterRequest() = default ;
    RecognizeCharacterRequest& operator=(const RecognizeCharacterRequest &) = default ;
    RecognizeCharacterRequest& operator=(RecognizeCharacterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->minHeight_ == nullptr && return this->outputProbability_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline RecognizeCharacterRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // minHeight Field Functions 
    bool hasMinHeight() const { return this->minHeight_ != nullptr;};
    void deleteMinHeight() { this->minHeight_ = nullptr;};
    inline int32_t minHeight() const { DARABONBA_PTR_GET_DEFAULT(minHeight_, 0) };
    inline RecognizeCharacterRequest& setMinHeight(int32_t minHeight) { DARABONBA_PTR_SET_VALUE(minHeight_, minHeight) };


    // outputProbability Field Functions 
    bool hasOutputProbability() const { return this->outputProbability_ != nullptr;};
    void deleteOutputProbability() { this->outputProbability_ = nullptr;};
    inline bool outputProbability() const { DARABONBA_PTR_GET_DEFAULT(outputProbability_, false) };
    inline RecognizeCharacterRequest& setOutputProbability(bool outputProbability) { DARABONBA_PTR_SET_VALUE(outputProbability_, outputProbability) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> minHeight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> outputProbability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
