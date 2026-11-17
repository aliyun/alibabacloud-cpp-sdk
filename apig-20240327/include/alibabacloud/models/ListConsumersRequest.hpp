// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expireStatus, expireStatus_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(includeExpirationSummary, includeExpirationSummary_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expireStatus, expireStatus_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(includeExpirationSummary, includeExpirationSummary_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListConsumersRequest() = default ;
    ListConsumersRequest(const ListConsumersRequest &) = default ;
    ListConsumersRequest(ListConsumersRequest &&) = default ;
    ListConsumersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumersRequest() = default ;
    ListConsumersRequest& operator=(const ListConsumersRequest &) = default ;
    ListConsumersRequest& operator=(ListConsumersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireStatus_ == nullptr
        && this->gatewayType_ == nullptr && this->includeExpirationSummary_ == nullptr && this->nameLike_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->status_ == nullptr; };
    // expireStatus Field Functions 
    bool hasExpireStatus() const { return this->expireStatus_ != nullptr;};
    void deleteExpireStatus() { this->expireStatus_ = nullptr;};
    inline string getExpireStatus() const { DARABONBA_PTR_GET_DEFAULT(expireStatus_, "") };
    inline ListConsumersRequest& setExpireStatus(string expireStatus) { DARABONBA_PTR_SET_VALUE(expireStatus_, expireStatus) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListConsumersRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // includeExpirationSummary Field Functions 
    bool hasIncludeExpirationSummary() const { return this->includeExpirationSummary_ != nullptr;};
    void deleteIncludeExpirationSummary() { this->includeExpirationSummary_ = nullptr;};
    inline bool getIncludeExpirationSummary() const { DARABONBA_PTR_GET_DEFAULT(includeExpirationSummary_, false) };
    inline ListConsumersRequest& setIncludeExpirationSummary(bool includeExpirationSummary) { DARABONBA_PTR_SET_VALUE(includeExpirationSummary_, includeExpirationSummary) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListConsumersRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConsumersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConsumersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListConsumersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The validity status filter. Valid values: Permanent, InEffect, AboutToExpire, and Expired. You can specify multiple values separated by commas to form a union. If this parameter is not specified, all statuses are included and intersected with the name and display status filters.
    shared_ptr<string> expireStatus_ {};
    // The gateway type used for filtering. Currently, **AI** and **API** gateway types are supported.
    shared_ptr<string> gatewayType_ {};
    // Specifies whether to return the full expiration reminder count. Default value: false. The statistical scope is limited only by the current account and gatewayType.
    shared_ptr<bool> includeExpirationSummary_ {};
    // The keyword used for fuzzy search by API name.
    shared_ptr<string> nameLike_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The display status filter. Valid values: Enabled (enabled and not expired), Disabled (disabled regardless of expiration), and Expired (enabled and expired). If this parameter is not specified, all statuses are included and intersected with other filter conditions.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
