// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETPAGEQUERYPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETPAGEQUERYPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketPageQueryProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketPageQueryProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScenicId, scenicId_);
    };
    friend void from_json(const Darabonba::Json& j, TicketPageQueryProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScenicId, scenicId_);
    };
    TicketPageQueryProductRequest() = default ;
    TicketPageQueryProductRequest(const TicketPageQueryProductRequest &) = default ;
    TicketPageQueryProductRequest(TicketPageQueryProductRequest &&) = default ;
    TicketPageQueryProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketPageQueryProductRequest() = default ;
    TicketPageQueryProductRequest& operator=(const TicketPageQueryProductRequest &) = default ;
    TicketPageQueryProductRequest& operator=(TicketPageQueryProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->scenicId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline TicketPageQueryProductRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline TicketPageQueryProductRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline TicketPageQueryProductRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scenicId Field Functions 
    bool hasScenicId() const { return this->scenicId_ != nullptr;};
    void deleteScenicId() { this->scenicId_ = nullptr;};
    inline int64_t getScenicId() const { DARABONBA_PTR_GET_DEFAULT(scenicId_, 0L) };
    inline TicketPageQueryProductRequest& setScenicId(int64_t scenicId) { DARABONBA_PTR_SET_VALUE(scenicId_, scenicId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> scenicId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
