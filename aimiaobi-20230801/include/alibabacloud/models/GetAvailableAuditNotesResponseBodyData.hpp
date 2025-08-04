// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABLEAUDITNOTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABLEAUDITNOTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAvailableAuditNotesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailableAuditNotesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(NoteName, noteName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailableAuditNotesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(NoteName, noteName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetAvailableAuditNotesResponseBodyData() = default ;
    GetAvailableAuditNotesResponseBodyData(const GetAvailableAuditNotesResponseBodyData &) = default ;
    GetAvailableAuditNotesResponseBodyData(GetAvailableAuditNotesResponseBodyData &&) = default ;
    GetAvailableAuditNotesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailableAuditNotesResponseBodyData() = default ;
    GetAvailableAuditNotesResponseBodyData& operator=(const GetAvailableAuditNotesResponseBodyData &) = default ;
    GetAvailableAuditNotesResponseBodyData& operator=(GetAvailableAuditNotesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSize_ != nullptr
        && this->id_ != nullptr && this->noteId_ != nullptr && this->noteName_ != nullptr && this->updateTime_ != nullptr; };
    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetAvailableAuditNotesResponseBodyData& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAvailableAuditNotesResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string noteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline GetAvailableAuditNotesResponseBodyData& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // noteName Field Functions 
    bool hasNoteName() const { return this->noteName_ != nullptr;};
    void deleteNoteName() { this->noteName_ = nullptr;};
    inline string noteName() const { DARABONBA_PTR_GET_DEFAULT(noteName_, "") };
    inline GetAvailableAuditNotesResponseBodyData& setNoteName(string noteName) { DARABONBA_PTR_SET_VALUE(noteName_, noteName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAvailableAuditNotesResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> noteId_ = nullptr;
    std::shared_ptr<string> noteName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
