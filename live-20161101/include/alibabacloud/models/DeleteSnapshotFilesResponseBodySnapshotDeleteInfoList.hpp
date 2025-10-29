// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODYSNAPSHOTDELETEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTFILESRESPONSEBODYSNAPSHOTDELETEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(SnapshotDeleteInfo, snapshotDeleteInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(SnapshotDeleteInfo, snapshotDeleteInfo_);
    };
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList() = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList(const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList &) = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList(DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList &&) = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList() = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList& operator=(const DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList &) = default ;
    DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList& operator=(DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshotDeleteInfo_ == nullptr; };
    // snapshotDeleteInfo Field Functions 
    bool hasSnapshotDeleteInfo() const { return this->snapshotDeleteInfo_ != nullptr;};
    void deleteSnapshotDeleteInfo() { this->snapshotDeleteInfo_ = nullptr;};
    inline const vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo> & snapshotDeleteInfo() const { DARABONBA_PTR_GET_CONST(snapshotDeleteInfo_, vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo>) };
    inline vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo> snapshotDeleteInfo() { DARABONBA_PTR_GET(snapshotDeleteInfo_, vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo>) };
    inline DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList& setSnapshotDeleteInfo(const vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo> & snapshotDeleteInfo) { DARABONBA_PTR_SET_VALUE(snapshotDeleteInfo_, snapshotDeleteInfo) };
    inline DeleteSnapshotFilesResponseBodySnapshotDeleteInfoList& setSnapshotDeleteInfo(vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo> && snapshotDeleteInfo) { DARABONBA_PTR_SET_RVALUE(snapshotDeleteInfo_, snapshotDeleteInfo) };


  protected:
    std::shared_ptr<vector<Models::DeleteSnapshotFilesResponseBodySnapshotDeleteInfoListSnapshotDeleteInfo>> snapshotDeleteInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
