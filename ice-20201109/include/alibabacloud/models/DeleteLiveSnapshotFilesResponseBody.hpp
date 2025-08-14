// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESNAPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList.hpp>
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
    virtual bool empty() const override { this->deleteFileResultList_ != nullptr
        && this->requestId_ != nullptr; };
    // deleteFileResultList Field Functions 
    bool hasDeleteFileResultList() const { return this->deleteFileResultList_ != nullptr;};
    void deleteDeleteFileResultList() { this->deleteFileResultList_ = nullptr;};
    inline const vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList> & deleteFileResultList() const { DARABONBA_PTR_GET_CONST(deleteFileResultList_, vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList>) };
    inline vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList> deleteFileResultList() { DARABONBA_PTR_GET(deleteFileResultList_, vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList>) };
    inline DeleteLiveSnapshotFilesResponseBody& setDeleteFileResultList(const vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList> & deleteFileResultList) { DARABONBA_PTR_SET_VALUE(deleteFileResultList_, deleteFileResultList) };
    inline DeleteLiveSnapshotFilesResponseBody& setDeleteFileResultList(vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList> && deleteFileResultList) { DARABONBA_PTR_SET_RVALUE(deleteFileResultList_, deleteFileResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLiveSnapshotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of deleted files.
    std::shared_ptr<vector<DeleteLiveSnapshotFilesResponseBodyDeleteFileResultList>> deleteFileResultList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
