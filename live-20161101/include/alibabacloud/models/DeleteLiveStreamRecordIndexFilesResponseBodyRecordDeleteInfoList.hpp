// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESRESPONSEBODYRECORDDELETEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVESTREAMRECORDINDEXFILESRESPONSEBODYRECORDDELETEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(RecordDeleteInfo, recordDeleteInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordDeleteInfo, recordDeleteInfo_);
    };
    DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList() = default ;
    DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList(const DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList &) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList(DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList &&) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList() = default ;
    DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList& operator=(const DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList &) = default ;
    DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList& operator=(DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordDeleteInfo_ == nullptr; };
    // recordDeleteInfo Field Functions 
    bool hasRecordDeleteInfo() const { return this->recordDeleteInfo_ != nullptr;};
    void deleteRecordDeleteInfo() { this->recordDeleteInfo_ = nullptr;};
    inline const vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo> & recordDeleteInfo() const { DARABONBA_PTR_GET_CONST(recordDeleteInfo_, vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo>) };
    inline vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo> recordDeleteInfo() { DARABONBA_PTR_GET(recordDeleteInfo_, vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo>) };
    inline DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList& setRecordDeleteInfo(const vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo> & recordDeleteInfo) { DARABONBA_PTR_SET_VALUE(recordDeleteInfo_, recordDeleteInfo) };
    inline DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoList& setRecordDeleteInfo(vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo> && recordDeleteInfo) { DARABONBA_PTR_SET_RVALUE(recordDeleteInfo_, recordDeleteInfo) };


  protected:
    std::shared_ptr<vector<Models::DeleteLiveStreamRecordIndexFilesResponseBodyRecordDeleteInfoListRecordDeleteInfo>> recordDeleteInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
