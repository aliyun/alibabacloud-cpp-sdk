// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTELISTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTELISTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteListDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteListDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteListDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
    };
    CustomerNoteListDetailRequest() = default ;
    CustomerNoteListDetailRequest(const CustomerNoteListDetailRequest &) = default ;
    CustomerNoteListDetailRequest(CustomerNoteListDetailRequest &&) = default ;
    CustomerNoteListDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteListDetailRequest() = default ;
    CustomerNoteListDetailRequest& operator=(const CustomerNoteListDetailRequest &) = default ;
    CustomerNoteListDetailRequest& operator=(CustomerNoteListDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noteId_ == nullptr; };
    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline int64_t getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, 0L) };
    inline CustomerNoteListDetailRequest& setNoteId(int64_t noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


  protected:
    shared_ptr<int64_t> noteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif
