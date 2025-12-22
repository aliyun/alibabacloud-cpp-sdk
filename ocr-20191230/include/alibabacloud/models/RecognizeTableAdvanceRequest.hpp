// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETABLEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETABLEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTableAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTableAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssureDirection, assureDirection_);
      DARABONBA_PTR_TO_JSON(HasLine, hasLine_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(SkipDetection, skipDetection_);
      DARABONBA_PTR_TO_JSON(UseFinanceModel, useFinanceModel_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTableAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssureDirection, assureDirection_);
      DARABONBA_PTR_FROM_JSON(HasLine, hasLine_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(SkipDetection, skipDetection_);
      DARABONBA_PTR_FROM_JSON(UseFinanceModel, useFinanceModel_);
    };
    RecognizeTableAdvanceRequest() = default ;
    RecognizeTableAdvanceRequest(const RecognizeTableAdvanceRequest &) = default ;
    RecognizeTableAdvanceRequest(RecognizeTableAdvanceRequest &&) = default ;
    RecognizeTableAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTableAdvanceRequest() = default ;
    RecognizeTableAdvanceRequest& operator=(const RecognizeTableAdvanceRequest &) = default ;
    RecognizeTableAdvanceRequest& operator=(RecognizeTableAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assureDirection_ == nullptr
        && return this->hasLine_ == nullptr && return this->imageURLObject_ == nullptr && return this->outputFormat_ == nullptr && return this->skipDetection_ == nullptr && return this->useFinanceModel_ == nullptr; };
    // assureDirection Field Functions 
    bool hasAssureDirection() const { return this->assureDirection_ != nullptr;};
    void deleteAssureDirection() { this->assureDirection_ = nullptr;};
    inline bool assureDirection() const { DARABONBA_PTR_GET_DEFAULT(assureDirection_, false) };
    inline RecognizeTableAdvanceRequest& setAssureDirection(bool assureDirection) { DARABONBA_PTR_SET_VALUE(assureDirection_, assureDirection) };


    // hasLine Field Functions 
    bool hasHasLine() const { return this->hasLine_ != nullptr;};
    void deleteHasLine() { this->hasLine_ = nullptr;};
    inline bool hasLine() const { DARABONBA_PTR_GET_DEFAULT(hasLine_, false) };
    inline RecognizeTableAdvanceRequest& setHasLine(bool hasLine) { DARABONBA_PTR_SET_VALUE(hasLine_, hasLine) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline RecognizeTableAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline RecognizeTableAdvanceRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // skipDetection Field Functions 
    bool hasSkipDetection() const { return this->skipDetection_ != nullptr;};
    void deleteSkipDetection() { this->skipDetection_ = nullptr;};
    inline bool skipDetection() const { DARABONBA_PTR_GET_DEFAULT(skipDetection_, false) };
    inline RecognizeTableAdvanceRequest& setSkipDetection(bool skipDetection) { DARABONBA_PTR_SET_VALUE(skipDetection_, skipDetection) };


    // useFinanceModel Field Functions 
    bool hasUseFinanceModel() const { return this->useFinanceModel_ != nullptr;};
    void deleteUseFinanceModel() { this->useFinanceModel_ = nullptr;};
    inline bool useFinanceModel() const { DARABONBA_PTR_GET_DEFAULT(useFinanceModel_, false) };
    inline RecognizeTableAdvanceRequest& setUseFinanceModel(bool useFinanceModel) { DARABONBA_PTR_SET_VALUE(useFinanceModel_, useFinanceModel) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> assureDirection_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> hasLine_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
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
