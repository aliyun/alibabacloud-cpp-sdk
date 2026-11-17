// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCORPNUMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCORPNUMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListCorpNumbersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCorpNumbersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SipTrunkId, sipTrunkId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCorpNumbersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SipTrunkId, sipTrunkId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListCorpNumbersRequest() = default ;
    ListCorpNumbersRequest(const ListCorpNumbersRequest &) = default ;
    ListCorpNumbersRequest(ListCorpNumbersRequest &&) = default ;
    ListCorpNumbersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCorpNumbersRequest() = default ;
    ListCorpNumbersRequest& operator=(const ListCorpNumbersRequest &) = default ;
    ListCorpNumbersRequest& operator=(ListCorpNumbersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sipTrunkId_ == nullptr && this->tenantId_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListCorpNumbersRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCorpNumbersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCorpNumbersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sipTrunkId Field Functions 
    bool hasSipTrunkId() const { return this->sipTrunkId_ != nullptr;};
    void deleteSipTrunkId() { this->sipTrunkId_ = nullptr;};
    inline string getSipTrunkId() const { DARABONBA_PTR_GET_DEFAULT(sipTrunkId_, "") };
    inline ListCorpNumbersRequest& setSipTrunkId(string sipTrunkId) { DARABONBA_PTR_SET_VALUE(sipTrunkId_, sipTrunkId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListCorpNumbersRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The bound number.
    shared_ptr<string> number_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The SIP trunk ID.
    shared_ptr<string> sipTrunkId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
