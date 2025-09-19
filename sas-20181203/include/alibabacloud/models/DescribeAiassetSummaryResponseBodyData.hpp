// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIASSETSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIASSETSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAIAssetSummaryResponseBodyDataSensitiveSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAIAssetSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAssetSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AispmRiskAssetCnt, aispmRiskAssetCnt_);
      DARABONBA_PTR_TO_JSON(EcsAssetCnt, ecsAssetCnt_);
      DARABONBA_PTR_TO_JSON(ExposedRiskAssetCnt, exposedRiskAssetCnt_);
      DARABONBA_PTR_TO_JSON(ImageAssetCnt, imageAssetCnt_);
      DARABONBA_PTR_TO_JSON(LingjunAssetCnt, lingjunAssetCnt_);
      DARABONBA_PTR_TO_JSON(PaiContainerCnt, paiContainerCnt_);
      DARABONBA_PTR_TO_JSON(PaiInstanceCnt, paiInstanceCnt_);
      DARABONBA_PTR_TO_JSON(PaiServerlessAssetCnt, paiServerlessAssetCnt_);
      DARABONBA_PTR_TO_JSON(SensitiveSummary, sensitiveSummary_);
      DARABONBA_PTR_TO_JSON(SnapshotAssetCnt, snapshotAssetCnt_);
      DARABONBA_PTR_TO_JSON(TotalAssetCnt, totalAssetCnt_);
      DARABONBA_PTR_TO_JSON(TotalRiskCnt, totalRiskCnt_);
      DARABONBA_PTR_TO_JSON(VulRiskAssetCnt, vulRiskAssetCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAssetSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AispmRiskAssetCnt, aispmRiskAssetCnt_);
      DARABONBA_PTR_FROM_JSON(EcsAssetCnt, ecsAssetCnt_);
      DARABONBA_PTR_FROM_JSON(ExposedRiskAssetCnt, exposedRiskAssetCnt_);
      DARABONBA_PTR_FROM_JSON(ImageAssetCnt, imageAssetCnt_);
      DARABONBA_PTR_FROM_JSON(LingjunAssetCnt, lingjunAssetCnt_);
      DARABONBA_PTR_FROM_JSON(PaiContainerCnt, paiContainerCnt_);
      DARABONBA_PTR_FROM_JSON(PaiInstanceCnt, paiInstanceCnt_);
      DARABONBA_PTR_FROM_JSON(PaiServerlessAssetCnt, paiServerlessAssetCnt_);
      DARABONBA_PTR_FROM_JSON(SensitiveSummary, sensitiveSummary_);
      DARABONBA_PTR_FROM_JSON(SnapshotAssetCnt, snapshotAssetCnt_);
      DARABONBA_PTR_FROM_JSON(TotalAssetCnt, totalAssetCnt_);
      DARABONBA_PTR_FROM_JSON(TotalRiskCnt, totalRiskCnt_);
      DARABONBA_PTR_FROM_JSON(VulRiskAssetCnt, vulRiskAssetCnt_);
    };
    DescribeAIAssetSummaryResponseBodyData() = default ;
    DescribeAIAssetSummaryResponseBodyData(const DescribeAIAssetSummaryResponseBodyData &) = default ;
    DescribeAIAssetSummaryResponseBodyData(DescribeAIAssetSummaryResponseBodyData &&) = default ;
    DescribeAIAssetSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAssetSummaryResponseBodyData() = default ;
    DescribeAIAssetSummaryResponseBodyData& operator=(const DescribeAIAssetSummaryResponseBodyData &) = default ;
    DescribeAIAssetSummaryResponseBodyData& operator=(DescribeAIAssetSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aispmRiskAssetCnt_ != nullptr
        && this->ecsAssetCnt_ != nullptr && this->exposedRiskAssetCnt_ != nullptr && this->imageAssetCnt_ != nullptr && this->lingjunAssetCnt_ != nullptr && this->paiContainerCnt_ != nullptr
        && this->paiInstanceCnt_ != nullptr && this->paiServerlessAssetCnt_ != nullptr && this->sensitiveSummary_ != nullptr && this->snapshotAssetCnt_ != nullptr && this->totalAssetCnt_ != nullptr
        && this->totalRiskCnt_ != nullptr && this->vulRiskAssetCnt_ != nullptr; };
    // aispmRiskAssetCnt Field Functions 
    bool hasAispmRiskAssetCnt() const { return this->aispmRiskAssetCnt_ != nullptr;};
    void deleteAispmRiskAssetCnt() { this->aispmRiskAssetCnt_ = nullptr;};
    inline int32_t aispmRiskAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(aispmRiskAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setAispmRiskAssetCnt(int32_t aispmRiskAssetCnt) { DARABONBA_PTR_SET_VALUE(aispmRiskAssetCnt_, aispmRiskAssetCnt) };


    // ecsAssetCnt Field Functions 
    bool hasEcsAssetCnt() const { return this->ecsAssetCnt_ != nullptr;};
    void deleteEcsAssetCnt() { this->ecsAssetCnt_ = nullptr;};
    inline int32_t ecsAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(ecsAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setEcsAssetCnt(int32_t ecsAssetCnt) { DARABONBA_PTR_SET_VALUE(ecsAssetCnt_, ecsAssetCnt) };


    // exposedRiskAssetCnt Field Functions 
    bool hasExposedRiskAssetCnt() const { return this->exposedRiskAssetCnt_ != nullptr;};
    void deleteExposedRiskAssetCnt() { this->exposedRiskAssetCnt_ = nullptr;};
    inline int32_t exposedRiskAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(exposedRiskAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setExposedRiskAssetCnt(int32_t exposedRiskAssetCnt) { DARABONBA_PTR_SET_VALUE(exposedRiskAssetCnt_, exposedRiskAssetCnt) };


    // imageAssetCnt Field Functions 
    bool hasImageAssetCnt() const { return this->imageAssetCnt_ != nullptr;};
    void deleteImageAssetCnt() { this->imageAssetCnt_ = nullptr;};
    inline int32_t imageAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(imageAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setImageAssetCnt(int32_t imageAssetCnt) { DARABONBA_PTR_SET_VALUE(imageAssetCnt_, imageAssetCnt) };


    // lingjunAssetCnt Field Functions 
    bool hasLingjunAssetCnt() const { return this->lingjunAssetCnt_ != nullptr;};
    void deleteLingjunAssetCnt() { this->lingjunAssetCnt_ = nullptr;};
    inline int32_t lingjunAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(lingjunAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setLingjunAssetCnt(int32_t lingjunAssetCnt) { DARABONBA_PTR_SET_VALUE(lingjunAssetCnt_, lingjunAssetCnt) };


    // paiContainerCnt Field Functions 
    bool hasPaiContainerCnt() const { return this->paiContainerCnt_ != nullptr;};
    void deletePaiContainerCnt() { this->paiContainerCnt_ = nullptr;};
    inline int32_t paiContainerCnt() const { DARABONBA_PTR_GET_DEFAULT(paiContainerCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setPaiContainerCnt(int32_t paiContainerCnt) { DARABONBA_PTR_SET_VALUE(paiContainerCnt_, paiContainerCnt) };


    // paiInstanceCnt Field Functions 
    bool hasPaiInstanceCnt() const { return this->paiInstanceCnt_ != nullptr;};
    void deletePaiInstanceCnt() { this->paiInstanceCnt_ = nullptr;};
    inline int32_t paiInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(paiInstanceCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setPaiInstanceCnt(int32_t paiInstanceCnt) { DARABONBA_PTR_SET_VALUE(paiInstanceCnt_, paiInstanceCnt) };


    // paiServerlessAssetCnt Field Functions 
    bool hasPaiServerlessAssetCnt() const { return this->paiServerlessAssetCnt_ != nullptr;};
    void deletePaiServerlessAssetCnt() { this->paiServerlessAssetCnt_ = nullptr;};
    inline int32_t paiServerlessAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(paiServerlessAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setPaiServerlessAssetCnt(int32_t paiServerlessAssetCnt) { DARABONBA_PTR_SET_VALUE(paiServerlessAssetCnt_, paiServerlessAssetCnt) };


    // sensitiveSummary Field Functions 
    bool hasSensitiveSummary() const { return this->sensitiveSummary_ != nullptr;};
    void deleteSensitiveSummary() { this->sensitiveSummary_ = nullptr;};
    inline const Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary & sensitiveSummary() const { DARABONBA_PTR_GET_CONST(sensitiveSummary_, Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary) };
    inline Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary sensitiveSummary() { DARABONBA_PTR_GET(sensitiveSummary_, Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary) };
    inline DescribeAIAssetSummaryResponseBodyData& setSensitiveSummary(const Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary & sensitiveSummary) { DARABONBA_PTR_SET_VALUE(sensitiveSummary_, sensitiveSummary) };
    inline DescribeAIAssetSummaryResponseBodyData& setSensitiveSummary(Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary && sensitiveSummary) { DARABONBA_PTR_SET_RVALUE(sensitiveSummary_, sensitiveSummary) };


    // snapshotAssetCnt Field Functions 
    bool hasSnapshotAssetCnt() const { return this->snapshotAssetCnt_ != nullptr;};
    void deleteSnapshotAssetCnt() { this->snapshotAssetCnt_ = nullptr;};
    inline int32_t snapshotAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(snapshotAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setSnapshotAssetCnt(int32_t snapshotAssetCnt) { DARABONBA_PTR_SET_VALUE(snapshotAssetCnt_, snapshotAssetCnt) };


    // totalAssetCnt Field Functions 
    bool hasTotalAssetCnt() const { return this->totalAssetCnt_ != nullptr;};
    void deleteTotalAssetCnt() { this->totalAssetCnt_ = nullptr;};
    inline int32_t totalAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(totalAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setTotalAssetCnt(int32_t totalAssetCnt) { DARABONBA_PTR_SET_VALUE(totalAssetCnt_, totalAssetCnt) };


    // totalRiskCnt Field Functions 
    bool hasTotalRiskCnt() const { return this->totalRiskCnt_ != nullptr;};
    void deleteTotalRiskCnt() { this->totalRiskCnt_ = nullptr;};
    inline int32_t totalRiskCnt() const { DARABONBA_PTR_GET_DEFAULT(totalRiskCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setTotalRiskCnt(int32_t totalRiskCnt) { DARABONBA_PTR_SET_VALUE(totalRiskCnt_, totalRiskCnt) };


    // vulRiskAssetCnt Field Functions 
    bool hasVulRiskAssetCnt() const { return this->vulRiskAssetCnt_ != nullptr;};
    void deleteVulRiskAssetCnt() { this->vulRiskAssetCnt_ = nullptr;};
    inline int32_t vulRiskAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(vulRiskAssetCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyData& setVulRiskAssetCnt(int32_t vulRiskAssetCnt) { DARABONBA_PTR_SET_VALUE(vulRiskAssetCnt_, vulRiskAssetCnt) };


  protected:
    // The number of cloud assets with AI security posture management risks.
    std::shared_ptr<int32_t> aispmRiskAssetCnt_ = nullptr;
    // The number of servers on which AI components are installed.
    std::shared_ptr<int32_t> ecsAssetCnt_ = nullptr;
    // The number of servers that have exposed AI components.
    std::shared_ptr<int32_t> exposedRiskAssetCnt_ = nullptr;
    // The number of AI images.
    std::shared_ptr<int32_t> imageAssetCnt_ = nullptr;
    // The number of LINGJUN assets.
    std::shared_ptr<int32_t> lingjunAssetCnt_ = nullptr;
    // The number of container image assets in PAI.
    std::shared_ptr<int32_t> paiContainerCnt_ = nullptr;
    // The total number of cloud asset instances in Platform for AI (PAI).
    std::shared_ptr<int32_t> paiInstanceCnt_ = nullptr;
    // The number of serverless assets in PAI.
    std::shared_ptr<int32_t> paiServerlessAssetCnt_ = nullptr;
    // The statistics on assets that have AI-related keys are stored in plaintext.
    std::shared_ptr<Models::DescribeAIAssetSummaryResponseBodyDataSensitiveSummary> sensitiveSummary_ = nullptr;
    // The number of AI snapshots.
    std::shared_ptr<int32_t> snapshotAssetCnt_ = nullptr;
    // The total number of AI assets.
    std::shared_ptr<int32_t> totalAssetCnt_ = nullptr;
    // The total number of assets with AI risks.
    std::shared_ptr<int32_t> totalRiskCnt_ = nullptr;
    // The number of servers with AI application vulnerabilities.
    std::shared_ptr<int32_t> vulRiskAssetCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
