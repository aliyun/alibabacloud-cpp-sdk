// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLDOWNORUPGRADECMD_HPP_
#define ALIBABACLOUD_MODELS_BILLDOWNORUPGRADECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class BillDownOrUpgradeCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillDownOrUpgradeCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(activeDate, activeDate_);
      DARABONBA_PTR_TO_JSON(codeType, codeType_);
      DARABONBA_PTR_TO_JSON(operateTypEnum, operateTypEnum_);
      DARABONBA_PTR_TO_JSON(qps, qps_);
    };
    friend void from_json(const Darabonba::Json& j, BillDownOrUpgradeCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(activeDate, activeDate_);
      DARABONBA_PTR_FROM_JSON(codeType, codeType_);
      DARABONBA_PTR_FROM_JSON(operateTypEnum, operateTypEnum_);
      DARABONBA_PTR_FROM_JSON(qps, qps_);
    };
    BillDownOrUpgradeCmd() = default ;
    BillDownOrUpgradeCmd(const BillDownOrUpgradeCmd &) = default ;
    BillDownOrUpgradeCmd(BillDownOrUpgradeCmd &&) = default ;
    BillDownOrUpgradeCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillDownOrUpgradeCmd() = default ;
    BillDownOrUpgradeCmd& operator=(const BillDownOrUpgradeCmd &) = default ;
    BillDownOrUpgradeCmd& operator=(BillDownOrUpgradeCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->activeDate_ == nullptr && this->codeType_ == nullptr && this->operateTypEnum_ == nullptr && this->qps_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline BillDownOrUpgradeCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // activeDate Field Functions 
    bool hasActiveDate() const { return this->activeDate_ != nullptr;};
    void deleteActiveDate() { this->activeDate_ = nullptr;};
    inline string getActiveDate() const { DARABONBA_PTR_GET_DEFAULT(activeDate_, "") };
    inline BillDownOrUpgradeCmd& setActiveDate(string activeDate) { DARABONBA_PTR_SET_VALUE(activeDate_, activeDate) };


    // codeType Field Functions 
    bool hasCodeType() const { return this->codeType_ != nullptr;};
    void deleteCodeType() { this->codeType_ = nullptr;};
    inline string getCodeType() const { DARABONBA_PTR_GET_DEFAULT(codeType_, "") };
    inline BillDownOrUpgradeCmd& setCodeType(string codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };


    // operateTypEnum Field Functions 
    bool hasOperateTypEnum() const { return this->operateTypEnum_ != nullptr;};
    void deleteOperateTypEnum() { this->operateTypEnum_ = nullptr;};
    inline string getOperateTypEnum() const { DARABONBA_PTR_GET_DEFAULT(operateTypEnum_, "") };
    inline BillDownOrUpgradeCmd& setOperateTypEnum(string operateTypEnum) { DARABONBA_PTR_SET_VALUE(operateTypEnum_, operateTypEnum) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int32_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0) };
    inline BillDownOrUpgradeCmd& setQps(int32_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> activeDate_ {};
    shared_ptr<string> codeType_ {};
    shared_ptr<string> operateTypEnum_ {};
    shared_ptr<int32_t> qps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
