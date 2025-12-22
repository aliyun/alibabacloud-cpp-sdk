// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZECHARACTERADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZECHARACTERADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeCharacterAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeCharacterAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(MinHeight, minHeight_);
      DARABONBA_PTR_TO_JSON(OutputProbability, outputProbability_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeCharacterAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(MinHeight, minHeight_);
      DARABONBA_PTR_FROM_JSON(OutputProbability, outputProbability_);
    };
    RecognizeCharacterAdvanceRequest() = default ;
    RecognizeCharacterAdvanceRequest(const RecognizeCharacterAdvanceRequest &) = default ;
    RecognizeCharacterAdvanceRequest(RecognizeCharacterAdvanceRequest &&) = default ;
    RecognizeCharacterAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeCharacterAdvanceRequest() = default ;
    RecognizeCharacterAdvanceRequest& operator=(const RecognizeCharacterAdvanceRequest &) = default ;
    RecognizeCharacterAdvanceRequest& operator=(RecognizeCharacterAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->minHeight_ == nullptr && return this->outputProbability_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline RecognizeCharacterAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // minHeight Field Functions 
    bool hasMinHeight() const { return this->minHeight_ != nullptr;};
    void deleteMinHeight() { this->minHeight_ = nullptr;};
    inline int32_t minHeight() const { DARABONBA_PTR_GET_DEFAULT(minHeight_, 0) };
    inline RecognizeCharacterAdvanceRequest& setMinHeight(int32_t minHeight) { DARABONBA_PTR_SET_VALUE(minHeight_, minHeight) };


    // outputProbability Field Functions 
    bool hasOutputProbability() const { return this->outputProbability_ != nullptr;};
    void deleteOutputProbability() { this->outputProbability_ = nullptr;};
    inline bool outputProbability() const { DARABONBA_PTR_GET_DEFAULT(outputProbability_, false) };
    inline RecognizeCharacterAdvanceRequest& setOutputProbability(bool outputProbability) { DARABONBA_PTR_SET_VALUE(outputProbability_, outputProbability) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> minHeight_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> outputProbability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
