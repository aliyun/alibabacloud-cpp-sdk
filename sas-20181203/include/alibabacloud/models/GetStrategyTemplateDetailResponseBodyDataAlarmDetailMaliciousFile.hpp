// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAILMALICIOUSFILE_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAILMALICIOUSFILE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile(const GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile(GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile &&) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& operator=(const GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& operator=(GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem>) };
    inline vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem> item() { DARABONBA_PTR_GET(item_, vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem>) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& setItem(const vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& setItem(vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The items on which malicious samples are detected.
    std::shared_ptr<vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFileItem>> item_ = nullptr;
    // The severities of the malicious samples.
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
