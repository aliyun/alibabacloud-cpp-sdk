// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHANGELOGLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHANGELOGLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryChangeLogListResponseBodyDataChangeLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryChangeLogListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChangeLogListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeLog, changeLog_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChangeLogListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeLog, changeLog_);
    };
    QueryChangeLogListResponseBodyData() = default ;
    QueryChangeLogListResponseBodyData(const QueryChangeLogListResponseBodyData &) = default ;
    QueryChangeLogListResponseBodyData(QueryChangeLogListResponseBodyData &&) = default ;
    QueryChangeLogListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChangeLogListResponseBodyData() = default ;
    QueryChangeLogListResponseBodyData& operator=(const QueryChangeLogListResponseBodyData &) = default ;
    QueryChangeLogListResponseBodyData& operator=(QueryChangeLogListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeLog_ == nullptr; };
    // changeLog Field Functions 
    bool hasChangeLog() const { return this->changeLog_ != nullptr;};
    void deleteChangeLog() { this->changeLog_ = nullptr;};
    inline const vector<Models::QueryChangeLogListResponseBodyDataChangeLog> & changeLog() const { DARABONBA_PTR_GET_CONST(changeLog_, vector<Models::QueryChangeLogListResponseBodyDataChangeLog>) };
    inline vector<Models::QueryChangeLogListResponseBodyDataChangeLog> changeLog() { DARABONBA_PTR_GET(changeLog_, vector<Models::QueryChangeLogListResponseBodyDataChangeLog>) };
    inline QueryChangeLogListResponseBodyData& setChangeLog(const vector<Models::QueryChangeLogListResponseBodyDataChangeLog> & changeLog) { DARABONBA_PTR_SET_VALUE(changeLog_, changeLog) };
    inline QueryChangeLogListResponseBodyData& setChangeLog(vector<Models::QueryChangeLogListResponseBodyDataChangeLog> && changeLog) { DARABONBA_PTR_SET_RVALUE(changeLog_, changeLog) };


  protected:
    std::shared_ptr<vector<Models::QueryChangeLogListResponseBodyDataChangeLog>> changeLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
