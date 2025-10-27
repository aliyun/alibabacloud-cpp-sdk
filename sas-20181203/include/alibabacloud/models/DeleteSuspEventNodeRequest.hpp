// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESUSPEVENTNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESUSPEVENTNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteSuspEventNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSuspEventNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSuspEventNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
    };
    DeleteSuspEventNodeRequest() = default ;
    DeleteSuspEventNodeRequest(const DeleteSuspEventNodeRequest &) = default ;
    DeleteSuspEventNodeRequest(DeleteSuspEventNodeRequest &&) = default ;
    DeleteSuspEventNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSuspEventNodeRequest() = default ;
    DeleteSuspEventNodeRequest& operator=(const DeleteSuspEventNodeRequest &) = default ;
    DeleteSuspEventNodeRequest& operator=(DeleteSuspEventNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noteId_ == nullptr; };
    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline int64_t noteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
    inline DeleteSuspEventNodeRequest& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


  protected:
    // The ID of the description.
    // 
    // > You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to obtain the ID of the description by using the EventNotes field.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> noteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
