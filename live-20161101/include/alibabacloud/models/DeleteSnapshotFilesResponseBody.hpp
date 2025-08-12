// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteSnapshotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotDeleteInfoList, snapshotDeleteInfoList_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotDeleteInfoList, snapshotDeleteInfoList_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    DeleteSnapshotFilesResponseBody() = default ;
    DeleteSnapshotFilesResponseBody(const DeleteSnapshotFilesResponseBody &) = default ;
    DeleteSnapshotFilesResponseBody(DeleteSnapshotFilesResponseBody &&) = default ;
    DeleteSnapshotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotFilesResponseBody() = default ;
    DeleteSnapshotFilesResponseBody& operator=(const DeleteSnapshotFilesResponseBody &) = default ;
    DeleteSnapshotFilesResponseBody& operator=(DeleteSnapshotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failureCount_ != nullptr
        && this->requestId_ != nullptr && this->snapshotDeleteInfoList_ != nullptr && this->successCount_ != nullptr; };
    // failureCount Field Functions 
    bool hasFailureCount() const { return this->failureCount_ != nullptr;};
    void deleteFailureCount() { this->failureCount_ = nullptr;};
    inline int32_t failureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
    inline DeleteSnapshotFilesResponseBody& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSnapshotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotDeleteInfoList Field Functions 
    bool hasSnapshotDeleteInfoList() const { return this->snapshotDeleteInfoList_ != nullptr;};
    void deleteSnapshotDeleteInfoList() { this->snapshotDeleteInfoList_ = nullptr;};
    inline const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList & snapshotDeleteInfoList() const { DARABONBA_PTR_GET_CONST(snapshotDeleteInfoList_, DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList) };
    inline DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList snapshotDeleteInfoList() { DARABONBA_PTR_GET(snapshotDeleteInfoList_, DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList) };
    inline DeleteSnapshotFilesResponseBody& setSnapshotDeleteInfoList(const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList & snapshotDeleteInfoList) { DARABONBA_PTR_SET_VALUE(snapshotDeleteInfoList_, snapshotDeleteInfoList) };
    inline DeleteSnapshotFilesResponseBody& setSnapshotDeleteInfoList(DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList && snapshotDeleteInfoList) { DARABONBA_PTR_SET_RVALUE(snapshotDeleteInfoList_, snapshotDeleteInfoList) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DeleteSnapshotFilesResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The number of snapshots that failed to be deleted.
    std::shared_ptr<int32_t> failureCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the snapshots.
    std::shared_ptr<DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList> snapshotDeleteInfoList_ = nullptr;
    // The number of successful screenshot deletions.
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
