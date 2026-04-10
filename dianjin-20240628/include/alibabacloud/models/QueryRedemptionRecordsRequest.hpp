// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEMPTIONRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEMPTIONRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class QueryRedemptionRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedemptionRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(externalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(redemptionOrderNo, redemptionOrderNo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedemptionRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(externalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(redemptionOrderNo, redemptionOrderNo_);
    };
    QueryRedemptionRecordsRequest() = default ;
    QueryRedemptionRecordsRequest(const QueryRedemptionRecordsRequest &) = default ;
    QueryRedemptionRecordsRequest(QueryRedemptionRecordsRequest &&) = default ;
    QueryRedemptionRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedemptionRecordsRequest() = default ;
    QueryRedemptionRecordsRequest& operator=(const QueryRedemptionRecordsRequest &) = default ;
    QueryRedemptionRecordsRequest& operator=(QueryRedemptionRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUserId_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->redemptionOrderNo_ == nullptr; };
    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline QueryRedemptionRecordsRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline QueryRedemptionRecordsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRedemptionRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // redemptionOrderNo Field Functions 
    bool hasRedemptionOrderNo() const { return this->redemptionOrderNo_ != nullptr;};
    void deleteRedemptionOrderNo() { this->redemptionOrderNo_ = nullptr;};
    inline string getRedemptionOrderNo() const { DARABONBA_PTR_GET_DEFAULT(redemptionOrderNo_, "") };
    inline QueryRedemptionRecordsRequest& setRedemptionOrderNo(string redemptionOrderNo) { DARABONBA_PTR_SET_VALUE(redemptionOrderNo_, redemptionOrderNo) };


  protected:
    shared_ptr<string> externalUserId_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> redemptionOrderNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
