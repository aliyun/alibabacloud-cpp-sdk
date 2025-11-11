// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTOUTPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTOUTPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestOutputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestOutputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_TO_JSON(SaveToGeneratedContent, saveToGeneratedContent_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestOutputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MaxDuration, maxDuration_);
      DARABONBA_PTR_FROM_JSON(SaveToGeneratedContent, saveToGeneratedContent_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitSmartClipTaskRequestOutputConfig() = default ;
    SubmitSmartClipTaskRequestOutputConfig(const SubmitSmartClipTaskRequestOutputConfig &) = default ;
    SubmitSmartClipTaskRequestOutputConfig(SubmitSmartClipTaskRequestOutputConfig &&) = default ;
    SubmitSmartClipTaskRequestOutputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestOutputConfig() = default ;
    SubmitSmartClipTaskRequestOutputConfig& operator=(const SubmitSmartClipTaskRequestOutputConfig &) = default ;
    SubmitSmartClipTaskRequestOutputConfig& operator=(SubmitSmartClipTaskRequestOutputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->fileName_ == nullptr && return this->height_ == nullptr && return this->maxDuration_ == nullptr && return this->saveToGeneratedContent_ == nullptr && return this->width_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline SubmitSmartClipTaskRequestOutputConfig& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitSmartClipTaskRequestOutputConfig& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline SubmitSmartClipTaskRequestOutputConfig& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // maxDuration Field Functions 
    bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
    void deleteMaxDuration() { this->maxDuration_ = nullptr;};
    inline int32_t maxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, 0) };
    inline SubmitSmartClipTaskRequestOutputConfig& setMaxDuration(int32_t maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


    // saveToGeneratedContent Field Functions 
    bool hasSaveToGeneratedContent() const { return this->saveToGeneratedContent_ != nullptr;};
    void deleteSaveToGeneratedContent() { this->saveToGeneratedContent_ = nullptr;};
    inline bool saveToGeneratedContent() const { DARABONBA_PTR_GET_DEFAULT(saveToGeneratedContent_, false) };
    inline SubmitSmartClipTaskRequestOutputConfig& setSaveToGeneratedContent(bool saveToGeneratedContent) { DARABONBA_PTR_SET_VALUE(saveToGeneratedContent_, saveToGeneratedContent) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline SubmitSmartClipTaskRequestOutputConfig& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> maxDuration_ = nullptr;
    std::shared_ptr<bool> saveToGeneratedContent_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
