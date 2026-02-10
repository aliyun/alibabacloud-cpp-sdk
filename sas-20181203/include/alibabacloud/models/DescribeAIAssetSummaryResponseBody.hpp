// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIASSETSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIASSETSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAIAssetSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAssetSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAIAssetSummaryResponseBody() = default ;
    DescribeAIAssetSummaryResponseBody(const DescribeAIAssetSummaryResponseBody &) = default ;
    DescribeAIAssetSummaryResponseBody(DescribeAIAssetSummaryResponseBody &&) = default ;
    DescribeAIAssetSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAssetSummaryResponseBody() = default ;
    DescribeAIAssetSummaryResponseBody& operator=(const DescribeAIAssetSummaryResponseBody &) = default ;
    DescribeAIAssetSummaryResponseBody& operator=(DescribeAIAssetSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SensitiveSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveSummary& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerImageCnt, containerImageCnt_);
          DARABONBA_PTR_TO_JSON(EcsCnt, ecsCnt_);
          DARABONBA_PTR_TO_JSON(ImageCnt, imageCnt_);
          DARABONBA_PTR_TO_JSON(SnapshotCnt, snapshotCnt_);
          DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerImageCnt, containerImageCnt_);
          DARABONBA_PTR_FROM_JSON(EcsCnt, ecsCnt_);
          DARABONBA_PTR_FROM_JSON(ImageCnt, imageCnt_);
          DARABONBA_PTR_FROM_JSON(SnapshotCnt, snapshotCnt_);
          DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
        };
        SensitiveSummary() = default ;
        SensitiveSummary(const SensitiveSummary &) = default ;
        SensitiveSummary(SensitiveSummary &&) = default ;
        SensitiveSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveSummary() = default ;
        SensitiveSummary& operator=(const SensitiveSummary &) = default ;
        SensitiveSummary& operator=(SensitiveSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->containerImageCnt_ == nullptr
        && this->ecsCnt_ == nullptr && this->imageCnt_ == nullptr && this->snapshotCnt_ == nullptr && this->totalCnt_ == nullptr; };
        // containerImageCnt Field Functions 
        bool hasContainerImageCnt() const { return this->containerImageCnt_ != nullptr;};
        void deleteContainerImageCnt() { this->containerImageCnt_ = nullptr;};
        inline int32_t getContainerImageCnt() const { DARABONBA_PTR_GET_DEFAULT(containerImageCnt_, 0) };
        inline SensitiveSummary& setContainerImageCnt(int32_t containerImageCnt) { DARABONBA_PTR_SET_VALUE(containerImageCnt_, containerImageCnt) };


        // ecsCnt Field Functions 
        bool hasEcsCnt() const { return this->ecsCnt_ != nullptr;};
        void deleteEcsCnt() { this->ecsCnt_ = nullptr;};
        inline int32_t getEcsCnt() const { DARABONBA_PTR_GET_DEFAULT(ecsCnt_, 0) };
        inline SensitiveSummary& setEcsCnt(int32_t ecsCnt) { DARABONBA_PTR_SET_VALUE(ecsCnt_, ecsCnt) };


        // imageCnt Field Functions 
        bool hasImageCnt() const { return this->imageCnt_ != nullptr;};
        void deleteImageCnt() { this->imageCnt_ = nullptr;};
        inline int32_t getImageCnt() const { DARABONBA_PTR_GET_DEFAULT(imageCnt_, 0) };
        inline SensitiveSummary& setImageCnt(int32_t imageCnt) { DARABONBA_PTR_SET_VALUE(imageCnt_, imageCnt) };


        // snapshotCnt Field Functions 
        bool hasSnapshotCnt() const { return this->snapshotCnt_ != nullptr;};
        void deleteSnapshotCnt() { this->snapshotCnt_ = nullptr;};
        inline int32_t getSnapshotCnt() const { DARABONBA_PTR_GET_DEFAULT(snapshotCnt_, 0) };
        inline SensitiveSummary& setSnapshotCnt(int32_t snapshotCnt) { DARABONBA_PTR_SET_VALUE(snapshotCnt_, snapshotCnt) };


        // totalCnt Field Functions 
        bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
        void deleteTotalCnt() { this->totalCnt_ = nullptr;};
        inline int32_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
        inline SensitiveSummary& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


      protected:
        // The number of images that have AI-related keys are stored in plaintext detected by image scan.
        shared_ptr<int32_t> containerImageCnt_ {};
        // The number of servers that have AI-related keys are stored in plaintext detected by agentless scan.
        shared_ptr<int32_t> ecsCnt_ {};
        // The number of images that have AI-related keys are stored in plaintext detected by agentless scan.
        shared_ptr<int32_t> imageCnt_ {};
        // The number of snapshots that have AI-related keys are stored in plaintext detected by agentless scan.
        shared_ptr<int32_t> snapshotCnt_ {};
        // The total number of assets that have AI-related keys are stored in plaintext.
        shared_ptr<int32_t> totalCnt_ {};
      };

      virtual bool empty() const override { return this->aispmRiskAssetCnt_ == nullptr
        && this->ecsAssetCnt_ == nullptr && this->exposedRiskAssetCnt_ == nullptr && this->imageAssetCnt_ == nullptr && this->lingjunAssetCnt_ == nullptr && this->paiContainerCnt_ == nullptr
        && this->paiInstanceCnt_ == nullptr && this->paiServerlessAssetCnt_ == nullptr && this->sensitiveSummary_ == nullptr && this->snapshotAssetCnt_ == nullptr && this->totalAssetCnt_ == nullptr
        && this->totalRiskCnt_ == nullptr && this->vulRiskAssetCnt_ == nullptr; };
      // aispmRiskAssetCnt Field Functions 
      bool hasAispmRiskAssetCnt() const { return this->aispmRiskAssetCnt_ != nullptr;};
      void deleteAispmRiskAssetCnt() { this->aispmRiskAssetCnt_ = nullptr;};
      inline int32_t getAispmRiskAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(aispmRiskAssetCnt_, 0) };
      inline Data& setAispmRiskAssetCnt(int32_t aispmRiskAssetCnt) { DARABONBA_PTR_SET_VALUE(aispmRiskAssetCnt_, aispmRiskAssetCnt) };


      // ecsAssetCnt Field Functions 
      bool hasEcsAssetCnt() const { return this->ecsAssetCnt_ != nullptr;};
      void deleteEcsAssetCnt() { this->ecsAssetCnt_ = nullptr;};
      inline int32_t getEcsAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(ecsAssetCnt_, 0) };
      inline Data& setEcsAssetCnt(int32_t ecsAssetCnt) { DARABONBA_PTR_SET_VALUE(ecsAssetCnt_, ecsAssetCnt) };


      // exposedRiskAssetCnt Field Functions 
      bool hasExposedRiskAssetCnt() const { return this->exposedRiskAssetCnt_ != nullptr;};
      void deleteExposedRiskAssetCnt() { this->exposedRiskAssetCnt_ = nullptr;};
      inline int32_t getExposedRiskAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(exposedRiskAssetCnt_, 0) };
      inline Data& setExposedRiskAssetCnt(int32_t exposedRiskAssetCnt) { DARABONBA_PTR_SET_VALUE(exposedRiskAssetCnt_, exposedRiskAssetCnt) };


      // imageAssetCnt Field Functions 
      bool hasImageAssetCnt() const { return this->imageAssetCnt_ != nullptr;};
      void deleteImageAssetCnt() { this->imageAssetCnt_ = nullptr;};
      inline int32_t getImageAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(imageAssetCnt_, 0) };
      inline Data& setImageAssetCnt(int32_t imageAssetCnt) { DARABONBA_PTR_SET_VALUE(imageAssetCnt_, imageAssetCnt) };


      // lingjunAssetCnt Field Functions 
      bool hasLingjunAssetCnt() const { return this->lingjunAssetCnt_ != nullptr;};
      void deleteLingjunAssetCnt() { this->lingjunAssetCnt_ = nullptr;};
      inline int32_t getLingjunAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(lingjunAssetCnt_, 0) };
      inline Data& setLingjunAssetCnt(int32_t lingjunAssetCnt) { DARABONBA_PTR_SET_VALUE(lingjunAssetCnt_, lingjunAssetCnt) };


      // paiContainerCnt Field Functions 
      bool hasPaiContainerCnt() const { return this->paiContainerCnt_ != nullptr;};
      void deletePaiContainerCnt() { this->paiContainerCnt_ = nullptr;};
      inline int32_t getPaiContainerCnt() const { DARABONBA_PTR_GET_DEFAULT(paiContainerCnt_, 0) };
      inline Data& setPaiContainerCnt(int32_t paiContainerCnt) { DARABONBA_PTR_SET_VALUE(paiContainerCnt_, paiContainerCnt) };


      // paiInstanceCnt Field Functions 
      bool hasPaiInstanceCnt() const { return this->paiInstanceCnt_ != nullptr;};
      void deletePaiInstanceCnt() { this->paiInstanceCnt_ = nullptr;};
      inline int32_t getPaiInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(paiInstanceCnt_, 0) };
      inline Data& setPaiInstanceCnt(int32_t paiInstanceCnt) { DARABONBA_PTR_SET_VALUE(paiInstanceCnt_, paiInstanceCnt) };


      // paiServerlessAssetCnt Field Functions 
      bool hasPaiServerlessAssetCnt() const { return this->paiServerlessAssetCnt_ != nullptr;};
      void deletePaiServerlessAssetCnt() { this->paiServerlessAssetCnt_ = nullptr;};
      inline int32_t getPaiServerlessAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(paiServerlessAssetCnt_, 0) };
      inline Data& setPaiServerlessAssetCnt(int32_t paiServerlessAssetCnt) { DARABONBA_PTR_SET_VALUE(paiServerlessAssetCnt_, paiServerlessAssetCnt) };


      // sensitiveSummary Field Functions 
      bool hasSensitiveSummary() const { return this->sensitiveSummary_ != nullptr;};
      void deleteSensitiveSummary() { this->sensitiveSummary_ = nullptr;};
      inline const Data::SensitiveSummary & getSensitiveSummary() const { DARABONBA_PTR_GET_CONST(sensitiveSummary_, Data::SensitiveSummary) };
      inline Data::SensitiveSummary getSensitiveSummary() { DARABONBA_PTR_GET(sensitiveSummary_, Data::SensitiveSummary) };
      inline Data& setSensitiveSummary(const Data::SensitiveSummary & sensitiveSummary) { DARABONBA_PTR_SET_VALUE(sensitiveSummary_, sensitiveSummary) };
      inline Data& setSensitiveSummary(Data::SensitiveSummary && sensitiveSummary) { DARABONBA_PTR_SET_RVALUE(sensitiveSummary_, sensitiveSummary) };


      // snapshotAssetCnt Field Functions 
      bool hasSnapshotAssetCnt() const { return this->snapshotAssetCnt_ != nullptr;};
      void deleteSnapshotAssetCnt() { this->snapshotAssetCnt_ = nullptr;};
      inline int32_t getSnapshotAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(snapshotAssetCnt_, 0) };
      inline Data& setSnapshotAssetCnt(int32_t snapshotAssetCnt) { DARABONBA_PTR_SET_VALUE(snapshotAssetCnt_, snapshotAssetCnt) };


      // totalAssetCnt Field Functions 
      bool hasTotalAssetCnt() const { return this->totalAssetCnt_ != nullptr;};
      void deleteTotalAssetCnt() { this->totalAssetCnt_ = nullptr;};
      inline int32_t getTotalAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(totalAssetCnt_, 0) };
      inline Data& setTotalAssetCnt(int32_t totalAssetCnt) { DARABONBA_PTR_SET_VALUE(totalAssetCnt_, totalAssetCnt) };


      // totalRiskCnt Field Functions 
      bool hasTotalRiskCnt() const { return this->totalRiskCnt_ != nullptr;};
      void deleteTotalRiskCnt() { this->totalRiskCnt_ = nullptr;};
      inline int32_t getTotalRiskCnt() const { DARABONBA_PTR_GET_DEFAULT(totalRiskCnt_, 0) };
      inline Data& setTotalRiskCnt(int32_t totalRiskCnt) { DARABONBA_PTR_SET_VALUE(totalRiskCnt_, totalRiskCnt) };


      // vulRiskAssetCnt Field Functions 
      bool hasVulRiskAssetCnt() const { return this->vulRiskAssetCnt_ != nullptr;};
      void deleteVulRiskAssetCnt() { this->vulRiskAssetCnt_ = nullptr;};
      inline int32_t getVulRiskAssetCnt() const { DARABONBA_PTR_GET_DEFAULT(vulRiskAssetCnt_, 0) };
      inline Data& setVulRiskAssetCnt(int32_t vulRiskAssetCnt) { DARABONBA_PTR_SET_VALUE(vulRiskAssetCnt_, vulRiskAssetCnt) };


    protected:
      // The number of cloud assets with AI security posture management risks.
      shared_ptr<int32_t> aispmRiskAssetCnt_ {};
      // The number of servers on which AI components are installed.
      shared_ptr<int32_t> ecsAssetCnt_ {};
      // The number of servers that have exposed AI components.
      shared_ptr<int32_t> exposedRiskAssetCnt_ {};
      // The number of AI images.
      shared_ptr<int32_t> imageAssetCnt_ {};
      // The number of LINGJUN assets.
      shared_ptr<int32_t> lingjunAssetCnt_ {};
      // The number of container image assets in PAI.
      shared_ptr<int32_t> paiContainerCnt_ {};
      // The total number of cloud asset instances in Platform for AI (PAI).
      shared_ptr<int32_t> paiInstanceCnt_ {};
      // The number of serverless assets in PAI.
      shared_ptr<int32_t> paiServerlessAssetCnt_ {};
      // The statistics on assets that have AI-related keys are stored in plaintext.
      shared_ptr<Data::SensitiveSummary> sensitiveSummary_ {};
      // The number of AI snapshots.
      shared_ptr<int32_t> snapshotAssetCnt_ {};
      // The total number of AI assets.
      shared_ptr<int32_t> totalAssetCnt_ {};
      // The total number of assets with AI risks.
      shared_ptr<int32_t> totalRiskCnt_ {};
      // The number of servers with AI application vulnerabilities.
      shared_ptr<int32_t> vulRiskAssetCnt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAIAssetSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAIAssetSummaryResponseBody::Data) };
    inline DescribeAIAssetSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAIAssetSummaryResponseBody::Data) };
    inline DescribeAIAssetSummaryResponseBody& setData(const DescribeAIAssetSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAIAssetSummaryResponseBody& setData(DescribeAIAssetSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIAssetSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeAIAssetSummaryResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
