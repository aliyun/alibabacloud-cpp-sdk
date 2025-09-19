// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline.hpp>
#include <alibabacloud/models/GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile.hpp>
#include <alibabacloud/models/GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetStrategyTemplateDetailResponseBodyDataAlarmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailResponseBodyDataAlarmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_TO_JSON(Vul, vul_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailResponseBodyDataAlarmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_FROM_JSON(Vul, vul_);
    };
    GetStrategyTemplateDetailResponseBodyDataAlarmDetail() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetail(const GetStrategyTemplateDetailResponseBodyDataAlarmDetail &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetail(GetStrategyTemplateDetailResponseBodyDataAlarmDetail &&) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailResponseBodyDataAlarmDetail() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetail& operator=(const GetStrategyTemplateDetailResponseBodyDataAlarmDetail &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetail& operator=(GetStrategyTemplateDetailResponseBodyDataAlarmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->maliciousFile_ != nullptr && this->vul_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline) };
    inline Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline baseline() { DARABONBA_PTR_GET(baseline_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetail& setBaseline(const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetail& setBaseline(Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // maliciousFile Field Functions 
    bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
    void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
    inline const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile & maliciousFile() const { DARABONBA_PTR_GET_CONST(maliciousFile_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile) };
    inline Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile maliciousFile() { DARABONBA_PTR_GET(maliciousFile_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetail& setMaliciousFile(const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile & maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetail& setMaliciousFile(Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile && maliciousFile) { DARABONBA_PTR_SET_RVALUE(maliciousFile_, maliciousFile) };


    // vul Field Functions 
    bool hasVul() const { return this->vul_ != nullptr;};
    void deleteVul() { this->vul_ = nullptr;};
    inline const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul & vul() const { DARABONBA_PTR_GET_CONST(vul_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul) };
    inline Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul vul() { DARABONBA_PTR_GET(vul_, Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetail& setVul(const Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul & vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetail& setVul(Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul && vul) { DARABONBA_PTR_SET_RVALUE(vul_, vul) };


  protected:
    // The configuration of the baseline.
    std::shared_ptr<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline> baseline_ = nullptr;
    // The configuration of the alert rule for the malicious sample.
    std::shared_ptr<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailMaliciousFile> maliciousFile_ = nullptr;
    // The configuration of the vulnerability detection rule.
    std::shared_ptr<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailVul> vul_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
