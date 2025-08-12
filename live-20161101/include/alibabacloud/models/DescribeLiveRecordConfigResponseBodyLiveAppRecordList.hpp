// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordConfigResponseBodyLiveAppRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordConfigResponseBodyLiveAppRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAppRecord, liveAppRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordConfigResponseBodyLiveAppRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAppRecord, liveAppRecord_);
    };
    DescribeLiveRecordConfigResponseBodyLiveAppRecordList() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordList(const DescribeLiveRecordConfigResponseBodyLiveAppRecordList &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordList(DescribeLiveRecordConfigResponseBodyLiveAppRecordList &&) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordConfigResponseBodyLiveAppRecordList() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordList& operator=(const DescribeLiveRecordConfigResponseBodyLiveAppRecordList &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordList& operator=(DescribeLiveRecordConfigResponseBodyLiveAppRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveAppRecord_ != nullptr; };
    // liveAppRecord Field Functions 
    bool hasLiveAppRecord() const { return this->liveAppRecord_ != nullptr;};
    void deleteLiveAppRecord() { this->liveAppRecord_ = nullptr;};
    inline const vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord> & liveAppRecord() const { DARABONBA_PTR_GET_CONST(liveAppRecord_, vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord>) };
    inline vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord> liveAppRecord() { DARABONBA_PTR_GET(liveAppRecord_, vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord>) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordList& setLiveAppRecord(const vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord> & liveAppRecord) { DARABONBA_PTR_SET_VALUE(liveAppRecord_, liveAppRecord) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordList& setLiveAppRecord(vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord> && liveAppRecord) { DARABONBA_PTR_SET_RVALUE(liveAppRecord_, liveAppRecord) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord>> liveAppRecord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
