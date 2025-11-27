// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSPULLSTREAMINFOCONFIGRESPONSEBODYLIVEAPPRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSPULLSTREAMINFOCONFIGRESPONSEBODYLIVEAPPRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecord, liveAppRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecord, liveAppRecord_);
    };
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList() = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList(const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList &) = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList(DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList &&) = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList() = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList& operator=(const DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList &) = default ;
    DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList& operator=(DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAppRecord_ == nullptr; };
    // liveAppRecord Field Functions 
    bool hasLiveAppRecord() const { return this->liveAppRecord_ != nullptr;};
    void deleteLiveAppRecord() { this->liveAppRecord_ = nullptr;};
    inline const vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord> & liveAppRecord() const { DARABONBA_PTR_GET_CONST(liveAppRecord_, vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord>) };
    inline vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord> liveAppRecord() { DARABONBA_PTR_GET(liveAppRecord_, vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord>) };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList& setLiveAppRecord(const vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord> & liveAppRecord) { DARABONBA_PTR_SET_VALUE(liveAppRecord_, liveAppRecord) };
    inline DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordList& setLiveAppRecord(vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord> && liveAppRecord) { DARABONBA_PTR_SET_RVALUE(liveAppRecord_, liveAppRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsPullStreamInfoConfigResponseBodyLiveAppRecordListLiveAppRecord>> liveAppRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
