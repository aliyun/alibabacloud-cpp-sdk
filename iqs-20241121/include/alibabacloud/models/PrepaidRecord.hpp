// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREPAIDRECORD_HPP_
#define ALIBABACLOUD_MODELS_PREPAIDRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class PrepaidRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrepaidRecord& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(accountName, accountName_);
      DARABONBA_PTR_TO_JSON(codeType, codeType_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(remainQuota, remainQuota_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(usedQuota, usedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, PrepaidRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(accountName, accountName_);
      DARABONBA_PTR_FROM_JSON(codeType, codeType_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(remainQuota, remainQuota_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(usedQuota, usedQuota_);
    };
    PrepaidRecord() = default ;
    PrepaidRecord(const PrepaidRecord &) = default ;
    PrepaidRecord(PrepaidRecord &&) = default ;
    PrepaidRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrepaidRecord() = default ;
    PrepaidRecord& operator=(const PrepaidRecord &) = default ;
    PrepaidRecord& operator=(PrepaidRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->codeType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->remainQuota_ == nullptr && this->status_ == nullptr && this->totalQuota_ == nullptr && this->usedQuota_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline PrepaidRecord& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline PrepaidRecord& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline PrepaidRecord& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline PrepaidRecord& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline PrepaidRecord& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PrepaidRecord& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remainQuota Field Functions 
    bool hasRemainQuota() const { return this->remainQuota_ != nullptr;};
    void deleteRemainQuota() { this->remainQuota_ = nullptr;};
    inline int64_t getRemainQuota() const { DARABONBA_PTR_GET_DEFAULT(remainQuota_, 0L) };
    inline PrepaidRecord& setRemainQuota(int64_t remainQuota) { DARABONBA_PTR_SET_VALUE(remainQuota_, remainQuota) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PrepaidRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
    inline PrepaidRecord& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int64_t getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0L) };
    inline PrepaidRecord& setUsedQuota(int64_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> accountName_ {};
    shared_ptr<string> codeType_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> remainQuota_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> totalQuota_ {};
    shared_ptr<int64_t> usedQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
