// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials.hpp>
#include <alibabacloud/models/QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(AuditMsg, auditMsg_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(BizNo, bizNo_);
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSpecialBizContact, domainSpecialBizContact_);
      DARABONBA_PTR_TO_JSON(DomainSpecialBizCredentials, domainSpecialBizCredentials_);
      DARABONBA_PTR_TO_JSON(DomainSpecialOrderResult, domainSpecialOrderResult_);
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
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditMsg, auditMsg_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(BizNo, bizNo_);
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSpecialBizContact, domainSpecialBizContact_);
      DARABONBA_PTR_FROM_JSON(DomainSpecialBizCredentials, domainSpecialBizCredentials_);
      DARABONBA_PTR_FROM_JSON(DomainSpecialOrderResult, domainSpecialOrderResult_);
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
    QueryDomainSpecialBizDetailResponseBodyModule() = default ;
    QueryDomainSpecialBizDetailResponseBodyModule(const QueryDomainSpecialBizDetailResponseBodyModule &) = default ;
    QueryDomainSpecialBizDetailResponseBodyModule(QueryDomainSpecialBizDetailResponseBodyModule &&) = default ;
    QueryDomainSpecialBizDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizDetailResponseBodyModule() = default ;
    QueryDomainSpecialBizDetailResponseBodyModule& operator=(const QueryDomainSpecialBizDetailResponseBodyModule &) = default ;
    QueryDomainSpecialBizDetailResponseBodyModule& operator=(QueryDomainSpecialBizDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditMsg_ == nullptr
        && return this->bizName_ == nullptr && return this->bizNo_ == nullptr && return this->bizStatus_ == nullptr && return this->bizType_ == nullptr && return this->createTime_ == nullptr
        && return this->domainName_ == nullptr && return this->domainSpecialBizContact_ == nullptr && return this->domainSpecialBizCredentials_ == nullptr && return this->domainSpecialOrderResult_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->orderId_ == nullptr && return this->productId_ == nullptr && return this->saleId_ == nullptr
        && return this->status_ == nullptr && return this->statusDesc_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // auditMsg Field Functions 
    bool hasAuditMsg() const { return this->auditMsg_ != nullptr;};
    void deleteAuditMsg() { this->auditMsg_ = nullptr;};
    inline string auditMsg() const { DARABONBA_PTR_GET_DEFAULT(auditMsg_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setAuditMsg(string auditMsg) { DARABONBA_PTR_SET_VALUE(auditMsg_, auditMsg) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // bizNo Field Functions 
    bool hasBizNo() const { return this->bizNo_ != nullptr;};
    void deleteBizNo() { this->bizNo_ = nullptr;};
    inline string bizNo() const { DARABONBA_PTR_GET_DEFAULT(bizNo_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setBizNo(string bizNo) { DARABONBA_PTR_SET_VALUE(bizNo_, bizNo) };


    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSpecialBizContact Field Functions 
    bool hasDomainSpecialBizContact() const { return this->domainSpecialBizContact_ != nullptr;};
    void deleteDomainSpecialBizContact() { this->domainSpecialBizContact_ = nullptr;};
    inline const Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact & domainSpecialBizContact() const { DARABONBA_PTR_GET_CONST(domainSpecialBizContact_, Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact) };
    inline Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact domainSpecialBizContact() { DARABONBA_PTR_GET(domainSpecialBizContact_, Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainSpecialBizContact(const Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact & domainSpecialBizContact) { DARABONBA_PTR_SET_VALUE(domainSpecialBizContact_, domainSpecialBizContact) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainSpecialBizContact(Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact && domainSpecialBizContact) { DARABONBA_PTR_SET_RVALUE(domainSpecialBizContact_, domainSpecialBizContact) };


    // domainSpecialBizCredentials Field Functions 
    bool hasDomainSpecialBizCredentials() const { return this->domainSpecialBizCredentials_ != nullptr;};
    void deleteDomainSpecialBizCredentials() { this->domainSpecialBizCredentials_ = nullptr;};
    inline const vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials> & domainSpecialBizCredentials() const { DARABONBA_PTR_GET_CONST(domainSpecialBizCredentials_, vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials>) };
    inline vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials> domainSpecialBizCredentials() { DARABONBA_PTR_GET(domainSpecialBizCredentials_, vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials>) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainSpecialBizCredentials(const vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials> & domainSpecialBizCredentials) { DARABONBA_PTR_SET_VALUE(domainSpecialBizCredentials_, domainSpecialBizCredentials) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainSpecialBizCredentials(vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials> && domainSpecialBizCredentials) { DARABONBA_PTR_SET_RVALUE(domainSpecialBizCredentials_, domainSpecialBizCredentials) };


    // domainSpecialOrderResult Field Functions 
    bool hasDomainSpecialOrderResult() const { return this->domainSpecialOrderResult_ != nullptr;};
    void deleteDomainSpecialOrderResult() { this->domainSpecialOrderResult_ = nullptr;};
    inline const Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult & domainSpecialOrderResult() const { DARABONBA_PTR_GET_CONST(domainSpecialOrderResult_, Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult) };
    inline Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult domainSpecialOrderResult() { DARABONBA_PTR_GET(domainSpecialOrderResult_, Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainSpecialOrderResult(const Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult & domainSpecialOrderResult) { DARABONBA_PTR_SET_VALUE(domainSpecialOrderResult_, domainSpecialOrderResult) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setDomainSpecialOrderResult(Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult && domainSpecialOrderResult) { DARABONBA_PTR_SET_RVALUE(domainSpecialOrderResult_, domainSpecialOrderResult) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string saleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDomainSpecialBizDetailResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


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
    std::shared_ptr<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizContact> domainSpecialBizContact_ = nullptr;
    // The certificate information.
    std::shared_ptr<vector<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialBizCredentials>> domainSpecialBizCredentials_ = nullptr;
    // The information about the order.
    std::shared_ptr<Models::QueryDomainSpecialBizDetailResponseBodyModuleDomainSpecialOrderResult> domainSpecialOrderResult_ = nullptr;
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
