// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZINFOBYDOMAINRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZINFOBYDOMAINRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizInfoByDomainResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizInfoByDomainResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(AuditMsg, auditMsg_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(BizNo, bizNo_);
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSpecialBizContact, domainSpecialBizContact_);
      DARABONBA_PTR_TO_JSON(DomainSpecialBizCredentials, domainSpecialBizCredentials_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizInfoByDomainResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditMsg, auditMsg_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(BizNo, bizNo_);
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSpecialBizContact, domainSpecialBizContact_);
      DARABONBA_PTR_FROM_JSON(DomainSpecialBizCredentials, domainSpecialBizCredentials_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryDomainSpecialBizInfoByDomainResponseBodyModule() = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModule(const QueryDomainSpecialBizInfoByDomainResponseBodyModule &) = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModule(QueryDomainSpecialBizInfoByDomainResponseBodyModule &&) = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizInfoByDomainResponseBodyModule() = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModule& operator=(const QueryDomainSpecialBizInfoByDomainResponseBodyModule &) = default ;
    QueryDomainSpecialBizInfoByDomainResponseBodyModule& operator=(QueryDomainSpecialBizInfoByDomainResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditMsg_ == nullptr
        && return this->bizName_ == nullptr && return this->bizNo_ == nullptr && return this->bizStatus_ == nullptr && return this->bizType_ == nullptr && return this->createTime_ == nullptr
        && return this->domainName_ == nullptr && return this->domainSpecialBizContact_ == nullptr && return this->domainSpecialBizCredentials_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->orderId_ == nullptr && return this->productId_ == nullptr && return this->saleId_ == nullptr && return this->status_ == nullptr
        && return this->statusDesc_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // auditMsg Field Functions 
    bool hasAuditMsg() const { return this->auditMsg_ != nullptr;};
    void deleteAuditMsg() { this->auditMsg_ = nullptr;};
    inline string auditMsg() const { DARABONBA_PTR_GET_DEFAULT(auditMsg_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setAuditMsg(string auditMsg) { DARABONBA_PTR_SET_VALUE(auditMsg_, auditMsg) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // bizNo Field Functions 
    bool hasBizNo() const { return this->bizNo_ != nullptr;};
    void deleteBizNo() { this->bizNo_ = nullptr;};
    inline string bizNo() const { DARABONBA_PTR_GET_DEFAULT(bizNo_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setBizNo(string bizNo) { DARABONBA_PTR_SET_VALUE(bizNo_, bizNo) };


    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSpecialBizContact Field Functions 
    bool hasDomainSpecialBizContact() const { return this->domainSpecialBizContact_ != nullptr;};
    void deleteDomainSpecialBizContact() { this->domainSpecialBizContact_ = nullptr;};
    inline const Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact & domainSpecialBizContact() const { DARABONBA_PTR_GET_CONST(domainSpecialBizContact_, Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact) };
    inline Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact domainSpecialBizContact() { DARABONBA_PTR_GET(domainSpecialBizContact_, Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setDomainSpecialBizContact(const Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact & domainSpecialBizContact) { DARABONBA_PTR_SET_VALUE(domainSpecialBizContact_, domainSpecialBizContact) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setDomainSpecialBizContact(Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact && domainSpecialBizContact) { DARABONBA_PTR_SET_RVALUE(domainSpecialBizContact_, domainSpecialBizContact) };


    // domainSpecialBizCredentials Field Functions 
    bool hasDomainSpecialBizCredentials() const { return this->domainSpecialBizCredentials_ != nullptr;};
    void deleteDomainSpecialBizCredentials() { this->domainSpecialBizCredentials_ = nullptr;};
    inline const vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials> & domainSpecialBizCredentials() const { DARABONBA_PTR_GET_CONST(domainSpecialBizCredentials_, vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials>) };
    inline vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials> domainSpecialBizCredentials() { DARABONBA_PTR_GET(domainSpecialBizCredentials_, vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials>) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setDomainSpecialBizCredentials(const vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials> & domainSpecialBizCredentials) { DARABONBA_PTR_SET_VALUE(domainSpecialBizCredentials_, domainSpecialBizCredentials) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setDomainSpecialBizCredentials(vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials> && domainSpecialBizCredentials) { DARABONBA_PTR_SET_RVALUE(domainSpecialBizCredentials_, domainSpecialBizCredentials) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string saleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDomainSpecialBizInfoByDomainResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The review information.
    std::shared_ptr<string> auditMsg_ = nullptr;
    // The business name.
    std::shared_ptr<string> bizName_ = nullptr;
    // The business ID.
    std::shared_ptr<string> bizNo_ = nullptr;
    // The business status.
    std::shared_ptr<string> bizStatus_ = nullptr;
    // The business type.
    std::shared_ptr<string> bizType_ = nullptr;
    // The time when the business was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The contact information.
    std::shared_ptr<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizContact> domainSpecialBizContact_ = nullptr;
    // The certificate information.
    std::shared_ptr<vector<Models::QueryDomainSpecialBizInfoByDomainResponseBodyModuleDomainSpecialBizCredentials>> domainSpecialBizCredentials_ = nullptr;
    // The time when the business was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the business was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The primary key.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The service ID.
    std::shared_ptr<string> productId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> saleId_ = nullptr;
    // The business status.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The description of business status.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The time when the business was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
