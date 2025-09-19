// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMALICIOUSNOTEREQUESTIMAGEMALICIOUSFILELIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMALICIOUSNOTEREQUESTIMAGEMALICIOUSFILELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchCreateMaliciousNoteRequestImageMaliciousFileList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateMaliciousNoteRequestImageMaliciousFileList& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Note, note_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateMaliciousNoteRequestImageMaliciousFileList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
    };
    BatchCreateMaliciousNoteRequestImageMaliciousFileList() = default ;
    BatchCreateMaliciousNoteRequestImageMaliciousFileList(const BatchCreateMaliciousNoteRequestImageMaliciousFileList &) = default ;
    BatchCreateMaliciousNoteRequestImageMaliciousFileList(BatchCreateMaliciousNoteRequestImageMaliciousFileList &&) = default ;
    BatchCreateMaliciousNoteRequestImageMaliciousFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateMaliciousNoteRequestImageMaliciousFileList() = default ;
    BatchCreateMaliciousNoteRequestImageMaliciousFileList& operator=(const BatchCreateMaliciousNoteRequestImageMaliciousFileList &) = default ;
    BatchCreateMaliciousNoteRequestImageMaliciousFileList& operator=(BatchCreateMaliciousNoteRequestImageMaliciousFileList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventId_ != nullptr
        && this->note_ != nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline BatchCreateMaliciousNoteRequestImageMaliciousFileList& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline BatchCreateMaliciousNoteRequestImageMaliciousFileList& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    // The ID of the alert.
    // 
    // >  You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the alert IDs.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The description.
    std::shared_ptr<string> note_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
