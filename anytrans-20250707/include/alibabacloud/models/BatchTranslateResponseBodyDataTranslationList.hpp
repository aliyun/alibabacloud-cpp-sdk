// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATERESPONSEBODYDATATRANSLATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATERESPONSEBODYDATATRANSLATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchTranslateResponseBodyDataTranslationListUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateResponseBodyDataTranslationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateResponseBodyDataTranslationList& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(translation, translation_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateResponseBodyDataTranslationList& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(translation, translation_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    BatchTranslateResponseBodyDataTranslationList() = default ;
    BatchTranslateResponseBodyDataTranslationList(const BatchTranslateResponseBodyDataTranslationList &) = default ;
    BatchTranslateResponseBodyDataTranslationList(BatchTranslateResponseBodyDataTranslationList &&) = default ;
    BatchTranslateResponseBodyDataTranslationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateResponseBodyDataTranslationList() = default ;
    BatchTranslateResponseBodyDataTranslationList& operator=(const BatchTranslateResponseBodyDataTranslationList &) = default ;
    BatchTranslateResponseBodyDataTranslationList& operator=(BatchTranslateResponseBodyDataTranslationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->index_ == nullptr && return this->message_ == nullptr && return this->translation_ == nullptr && return this->usage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline BatchTranslateResponseBodyDataTranslationList& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline BatchTranslateResponseBodyDataTranslationList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchTranslateResponseBodyDataTranslationList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline string translation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
    inline BatchTranslateResponseBodyDataTranslationList& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::BatchTranslateResponseBodyDataTranslationListUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::BatchTranslateResponseBodyDataTranslationListUsage) };
    inline Models::BatchTranslateResponseBodyDataTranslationListUsage usage() { DARABONBA_PTR_GET(usage_, Models::BatchTranslateResponseBodyDataTranslationListUsage) };
    inline BatchTranslateResponseBodyDataTranslationList& setUsage(const Models::BatchTranslateResponseBodyDataTranslationListUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline BatchTranslateResponseBodyDataTranslationList& setUsage(Models::BatchTranslateResponseBodyDataTranslationListUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<string> index_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> translation_ = nullptr;
    std::shared_ptr<Models::BatchTranslateResponseBodyDataTranslationListUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
