// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics.hpp>
#include <alibabacloud/models/QuerySingleSmsQualificationResponseBodyDataOtherFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySingleSmsQualificationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySingleSmsQualificationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AdminIDCardExpDate, adminIDCardExpDate_);
      DARABONBA_PTR_TO_JSON(AdminIDCardFrontFace, adminIDCardFrontFace_);
      DARABONBA_PTR_TO_JSON(AdminIDCardNo, adminIDCardNo_);
      DARABONBA_PTR_TO_JSON(AdminIDCardPic, adminIDCardPic_);
      DARABONBA_PTR_TO_JSON(AdminIDCardType, adminIDCardType_);
      DARABONBA_PTR_TO_JSON(AdminName, adminName_);
      DARABONBA_PTR_TO_JSON(AdminPhoneNo, adminPhoneNo_);
      DARABONBA_PTR_TO_JSON(BusinessLicensePics, businessLicensePics_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CompanyType, companyType_);
      DARABONBA_PTR_TO_JSON(EffTimeStr, effTimeStr_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_TO_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OtherFiles, otherFiles_);
      DARABONBA_PTR_TO_JSON(QualificationGroupId, qualificationGroupId_);
      DARABONBA_PTR_TO_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_TO_JSON(WhetherShare, whetherShare_);
      DARABONBA_PTR_TO_JSON(WorkOrderId, workOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySingleSmsQualificationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminIDCardExpDate, adminIDCardExpDate_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardFrontFace, adminIDCardFrontFace_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardNo, adminIDCardNo_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardPic, adminIDCardPic_);
      DARABONBA_PTR_FROM_JSON(AdminIDCardType, adminIDCardType_);
      DARABONBA_PTR_FROM_JSON(AdminName, adminName_);
      DARABONBA_PTR_FROM_JSON(AdminPhoneNo, adminPhoneNo_);
      DARABONBA_PTR_FROM_JSON(BusinessLicensePics, businessLicensePics_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CompanyType, companyType_);
      DARABONBA_PTR_FROM_JSON(EffTimeStr, effTimeStr_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardNo, legalPersonIDCardNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIDCardType, legalPersonIDCardType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonIdCardEffTime, legalPersonIdCardEffTime_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OtherFiles, otherFiles_);
      DARABONBA_PTR_FROM_JSON(QualificationGroupId, qualificationGroupId_);
      DARABONBA_PTR_FROM_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_FROM_JSON(WhetherShare, whetherShare_);
      DARABONBA_PTR_FROM_JSON(WorkOrderId, workOrderId_);
    };
    QuerySingleSmsQualificationResponseBodyData() = default ;
    QuerySingleSmsQualificationResponseBodyData(const QuerySingleSmsQualificationResponseBodyData &) = default ;
    QuerySingleSmsQualificationResponseBodyData(QuerySingleSmsQualificationResponseBodyData &&) = default ;
    QuerySingleSmsQualificationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySingleSmsQualificationResponseBodyData() = default ;
    QuerySingleSmsQualificationResponseBodyData& operator=(const QuerySingleSmsQualificationResponseBodyData &) = default ;
    QuerySingleSmsQualificationResponseBodyData& operator=(QuerySingleSmsQualificationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminIDCardExpDate_ != nullptr
        && this->adminIDCardFrontFace_ != nullptr && this->adminIDCardNo_ != nullptr && this->adminIDCardPic_ != nullptr && this->adminIDCardType_ != nullptr && this->adminName_ != nullptr
        && this->adminPhoneNo_ != nullptr && this->businessLicensePics_ != nullptr && this->businessType_ != nullptr && this->companyName_ != nullptr && this->companyType_ != nullptr
        && this->effTimeStr_ != nullptr && this->legalPersonIDCardNo_ != nullptr && this->legalPersonIDCardType_ != nullptr && this->legalPersonIdCardEffTime_ != nullptr && this->legalPersonName_ != nullptr
        && this->organizationCode_ != nullptr && this->otherFiles_ != nullptr && this->qualificationGroupId_ != nullptr && this->qualificationName_ != nullptr && this->remark_ != nullptr
        && this->state_ != nullptr && this->useBySelf_ != nullptr && this->whetherShare_ != nullptr && this->workOrderId_ != nullptr; };
    // adminIDCardExpDate Field Functions 
    bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
    void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
    inline string adminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


    // adminIDCardFrontFace Field Functions 
    bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
    void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
    inline string adminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


    // adminIDCardNo Field Functions 
    bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
    void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
    inline string adminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


    // adminIDCardPic Field Functions 
    bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
    void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
    inline string adminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


    // adminIDCardType Field Functions 
    bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
    void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
    inline string adminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


    // adminName Field Functions 
    bool hasAdminName() const { return this->adminName_ != nullptr;};
    void deleteAdminName() { this->adminName_ = nullptr;};
    inline string adminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


    // adminPhoneNo Field Functions 
    bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
    void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
    inline string adminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


    // businessLicensePics Field Functions 
    bool hasBusinessLicensePics() const { return this->businessLicensePics_ != nullptr;};
    void deleteBusinessLicensePics() { this->businessLicensePics_ = nullptr;};
    inline const vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics> & businessLicensePics() const { DARABONBA_PTR_GET_CONST(businessLicensePics_, vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics>) };
    inline vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics> businessLicensePics() { DARABONBA_PTR_GET(businessLicensePics_, vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics>) };
    inline QuerySingleSmsQualificationResponseBodyData& setBusinessLicensePics(const vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics> & businessLicensePics) { DARABONBA_PTR_SET_VALUE(businessLicensePics_, businessLicensePics) };
    inline QuerySingleSmsQualificationResponseBodyData& setBusinessLicensePics(vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics> && businessLicensePics) { DARABONBA_PTR_SET_RVALUE(businessLicensePics_, businessLicensePics) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // companyType Field Functions 
    bool hasCompanyType() const { return this->companyType_ != nullptr;};
    void deleteCompanyType() { this->companyType_ = nullptr;};
    inline string companyType() const { DARABONBA_PTR_GET_DEFAULT(companyType_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setCompanyType(string companyType) { DARABONBA_PTR_SET_VALUE(companyType_, companyType) };


    // effTimeStr Field Functions 
    bool hasEffTimeStr() const { return this->effTimeStr_ != nullptr;};
    void deleteEffTimeStr() { this->effTimeStr_ = nullptr;};
    inline string effTimeStr() const { DARABONBA_PTR_GET_DEFAULT(effTimeStr_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setEffTimeStr(string effTimeStr) { DARABONBA_PTR_SET_VALUE(effTimeStr_, effTimeStr) };


    // legalPersonIDCardNo Field Functions 
    bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
    void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
    inline string legalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


    // legalPersonIDCardType Field Functions 
    bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
    void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
    inline string legalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


    // legalPersonIdCardEffTime Field Functions 
    bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
    void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
    inline string legalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string legalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string organizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // otherFiles Field Functions 
    bool hasOtherFiles() const { return this->otherFiles_ != nullptr;};
    void deleteOtherFiles() { this->otherFiles_ = nullptr;};
    inline const vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles> & otherFiles() const { DARABONBA_PTR_GET_CONST(otherFiles_, vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles>) };
    inline vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles> otherFiles() { DARABONBA_PTR_GET(otherFiles_, vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles>) };
    inline QuerySingleSmsQualificationResponseBodyData& setOtherFiles(const vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles> & otherFiles) { DARABONBA_PTR_SET_VALUE(otherFiles_, otherFiles) };
    inline QuerySingleSmsQualificationResponseBodyData& setOtherFiles(vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles> && otherFiles) { DARABONBA_PTR_SET_RVALUE(otherFiles_, otherFiles) };


    // qualificationGroupId Field Functions 
    bool hasQualificationGroupId() const { return this->qualificationGroupId_ != nullptr;};
    void deleteQualificationGroupId() { this->qualificationGroupId_ = nullptr;};
    inline int64_t qualificationGroupId() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupId_, 0L) };
    inline QuerySingleSmsQualificationResponseBodyData& setQualificationGroupId(int64_t qualificationGroupId) { DARABONBA_PTR_SET_VALUE(qualificationGroupId_, qualificationGroupId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string qualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySingleSmsQualificationResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // useBySelf Field Functions 
    bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
    void deleteUseBySelf() { this->useBySelf_ = nullptr;};
    inline bool useBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, false) };
    inline QuerySingleSmsQualificationResponseBodyData& setUseBySelf(bool useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


    // whetherShare Field Functions 
    bool hasWhetherShare() const { return this->whetherShare_ != nullptr;};
    void deleteWhetherShare() { this->whetherShare_ = nullptr;};
    inline bool whetherShare() const { DARABONBA_PTR_GET_DEFAULT(whetherShare_, false) };
    inline QuerySingleSmsQualificationResponseBodyData& setWhetherShare(bool whetherShare) { DARABONBA_PTR_SET_VALUE(whetherShare_, whetherShare) };


    // workOrderId Field Functions 
    bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
    void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
    inline int64_t workOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, 0L) };
    inline QuerySingleSmsQualificationResponseBodyData& setWorkOrderId(int64_t workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


  protected:
    // 经办人身份证有效期
    std::shared_ptr<string> adminIDCardExpDate_ = nullptr;
    // 经办人身份证国徽面，产品需求，要求身份证可以分正反面上传
    std::shared_ptr<string> adminIDCardFrontFace_ = nullptr;
    // 经办人身份证号码
    std::shared_ptr<string> adminIDCardNo_ = nullptr;
    // 经办人身份证图片地址，正反面合一
    std::shared_ptr<string> adminIDCardPic_ = nullptr;
    // 管理员身份证类型
    std::shared_ptr<string> adminIDCardType_ = nullptr;
    // 经办人姓名
    std::shared_ptr<string> adminName_ = nullptr;
    // 经办人手机号码
    std::shared_ptr<string> adminPhoneNo_ = nullptr;
    // 证件信息
    std::shared_ptr<vector<Models::QuerySingleSmsQualificationResponseBodyDataBusinessLicensePics>> businessLicensePics_ = nullptr;
    // 行业类型，在当前模式下是可以用产品线code来区分
    std::shared_ptr<string> businessType_ = nullptr;
    // 公司名称
    std::shared_ptr<string> companyName_ = nullptr;
    // 企业类型, COMPANY:公司，政府或者事业单位:NON_PROFIT_ORGANIZATION
    std::shared_ptr<string> companyType_ = nullptr;
    std::shared_ptr<string> effTimeStr_ = nullptr;
    // 法人身份证号码
    std::shared_ptr<string> legalPersonIDCardNo_ = nullptr;
    // 法人身份证类型
    std::shared_ptr<string> legalPersonIDCardType_ = nullptr;
    // 法人身份证有效期
    std::shared_ptr<string> legalPersonIdCardEffTime_ = nullptr;
    // 法人姓名
    std::shared_ptr<string> legalPersonName_ = nullptr;
    // 社会统一信用代码
    std::shared_ptr<string> organizationCode_ = nullptr;
    // 更多资料
    std::shared_ptr<vector<Models::QuerySingleSmsQualificationResponseBodyDataOtherFiles>> otherFiles_ = nullptr;
    std::shared_ptr<int64_t> qualificationGroupId_ = nullptr;
    // 资质名称
    std::shared_ptr<string> qualificationName_ = nullptr;
    // 备注
    std::shared_ptr<string> remark_ = nullptr;
    // 当前审核状态
    std::shared_ptr<string> state_ = nullptr;
    // 是否自用
    std::shared_ptr<bool> useBySelf_ = nullptr;
    std::shared_ptr<bool> whetherShare_ = nullptr;
    // 乾坤袋工单ID
    std::shared_ptr<int64_t> workOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
