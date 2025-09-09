// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTRISKSRESPONSEBODYARTIFACTRISKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTRISKSRESPONSEBODYARTIFACTRISKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactRisksResponseBodyArtifactRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactRisksResponseBodyArtifactRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(CveNos, cveNos_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      DARABONBA_PTR_TO_JSON(RiskTypeName, riskTypeName_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactRisksResponseBodyArtifactRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(CveNos, cveNos_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      DARABONBA_PTR_FROM_JSON(RiskTypeName, riskTypeName_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
    };
    ListArtifactRisksResponseBodyArtifactRiskList() = default ;
    ListArtifactRisksResponseBodyArtifactRiskList(const ListArtifactRisksResponseBodyArtifactRiskList &) = default ;
    ListArtifactRisksResponseBodyArtifactRiskList(ListArtifactRisksResponseBodyArtifactRiskList &&) = default ;
    ListArtifactRisksResponseBodyArtifactRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactRisksResponseBodyArtifactRiskList() = default ;
    ListArtifactRisksResponseBodyArtifactRiskList& operator=(const ListArtifactRisksResponseBodyArtifactRiskList &) = default ;
    ListArtifactRisksResponseBodyArtifactRiskList& operator=(ListArtifactRisksResponseBodyArtifactRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cveNos_ != nullptr
        && this->extendInfo_ != nullptr && this->level_ != nullptr && this->riskName_ != nullptr && this->riskType_ != nullptr && this->riskTypeName_ != nullptr
        && this->solution_ != nullptr; };
    // cveNos Field Functions 
    bool hasCveNos() const { return this->cveNos_ != nullptr;};
    void deleteCveNos() { this->cveNos_ = nullptr;};
    inline string cveNos() const { DARABONBA_PTR_GET_DEFAULT(cveNos_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setCveNos(string cveNos) { DARABONBA_PTR_SET_VALUE(cveNos_, cveNos) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // riskTypeName Field Functions 
    bool hasRiskTypeName() const { return this->riskTypeName_ != nullptr;};
    void deleteRiskTypeName() { this->riskTypeName_ = nullptr;};
    inline string riskTypeName() const { DARABONBA_PTR_GET_DEFAULT(riskTypeName_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setRiskTypeName(string riskTypeName) { DARABONBA_PTR_SET_VALUE(riskTypeName_, riskTypeName) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline ListArtifactRisksResponseBodyArtifactRiskList& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


  protected:
    // CVE numbers
    std::shared_ptr<string> cveNos_ = nullptr;
    // Extended information, in JSON format, to be parsed according to the risk category
    std::shared_ptr<string> extendInfo_ = nullptr;
    // Risk level:
    // 
    // - high represents high
    std::shared_ptr<string> level_ = nullptr;
    // Risk name.
    std::shared_ptr<string> riskName_ = nullptr;
    // Risk type. Values:
    // - AcrCve  Container image system vulnerability
    // - AcrSca  Container image application vulnerability
    // - EcsVulnerability  ECS image vulnerability information
    // - EcsAlarm  ECS image security alarm
    // - EcsBaseline  ECS image baseline check
    std::shared_ptr<string> riskType_ = nullptr;
    // Risk Type name
    std::shared_ptr<string> riskTypeName_ = nullptr;
    // Solution for the risk item.
    std::shared_ptr<string> solution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
