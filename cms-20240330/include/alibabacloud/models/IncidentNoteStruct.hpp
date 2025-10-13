// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTNOTESTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTNOTESTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IncidentNoteStructOperator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentNoteStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentNoteStruct& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(noteId, noteId_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentNoteStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(noteId, noteId_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    IncidentNoteStruct() = default ;
    IncidentNoteStruct(const IncidentNoteStruct &) = default ;
    IncidentNoteStruct(IncidentNoteStruct &&) = default ;
    IncidentNoteStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentNoteStruct() = default ;
    IncidentNoteStruct& operator=(const IncidentNoteStruct &) = default ;
    IncidentNoteStruct& operator=(IncidentNoteStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->format_ == nullptr && return this->incidentId_ == nullptr && return this->noteId_ == nullptr && return this->operator_ == nullptr && return this->time_ == nullptr
        && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline IncidentNoteStruct& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline IncidentNoteStruct& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentNoteStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string noteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline IncidentNoteStruct& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline const IncidentNoteStructOperator & _operator() const { DARABONBA_PTR_GET_CONST(operator_, IncidentNoteStructOperator) };
    inline IncidentNoteStructOperator _operator() { DARABONBA_PTR_GET(operator_, IncidentNoteStructOperator) };
    inline IncidentNoteStruct& setOperator(const IncidentNoteStructOperator & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
    inline IncidentNoteStruct& setOperator(IncidentNoteStructOperator && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentNoteStruct& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline IncidentNoteStruct& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<string> noteId_ = nullptr;
    std::shared_ptr<IncidentNoteStructOperator> operator_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
