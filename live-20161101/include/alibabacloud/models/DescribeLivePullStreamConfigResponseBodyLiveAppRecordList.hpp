// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODYLIVEAPPRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLSTREAMCONFIGRESPONSEBODYLIVEAPPRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullStreamConfigResponseBodyLiveAppRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullStreamConfigResponseBodyLiveAppRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecord, liveAppRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullStreamConfigResponseBodyLiveAppRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecord, liveAppRecord_);
    };
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordList() = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordList(const DescribeLivePullStreamConfigResponseBodyLiveAppRecordList &) = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordList(DescribeLivePullStreamConfigResponseBodyLiveAppRecordList &&) = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullStreamConfigResponseBodyLiveAppRecordList() = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordList& operator=(const DescribeLivePullStreamConfigResponseBodyLiveAppRecordList &) = default ;
    DescribeLivePullStreamConfigResponseBodyLiveAppRecordList& operator=(DescribeLivePullStreamConfigResponseBodyLiveAppRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAppRecord_ == nullptr; };
    // liveAppRecord Field Functions 
    bool hasLiveAppRecord() const { return this->liveAppRecord_ != nullptr;};
    void deleteLiveAppRecord() { this->liveAppRecord_ = nullptr;};
    inline const vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord> & liveAppRecord() const { DARABONBA_PTR_GET_CONST(liveAppRecord_, vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord>) };
    inline vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord> liveAppRecord() { DARABONBA_PTR_GET(liveAppRecord_, vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord>) };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordList& setLiveAppRecord(const vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord> & liveAppRecord) { DARABONBA_PTR_SET_VALUE(liveAppRecord_, liveAppRecord) };
    inline DescribeLivePullStreamConfigResponseBodyLiveAppRecordList& setLiveAppRecord(vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord> && liveAppRecord) { DARABONBA_PTR_SET_RVALUE(liveAppRecord_, liveAppRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePullStreamConfigResponseBodyLiveAppRecordListLiveAppRecord>> liveAppRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
