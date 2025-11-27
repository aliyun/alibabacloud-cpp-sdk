// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPURCHASECONTROLRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPURCHASECONTROLRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetPurchaseControlRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPurchaseControlRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerUID, customerUID_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetPurchaseControlRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerUID, customerUID_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetPurchaseControlRecordRequest() = default ;
    GetPurchaseControlRecordRequest(const GetPurchaseControlRecordRequest &) = default ;
    GetPurchaseControlRecordRequest(GetPurchaseControlRecordRequest &&) = default ;
    GetPurchaseControlRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPurchaseControlRecordRequest() = default ;
    GetPurchaseControlRecordRequest& operator=(const GetPurchaseControlRecordRequest &) = default ;
    GetPurchaseControlRecordRequest& operator=(GetPurchaseControlRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerUID_ == nullptr
        && return this->operationTime_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr; };
    // customerUID Field Functions 
    bool hasCustomerUID() const { return this->customerUID_ != nullptr;};
    void deleteCustomerUID() { this->customerUID_ = nullptr;};
    inline int64_t customerUID() const { DARABONBA_PTR_GET_DEFAULT(customerUID_, 0L) };
    inline GetPurchaseControlRecordRequest& setCustomerUID(int64_t customerUID) { DARABONBA_PTR_SET_VALUE(customerUID_, customerUID) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline GetPurchaseControlRecordRequest& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetPurchaseControlRecordRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetPurchaseControlRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> customerUID_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
