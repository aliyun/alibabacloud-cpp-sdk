// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETORDERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrdersResponseBodyDataOrderList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetOrdersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(OrderList, orderList_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrdersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(OrderList, orderList_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetOrdersResponseBodyData() = default ;
    GetOrdersResponseBodyData(const GetOrdersResponseBodyData &) = default ;
    GetOrdersResponseBodyData(GetOrdersResponseBodyData &&) = default ;
    GetOrdersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrdersResponseBodyData() = default ;
    GetOrdersResponseBodyData& operator=(const GetOrdersResponseBodyData &) = default ;
    GetOrdersResponseBodyData& operator=(GetOrdersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostName_ != nullptr
        && this->orderList_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline GetOrdersResponseBodyData& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const Models::GetOrdersResponseBodyDataOrderList & orderList() const { DARABONBA_PTR_GET_CONST(orderList_, Models::GetOrdersResponseBodyDataOrderList) };
    inline Models::GetOrdersResponseBodyDataOrderList orderList() { DARABONBA_PTR_GET(orderList_, Models::GetOrdersResponseBodyDataOrderList) };
    inline GetOrdersResponseBodyData& setOrderList(const Models::GetOrdersResponseBodyDataOrderList & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline GetOrdersResponseBodyData& setOrderList(Models::GetOrdersResponseBodyDataOrderList && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline GetOrdersResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOrdersResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetOrdersResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<Models::GetOrdersResponseBodyDataOrderList> orderList_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
