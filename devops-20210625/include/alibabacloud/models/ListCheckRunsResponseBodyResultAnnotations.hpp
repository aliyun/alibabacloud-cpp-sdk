// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRUNSRESPONSEBODYRESULTANNOTATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRUNSRESPONSEBODYRESULTANNOTATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListCheckRunsResponseBodyResultAnnotations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRunsResponseBodyResultAnnotations& obj) { 
      DARABONBA_PTR_TO_JSON(annotationLevel, annotationLevel_);
      DARABONBA_PTR_TO_JSON(endColumn, endColumn_);
      DARABONBA_PTR_TO_JSON(endLine, endLine_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(rawDetails, rawDetails_);
      DARABONBA_PTR_TO_JSON(startColumn, startColumn_);
      DARABONBA_PTR_TO_JSON(startLine, startLine_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRunsResponseBodyResultAnnotations& obj) { 
      DARABONBA_PTR_FROM_JSON(annotationLevel, annotationLevel_);
      DARABONBA_PTR_FROM_JSON(endColumn, endColumn_);
      DARABONBA_PTR_FROM_JSON(endLine, endLine_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(rawDetails, rawDetails_);
      DARABONBA_PTR_FROM_JSON(startColumn, startColumn_);
      DARABONBA_PTR_FROM_JSON(startLine, startLine_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ListCheckRunsResponseBodyResultAnnotations() = default ;
    ListCheckRunsResponseBodyResultAnnotations(const ListCheckRunsResponseBodyResultAnnotations &) = default ;
    ListCheckRunsResponseBodyResultAnnotations(ListCheckRunsResponseBodyResultAnnotations &&) = default ;
    ListCheckRunsResponseBodyResultAnnotations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRunsResponseBodyResultAnnotations() = default ;
    ListCheckRunsResponseBodyResultAnnotations& operator=(const ListCheckRunsResponseBodyResultAnnotations &) = default ;
    ListCheckRunsResponseBodyResultAnnotations& operator=(ListCheckRunsResponseBodyResultAnnotations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationLevel_ == nullptr
        && return this->endColumn_ == nullptr && return this->endLine_ == nullptr && return this->id_ == nullptr && return this->message_ == nullptr && return this->path_ == nullptr
        && return this->rawDetails_ == nullptr && return this->startColumn_ == nullptr && return this->startLine_ == nullptr && return this->title_ == nullptr; };
    // annotationLevel Field Functions 
    bool hasAnnotationLevel() const { return this->annotationLevel_ != nullptr;};
    void deleteAnnotationLevel() { this->annotationLevel_ = nullptr;};
    inline string annotationLevel() const { DARABONBA_PTR_GET_DEFAULT(annotationLevel_, "") };
    inline ListCheckRunsResponseBodyResultAnnotations& setAnnotationLevel(string annotationLevel) { DARABONBA_PTR_SET_VALUE(annotationLevel_, annotationLevel) };


    // endColumn Field Functions 
    bool hasEndColumn() const { return this->endColumn_ != nullptr;};
    void deleteEndColumn() { this->endColumn_ = nullptr;};
    inline int64_t endColumn() const { DARABONBA_PTR_GET_DEFAULT(endColumn_, 0L) };
    inline ListCheckRunsResponseBodyResultAnnotations& setEndColumn(int64_t endColumn) { DARABONBA_PTR_SET_VALUE(endColumn_, endColumn) };


    // endLine Field Functions 
    bool hasEndLine() const { return this->endLine_ != nullptr;};
    void deleteEndLine() { this->endLine_ = nullptr;};
    inline int64_t endLine() const { DARABONBA_PTR_GET_DEFAULT(endLine_, 0L) };
    inline ListCheckRunsResponseBodyResultAnnotations& setEndLine(int64_t endLine) { DARABONBA_PTR_SET_VALUE(endLine_, endLine) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCheckRunsResponseBodyResultAnnotations& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCheckRunsResponseBodyResultAnnotations& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListCheckRunsResponseBodyResultAnnotations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // rawDetails Field Functions 
    bool hasRawDetails() const { return this->rawDetails_ != nullptr;};
    void deleteRawDetails() { this->rawDetails_ = nullptr;};
    inline string rawDetails() const { DARABONBA_PTR_GET_DEFAULT(rawDetails_, "") };
    inline ListCheckRunsResponseBodyResultAnnotations& setRawDetails(string rawDetails) { DARABONBA_PTR_SET_VALUE(rawDetails_, rawDetails) };


    // startColumn Field Functions 
    bool hasStartColumn() const { return this->startColumn_ != nullptr;};
    void deleteStartColumn() { this->startColumn_ = nullptr;};
    inline int64_t startColumn() const { DARABONBA_PTR_GET_DEFAULT(startColumn_, 0L) };
    inline ListCheckRunsResponseBodyResultAnnotations& setStartColumn(int64_t startColumn) { DARABONBA_PTR_SET_VALUE(startColumn_, startColumn) };


    // startLine Field Functions 
    bool hasStartLine() const { return this->startLine_ != nullptr;};
    void deleteStartLine() { this->startLine_ = nullptr;};
    inline int64_t startLine() const { DARABONBA_PTR_GET_DEFAULT(startLine_, 0L) };
    inline ListCheckRunsResponseBodyResultAnnotations& setStartLine(int64_t startLine) { DARABONBA_PTR_SET_VALUE(startLine_, startLine) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListCheckRunsResponseBodyResultAnnotations& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> annotationLevel_ = nullptr;
    std::shared_ptr<int64_t> endColumn_ = nullptr;
    std::shared_ptr<int64_t> endLine_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> rawDetails_ = nullptr;
    std::shared_ptr<int64_t> startColumn_ = nullptr;
    std::shared_ptr<int64_t> startLine_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
