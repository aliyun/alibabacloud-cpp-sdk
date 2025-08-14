// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveSnapshotFilesResponseBodyFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveSnapshotFilesResponseBody() = default ;
    ListLiveSnapshotFilesResponseBody(const ListLiveSnapshotFilesResponseBody &) = default ;
    ListLiveSnapshotFilesResponseBody(ListLiveSnapshotFilesResponseBody &&) = default ;
    ListLiveSnapshotFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotFilesResponseBody() = default ;
    ListLiveSnapshotFilesResponseBody& operator=(const ListLiveSnapshotFilesResponseBody &) = default ;
    ListLiveSnapshotFilesResponseBody& operator=(ListLiveSnapshotFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileList_ != nullptr
        && this->nextStartTime_ != nullptr && this->requestId_ != nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<ListLiveSnapshotFilesResponseBodyFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<ListLiveSnapshotFilesResponseBodyFileList>) };
    inline vector<ListLiveSnapshotFilesResponseBodyFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<ListLiveSnapshotFilesResponseBodyFileList>) };
    inline ListLiveSnapshotFilesResponseBody& setFileList(const vector<ListLiveSnapshotFilesResponseBodyFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline ListLiveSnapshotFilesResponseBody& setFileList(vector<ListLiveSnapshotFilesResponseBodyFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // nextStartTime Field Functions 
    bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
    void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
    inline string nextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, "") };
    inline ListLiveSnapshotFilesResponseBody& setNextStartTime(string nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveSnapshotFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of files.
    std::shared_ptr<vector<ListLiveSnapshotFilesResponseBodyFileList>> fileList_ = nullptr;
    // The start time of the next page. If no value is returned, the pagination ends.
    std::shared_ptr<string> nextStartTime_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
