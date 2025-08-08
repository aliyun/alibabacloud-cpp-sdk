// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULTEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULTEVENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDataTrackResultResponseBodyTrackResultEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultResponseBodyTrackResultEventList& obj) { 
      DARABONBA_PTR_TO_JSON(DataAfter, dataAfter_);
      DARABONBA_PTR_TO_JSON(DataBefore, dataBefore_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventLength, eventLength_);
      DARABONBA_PTR_TO_JSON(EventTimestamp, eventTimestamp_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(RollSQL, rollSQL_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultResponseBodyTrackResultEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataAfter, dataAfter_);
      DARABONBA_PTR_FROM_JSON(DataBefore, dataBefore_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventLength, eventLength_);
      DARABONBA_PTR_FROM_JSON(EventTimestamp, eventTimestamp_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(RollSQL, rollSQL_);
    };
    SearchDataTrackResultResponseBodyTrackResultEventList() = default ;
    SearchDataTrackResultResponseBodyTrackResultEventList(const SearchDataTrackResultResponseBodyTrackResultEventList &) = default ;
    SearchDataTrackResultResponseBodyTrackResultEventList(SearchDataTrackResultResponseBodyTrackResultEventList &&) = default ;
    SearchDataTrackResultResponseBodyTrackResultEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultResponseBodyTrackResultEventList() = default ;
    SearchDataTrackResultResponseBodyTrackResultEventList& operator=(const SearchDataTrackResultResponseBodyTrackResultEventList &) = default ;
    SearchDataTrackResultResponseBodyTrackResultEventList& operator=(SearchDataTrackResultResponseBodyTrackResultEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataAfter_ != nullptr
        && this->dataBefore_ != nullptr && this->eventId_ != nullptr && this->eventLength_ != nullptr && this->eventTimestamp_ != nullptr && this->eventType_ != nullptr
        && this->rollSQL_ != nullptr; };
    // dataAfter Field Functions 
    bool hasDataAfter() const { return this->dataAfter_ != nullptr;};
    void deleteDataAfter() { this->dataAfter_ = nullptr;};
    inline const vector<string> & dataAfter() const { DARABONBA_PTR_GET_CONST(dataAfter_, vector<string>) };
    inline vector<string> dataAfter() { DARABONBA_PTR_GET(dataAfter_, vector<string>) };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setDataAfter(const vector<string> & dataAfter) { DARABONBA_PTR_SET_VALUE(dataAfter_, dataAfter) };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setDataAfter(vector<string> && dataAfter) { DARABONBA_PTR_SET_RVALUE(dataAfter_, dataAfter) };


    // dataBefore Field Functions 
    bool hasDataBefore() const { return this->dataBefore_ != nullptr;};
    void deleteDataBefore() { this->dataBefore_ = nullptr;};
    inline const vector<string> & dataBefore() const { DARABONBA_PTR_GET_CONST(dataBefore_, vector<string>) };
    inline vector<string> dataBefore() { DARABONBA_PTR_GET(dataBefore_, vector<string>) };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setDataBefore(const vector<string> & dataBefore) { DARABONBA_PTR_SET_VALUE(dataBefore_, dataBefore) };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setDataBefore(vector<string> && dataBefore) { DARABONBA_PTR_SET_RVALUE(dataBefore_, dataBefore) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLength Field Functions 
    bool hasEventLength() const { return this->eventLength_ != nullptr;};
    void deleteEventLength() { this->eventLength_ = nullptr;};
    inline int64_t eventLength() const { DARABONBA_PTR_GET_DEFAULT(eventLength_, 0L) };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setEventLength(int64_t eventLength) { DARABONBA_PTR_SET_VALUE(eventLength_, eventLength) };


    // eventTimestamp Field Functions 
    bool hasEventTimestamp() const { return this->eventTimestamp_ != nullptr;};
    void deleteEventTimestamp() { this->eventTimestamp_ = nullptr;};
    inline string eventTimestamp() const { DARABONBA_PTR_GET_DEFAULT(eventTimestamp_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setEventTimestamp(string eventTimestamp) { DARABONBA_PTR_SET_VALUE(eventTimestamp_, eventTimestamp) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // rollSQL Field Functions 
    bool hasRollSQL() const { return this->rollSQL_ != nullptr;};
    void deleteRollSQL() { this->rollSQL_ = nullptr;};
    inline string rollSQL() const { DARABONBA_PTR_GET_DEFAULT(rollSQL_, "") };
    inline SearchDataTrackResultResponseBodyTrackResultEventList& setRollSQL(string rollSQL) { DARABONBA_PTR_SET_VALUE(rollSQL_, rollSQL) };


  protected:
    // The data records after you perform data operations in the database.
    std::shared_ptr<vector<string>> dataAfter_ = nullptr;
    // The data records before you perform data operations in the database.
    std::shared_ptr<vector<string>> dataBefore_ = nullptr;
    // The ID of the event.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The length of the event content. Unit: bytes.
    std::shared_ptr<int64_t> eventLength_ = nullptr;
    // The event time.
    std::shared_ptr<string> eventTimestamp_ = nullptr;
    // The type of the event. Valid values:
    // 
    // *   **WRITE_ROWS**: indicates an INSERT operation.
    // *   **UPDATE_ROWS**: indicates an UPDATE operation.
    // *   **DELETE_ROWS**: indicates a DELETE operation.
    // *   **EXT_WRITE_ROWS**: indicates an INSERT operation, which is equivalent to WRITE_ROWS.
    // *   **EXT_UPDATE_ROWS**: indicates an UPDATE operation, which is equivalent to UPDATE_ROWS.
    // *   **EXT_DELETE_ROWS**: indicates a DELETE operation, which is equivalent to DELETE_ROWS.
    std::shared_ptr<string> eventType_ = nullptr;
    // The SQL statements used to roll back the data change.
    std::shared_ptr<string> rollSQL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
