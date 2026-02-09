// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200326
{
namespace Models
{
  class ListTicketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAfterTime, createdAfterTime_);
      DARABONBA_PTR_TO_JSON(CreatedBeforeTime, createdBeforeTime_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageStart, pageStart_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(TicketStatus, ticketStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAfterTime, createdAfterTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBeforeTime, createdBeforeTime_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageStart, pageStart_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(TicketStatus, ticketStatus_);
    };
    ListTicketsRequest() = default ;
    ListTicketsRequest(const ListTicketsRequest &) = default ;
    ListTicketsRequest(ListTicketsRequest &&) = default ;
    ListTicketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsRequest() = default ;
    ListTicketsRequest& operator=(const ListTicketsRequest &) = default ;
    ListTicketsRequest& operator=(ListTicketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAfterTime_ == nullptr
        && this->createdBeforeTime_ == nullptr && this->ids_ == nullptr && this->language_ == nullptr && this->pageSize_ == nullptr && this->pageStart_ == nullptr
        && this->productCode_ == nullptr && this->subUserId_ == nullptr && this->ticketStatus_ == nullptr; };
    // createdAfterTime Field Functions 
    bool hasCreatedAfterTime() const { return this->createdAfterTime_ != nullptr;};
    void deleteCreatedAfterTime() { this->createdAfterTime_ = nullptr;};
    inline int64_t getCreatedAfterTime() const { DARABONBA_PTR_GET_DEFAULT(createdAfterTime_, 0L) };
    inline ListTicketsRequest& setCreatedAfterTime(int64_t createdAfterTime) { DARABONBA_PTR_SET_VALUE(createdAfterTime_, createdAfterTime) };


    // createdBeforeTime Field Functions 
    bool hasCreatedBeforeTime() const { return this->createdBeforeTime_ != nullptr;};
    void deleteCreatedBeforeTime() { this->createdBeforeTime_ = nullptr;};
    inline int64_t getCreatedBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(createdBeforeTime_, 0L) };
    inline ListTicketsRequest& setCreatedBeforeTime(int64_t createdBeforeTime) { DARABONBA_PTR_SET_VALUE(createdBeforeTime_, createdBeforeTime) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ListTicketsRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListTicketsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTicketsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageStart Field Functions 
    bool hasPageStart() const { return this->pageStart_ != nullptr;};
    void deletePageStart() { this->pageStart_ = nullptr;};
    inline int32_t getPageStart() const { DARABONBA_PTR_GET_DEFAULT(pageStart_, 0) };
    inline ListTicketsRequest& setPageStart(int32_t pageStart) { DARABONBA_PTR_SET_VALUE(pageStart_, pageStart) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListTicketsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline string getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, "") };
    inline ListTicketsRequest& setSubUserId(string subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline ListTicketsRequest& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    shared_ptr<int64_t> createdAfterTime_ {};
    shared_ptr<int64_t> createdBeforeTime_ {};
    shared_ptr<string> ids_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> pageStart_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> subUserId_ {};
    shared_ptr<string> ticketStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200326
#endif
