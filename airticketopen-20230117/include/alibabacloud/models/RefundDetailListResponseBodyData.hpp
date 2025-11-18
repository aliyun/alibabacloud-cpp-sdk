// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefundDetailListResponseBodyDataList.hpp>
#include <alibabacloud/models/RefundDetailListResponseBodyDataPagination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
    };
    RefundDetailListResponseBodyData() = default ;
    RefundDetailListResponseBodyData(const RefundDetailListResponseBodyData &) = default ;
    RefundDetailListResponseBodyData(RefundDetailListResponseBodyData &&) = default ;
    RefundDetailListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailListResponseBodyData() = default ;
    RefundDetailListResponseBodyData& operator=(const RefundDetailListResponseBodyData &) = default ;
    RefundDetailListResponseBodyData& operator=(RefundDetailListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pagination_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::RefundDetailListResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::RefundDetailListResponseBodyDataList>) };
    inline vector<Models::RefundDetailListResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::RefundDetailListResponseBodyDataList>) };
    inline RefundDetailListResponseBodyData& setList(const vector<Models::RefundDetailListResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline RefundDetailListResponseBodyData& setList(vector<Models::RefundDetailListResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline const Models::RefundDetailListResponseBodyDataPagination & pagination() const { DARABONBA_PTR_GET_CONST(pagination_, Models::RefundDetailListResponseBodyDataPagination) };
    inline Models::RefundDetailListResponseBodyDataPagination pagination() { DARABONBA_PTR_GET(pagination_, Models::RefundDetailListResponseBodyDataPagination) };
    inline RefundDetailListResponseBodyData& setPagination(const Models::RefundDetailListResponseBodyDataPagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
    inline RefundDetailListResponseBodyData& setPagination(Models::RefundDetailListResponseBodyDataPagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


  protected:
    // Data list
    std::shared_ptr<vector<Models::RefundDetailListResponseBodyDataList>> list_ = nullptr;
    // Pagination information
    std::shared_ptr<Models::RefundDetailListResponseBodyDataPagination> pagination_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
