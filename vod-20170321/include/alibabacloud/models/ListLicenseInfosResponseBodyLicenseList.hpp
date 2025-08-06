// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSEINFOSRESPONSEBODYLICENSELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSEINFOSRESPONSEBODYLICENSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLicenseInfosResponseBodyLicenseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicenseInfosResponseBodyLicenseList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicenseInfosResponseBodyLicenseList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListLicenseInfosResponseBodyLicenseList() = default ;
    ListLicenseInfosResponseBodyLicenseList(const ListLicenseInfosResponseBodyLicenseList &) = default ;
    ListLicenseInfosResponseBodyLicenseList(ListLicenseInfosResponseBodyLicenseList &&) = default ;
    ListLicenseInfosResponseBodyLicenseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicenseInfosResponseBodyLicenseList() = default ;
    ListLicenseInfosResponseBodyLicenseList& operator=(const ListLicenseInfosResponseBodyLicenseList &) = default ;
    ListLicenseInfosResponseBodyLicenseList& operator=(ListLicenseInfosResponseBodyLicenseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->beginTime_ != nullptr && this->businessType_ != nullptr && this->contractNo_ != nullptr && this->createTime_ != nullptr && this->expiredOn_ != nullptr
        && this->extraInfo_ != nullptr && this->licenseId_ != nullptr && this->modifyTime_ != nullptr && this->status_ != nullptr && this->type_ != nullptr
        && this->userId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListLicenseInfosResponseBodyLicenseList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string contractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string expiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline string licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLicenseInfosResponseBodyLicenseList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListLicenseInfosResponseBodyLicenseList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> contractNo_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> expiredOn_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> licenseId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
