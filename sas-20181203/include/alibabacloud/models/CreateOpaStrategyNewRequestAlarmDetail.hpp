// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWREQUESTALARMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWREQUESTALARMDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailBaseline.hpp>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailBuildRisk.hpp>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailMaliciousFile.hpp>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailSensitiveFile.hpp>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailVul.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOpaStrategyNewRequestAlarmDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaStrategyNewRequestAlarmDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(BuildRisk, buildRisk_);
      DARABONBA_PTR_TO_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_TO_JSON(SensitiveFile, sensitiveFile_);
      DARABONBA_PTR_TO_JSON(Vul, vul_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaStrategyNewRequestAlarmDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(BuildRisk, buildRisk_);
      DARABONBA_PTR_FROM_JSON(MaliciousFile, maliciousFile_);
      DARABONBA_PTR_FROM_JSON(SensitiveFile, sensitiveFile_);
      DARABONBA_PTR_FROM_JSON(Vul, vul_);
    };
    CreateOpaStrategyNewRequestAlarmDetail() = default ;
    CreateOpaStrategyNewRequestAlarmDetail(const CreateOpaStrategyNewRequestAlarmDetail &) = default ;
    CreateOpaStrategyNewRequestAlarmDetail(CreateOpaStrategyNewRequestAlarmDetail &&) = default ;
    CreateOpaStrategyNewRequestAlarmDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaStrategyNewRequestAlarmDetail() = default ;
    CreateOpaStrategyNewRequestAlarmDetail& operator=(const CreateOpaStrategyNewRequestAlarmDetail &) = default ;
    CreateOpaStrategyNewRequestAlarmDetail& operator=(CreateOpaStrategyNewRequestAlarmDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->buildRisk_ != nullptr && this->maliciousFile_ != nullptr && this->sensitiveFile_ != nullptr && this->vul_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const Models::CreateOpaStrategyNewRequestAlarmDetailBaseline & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, Models::CreateOpaStrategyNewRequestAlarmDetailBaseline) };
    inline Models::CreateOpaStrategyNewRequestAlarmDetailBaseline baseline() { DARABONBA_PTR_GET(baseline_, Models::CreateOpaStrategyNewRequestAlarmDetailBaseline) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setBaseline(const Models::CreateOpaStrategyNewRequestAlarmDetailBaseline & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setBaseline(Models::CreateOpaStrategyNewRequestAlarmDetailBaseline && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // buildRisk Field Functions 
    bool hasBuildRisk() const { return this->buildRisk_ != nullptr;};
    void deleteBuildRisk() { this->buildRisk_ = nullptr;};
    inline const Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk & buildRisk() const { DARABONBA_PTR_GET_CONST(buildRisk_, Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk) };
    inline Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk buildRisk() { DARABONBA_PTR_GET(buildRisk_, Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setBuildRisk(const Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk & buildRisk) { DARABONBA_PTR_SET_VALUE(buildRisk_, buildRisk) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setBuildRisk(Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk && buildRisk) { DARABONBA_PTR_SET_RVALUE(buildRisk_, buildRisk) };


    // maliciousFile Field Functions 
    bool hasMaliciousFile() const { return this->maliciousFile_ != nullptr;};
    void deleteMaliciousFile() { this->maliciousFile_ = nullptr;};
    inline const Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile & maliciousFile() const { DARABONBA_PTR_GET_CONST(maliciousFile_, Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile) };
    inline Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile maliciousFile() { DARABONBA_PTR_GET(maliciousFile_, Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setMaliciousFile(const Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile & maliciousFile) { DARABONBA_PTR_SET_VALUE(maliciousFile_, maliciousFile) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setMaliciousFile(Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile && maliciousFile) { DARABONBA_PTR_SET_RVALUE(maliciousFile_, maliciousFile) };


    // sensitiveFile Field Functions 
    bool hasSensitiveFile() const { return this->sensitiveFile_ != nullptr;};
    void deleteSensitiveFile() { this->sensitiveFile_ = nullptr;};
    inline const Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile & sensitiveFile() const { DARABONBA_PTR_GET_CONST(sensitiveFile_, Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile) };
    inline Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile sensitiveFile() { DARABONBA_PTR_GET(sensitiveFile_, Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setSensitiveFile(const Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile & sensitiveFile) { DARABONBA_PTR_SET_VALUE(sensitiveFile_, sensitiveFile) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setSensitiveFile(Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile && sensitiveFile) { DARABONBA_PTR_SET_RVALUE(sensitiveFile_, sensitiveFile) };


    // vul Field Functions 
    bool hasVul() const { return this->vul_ != nullptr;};
    void deleteVul() { this->vul_ = nullptr;};
    inline const Models::CreateOpaStrategyNewRequestAlarmDetailVul & vul() const { DARABONBA_PTR_GET_CONST(vul_, Models::CreateOpaStrategyNewRequestAlarmDetailVul) };
    inline Models::CreateOpaStrategyNewRequestAlarmDetailVul vul() { DARABONBA_PTR_GET(vul_, Models::CreateOpaStrategyNewRequestAlarmDetailVul) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setVul(const Models::CreateOpaStrategyNewRequestAlarmDetailVul & vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };
    inline CreateOpaStrategyNewRequestAlarmDetail& setVul(Models::CreateOpaStrategyNewRequestAlarmDetailVul && vul) { DARABONBA_PTR_SET_RVALUE(vul_, vul) };


  protected:
    // The baseline risks.
    std::shared_ptr<Models::CreateOpaStrategyNewRequestAlarmDetailBaseline> baseline_ = nullptr;
    // The configuration of image build risk.
    std::shared_ptr<Models::CreateOpaStrategyNewRequestAlarmDetailBuildRisk> buildRisk_ = nullptr;
    // The malicious sample risks.
    std::shared_ptr<Models::CreateOpaStrategyNewRequestAlarmDetailMaliciousFile> maliciousFile_ = nullptr;
    // The configuration of sensitive file.
    std::shared_ptr<Models::CreateOpaStrategyNewRequestAlarmDetailSensitiveFile> sensitiveFile_ = nullptr;
    // The vulnerability risks.
    std::shared_ptr<Models::CreateOpaStrategyNewRequestAlarmDetailVul> vul_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
