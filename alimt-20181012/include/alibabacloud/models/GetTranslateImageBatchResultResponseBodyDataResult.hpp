// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSLATEIMAGEBATCHRESULTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSLATEIMAGEBATCHRESULTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTranslateImageBatchResultResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranslateImageBatchResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FinalImageUrl, finalImageUrl_);
      DARABONBA_PTR_TO_JSON(InPaintingUrl, inPaintingUrl_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(SourceImageUrl, sourceImageUrl_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TemplateJson, templateJson_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranslateImageBatchResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FinalImageUrl, finalImageUrl_);
      DARABONBA_PTR_FROM_JSON(InPaintingUrl, inPaintingUrl_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(SourceImageUrl, sourceImageUrl_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TemplateJson, templateJson_);
    };
    GetTranslateImageBatchResultResponseBodyDataResult() = default ;
    GetTranslateImageBatchResultResponseBodyDataResult(const GetTranslateImageBatchResultResponseBodyDataResult &) = default ;
    GetTranslateImageBatchResultResponseBodyDataResult(GetTranslateImageBatchResultResponseBodyDataResult &&) = default ;
    GetTranslateImageBatchResultResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranslateImageBatchResultResponseBodyDataResult() = default ;
    GetTranslateImageBatchResultResponseBodyDataResult& operator=(const GetTranslateImageBatchResultResponseBodyDataResult &) = default ;
    GetTranslateImageBatchResultResponseBodyDataResult& operator=(GetTranslateImageBatchResultResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->finalImageUrl_ == nullptr && return this->inPaintingUrl_ == nullptr && return this->message_ == nullptr && return this->sourceImageUrl_ == nullptr && return this->success_ == nullptr
        && return this->templateJson_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // finalImageUrl Field Functions 
    bool hasFinalImageUrl() const { return this->finalImageUrl_ != nullptr;};
    void deleteFinalImageUrl() { this->finalImageUrl_ = nullptr;};
    inline string finalImageUrl() const { DARABONBA_PTR_GET_DEFAULT(finalImageUrl_, "") };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setFinalImageUrl(string finalImageUrl) { DARABONBA_PTR_SET_VALUE(finalImageUrl_, finalImageUrl) };


    // inPaintingUrl Field Functions 
    bool hasInPaintingUrl() const { return this->inPaintingUrl_ != nullptr;};
    void deleteInPaintingUrl() { this->inPaintingUrl_ = nullptr;};
    inline string inPaintingUrl() const { DARABONBA_PTR_GET_DEFAULT(inPaintingUrl_, "") };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setInPaintingUrl(string inPaintingUrl) { DARABONBA_PTR_SET_VALUE(inPaintingUrl_, inPaintingUrl) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // sourceImageUrl Field Functions 
    bool hasSourceImageUrl() const { return this->sourceImageUrl_ != nullptr;};
    void deleteSourceImageUrl() { this->sourceImageUrl_ = nullptr;};
    inline string sourceImageUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceImageUrl_, "") };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setSourceImageUrl(string sourceImageUrl) { DARABONBA_PTR_SET_VALUE(sourceImageUrl_, sourceImageUrl) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // templateJson Field Functions 
    bool hasTemplateJson() const { return this->templateJson_ != nullptr;};
    void deleteTemplateJson() { this->templateJson_ = nullptr;};
    inline string templateJson() const { DARABONBA_PTR_GET_DEFAULT(templateJson_, "") };
    inline GetTranslateImageBatchResultResponseBodyDataResult& setTemplateJson(string templateJson) { DARABONBA_PTR_SET_VALUE(templateJson_, templateJson) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> finalImageUrl_ = nullptr;
    std::shared_ptr<string> inPaintingUrl_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> sourceImageUrl_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> templateJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
