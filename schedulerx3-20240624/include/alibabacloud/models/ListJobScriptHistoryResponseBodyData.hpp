// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSCRIPTHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobScriptHistoryResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListJobScriptHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobScriptHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobScriptHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListJobScriptHistoryResponseBodyData() = default ;
    ListJobScriptHistoryResponseBodyData(const ListJobScriptHistoryResponseBodyData &) = default ;
    ListJobScriptHistoryResponseBodyData(ListJobScriptHistoryResponseBodyData &&) = default ;
    ListJobScriptHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobScriptHistoryResponseBodyData() = default ;
    ListJobScriptHistoryResponseBodyData& operator=(const ListJobScriptHistoryResponseBodyData &) = default ;
    ListJobScriptHistoryResponseBodyData& operator=(ListJobScriptHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->records_ != nullptr && this->total_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListJobScriptHistoryResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::ListJobScriptHistoryResponseBodyDataRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::ListJobScriptHistoryResponseBodyDataRecords>) };
    inline vector<Models::ListJobScriptHistoryResponseBodyDataRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::ListJobScriptHistoryResponseBodyDataRecords>) };
    inline ListJobScriptHistoryResponseBodyData& setRecords(const vector<Models::ListJobScriptHistoryResponseBodyDataRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListJobScriptHistoryResponseBodyData& setRecords(vector<Models::ListJobScriptHistoryResponseBodyDataRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline ListJobScriptHistoryResponseBodyData& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    // -
    std::shared_ptr<vector<Models::ListJobScriptHistoryResponseBodyDataRecords>> records_ = nullptr;
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
