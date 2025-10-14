// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ACCOUNTFLOWLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AccountFlowListResponseBodyDataList.hpp>
#include <alibabacloud/models/AccountFlowListResponseBodyDataPagination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class AccountFlowListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccountFlowListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
    };
    friend void from_json(const Darabonba::Json& j, AccountFlowListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
    };
    AccountFlowListResponseBodyData() = default ;
    AccountFlowListResponseBodyData(const AccountFlowListResponseBodyData &) = default ;
    AccountFlowListResponseBodyData(AccountFlowListResponseBodyData &&) = default ;
    AccountFlowListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccountFlowListResponseBodyData() = default ;
    AccountFlowListResponseBodyData& operator=(const AccountFlowListResponseBodyData &) = default ;
    AccountFlowListResponseBodyData& operator=(AccountFlowListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pagination_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::AccountFlowListResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::AccountFlowListResponseBodyDataList>) };
    inline vector<Models::AccountFlowListResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::AccountFlowListResponseBodyDataList>) };
    inline AccountFlowListResponseBodyData& setList(const vector<Models::AccountFlowListResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline AccountFlowListResponseBodyData& setList(vector<Models::AccountFlowListResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline const Models::AccountFlowListResponseBodyDataPagination & pagination() const { DARABONBA_PTR_GET_CONST(pagination_, Models::AccountFlowListResponseBodyDataPagination) };
    inline Models::AccountFlowListResponseBodyDataPagination pagination() { DARABONBA_PTR_GET(pagination_, Models::AccountFlowListResponseBodyDataPagination) };
    inline AccountFlowListResponseBodyData& setPagination(const Models::AccountFlowListResponseBodyDataPagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
    inline AccountFlowListResponseBodyData& setPagination(Models::AccountFlowListResponseBodyDataPagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


  protected:
    std::shared_ptr<vector<Models::AccountFlowListResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<Models::AccountFlowListResponseBodyDataPagination> pagination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
