// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGSQLCONCURRENCYCONTROLRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRunningSqlConcurrencyControlRulesResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRunningSqlConcurrencyControlRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningSqlConcurrencyControlRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningSqlConcurrencyControlRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetRunningSqlConcurrencyControlRulesResponseBodyData() = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyData(const GetRunningSqlConcurrencyControlRulesResponseBodyData &) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyData(GetRunningSqlConcurrencyControlRulesResponseBodyData &&) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningSqlConcurrencyControlRulesResponseBodyData() = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyData& operator=(const GetRunningSqlConcurrencyControlRulesResponseBodyData &) = default ;
    GetRunningSqlConcurrencyControlRulesResponseBodyData& operator=(GetRunningSqlConcurrencyControlRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->total_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList & list() const { DARABONBA_PTR_GET_CONST(list_, Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList) };
    inline Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList list() { DARABONBA_PTR_GET(list_, Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList) };
    inline GetRunningSqlConcurrencyControlRulesResponseBodyData& setList(const Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetRunningSqlConcurrencyControlRulesResponseBodyData& setList(Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetRunningSqlConcurrencyControlRulesResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The returned data.
    std::shared_ptr<Models::GetRunningSqlConcurrencyControlRulesResponseBodyDataList> list_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
