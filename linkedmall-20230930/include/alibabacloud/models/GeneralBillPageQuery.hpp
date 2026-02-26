// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALBILLPAGEQUERY_HPP_
#define ALIBABACLOUD_MODELS_GENERALBILLPAGEQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class GeneralBillPageQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralBillPageQuery& obj) { 
      DARABONBA_PTR_TO_JSON(asc, asc_);
      DARABONBA_PTR_TO_JSON(billId, billId_);
      DARABONBA_PTR_TO_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralBillPageQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(asc, asc_);
      DARABONBA_PTR_FROM_JSON(billId, billId_);
      DARABONBA_PTR_FROM_JSON(billPeriod, billPeriod_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    GeneralBillPageQuery() = default ;
    GeneralBillPageQuery(const GeneralBillPageQuery &) = default ;
    GeneralBillPageQuery(GeneralBillPageQuery &&) = default ;
    GeneralBillPageQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralBillPageQuery() = default ;
    GeneralBillPageQuery& operator=(const GeneralBillPageQuery &) = default ;
    GeneralBillPageQuery& operator=(GeneralBillPageQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && this->billId_ == nullptr && this->billPeriod_ == nullptr && this->limit_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->shopId_ == nullptr && this->start_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline GeneralBillPageQuery& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // billId Field Functions 
    bool hasBillId() const { return this->billId_ != nullptr;};
    void deleteBillId() { this->billId_ = nullptr;};
    inline string getBillId() const { DARABONBA_PTR_GET_DEFAULT(billId_, "") };
    inline GeneralBillPageQuery& setBillId(string billId) { DARABONBA_PTR_SET_VALUE(billId_, billId) };


    // billPeriod Field Functions 
    bool hasBillPeriod() const { return this->billPeriod_ != nullptr;};
    void deleteBillPeriod() { this->billPeriod_ = nullptr;};
    inline string getBillPeriod() const { DARABONBA_PTR_GET_DEFAULT(billPeriod_, "") };
    inline GeneralBillPageQuery& setBillPeriod(string billPeriod) { DARABONBA_PTR_SET_VALUE(billPeriod_, billPeriod) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline GeneralBillPageQuery& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GeneralBillPageQuery& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline GeneralBillPageQuery& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GeneralBillPageQuery& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GeneralBillPageQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline GeneralBillPageQuery& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline GeneralBillPageQuery& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // asc
    shared_ptr<bool> asc_ {};
    // billId
    shared_ptr<string> billId_ {};
    // billPeriod
    shared_ptr<string> billPeriod_ {};
    // limit
    shared_ptr<int32_t> limit_ {};
    // orderBy
    shared_ptr<string> orderBy_ {};
    // orderDirection
    shared_ptr<string> orderDirection_ {};
    // pageNumber
    shared_ptr<int32_t> pageNumber_ {};
    // pageSize
    shared_ptr<int32_t> pageSize_ {};
    // shopId
    shared_ptr<string> shopId_ {};
    // start
    shared_ptr<int32_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
