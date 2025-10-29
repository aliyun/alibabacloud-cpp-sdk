// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILESRESPONSEBODYRECORDINDEXINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILESRESPONSEBODYRECORDINDEXINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(RecordIndexInfo, recordIndexInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordIndexInfo, recordIndexInfo_);
    };
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList() = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList(const DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList &) = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList(DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList &&) = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList() = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList& operator=(const DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList &) = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList& operator=(DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordIndexInfo_ == nullptr; };
    // recordIndexInfo Field Functions 
    bool hasRecordIndexInfo() const { return this->recordIndexInfo_ != nullptr;};
    void deleteRecordIndexInfo() { this->recordIndexInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo> & recordIndexInfo() const { DARABONBA_PTR_GET_CONST(recordIndexInfo_, vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo>) };
    inline vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo> recordIndexInfo() { DARABONBA_PTR_GET(recordIndexInfo_, vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo>) };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList& setRecordIndexInfo(const vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo> & recordIndexInfo) { DARABONBA_PTR_SET_VALUE(recordIndexInfo_, recordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoList& setRecordIndexInfo(vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo> && recordIndexInfo) { DARABONBA_PTR_SET_RVALUE(recordIndexInfo_, recordIndexInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo>> recordIndexInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
