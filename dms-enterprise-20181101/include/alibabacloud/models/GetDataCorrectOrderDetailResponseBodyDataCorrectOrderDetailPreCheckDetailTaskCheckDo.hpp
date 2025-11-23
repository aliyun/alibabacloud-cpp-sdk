// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILPRECHECKDETAILTASKCHECKDO_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILPRECHECKDETAILTASKCHECKDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& obj) { 
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(CheckStep, checkStep_);
      DARABONBA_PTR_TO_JSON(UserTip, userTip_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(CheckStep, checkStep_);
      DARABONBA_PTR_FROM_JSON(UserTip, userTip_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkStatus_ == nullptr
        && return this->checkStep_ == nullptr && return this->userTip_ == nullptr; };
    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline string checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& setCheckStatus(string checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // checkStep Field Functions 
    bool hasCheckStep() const { return this->checkStep_ != nullptr;};
    void deleteCheckStep() { this->checkStep_ = nullptr;};
    inline string checkStep() const { DARABONBA_PTR_GET_DEFAULT(checkStep_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& setCheckStep(string checkStep) { DARABONBA_PTR_SET_VALUE(checkStep_, checkStep) };


    // userTip Field Functions 
    bool hasUserTip() const { return this->userTip_ != nullptr;};
    void deleteUserTip() { this->userTip_ = nullptr;};
    inline string userTip() const { DARABONBA_PTR_GET_DEFAULT(userTip_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO& setUserTip(string userTip) { DARABONBA_PTR_SET_VALUE(userTip_, userTip) };


  protected:
    // The state of the precheck. Valid values:
    // 
    // *   **WAITING**: The ticket is pending precheck.
    // *   **RUNNING**: The ticket is being prechecked.
    // *   **SUCCESS**: The ticket passes the precheck.
    // *   **FAIL**: The ticket fails the precheck.
    std::shared_ptr<string> checkStatus_ = nullptr;
    // The check step of the precheck. Valid values:
    // 
    // *   **SQL_PARSE**: The system checks the syntax of the SQL statement.
    // *   **SQL_TYPE_CHECK**: The system checks the type of the SQL statement.
    // *   **PERMISSION_CHECK**: The system checks the permissions required for the data change.
    // *   **ROW_CHECK**: The system checks the number of affected rows.
    std::shared_ptr<string> checkStep_ = nullptr;
    // The message that appears when a check step is executed.
    std::shared_ptr<string> userTip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
