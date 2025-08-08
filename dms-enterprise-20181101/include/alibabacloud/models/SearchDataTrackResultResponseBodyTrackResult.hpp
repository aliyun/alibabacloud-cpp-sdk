// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATATRACKRESULTRESPONSEBODYTRACKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchDataTrackResultResponseBodyTrackResultEventList.hpp>
#include <alibabacloud/models/SearchDataTrackResultResponseBodyTrackResultTableInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDataTrackResultResponseBodyTrackResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDataTrackResultResponseBodyTrackResult& obj) { 
      DARABONBA_PTR_TO_JSON(EventList, eventList_);
      DARABONBA_PTR_TO_JSON(TableInfoList, tableInfoList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDataTrackResultResponseBodyTrackResult& obj) { 
      DARABONBA_PTR_FROM_JSON(EventList, eventList_);
      DARABONBA_PTR_FROM_JSON(TableInfoList, tableInfoList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchDataTrackResultResponseBodyTrackResult() = default ;
    SearchDataTrackResultResponseBodyTrackResult(const SearchDataTrackResultResponseBodyTrackResult &) = default ;
    SearchDataTrackResultResponseBodyTrackResult(SearchDataTrackResultResponseBodyTrackResult &&) = default ;
    SearchDataTrackResultResponseBodyTrackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDataTrackResultResponseBodyTrackResult() = default ;
    SearchDataTrackResultResponseBodyTrackResult& operator=(const SearchDataTrackResultResponseBodyTrackResult &) = default ;
    SearchDataTrackResultResponseBodyTrackResult& operator=(SearchDataTrackResultResponseBodyTrackResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventList_ != nullptr
        && this->tableInfoList_ != nullptr && this->totalCount_ != nullptr; };
    // eventList Field Functions 
    bool hasEventList() const { return this->eventList_ != nullptr;};
    void deleteEventList() { this->eventList_ = nullptr;};
    inline const vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList> & eventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList>) };
    inline vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList> eventList() { DARABONBA_PTR_GET(eventList_, vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList>) };
    inline SearchDataTrackResultResponseBodyTrackResult& setEventList(const vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
    inline SearchDataTrackResultResponseBodyTrackResult& setEventList(vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


    // tableInfoList Field Functions 
    bool hasTableInfoList() const { return this->tableInfoList_ != nullptr;};
    void deleteTableInfoList() { this->tableInfoList_ = nullptr;};
    inline const vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList> & tableInfoList() const { DARABONBA_PTR_GET_CONST(tableInfoList_, vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList>) };
    inline vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList> tableInfoList() { DARABONBA_PTR_GET(tableInfoList_, vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList>) };
    inline SearchDataTrackResultResponseBodyTrackResult& setTableInfoList(const vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList> & tableInfoList) { DARABONBA_PTR_SET_VALUE(tableInfoList_, tableInfoList) };
    inline SearchDataTrackResultResponseBodyTrackResult& setTableInfoList(vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList> && tableInfoList) { DARABONBA_PTR_SET_RVALUE(tableInfoList_, tableInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchDataTrackResultResponseBodyTrackResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the event logs.
    std::shared_ptr<vector<Models::SearchDataTrackResultResponseBodyTrackResultEventList>> eventList_ = nullptr;
    // The metadata of tables for which you track data operations.
    std::shared_ptr<vector<Models::SearchDataTrackResultResponseBodyTrackResultTableInfoList>> tableInfoList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
