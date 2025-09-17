// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODYSIGNISPREGISTERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODYSIGNISPREGISTERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsSignResponseBodySignIspRegisterDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsSignResponseBodySignIspRegisterDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(OperatorCode, operatorCode_);
      DARABONBA_PTR_TO_JSON(OperatorCompleteTime, operatorCompleteTime_);
      DARABONBA_PTR_TO_JSON(RegisterStatus, registerStatus_);
      DARABONBA_PTR_TO_JSON(RegisterStatusReasons, registerStatusReasons_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsSignResponseBodySignIspRegisterDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(OperatorCode, operatorCode_);
      DARABONBA_PTR_FROM_JSON(OperatorCompleteTime, operatorCompleteTime_);
      DARABONBA_PTR_FROM_JSON(RegisterStatus, registerStatus_);
      DARABONBA_PTR_FROM_JSON(RegisterStatusReasons, registerStatusReasons_);
    };
    GetSmsSignResponseBodySignIspRegisterDetailList() = default ;
    GetSmsSignResponseBodySignIspRegisterDetailList(const GetSmsSignResponseBodySignIspRegisterDetailList &) = default ;
    GetSmsSignResponseBodySignIspRegisterDetailList(GetSmsSignResponseBodySignIspRegisterDetailList &&) = default ;
    GetSmsSignResponseBodySignIspRegisterDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsSignResponseBodySignIspRegisterDetailList() = default ;
    GetSmsSignResponseBodySignIspRegisterDetailList& operator=(const GetSmsSignResponseBodySignIspRegisterDetailList &) = default ;
    GetSmsSignResponseBodySignIspRegisterDetailList& operator=(GetSmsSignResponseBodySignIspRegisterDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operatorCode_ != nullptr
        && this->operatorCompleteTime_ != nullptr && this->registerStatus_ != nullptr && this->registerStatusReasons_ != nullptr; };
    // operatorCode Field Functions 
    bool hasOperatorCode() const { return this->operatorCode_ != nullptr;};
    void deleteOperatorCode() { this->operatorCode_ = nullptr;};
    inline string operatorCode() const { DARABONBA_PTR_GET_DEFAULT(operatorCode_, "") };
    inline GetSmsSignResponseBodySignIspRegisterDetailList& setOperatorCode(string operatorCode) { DARABONBA_PTR_SET_VALUE(operatorCode_, operatorCode) };


    // operatorCompleteTime Field Functions 
    bool hasOperatorCompleteTime() const { return this->operatorCompleteTime_ != nullptr;};
    void deleteOperatorCompleteTime() { this->operatorCompleteTime_ = nullptr;};
    inline string operatorCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(operatorCompleteTime_, "") };
    inline GetSmsSignResponseBodySignIspRegisterDetailList& setOperatorCompleteTime(string operatorCompleteTime) { DARABONBA_PTR_SET_VALUE(operatorCompleteTime_, operatorCompleteTime) };


    // registerStatus Field Functions 
    bool hasRegisterStatus() const { return this->registerStatus_ != nullptr;};
    void deleteRegisterStatus() { this->registerStatus_ = nullptr;};
    inline int32_t registerStatus() const { DARABONBA_PTR_GET_DEFAULT(registerStatus_, 0) };
    inline GetSmsSignResponseBodySignIspRegisterDetailList& setRegisterStatus(int32_t registerStatus) { DARABONBA_PTR_SET_VALUE(registerStatus_, registerStatus) };


    // registerStatusReasons Field Functions 
    bool hasRegisterStatusReasons() const { return this->registerStatusReasons_ != nullptr;};
    void deleteRegisterStatusReasons() { this->registerStatusReasons_ = nullptr;};
    inline const vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons> & registerStatusReasons() const { DARABONBA_PTR_GET_CONST(registerStatusReasons_, vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons>) };
    inline vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons> registerStatusReasons() { DARABONBA_PTR_GET(registerStatusReasons_, vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons>) };
    inline GetSmsSignResponseBodySignIspRegisterDetailList& setRegisterStatusReasons(const vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons> & registerStatusReasons) { DARABONBA_PTR_SET_VALUE(registerStatusReasons_, registerStatusReasons) };
    inline GetSmsSignResponseBodySignIspRegisterDetailList& setRegisterStatusReasons(vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons> && registerStatusReasons) { DARABONBA_PTR_SET_RVALUE(registerStatusReasons_, registerStatusReasons) };


  protected:
    std::shared_ptr<string> operatorCode_ = nullptr;
    std::shared_ptr<string> operatorCompleteTime_ = nullptr;
    std::shared_ptr<int32_t> registerStatus_ = nullptr;
    std::shared_ptr<vector<Models::GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons>> registerStatusReasons_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
