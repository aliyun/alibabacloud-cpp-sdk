// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODYRECORDCONTENTINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODYRECORDCONTENTINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(RecordContentInfo, recordContentInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordContentInfo, recordContentInfo_);
    };
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList() = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList(const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList &) = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList(DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList &&) = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList() = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList& operator=(const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList &) = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList& operator=(DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordContentInfo_ == nullptr; };
    // recordContentInfo Field Functions 
    bool hasRecordContentInfo() const { return this->recordContentInfo_ != nullptr;};
    void deleteRecordContentInfo() { this->recordContentInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo> & recordContentInfo() const { DARABONBA_PTR_GET_CONST(recordContentInfo_, vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo>) };
    inline vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo> recordContentInfo() { DARABONBA_PTR_GET(recordContentInfo_, vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo>) };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList& setRecordContentInfo(const vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo> & recordContentInfo) { DARABONBA_PTR_SET_VALUE(recordContentInfo_, recordContentInfo) };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoList& setRecordContentInfo(vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo> && recordContentInfo) { DARABONBA_PTR_SET_RVALUE(recordContentInfo_, recordContentInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo>> recordContentInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
