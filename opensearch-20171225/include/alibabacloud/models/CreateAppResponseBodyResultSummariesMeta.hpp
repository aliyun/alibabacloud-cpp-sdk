// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSUMMARIESMETA_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSUMMARIESMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBodyResultSummariesMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultSummariesMeta& obj) { 
      DARABONBA_PTR_TO_JSON(element, element_);
      DARABONBA_PTR_TO_JSON(ellipsis, ellipsis_);
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(len, len_);
      DARABONBA_PTR_TO_JSON(snippet, snippet_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultSummariesMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(element, element_);
      DARABONBA_PTR_FROM_JSON(ellipsis, ellipsis_);
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(len, len_);
      DARABONBA_PTR_FROM_JSON(snippet, snippet_);
    };
    CreateAppResponseBodyResultSummariesMeta() = default ;
    CreateAppResponseBodyResultSummariesMeta(const CreateAppResponseBodyResultSummariesMeta &) = default ;
    CreateAppResponseBodyResultSummariesMeta(CreateAppResponseBodyResultSummariesMeta &&) = default ;
    CreateAppResponseBodyResultSummariesMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultSummariesMeta() = default ;
    CreateAppResponseBodyResultSummariesMeta& operator=(const CreateAppResponseBodyResultSummariesMeta &) = default ;
    CreateAppResponseBodyResultSummariesMeta& operator=(CreateAppResponseBodyResultSummariesMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->element_ == nullptr
        && return this->ellipsis_ == nullptr && return this->field_ == nullptr && return this->len_ == nullptr && return this->snippet_ == nullptr; };
    // element Field Functions 
    bool hasElement() const { return this->element_ != nullptr;};
    void deleteElement() { this->element_ = nullptr;};
    inline string element() const { DARABONBA_PTR_GET_DEFAULT(element_, "") };
    inline CreateAppResponseBodyResultSummariesMeta& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


    // ellipsis Field Functions 
    bool hasEllipsis() const { return this->ellipsis_ != nullptr;};
    void deleteEllipsis() { this->ellipsis_ = nullptr;};
    inline string ellipsis() const { DARABONBA_PTR_GET_DEFAULT(ellipsis_, "") };
    inline CreateAppResponseBodyResultSummariesMeta& setEllipsis(string ellipsis) { DARABONBA_PTR_SET_VALUE(ellipsis_, ellipsis) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline CreateAppResponseBodyResultSummariesMeta& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // len Field Functions 
    bool hasLen() const { return this->len_ != nullptr;};
    void deleteLen() { this->len_ = nullptr;};
    inline int32_t len() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
    inline CreateAppResponseBodyResultSummariesMeta& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


    // snippet Field Functions 
    bool hasSnippet() const { return this->snippet_ != nullptr;};
    void deleteSnippet() { this->snippet_ = nullptr;};
    inline string snippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
    inline CreateAppResponseBodyResultSummariesMeta& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


  protected:
    // The element that is used for highlighting.
    std::shared_ptr<string> element_ = nullptr;
    // The connector that is used to connect segments.
    std::shared_ptr<string> ellipsis_ = nullptr;
    // The field.
    std::shared_ptr<string> field_ = nullptr;
    // The length of the segment. Valid values: 1 to 300.
    std::shared_ptr<int32_t> len_ = nullptr;
    // The number of segments. Valid values: 1 to 5.
    std::shared_ptr<string> snippet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
