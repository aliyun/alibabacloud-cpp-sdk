// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveStreamRecordIndexFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveStreamRecordIndexFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RecordDeleteInfoList, recordDeleteInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveStreamRecordIndexFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RecordDeleteInfoList, recordDeleteInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLiveStreamRecordIndexFilesResponseBody() = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody(const DeleteLiveStreamRecordIndexFilesResponseBody &) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody(DeleteLiveStreamRecordIndexFilesResponseBody &&) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveStreamRecordIndexFilesResponseBody() = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody& operator=(const DeleteLiveStreamRecordIndexFilesResponseBody &) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBody& operator=(DeleteLiveStreamRecordIndexFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->recordDeleteInfoList_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // recordDeleteInfoList Field Functions 
    bool hasRecordDeleteInfoList() const { return this->recordDeleteInfoList_ != nullptr;};
    void deleteRecordDeleteInfoList() { this->recordDeleteInfoList_ = nullptr;};
    inline const DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList & recordDeleteInfoList() const { DARABONBA_PTR_GET_CONST(recordDeleteInfoList_, DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList) };
    inline DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList recordDeleteInfoList() { DARABONBA_PTR_GET(recordDeleteInfoList_, DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList) };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setRecordDeleteInfoList(const DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList & recordDeleteInfoList) { DARABONBA_PTR_SET_VALUE(recordDeleteInfoList_, recordDeleteInfoList) };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setRecordDeleteInfoList(DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList && recordDeleteInfoList) { DARABONBA_PTR_SET_RVALUE(recordDeleteInfoList_, recordDeleteInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveStreamRecordIndexFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. A return value of 500 indicates an error. For details, see the Error codes section of this topic.
    std::shared_ptr<string> code_ = nullptr;
    // The status description. A return value of 500 indicates an error. For details, see the Error codes section of this topic.
    std::shared_ptr<string> message_ = nullptr;
    // The deletion information.
    std::shared_ptr<DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList> recordDeleteInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
