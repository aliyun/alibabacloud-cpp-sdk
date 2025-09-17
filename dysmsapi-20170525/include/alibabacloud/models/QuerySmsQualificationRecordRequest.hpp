// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsQualificationRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsQualificationRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QualificationGroupName, qualificationGroupName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_TO_JSON(WorkOrderId, workOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsQualificationRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QualificationGroupName, qualificationGroupName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_FROM_JSON(WorkOrderId, workOrderId_);
    };
    QuerySmsQualificationRecordRequest() = default ;
    QuerySmsQualificationRecordRequest(const QuerySmsQualificationRecordRequest &) = default ;
    QuerySmsQualificationRecordRequest(QuerySmsQualificationRecordRequest &&) = default ;
    QuerySmsQualificationRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsQualificationRecordRequest() = default ;
    QuerySmsQualificationRecordRequest& operator=(const QuerySmsQualificationRecordRequest &) = default ;
    QuerySmsQualificationRecordRequest& operator=(QuerySmsQualificationRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->companyName_ != nullptr
        && this->legalPersonName_ != nullptr && this->ownerId_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->qualificationGroupName_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->state_ != nullptr && this->useBySelf_ != nullptr && this->workOrderId_ != nullptr; };
    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline QuerySmsQualificationRecordRequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string legalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline QuerySmsQualificationRecordRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySmsQualificationRecordRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QuerySmsQualificationRecordRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QuerySmsQualificationRecordRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qualificationGroupName Field Functions 
    bool hasQualificationGroupName() const { return this->qualificationGroupName_ != nullptr;};
    void deleteQualificationGroupName() { this->qualificationGroupName_ = nullptr;};
    inline string qualificationGroupName() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupName_, "") };
    inline QuerySmsQualificationRecordRequest& setQualificationGroupName(string qualificationGroupName) { DARABONBA_PTR_SET_VALUE(qualificationGroupName_, qualificationGroupName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySmsQualificationRecordRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySmsQualificationRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySmsQualificationRecordRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // useBySelf Field Functions 
    bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
    void deleteUseBySelf() { this->useBySelf_ = nullptr;};
    inline bool useBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, false) };
    inline QuerySmsQualificationRecordRequest& setUseBySelf(bool useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


    // workOrderId Field Functions 
    bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
    void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
    inline int64_t workOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, 0L) };
    inline QuerySmsQualificationRecordRequest& setWorkOrderId(int64_t workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


  protected:
    // 公司名
    std::shared_ptr<string> companyName_ = nullptr;
    // 法人姓名
    std::shared_ptr<string> legalPersonName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // 资质组名称
    std::shared_ptr<string> qualificationGroupName_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 审核状态。INT:审核中FAILED:审核失败,PASSED:审核通过,NOT_FINISH:资料待补充,CANCELED:已撤回
    std::shared_ptr<string> state_ = nullptr;
    // 是否自用
    std::shared_ptr<bool> useBySelf_ = nullptr;
    // 工单ID
    std::shared_ptr<int64_t> workOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
