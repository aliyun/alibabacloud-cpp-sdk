// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMALICIOUSNOTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMALICIOUSNOTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchCreateMaliciousNoteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateMaliciousNoteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageMaliciousFileList, imageMaliciousFileList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateMaliciousNoteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageMaliciousFileList, imageMaliciousFileList_);
    };
    BatchCreateMaliciousNoteRequest() = default ;
    BatchCreateMaliciousNoteRequest(const BatchCreateMaliciousNoteRequest &) = default ;
    BatchCreateMaliciousNoteRequest(BatchCreateMaliciousNoteRequest &&) = default ;
    BatchCreateMaliciousNoteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateMaliciousNoteRequest() = default ;
    BatchCreateMaliciousNoteRequest& operator=(const BatchCreateMaliciousNoteRequest &) = default ;
    BatchCreateMaliciousNoteRequest& operator=(BatchCreateMaliciousNoteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageMaliciousFileList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageMaliciousFileList& obj) { 
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(Note, note_);
      };
      friend void from_json(const Darabonba::Json& j, ImageMaliciousFileList& obj) { 
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
      };
      ImageMaliciousFileList() = default ;
      ImageMaliciousFileList(const ImageMaliciousFileList &) = default ;
      ImageMaliciousFileList(ImageMaliciousFileList &&) = default ;
      ImageMaliciousFileList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageMaliciousFileList() = default ;
      ImageMaliciousFileList& operator=(const ImageMaliciousFileList &) = default ;
      ImageMaliciousFileList& operator=(ImageMaliciousFileList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventId_ == nullptr
        && this->note_ == nullptr; };
      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
      inline ImageMaliciousFileList& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline ImageMaliciousFileList& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    protected:
      // The ID of the alert.
      // 
      // >  You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the alert IDs.
      shared_ptr<int64_t> eventId_ {};
      // The description.
      shared_ptr<string> note_ {};
    };

    virtual bool empty() const override { return this->imageMaliciousFileList_ == nullptr; };
    // imageMaliciousFileList Field Functions 
    bool hasImageMaliciousFileList() const { return this->imageMaliciousFileList_ != nullptr;};
    void deleteImageMaliciousFileList() { this->imageMaliciousFileList_ = nullptr;};
    inline const vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList> & getImageMaliciousFileList() const { DARABONBA_PTR_GET_CONST(imageMaliciousFileList_, vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList>) };
    inline vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList> getImageMaliciousFileList() { DARABONBA_PTR_GET(imageMaliciousFileList_, vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList>) };
    inline BatchCreateMaliciousNoteRequest& setImageMaliciousFileList(const vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList> & imageMaliciousFileList) { DARABONBA_PTR_SET_VALUE(imageMaliciousFileList_, imageMaliciousFileList) };
    inline BatchCreateMaliciousNoteRequest& setImageMaliciousFileList(vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList> && imageMaliciousFileList) { DARABONBA_PTR_SET_RVALUE(imageMaliciousFileList_, imageMaliciousFileList) };


  protected:
    // The batches.
    shared_ptr<vector<BatchCreateMaliciousNoteRequest::ImageMaliciousFileList>> imageMaliciousFileList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
