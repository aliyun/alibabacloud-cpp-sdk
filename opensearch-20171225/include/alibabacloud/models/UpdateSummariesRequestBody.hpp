// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUMMARIESREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUMMARIESREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateSummariesRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSummariesRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(element, element_);
      DARABONBA_PTR_TO_JSON(ellipsis, ellipsis_);
      DARABONBA_PTR_TO_JSON(field, field_);
      DARABONBA_PTR_TO_JSON(len, len_);
      DARABONBA_PTR_TO_JSON(snippet, snippet_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSummariesRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(element, element_);
      DARABONBA_PTR_FROM_JSON(ellipsis, ellipsis_);
      DARABONBA_PTR_FROM_JSON(field, field_);
      DARABONBA_PTR_FROM_JSON(len, len_);
      DARABONBA_PTR_FROM_JSON(snippet, snippet_);
    };
    UpdateSummariesRequestBody() = default ;
    UpdateSummariesRequestBody(const UpdateSummariesRequestBody &) = default ;
    UpdateSummariesRequestBody(UpdateSummariesRequestBody &&) = default ;
    UpdateSummariesRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSummariesRequestBody() = default ;
    UpdateSummariesRequestBody& operator=(const UpdateSummariesRequestBody &) = default ;
    UpdateSummariesRequestBody& operator=(UpdateSummariesRequestBody &&) = default ;
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
    inline UpdateSummariesRequestBody& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


    // ellipsis Field Functions 
    bool hasEllipsis() const { return this->ellipsis_ != nullptr;};
    void deleteEllipsis() { this->ellipsis_ = nullptr;};
    inline string ellipsis() const { DARABONBA_PTR_GET_DEFAULT(ellipsis_, "") };
    inline UpdateSummariesRequestBody& setEllipsis(string ellipsis) { DARABONBA_PTR_SET_VALUE(ellipsis_, ellipsis) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline UpdateSummariesRequestBody& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // len Field Functions 
    bool hasLen() const { return this->len_ != nullptr;};
    void deleteLen() { this->len_ = nullptr;};
    inline int32_t len() const { DARABONBA_PTR_GET_DEFAULT(len_, 0) };
    inline UpdateSummariesRequestBody& setLen(int32_t len) { DARABONBA_PTR_SET_VALUE(len_, len) };


    // snippet Field Functions 
    bool hasSnippet() const { return this->snippet_ != nullptr;};
    void deleteSnippet() { this->snippet_ = nullptr;};
    inline int32_t snippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, 0) };
    inline UpdateSummariesRequestBody& setSnippet(int32_t snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


  protected:
    // The HTML tag that is used to highlight terms in red.
    std::shared_ptr<string> element_ = nullptr;
    // The connector that is used to connect segments.
    std::shared_ptr<string> ellipsis_ = nullptr;
    // The field.
    std::shared_ptr<string> field_ = nullptr;
    // The length of a segment.
    std::shared_ptr<int32_t> len_ = nullptr;
    // The number of segments.
    std::shared_ptr<int32_t> snippet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
