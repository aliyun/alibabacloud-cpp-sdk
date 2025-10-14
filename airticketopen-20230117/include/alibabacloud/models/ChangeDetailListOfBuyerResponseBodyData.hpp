// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFBUYERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFBUYERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeDetailListOfBuyerResponseBodyDataList.hpp>
#include <alibabacloud/models/ChangeDetailListOfBuyerResponseBodyDataPagination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfBuyerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfBuyerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfBuyerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
    };
    ChangeDetailListOfBuyerResponseBodyData() = default ;
    ChangeDetailListOfBuyerResponseBodyData(const ChangeDetailListOfBuyerResponseBodyData &) = default ;
    ChangeDetailListOfBuyerResponseBodyData(ChangeDetailListOfBuyerResponseBodyData &&) = default ;
    ChangeDetailListOfBuyerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfBuyerResponseBodyData() = default ;
    ChangeDetailListOfBuyerResponseBodyData& operator=(const ChangeDetailListOfBuyerResponseBodyData &) = default ;
    ChangeDetailListOfBuyerResponseBodyData& operator=(ChangeDetailListOfBuyerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pagination_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ChangeDetailListOfBuyerResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ChangeDetailListOfBuyerResponseBodyDataList>) };
    inline vector<Models::ChangeDetailListOfBuyerResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ChangeDetailListOfBuyerResponseBodyDataList>) };
    inline ChangeDetailListOfBuyerResponseBodyData& setList(const vector<Models::ChangeDetailListOfBuyerResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ChangeDetailListOfBuyerResponseBodyData& setList(vector<Models::ChangeDetailListOfBuyerResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline const Models::ChangeDetailListOfBuyerResponseBodyDataPagination & pagination() const { DARABONBA_PTR_GET_CONST(pagination_, Models::ChangeDetailListOfBuyerResponseBodyDataPagination) };
    inline Models::ChangeDetailListOfBuyerResponseBodyDataPagination pagination() { DARABONBA_PTR_GET(pagination_, Models::ChangeDetailListOfBuyerResponseBodyDataPagination) };
    inline ChangeDetailListOfBuyerResponseBodyData& setPagination(const Models::ChangeDetailListOfBuyerResponseBodyDataPagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
    inline ChangeDetailListOfBuyerResponseBodyData& setPagination(Models::ChangeDetailListOfBuyerResponseBodyDataPagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


  protected:
    std::shared_ptr<vector<Models::ChangeDetailListOfBuyerResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<Models::ChangeDetailListOfBuyerResponseBodyDataPagination> pagination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
