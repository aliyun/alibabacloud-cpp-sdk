// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTSEVENTNOTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSRESPONSEBODYSUSPEVENTSEVENTNOTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventsResponseBodySuspEventsEventNotes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsResponseBodySuspEventsEventNotes& obj) { 
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(NoteTime, noteTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsResponseBodySuspEventsEventNotes& obj) { 
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(NoteTime, noteTime_);
    };
    DescribeSuspEventsResponseBodySuspEventsEventNotes() = default ;
    DescribeSuspEventsResponseBodySuspEventsEventNotes(const DescribeSuspEventsResponseBodySuspEventsEventNotes &) = default ;
    DescribeSuspEventsResponseBodySuspEventsEventNotes(DescribeSuspEventsResponseBodySuspEventsEventNotes &&) = default ;
    DescribeSuspEventsResponseBodySuspEventsEventNotes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsResponseBodySuspEventsEventNotes() = default ;
    DescribeSuspEventsResponseBodySuspEventsEventNotes& operator=(const DescribeSuspEventsResponseBodySuspEventsEventNotes &) = default ;
    DescribeSuspEventsResponseBodySuspEventsEventNotes& operator=(DescribeSuspEventsResponseBodySuspEventsEventNotes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->note_ == nullptr
        && return this->noteId_ == nullptr && return this->noteTime_ == nullptr; };
    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsEventNotes& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline int64_t noteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
    inline DescribeSuspEventsResponseBodySuspEventsEventNotes& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // noteTime Field Functions 
    bool hasNoteTime() const { return this->noteTime_ != nullptr;};
    void deleteNoteTime() { this->noteTime_ = nullptr;};
    inline string noteTime() const { DARABONBA_PTR_GET_DEFAULT(noteTime_, "") };
    inline DescribeSuspEventsResponseBodySuspEventsEventNotes& setNoteTime(string noteTime) { DARABONBA_PTR_SET_VALUE(noteTime_, noteTime) };


  protected:
    // The note.
    std::shared_ptr<string> note_ = nullptr;
    // The ID of the note.
    std::shared_ptr<int64_t> noteId_ = nullptr;
    // The time when the note was created.
    std::shared_ptr<string> noteTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
