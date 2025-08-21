// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLRULESHISTORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSqlConcurrencyControlRulesHistoryResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetSqlConcurrencyControlRulesHistoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConcurrencyControlRulesHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConcurrencyControlRulesHistoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetSqlConcurrencyControlRulesHistoryResponseBodyData() = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyData(const GetSqlConcurrencyControlRulesHistoryResponseBodyData &) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyData(GetSqlConcurrencyControlRulesHistoryResponseBodyData &&) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConcurrencyControlRulesHistoryResponseBodyData() = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyData& operator=(const GetSqlConcurrencyControlRulesHistoryResponseBodyData &) = default ;
    GetSqlConcurrencyControlRulesHistoryResponseBodyData& operator=(GetSqlConcurrencyControlRulesHistoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->total_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList) };
    inline Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList list() { DARABONBA_PTR_GET(list_, Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyData& setList(const Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyData& setList(Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetSqlConcurrencyControlRulesHistoryResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of the queried throttling rules.
    std::shared_ptr<Models::GetSqlConcurrencyControlRulesHistoryResponseBodyDataList> list_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
