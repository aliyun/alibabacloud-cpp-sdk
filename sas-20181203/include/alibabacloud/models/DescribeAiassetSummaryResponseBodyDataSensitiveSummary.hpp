// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIASSETSUMMARYRESPONSEBODYDATASENSITIVESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIASSETSUMMARYRESPONSEBODYDATASENSITIVESUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAIAssetSummaryResponseBodyDataSensitiveSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerImageCnt, containerImageCnt_);
      DARABONBA_PTR_TO_JSON(EcsCnt, ecsCnt_);
      DARABONBA_PTR_TO_JSON(ImageCnt, imageCnt_);
      DARABONBA_PTR_TO_JSON(SnapshotCnt, snapshotCnt_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerImageCnt, containerImageCnt_);
      DARABONBA_PTR_FROM_JSON(EcsCnt, ecsCnt_);
      DARABONBA_PTR_FROM_JSON(ImageCnt, imageCnt_);
      DARABONBA_PTR_FROM_JSON(SnapshotCnt, snapshotCnt_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeAIAssetSummaryResponseBodyDataSensitiveSummary() = default ;
    DescribeAIAssetSummaryResponseBodyDataSensitiveSummary(const DescribeAIAssetSummaryResponseBodyDataSensitiveSummary &) = default ;
    DescribeAIAssetSummaryResponseBodyDataSensitiveSummary(DescribeAIAssetSummaryResponseBodyDataSensitiveSummary &&) = default ;
    DescribeAIAssetSummaryResponseBodyDataSensitiveSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAssetSummaryResponseBodyDataSensitiveSummary() = default ;
    DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& operator=(const DescribeAIAssetSummaryResponseBodyDataSensitiveSummary &) = default ;
    DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& operator=(DescribeAIAssetSummaryResponseBodyDataSensitiveSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerImageCnt_ != nullptr
        && this->ecsCnt_ != nullptr && this->imageCnt_ != nullptr && this->snapshotCnt_ != nullptr && this->totalCnt_ != nullptr; };
    // containerImageCnt Field Functions 
    bool hasContainerImageCnt() const { return this->containerImageCnt_ != nullptr;};
    void deleteContainerImageCnt() { this->containerImageCnt_ = nullptr;};
    inline int32_t containerImageCnt() const { DARABONBA_PTR_GET_DEFAULT(containerImageCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& setContainerImageCnt(int32_t containerImageCnt) { DARABONBA_PTR_SET_VALUE(containerImageCnt_, containerImageCnt) };


    // ecsCnt Field Functions 
    bool hasEcsCnt() const { return this->ecsCnt_ != nullptr;};
    void deleteEcsCnt() { this->ecsCnt_ = nullptr;};
    inline int32_t ecsCnt() const { DARABONBA_PTR_GET_DEFAULT(ecsCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& setEcsCnt(int32_t ecsCnt) { DARABONBA_PTR_SET_VALUE(ecsCnt_, ecsCnt) };


    // imageCnt Field Functions 
    bool hasImageCnt() const { return this->imageCnt_ != nullptr;};
    void deleteImageCnt() { this->imageCnt_ = nullptr;};
    inline int32_t imageCnt() const { DARABONBA_PTR_GET_DEFAULT(imageCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& setImageCnt(int32_t imageCnt) { DARABONBA_PTR_SET_VALUE(imageCnt_, imageCnt) };


    // snapshotCnt Field Functions 
    bool hasSnapshotCnt() const { return this->snapshotCnt_ != nullptr;};
    void deleteSnapshotCnt() { this->snapshotCnt_ = nullptr;};
    inline int32_t snapshotCnt() const { DARABONBA_PTR_GET_DEFAULT(snapshotCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& setSnapshotCnt(int32_t snapshotCnt) { DARABONBA_PTR_SET_VALUE(snapshotCnt_, snapshotCnt) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int32_t totalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
    inline DescribeAIAssetSummaryResponseBodyDataSensitiveSummary& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    // The number of images that have AI-related keys are stored in plaintext detected by image scan.
    std::shared_ptr<int32_t> containerImageCnt_ = nullptr;
    // The number of servers that have AI-related keys are stored in plaintext detected by agentless scan.
    std::shared_ptr<int32_t> ecsCnt_ = nullptr;
    // The number of images that have AI-related keys are stored in plaintext detected by agentless scan.
    std::shared_ptr<int32_t> imageCnt_ = nullptr;
    // The number of snapshots that have AI-related keys are stored in plaintext detected by agentless scan.
    std::shared_ptr<int32_t> snapshotCnt_ = nullptr;
    // The total number of assets that have AI-related keys are stored in plaintext.
    std::shared_ptr<int32_t> totalCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
