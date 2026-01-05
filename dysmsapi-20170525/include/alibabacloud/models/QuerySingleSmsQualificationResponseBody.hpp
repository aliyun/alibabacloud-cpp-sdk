// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSINGLESMSQUALIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySingleSmsQualificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySingleSmsQualificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySingleSmsQualificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySingleSmsQualificationResponseBody() = default ;
    QuerySingleSmsQualificationResponseBody(const QuerySingleSmsQualificationResponseBody &) = default ;
    QuerySingleSmsQualificationResponseBody(QuerySingleSmsQualificationResponseBody &&) = default ;
    QuerySingleSmsQualificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySingleSmsQualificationResponseBody() = default ;
    QuerySingleSmsQualificationResponseBody& operator=(const QuerySingleSmsQualificationResponseBody &) = default ;
    QuerySingleSmsQualificationResponseBody& operator=(QuerySingleSmsQualificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OtherFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OtherFiles& obj) { 
          DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
          DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
        };
        friend void from_json(const Darabonba::Json& j, OtherFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
          DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
        };
        OtherFiles() = default ;
        OtherFiles(const OtherFiles &) = default ;
        OtherFiles(OtherFiles &&) = default ;
        OtherFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OtherFiles() = default ;
        OtherFiles& operator=(const OtherFiles &) = default ;
        OtherFiles& operator=(OtherFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->licensePic_ == nullptr
        && this->picUrl_ == nullptr; };
        // licensePic Field Functions 
        bool hasLicensePic() const { return this->licensePic_ != nullptr;};
        void deleteLicensePic() { this->licensePic_ = nullptr;};
        inline string getLicensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
        inline OtherFiles& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


        // picUrl Field Functions 
        bool hasPicUrl() const { return this->picUrl_ != nullptr;};
        void deletePicUrl() { this->picUrl_ = nullptr;};
        inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
        inline OtherFiles& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


      protected:
        shared_ptr<string> licensePic_ {};
        // 文件的完整路径
        shared_ptr<string> picUrl_ {};
      };

      class BusinessLicensePics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BusinessLicensePics& obj) { 
          DARABONBA_PTR_TO_JSON(LicensePic, licensePic_);
          DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BusinessLicensePics& obj) { 
          DARABONBA_PTR_FROM_JSON(LicensePic, licensePic_);
          DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        BusinessLicensePics() = default ;
        BusinessLicensePics(const BusinessLicensePics &) = default ;
        BusinessLicensePics(BusinessLicensePics &&) = default ;
        BusinessLicensePics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BusinessLicensePics() = default ;
        BusinessLicensePics& operator=(const BusinessLicensePics &) = default ;
        BusinessLicensePics& operator=(BusinessLicensePics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->licensePic_ == nullptr
        && this->picUrl_ == nullptr && this->type_ == nullptr; };
        // licensePic Field Functions 
        bool hasLicensePic() const { return this->licensePic_ != nullptr;};
        void deleteLicensePic() { this->licensePic_ = nullptr;};
        inline string getLicensePic() const { DARABONBA_PTR_GET_DEFAULT(licensePic_, "") };
        inline BusinessLicensePics& setLicensePic(string licensePic) { DARABONBA_PTR_SET_VALUE(licensePic_, licensePic) };


        // picUrl Field Functions 
        bool hasPicUrl() const { return this->picUrl_ != nullptr;};
        void deletePicUrl() { this->picUrl_ = nullptr;};
        inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
        inline BusinessLicensePics& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BusinessLicensePics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> licensePic_ {};
        // 文件的完整路径
        shared_ptr<string> picUrl_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->adminIDCardExpDate_ == nullptr
        && this->adminIDCardFrontFace_ == nullptr && this->adminIDCardNo_ == nullptr && this->adminIDCardPic_ == nullptr && this->adminIDCardType_ == nullptr && this->adminName_ == nullptr
        && this->adminPhoneNo_ == nullptr && this->businessLicensePics_ == nullptr && this->businessType_ == nullptr && this->companyName_ == nullptr && this->companyType_ == nullptr
        && this->effTimeStr_ == nullptr && this->legalPersonIDCardNo_ == nullptr && this->legalPersonIDCardType_ == nullptr && this->legalPersonIdCardEffTime_ == nullptr && this->legalPersonName_ == nullptr
        && this->organizationCode_ == nullptr && this->otherFiles_ == nullptr && this->qualificationGroupId_ == nullptr && this->qualificationName_ == nullptr && this->remark_ == nullptr
        && this->state_ == nullptr && this->useBySelf_ == nullptr && this->whetherShare_ == nullptr && this->workOrderId_ == nullptr; };
      // adminIDCardExpDate Field Functions 
      bool hasAdminIDCardExpDate() const { return this->adminIDCardExpDate_ != nullptr;};
      void deleteAdminIDCardExpDate() { this->adminIDCardExpDate_ = nullptr;};
      inline string getAdminIDCardExpDate() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardExpDate_, "") };
      inline Data& setAdminIDCardExpDate(string adminIDCardExpDate) { DARABONBA_PTR_SET_VALUE(adminIDCardExpDate_, adminIDCardExpDate) };


      // adminIDCardFrontFace Field Functions 
      bool hasAdminIDCardFrontFace() const { return this->adminIDCardFrontFace_ != nullptr;};
      void deleteAdminIDCardFrontFace() { this->adminIDCardFrontFace_ = nullptr;};
      inline string getAdminIDCardFrontFace() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardFrontFace_, "") };
      inline Data& setAdminIDCardFrontFace(string adminIDCardFrontFace) { DARABONBA_PTR_SET_VALUE(adminIDCardFrontFace_, adminIDCardFrontFace) };


      // adminIDCardNo Field Functions 
      bool hasAdminIDCardNo() const { return this->adminIDCardNo_ != nullptr;};
      void deleteAdminIDCardNo() { this->adminIDCardNo_ = nullptr;};
      inline string getAdminIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardNo_, "") };
      inline Data& setAdminIDCardNo(string adminIDCardNo) { DARABONBA_PTR_SET_VALUE(adminIDCardNo_, adminIDCardNo) };


      // adminIDCardPic Field Functions 
      bool hasAdminIDCardPic() const { return this->adminIDCardPic_ != nullptr;};
      void deleteAdminIDCardPic() { this->adminIDCardPic_ = nullptr;};
      inline string getAdminIDCardPic() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardPic_, "") };
      inline Data& setAdminIDCardPic(string adminIDCardPic) { DARABONBA_PTR_SET_VALUE(adminIDCardPic_, adminIDCardPic) };


      // adminIDCardType Field Functions 
      bool hasAdminIDCardType() const { return this->adminIDCardType_ != nullptr;};
      void deleteAdminIDCardType() { this->adminIDCardType_ = nullptr;};
      inline string getAdminIDCardType() const { DARABONBA_PTR_GET_DEFAULT(adminIDCardType_, "") };
      inline Data& setAdminIDCardType(string adminIDCardType) { DARABONBA_PTR_SET_VALUE(adminIDCardType_, adminIDCardType) };


      // adminName Field Functions 
      bool hasAdminName() const { return this->adminName_ != nullptr;};
      void deleteAdminName() { this->adminName_ = nullptr;};
      inline string getAdminName() const { DARABONBA_PTR_GET_DEFAULT(adminName_, "") };
      inline Data& setAdminName(string adminName) { DARABONBA_PTR_SET_VALUE(adminName_, adminName) };


      // adminPhoneNo Field Functions 
      bool hasAdminPhoneNo() const { return this->adminPhoneNo_ != nullptr;};
      void deleteAdminPhoneNo() { this->adminPhoneNo_ = nullptr;};
      inline string getAdminPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(adminPhoneNo_, "") };
      inline Data& setAdminPhoneNo(string adminPhoneNo) { DARABONBA_PTR_SET_VALUE(adminPhoneNo_, adminPhoneNo) };


      // businessLicensePics Field Functions 
      bool hasBusinessLicensePics() const { return this->businessLicensePics_ != nullptr;};
      void deleteBusinessLicensePics() { this->businessLicensePics_ = nullptr;};
      inline const vector<Data::BusinessLicensePics> & getBusinessLicensePics() const { DARABONBA_PTR_GET_CONST(businessLicensePics_, vector<Data::BusinessLicensePics>) };
      inline vector<Data::BusinessLicensePics> getBusinessLicensePics() { DARABONBA_PTR_GET(businessLicensePics_, vector<Data::BusinessLicensePics>) };
      inline Data& setBusinessLicensePics(const vector<Data::BusinessLicensePics> & businessLicensePics) { DARABONBA_PTR_SET_VALUE(businessLicensePics_, businessLicensePics) };
      inline Data& setBusinessLicensePics(vector<Data::BusinessLicensePics> && businessLicensePics) { DARABONBA_PTR_SET_RVALUE(businessLicensePics_, businessLicensePics) };


      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline Data& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline Data& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // companyType Field Functions 
      bool hasCompanyType() const { return this->companyType_ != nullptr;};
      void deleteCompanyType() { this->companyType_ = nullptr;};
      inline string getCompanyType() const { DARABONBA_PTR_GET_DEFAULT(companyType_, "") };
      inline Data& setCompanyType(string companyType) { DARABONBA_PTR_SET_VALUE(companyType_, companyType) };


      // effTimeStr Field Functions 
      bool hasEffTimeStr() const { return this->effTimeStr_ != nullptr;};
      void deleteEffTimeStr() { this->effTimeStr_ = nullptr;};
      inline string getEffTimeStr() const { DARABONBA_PTR_GET_DEFAULT(effTimeStr_, "") };
      inline Data& setEffTimeStr(string effTimeStr) { DARABONBA_PTR_SET_VALUE(effTimeStr_, effTimeStr) };


      // legalPersonIDCardNo Field Functions 
      bool hasLegalPersonIDCardNo() const { return this->legalPersonIDCardNo_ != nullptr;};
      void deleteLegalPersonIDCardNo() { this->legalPersonIDCardNo_ = nullptr;};
      inline string getLegalPersonIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardNo_, "") };
      inline Data& setLegalPersonIDCardNo(string legalPersonIDCardNo) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardNo_, legalPersonIDCardNo) };


      // legalPersonIDCardType Field Functions 
      bool hasLegalPersonIDCardType() const { return this->legalPersonIDCardType_ != nullptr;};
      void deleteLegalPersonIDCardType() { this->legalPersonIDCardType_ = nullptr;};
      inline string getLegalPersonIDCardType() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIDCardType_, "") };
      inline Data& setLegalPersonIDCardType(string legalPersonIDCardType) { DARABONBA_PTR_SET_VALUE(legalPersonIDCardType_, legalPersonIDCardType) };


      // legalPersonIdCardEffTime Field Functions 
      bool hasLegalPersonIdCardEffTime() const { return this->legalPersonIdCardEffTime_ != nullptr;};
      void deleteLegalPersonIdCardEffTime() { this->legalPersonIdCardEffTime_ = nullptr;};
      inline string getLegalPersonIdCardEffTime() const { DARABONBA_PTR_GET_DEFAULT(legalPersonIdCardEffTime_, "") };
      inline Data& setLegalPersonIdCardEffTime(string legalPersonIdCardEffTime) { DARABONBA_PTR_SET_VALUE(legalPersonIdCardEffTime_, legalPersonIdCardEffTime) };


      // legalPersonName Field Functions 
      bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
      void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
      inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
      inline Data& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


      // organizationCode Field Functions 
      bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
      void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
      inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
      inline Data& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


      // otherFiles Field Functions 
      bool hasOtherFiles() const { return this->otherFiles_ != nullptr;};
      void deleteOtherFiles() { this->otherFiles_ = nullptr;};
      inline const vector<Data::OtherFiles> & getOtherFiles() const { DARABONBA_PTR_GET_CONST(otherFiles_, vector<Data::OtherFiles>) };
      inline vector<Data::OtherFiles> getOtherFiles() { DARABONBA_PTR_GET(otherFiles_, vector<Data::OtherFiles>) };
      inline Data& setOtherFiles(const vector<Data::OtherFiles> & otherFiles) { DARABONBA_PTR_SET_VALUE(otherFiles_, otherFiles) };
      inline Data& setOtherFiles(vector<Data::OtherFiles> && otherFiles) { DARABONBA_PTR_SET_RVALUE(otherFiles_, otherFiles) };


      // qualificationGroupId Field Functions 
      bool hasQualificationGroupId() const { return this->qualificationGroupId_ != nullptr;};
      void deleteQualificationGroupId() { this->qualificationGroupId_ = nullptr;};
      inline int64_t getQualificationGroupId() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupId_, 0L) };
      inline Data& setQualificationGroupId(int64_t qualificationGroupId) { DARABONBA_PTR_SET_VALUE(qualificationGroupId_, qualificationGroupId) };


      // qualificationName Field Functions 
      bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
      void deleteQualificationName() { this->qualificationName_ = nullptr;};
      inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
      inline Data& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // useBySelf Field Functions 
      bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
      void deleteUseBySelf() { this->useBySelf_ = nullptr;};
      inline bool getUseBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, false) };
      inline Data& setUseBySelf(bool useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


      // whetherShare Field Functions 
      bool hasWhetherShare() const { return this->whetherShare_ != nullptr;};
      void deleteWhetherShare() { this->whetherShare_ = nullptr;};
      inline bool getWhetherShare() const { DARABONBA_PTR_GET_DEFAULT(whetherShare_, false) };
      inline Data& setWhetherShare(bool whetherShare) { DARABONBA_PTR_SET_VALUE(whetherShare_, whetherShare) };


      // workOrderId Field Functions 
      bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
      void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
      inline int64_t getWorkOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, 0L) };
      inline Data& setWorkOrderId(int64_t workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


    protected:
      // 经办人身份证有效期
      shared_ptr<string> adminIDCardExpDate_ {};
      // 经办人身份证国徽面，产品需求，要求身份证可以分正反面上传
      shared_ptr<string> adminIDCardFrontFace_ {};
      // 经办人身份证号码
      shared_ptr<string> adminIDCardNo_ {};
      // 经办人身份证图片地址，正反面合一
      shared_ptr<string> adminIDCardPic_ {};
      // 管理员身份证类型
      shared_ptr<string> adminIDCardType_ {};
      // 经办人姓名
      shared_ptr<string> adminName_ {};
      // 经办人手机号码
      shared_ptr<string> adminPhoneNo_ {};
      // 证件信息
      shared_ptr<vector<Data::BusinessLicensePics>> businessLicensePics_ {};
      // 行业类型，在当前模式下是可以用产品线code来区分
      shared_ptr<string> businessType_ {};
      // 公司名称
      shared_ptr<string> companyName_ {};
      // 企业类型, COMPANY:公司，政府或者事业单位:NON_PROFIT_ORGANIZATION
      shared_ptr<string> companyType_ {};
      shared_ptr<string> effTimeStr_ {};
      // 法人身份证号码
      shared_ptr<string> legalPersonIDCardNo_ {};
      // 法人身份证类型
      shared_ptr<string> legalPersonIDCardType_ {};
      // 法人身份证有效期
      shared_ptr<string> legalPersonIdCardEffTime_ {};
      // 法人姓名
      shared_ptr<string> legalPersonName_ {};
      // 社会统一信用代码
      shared_ptr<string> organizationCode_ {};
      // 更多资料
      shared_ptr<vector<Data::OtherFiles>> otherFiles_ {};
      shared_ptr<int64_t> qualificationGroupId_ {};
      // 资质名称
      shared_ptr<string> qualificationName_ {};
      // 备注
      shared_ptr<string> remark_ {};
      // 当前审核状态
      shared_ptr<string> state_ {};
      // 是否自用
      shared_ptr<bool> useBySelf_ {};
      shared_ptr<bool> whetherShare_ {};
      // 乾坤袋工单ID
      shared_ptr<int64_t> workOrderId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySingleSmsQualificationResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySingleSmsQualificationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySingleSmsQualificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySingleSmsQualificationResponseBody::Data) };
    inline QuerySingleSmsQualificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySingleSmsQualificationResponseBody::Data) };
    inline QuerySingleSmsQualificationResponseBody& setData(const QuerySingleSmsQualificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySingleSmsQualificationResponseBody& setData(QuerySingleSmsQualificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySingleSmsQualificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySingleSmsQualificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySingleSmsQualificationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QuerySingleSmsQualificationResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
