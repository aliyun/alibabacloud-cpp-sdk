// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyDetailNewResponseBodyDataAlarmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(BuildRisk, buildRisk_);
      DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_TO_JSON(SensitiveFile, sensitiveFile_);
      DARABONBA_PTR_TO_JSON(Vul, vul_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(BuildRisk, buildRisk_);
      DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_FROM_JSON(SensitiveFile, sensitiveFile_);
      DARABONBA_PTR_FROM_JSON(Vul, vul_);
    };
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetail() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetail(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetail &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetail(GetOpaStrategyDetailNewResponseBodyDataAlarmDetail &&) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewResponseBodyDataAlarmDetail() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& operator=(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetail &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& operator=(GetOpaStrategyDetailNewResponseBodyDataAlarmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->buildRisk_ != nullptr && this->maliciousFile_ != nullptr && this->sensitiveFile_ != nullptr && this->vul_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline) };
    inline Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline baseline() { DARABONBA_PTR_GET(baseline_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setBaseline(const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setBaseline(Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // buildRisk Field Functions 
    bool hasBuildRisk() const { return this->buildRisk_ != nullptr;};
    void deleteBuildRisk() { this->buildRisk_ = nullptr;};
    inline const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk & buildRisk() const { DARABONBA_PTR_GET_CONST(buildRisk_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk) };
    inline Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk buildRisk() { DARABONBA_PTR_GET(buildRisk_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setBuildRisk(const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk & buildRisk) { DARABONBA_PTR_SET_VALUE(buildRisk_, buildRisk) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setBuildRisk(Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk && buildRisk) { DARABONBA_PTR_SET_RVALUE(buildRisk_, buildRisk) };


    // maliciousFile Field Functions 
    bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
    void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
    inline const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile & maliciousFile() const { DARABONBA_PTR_GET_CONST(maliciousFile_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile) };
    inline Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile maliciousFile() { DARABONBA_PTR_GET(maliciousFile_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setMaliciousFile(const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile & maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setMaliciousFile(Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile && maliciousFile) { DARABONBA_PTR_SET_RVALUE(maliciousFile_, maliciousFile) };


    // sensitiveFile Field Functions 
    bool hasSensitiveFile() const { return this->sensitiveFile_ != nullptr;};
    void deleteSensitiveFile() { this->sensitiveFile_ = nullptr;};
    inline const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile & sensitiveFile() const { DARABONBA_PTR_GET_CONST(sensitiveFile_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile) };
    inline Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile sensitiveFile() { DARABONBA_PTR_GET(sensitiveFile_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setSensitiveFile(const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile & sensitiveFile) { DARABONBA_PTR_SET_VALUE(sensitiveFile_, sensitiveFile) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setSensitiveFile(Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile && sensitiveFile) { DARABONBA_PTR_SET_RVALUE(sensitiveFile_, sensitiveFile) };


    // vul Field Functions 
    bool hasVul() const { return this->vul_ != nullptr;};
    void deleteVul() { this->vul_ = nullptr;};
    inline const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul & vul() const { DARABONBA_PTR_GET_CONST(vul_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul) };
    inline Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul vul() { DARABONBA_PTR_GET(vul_, Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setVul(const Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul & vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetail& setVul(Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul && vul) { DARABONBA_PTR_SET_RVALUE(vul_, vul) };


  protected:
    // The baseline check configuration.
    std::shared_ptr<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline> baseline_ = nullptr;
    // The configuration of image build risk.
    std::shared_ptr<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBuildRisk> buildRisk_ = nullptr;
    // The configuration of malicious samples.
    std::shared_ptr<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailMaliciousFile> maliciousFile_ = nullptr;
    // The configuration of sensitive file.
    std::shared_ptr<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailSensitiveFile> sensitiveFile_ = nullptr;
    // The vulnerability configuration.
    std::shared_ptr<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul> vul_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
