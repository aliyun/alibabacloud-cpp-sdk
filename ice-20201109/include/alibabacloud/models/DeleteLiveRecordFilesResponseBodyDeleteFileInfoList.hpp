// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVERECORDFILESRESPONSEBODYDELETEFILEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVERECORDFILESRESPONSEBODYDELETEFILEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveRecordFilesResponseBodyDeleteFileInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    DeleteLiveRecordFilesResponseBodyDeleteFileInfoList() = default ;
    DeleteLiveRecordFilesResponseBodyDeleteFileInfoList(const DeleteLiveRecordFilesResponseBodyDeleteFileInfoList &) = default ;
    DeleteLiveRecordFilesResponseBodyDeleteFileInfoList(DeleteLiveRecordFilesResponseBodyDeleteFileInfoList &&) = default ;
    DeleteLiveRecordFilesResponseBodyDeleteFileInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRecordFilesResponseBodyDeleteFileInfoList() = default ;
    DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& operator=(const DeleteLiveRecordFilesResponseBodyDeleteFileInfoList &) = default ;
    DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& operator=(DeleteLiveRecordFilesResponseBodyDeleteFileInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->recordId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline DeleteLiveRecordFilesResponseBodyDeleteFileInfoList& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    // The code that identifies the result of the deletion.
    std::shared_ptr<string> code_ = nullptr;
    // The result of deletion.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the deleted recording file.
    std::shared_ptr<string> recordId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
