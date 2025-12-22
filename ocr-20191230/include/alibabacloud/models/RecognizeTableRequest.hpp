// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssureDirection, assureDirection_);
      DARABONBA_PTR_TO_JSON(HasLine, hasLine_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(SkipDetection, skipDetection_);
      DARABONBA_PTR_TO_JSON(UseFinanceModel, useFinanceModel_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssureDirection, assureDirection_);
      DARABONBA_PTR_FROM_JSON(HasLine, hasLine_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(SkipDetection, skipDetection_);
      DARABONBA_PTR_FROM_JSON(UseFinanceModel, useFinanceModel_);
    };
    RecognizeTableRequest() = default ;
    RecognizeTableRequest(const RecognizeTableRequest &) = default ;
    RecognizeTableRequest(RecognizeTableRequest &&) = default ;
    RecognizeTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTableRequest() = default ;
    RecognizeTableRequest& operator=(const RecognizeTableRequest &) = default ;
    RecognizeTableRequest& operator=(RecognizeTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assureDirection_ == nullptr
        && return this->hasLine_ == nullptr && return this->imageURL_ == nullptr && return this->outputFormat_ == nullptr && return this->skipDetection_ == nullptr && return this->useFinanceModel_ == nullptr; };
    // assureDirection Field Functions 
    bool hasAssureDirection() const { return this->assureDirection_ != nullptr;};
    void deleteAssureDirection() { this->assureDirection_ = nullptr;};
    inline bool assureDirection() const { DARABONBA_PTR_GET_DEFAULT(assureDirection_, false) };
    inline RecognizeTableRequest& setAssureDirection(bool assureDirection) { DARABONBA_PTR_SET_VALUE(assureDirection_, assureDirection) };


    // hasLine Field Functions 
    bool hasHasLine() const { return this->hasLine_ != nullptr;};
    void deleteHasLine() { this->hasLine_ = nullptr;};
    inline bool hasLine() const { DARABONBA_PTR_GET_DEFAULT(hasLine_, false) };
    inline RecognizeTableRequest& setHasLine(bool hasLine) { DARABONBA_PTR_SET_VALUE(hasLine_, hasLine) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline RecognizeTableRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline RecognizeTableRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // skipDetection Field Functions 
    bool hasSkipDetection() const { return this->skipDetection_ != nullptr;};
    void deleteSkipDetection() { this->skipDetection_ = nullptr;};
    inline bool skipDetection() const { DARABONBA_PTR_GET_DEFAULT(skipDetection_, false) };
    inline RecognizeTableRequest& setSkipDetection(bool skipDetection) { DARABONBA_PTR_SET_VALUE(skipDetection_, skipDetection) };


    // useFinanceModel Field Functions 
    bool hasUseFinanceModel() const { return this->useFinanceModel_ != nullptr;};
    void deleteUseFinanceModel() { this->useFinanceModel_ = nullptr;};
    inline bool useFinanceModel() const { DARABONBA_PTR_GET_DEFAULT(useFinanceModel_, false) };
    inline RecognizeTableRequest& setUseFinanceModel(bool useFinanceModel) { DARABONBA_PTR_SET_VALUE(useFinanceModel_, useFinanceModel) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> assureDirection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> hasLine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputFormat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> skipDetection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> useFinanceModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
