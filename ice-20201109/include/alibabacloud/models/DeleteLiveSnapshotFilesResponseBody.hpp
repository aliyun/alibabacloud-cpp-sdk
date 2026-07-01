// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteLiveSnapshotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteFileResultList, deleteFileResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteFileResultList, deleteFileResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLiveSnapshotFilesResponseBody() = default ;
    DeleteLiveSnapshotFilesResponseBody(const DeleteLiveSnapshotFilesResponseBody &) = default ;
    DeleteLiveSnapshotFilesResponseBody(DeleteLiveSnapshotFilesResponseBody &&) = default ;
    DeleteLiveSnapshotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveSnapshotFilesResponseBody() = default ;
    DeleteLiveSnapshotFilesResponseBody& operator=(const DeleteLiveSnapshotFilesResponseBody &) = default ;
    DeleteLiveSnapshotFilesResponseBody& operator=(DeleteLiveSnapshotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteFileResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteFileResultList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteFileResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      DeleteFileResultList() = default ;
      DeleteFileResultList(const DeleteFileResultList &) = default ;
      DeleteFileResultList(DeleteFileResultList &&) = default ;
      DeleteFileResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteFileResultList() = default ;
      DeleteFileResultList& operator=(const DeleteFileResultList &) = default ;
      DeleteFileResultList& operator=(DeleteFileResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->result_ == nullptr; };
      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline DeleteFileResultList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline DeleteFileResultList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      // The creation timestamp of the file.
      shared_ptr<int64_t> createTimestamp_ {};
      // The deletion result. A value of `OK` indicates the operation succeeded. Other values indicate that it failed.
      shared_ptr<string> result_ {};
    };

    virtual bool empty() const override { return this->deleteFileResultList_ == nullptr
        && this->requestId_ == nullptr; };
    // deleteFileResultList Field Functions 
    bool hasDeleteFileResultList() const { return this->deleteFileResultList_ != nullptr;};
    void deleteDeleteFileResultList() { this->deleteFileResultList_ = nullptr;};
    inline const vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList> & getDeleteFileResultList() const { DARABONBA_PTR_GET_CONST(deleteFileResultList_, vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList>) };
    inline vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList> getDeleteFileResultList() { DARABONBA_PTR_GET(deleteFileResultList_, vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList>) };
    inline DeleteLiveSnapshotFilesResponseBody& setDeleteFileResultList(const vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList> & deleteFileResultList) { DARABONBA_PTR_SET_VALUE(deleteFileResultList_, deleteFileResultList) };
    inline DeleteLiveSnapshotFilesResponseBody& setDeleteFileResultList(vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList> && deleteFileResultList) { DARABONBA_PTR_SET_RVALUE(deleteFileResultList_, deleteFileResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveSnapshotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array of deletion results.
    shared_ptr<vector<DeleteLiveSnapshotFilesResponseBody::DeleteFileResultList>> deleteFileResultList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
