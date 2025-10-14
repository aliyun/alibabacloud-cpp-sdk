// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFORDERNUMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeDetailListOfOrderNumResponseBodyDataList.hpp>
#include <alibabacloud/models/ChangeDetailListOfOrderNumResponseBodyDataPagination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfOrderNumResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfOrderNumResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfOrderNumResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
    };
    ChangeDetailListOfOrderNumResponseBodyData() = default ;
    ChangeDetailListOfOrderNumResponseBodyData(const ChangeDetailListOfOrderNumResponseBodyData &) = default ;
    ChangeDetailListOfOrderNumResponseBodyData(ChangeDetailListOfOrderNumResponseBodyData &&) = default ;
    ChangeDetailListOfOrderNumResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfOrderNumResponseBodyData() = default ;
    ChangeDetailListOfOrderNumResponseBodyData& operator=(const ChangeDetailListOfOrderNumResponseBodyData &) = default ;
    ChangeDetailListOfOrderNumResponseBodyData& operator=(ChangeDetailListOfOrderNumResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pagination_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList>) };
    inline vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList>) };
    inline ChangeDetailListOfOrderNumResponseBodyData& setList(const vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ChangeDetailListOfOrderNumResponseBodyData& setList(vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline const Models::ChangeDetailListOfOrderNumResponseBodyDataPagination & pagination() const { DARABONBA_PTR_GET_CONST(pagination_, Models::ChangeDetailListOfOrderNumResponseBodyDataPagination) };
    inline Models::ChangeDetailListOfOrderNumResponseBodyDataPagination pagination() { DARABONBA_PTR_GET(pagination_, Models::ChangeDetailListOfOrderNumResponseBodyDataPagination) };
    inline ChangeDetailListOfOrderNumResponseBodyData& setPagination(const Models::ChangeDetailListOfOrderNumResponseBodyDataPagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
    inline ChangeDetailListOfOrderNumResponseBodyData& setPagination(Models::ChangeDetailListOfOrderNumResponseBodyDataPagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


  protected:
    std::shared_ptr<vector<Models::ChangeDetailListOfOrderNumResponseBodyDataList>> list_ = nullptr;
    std::shared_ptr<Models::ChangeDetailListOfOrderNumResponseBodyDataPagination> pagination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
