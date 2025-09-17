// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODYSIGNISPREGISTERDETAILLISTREGISTERSTATUSREASONS_HPP_
#define ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODYSIGNISPREGISTERDETAILLISTREGISTERSTATUSREASONS_HPP_
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
  class GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& obj) { 
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonDescList, reasonDescList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& obj) { 
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonDescList, reasonDescList_);
    };
    GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons() = default ;
    GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons(const GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons &) = default ;
    GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons(GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons &&) = default ;
    GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons() = default ;
    GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& operator=(const GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons &) = default ;
    GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& operator=(GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reasonCode_ != nullptr
        && this->reasonDescList_ != nullptr; };
    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonDescList Field Functions 
    bool hasReasonDescList() const { return this->reasonDescList_ != nullptr;};
    void deleteReasonDescList() { this->reasonDescList_ = nullptr;};
    inline const vector<string> & reasonDescList() const { DARABONBA_PTR_GET_CONST(reasonDescList_, vector<string>) };
    inline vector<string> reasonDescList() { DARABONBA_PTR_GET(reasonDescList_, vector<string>) };
    inline GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& setReasonDescList(const vector<string> & reasonDescList) { DARABONBA_PTR_SET_VALUE(reasonDescList_, reasonDescList) };
    inline GetSmsSignResponseBodySignIspRegisterDetailListRegisterStatusReasons& setReasonDescList(vector<string> && reasonDescList) { DARABONBA_PTR_SET_RVALUE(reasonDescList_, reasonDescList) };


  protected:
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<vector<string>> reasonDescList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
