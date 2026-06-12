// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTRISKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTRISKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactRisksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactRisksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactRiskList, artifactRiskList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactRisksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactRiskList, artifactRiskList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListArtifactRisksResponseBody() = default ;
    ListArtifactRisksResponseBody(const ListArtifactRisksResponseBody &) = default ;
    ListArtifactRisksResponseBody(ListArtifactRisksResponseBody &&) = default ;
    ListArtifactRisksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactRisksResponseBody() = default ;
    ListArtifactRisksResponseBody& operator=(const ListArtifactRisksResponseBody &) = default ;
    ListArtifactRisksResponseBody& operator=(ListArtifactRisksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ArtifactRiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ArtifactRiskList& obj) { 
        DARABONBA_PTR_TO_JSON(CveNos, cveNos_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        DARABONBA_PTR_TO_JSON(RiskType, riskType_);
        DARABONBA_PTR_TO_JSON(RiskTypeName, riskTypeName_);
        DARABONBA_PTR_TO_JSON(Solution, solution_);
      };
      friend void from_json(const Darabonba::Json& j, ArtifactRiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(CveNos, cveNos_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
        DARABONBA_PTR_FROM_JSON(RiskTypeName, riskTypeName_);
        DARABONBA_PTR_FROM_JSON(Solution, solution_);
      };
      ArtifactRiskList() = default ;
      ArtifactRiskList(const ArtifactRiskList &) = default ;
      ArtifactRiskList(ArtifactRiskList &&) = default ;
      ArtifactRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ArtifactRiskList() = default ;
      ArtifactRiskList& operator=(const ArtifactRiskList &) = default ;
      ArtifactRiskList& operator=(ArtifactRiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cveNos_ == nullptr
        && this->extendInfo_ == nullptr && this->level_ == nullptr && this->riskName_ == nullptr && this->riskType_ == nullptr && this->riskTypeName_ == nullptr
        && this->solution_ == nullptr; };
      // cveNos Field Functions 
      bool hasCveNos() const { return this->cveNos_ != nullptr;};
      void deleteCveNos() { this->cveNos_ = nullptr;};
      inline string getCveNos() const { DARABONBA_PTR_GET_DEFAULT(cveNos_, "") };
      inline ArtifactRiskList& setCveNos(string cveNos) { DARABONBA_PTR_SET_VALUE(cveNos_, cveNos) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline ArtifactRiskList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ArtifactRiskList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // riskName Field Functions 
      bool hasRiskName() const { return this->riskName_ != nullptr;};
      void deleteRiskName() { this->riskName_ = nullptr;};
      inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
      inline ArtifactRiskList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      // riskType Field Functions 
      bool hasRiskType() const { return this->riskType_ != nullptr;};
      void deleteRiskType() { this->riskType_ = nullptr;};
      inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
      inline ArtifactRiskList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


      // riskTypeName Field Functions 
      bool hasRiskTypeName() const { return this->riskTypeName_ != nullptr;};
      void deleteRiskTypeName() { this->riskTypeName_ = nullptr;};
      inline string getRiskTypeName() const { DARABONBA_PTR_GET_DEFAULT(riskTypeName_, "") };
      inline ArtifactRiskList& setRiskTypeName(string riskTypeName) { DARABONBA_PTR_SET_VALUE(riskTypeName_, riskTypeName) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
      inline ArtifactRiskList& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    protected:
      // The CVE ID.
      shared_ptr<string> cveNos_ {};
      // The extended information in JSON format. Parse this information based on the risk type.
      shared_ptr<string> extendInfo_ {};
      // The risk level.
      // 
      // - high: High
      shared_ptr<string> level_ {};
      // The name of the risk.
      shared_ptr<string> riskName_ {};
      // The risk type. Valid values:
      // 
      // - AcrCve: system vulnerabilities in a container image
      // 
      // - AcrSca: application vulnerabilities in a container image
      // 
      // - EcsVulnerability: ECS image vulnerabilities
      // 
      // - EcsAlarm: ECS image security alerts
      // 
      // - EcsBaseline: ECS image baseline checks
      shared_ptr<string> riskType_ {};
      // The name of the risk type.
      shared_ptr<string> riskTypeName_ {};
      // The solution to the risk.
      shared_ptr<string> solution_ {};
    };

    virtual bool empty() const override { return this->artifactRiskList_ == nullptr
        && this->requestId_ == nullptr; };
    // artifactRiskList Field Functions 
    bool hasArtifactRiskList() const { return this->artifactRiskList_ != nullptr;};
    void deleteArtifactRiskList() { this->artifactRiskList_ = nullptr;};
    inline const vector<ListArtifactRisksResponseBody::ArtifactRiskList> & getArtifactRiskList() const { DARABONBA_PTR_GET_CONST(artifactRiskList_, vector<ListArtifactRisksResponseBody::ArtifactRiskList>) };
    inline vector<ListArtifactRisksResponseBody::ArtifactRiskList> getArtifactRiskList() { DARABONBA_PTR_GET(artifactRiskList_, vector<ListArtifactRisksResponseBody::ArtifactRiskList>) };
    inline ListArtifactRisksResponseBody& setArtifactRiskList(const vector<ListArtifactRisksResponseBody::ArtifactRiskList> & artifactRiskList) { DARABONBA_PTR_SET_VALUE(artifactRiskList_, artifactRiskList) };
    inline ListArtifactRisksResponseBody& setArtifactRiskList(vector<ListArtifactRisksResponseBody::ArtifactRiskList> && artifactRiskList) { DARABONBA_PTR_SET_RVALUE(artifactRiskList_, artifactRiskList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactRisksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of artifact risks.
    shared_ptr<vector<ListArtifactRisksResponseBody::ArtifactRiskList>> artifactRiskList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
