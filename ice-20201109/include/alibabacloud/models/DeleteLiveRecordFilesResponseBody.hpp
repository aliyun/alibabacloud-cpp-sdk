// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVERECORDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVERECORDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteLiveRecordFilesResponseBodyDeleteFileInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveRecordFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteFileInfoList, deleteFileInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteFileInfoList, deleteFileInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLiveRecordFilesResponseBody() = default ;
    DeleteLiveRecordFilesResponseBody(const DeleteLiveRecordFilesResponseBody &) = default ;
    DeleteLiveRecordFilesResponseBody(DeleteLiveRecordFilesResponseBody &&) = default ;
    DeleteLiveRecordFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRecordFilesResponseBody() = default ;
    DeleteLiveRecordFilesResponseBody& operator=(const DeleteLiveRecordFilesResponseBody &) = default ;
    DeleteLiveRecordFilesResponseBody& operator=(DeleteLiveRecordFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteFileInfoList_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr; };
    // deleteFileInfoList Field Functions 
    bool hasDeleteFileInfoList() const { return this->deleteFileInfoList_ != nullptr;};
    void deleteDeleteFileInfoList() { this->deleteFileInfoList_ = nullptr;};
    inline const vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList> & deleteFileInfoList() const { DARABONBA_PTR_GET_CONST(deleteFileInfoList_, vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList>) };
    inline vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList> deleteFileInfoList() { DARABONBA_PTR_GET(deleteFileInfoList_, vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList>) };
    inline DeleteLiveRecordFilesResponseBody& setDeleteFileInfoList(const vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList> & deleteFileInfoList) { DARABONBA_PTR_SET_VALUE(deleteFileInfoList_, deleteFileInfoList) };
    inline DeleteLiveRecordFilesResponseBody& setDeleteFileInfoList(vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList> && deleteFileInfoList) { DARABONBA_PTR_SET_RVALUE(deleteFileInfoList_, deleteFileInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteLiveRecordFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveRecordFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of files deleted.
    std::shared_ptr<vector<DeleteLiveRecordFilesResponseBodyDeleteFileInfoList>> deleteFileInfoList_ = nullptr;
    // The description of the state returned.
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
