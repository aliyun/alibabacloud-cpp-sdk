// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailBaseline.hpp>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailBuildRisk.hpp>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile.hpp>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile.hpp>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailVul.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateOpaStrategyNewRequestAlarmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewRequestAlarmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(BuildRisk, buildRisk_);
      DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_TO_JSON(SensitiveFile, sensitiveFile_);
      DARABONBA_PTR_TO_JSON(Vul, vul_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewRequestAlarmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(BuildRisk, buildRisk_);
      DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_FROM_JSON(SensitiveFile, sensitiveFile_);
      DARABONBA_PTR_FROM_JSON(Vul, vul_);
    };
    UpdateOpaStrategyNewRequestAlarmDetail() = default ;
    UpdateOpaStrategyNewRequestAlarmDetail(const UpdateOpaStrategyNewRequestAlarmDetail &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetail(UpdateOpaStrategyNewRequestAlarmDetail &&) = default ;
    UpdateOpaStrategyNewRequestAlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewRequestAlarmDetail() = default ;
    UpdateOpaStrategyNewRequestAlarmDetail& operator=(const UpdateOpaStrategyNewRequestAlarmDetail &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetail& operator=(UpdateOpaStrategyNewRequestAlarmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->buildRisk_ != nullptr && this->maliciousFile_ != nullptr && this->sensitiveFile_ != nullptr && this->vul_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline) };
    inline Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline baseline() { DARABONBA_PTR_GET(baseline_, Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setBaseline(const Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setBaseline(Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // buildRisk Field Functions 
    bool hasBuildRisk() const { return this->buildRisk_ != nullptr;};
    void deleteBuildRisk() { this->buildRisk_ = nullptr;};
    inline const Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk & buildRisk() const { DARABONBA_PTR_GET_CONST(buildRisk_, Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk) };
    inline Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk buildRisk() { DARABONBA_PTR_GET(buildRisk_, Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setBuildRisk(const Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk & buildRisk) { DARABONBA_PTR_SET_VALUE(buildRisk_, buildRisk) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setBuildRisk(Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk && buildRisk) { DARABONBA_PTR_SET_RVALUE(buildRisk_, buildRisk) };


    // maliciousFile Field Functions 
    bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
    void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
    inline const Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile & maliciousFile() const { DARABONBA_PTR_GET_CONST(maliciousFile_, Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile) };
    inline Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile maliciousFile() { DARABONBA_PTR_GET(maliciousFile_, Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setMaliciousFile(const Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile & maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setMaliciousFile(Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile && maliciousFile) { DARABONBA_PTR_SET_RVALUE(maliciousFile_, maliciousFile) };


    // sensitiveFile Field Functions 
    bool hasSensitiveFile() const { return this->sensitiveFile_ != nullptr;};
    void deleteSensitiveFile() { this->sensitiveFile_ = nullptr;};
    inline const Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile & sensitiveFile() const { DARABONBA_PTR_GET_CONST(sensitiveFile_, Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile) };
    inline Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile sensitiveFile() { DARABONBA_PTR_GET(sensitiveFile_, Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setSensitiveFile(const Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile & sensitiveFile) { DARABONBA_PTR_SET_VALUE(sensitiveFile_, sensitiveFile) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setSensitiveFile(Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile && sensitiveFile) { DARABONBA_PTR_SET_RVALUE(sensitiveFile_, sensitiveFile) };


    // vul Field Functions 
    bool hasVul() const { return this->vul_ != nullptr;};
    void deleteVul() { this->vul_ = nullptr;};
    inline const Models::UpdateOpaStrategyNewRequestAlarmDetailVul & vul() const { DARABONBA_PTR_GET_CONST(vul_, Models::UpdateOpaStrategyNewRequestAlarmDetailVul) };
    inline Models::UpdateOpaStrategyNewRequestAlarmDetailVul vul() { DARABONBA_PTR_GET(vul_, Models::UpdateOpaStrategyNewRequestAlarmDetailVul) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setVul(const Models::UpdateOpaStrategyNewRequestAlarmDetailVul & vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };
    inline UpdateOpaStrategyNewRequestAlarmDetail& setVul(Models::UpdateOpaStrategyNewRequestAlarmDetailVul && vul) { DARABONBA_PTR_SET_RVALUE(vul_, vul) };


  protected:
    // The baseline risks.
    std::shared_ptr<Models::UpdateOpaStrategyNewRequestAlarmDetailBaseline> baseline_ = nullptr;
    // The configuration of image build risk.
    std::shared_ptr<Models::UpdateOpaStrategyNewRequestAlarmDetailBuildRisk> buildRisk_ = nullptr;
    // The malicious sample risks.
    std::shared_ptr<Models::UpdateOpaStrategyNewRequestAlarmDetailMaliciousFile> maliciousFile_ = nullptr;
    // The configuration of sensitive file.
    std::shared_ptr<Models::UpdateOpaStrategyNewRequestAlarmDetailSensitiveFile> sensitiveFile_ = nullptr;
    // The vulnerability risks.
    std::shared_ptr<Models::UpdateOpaStrategyNewRequestAlarmDetailVul> vul_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
