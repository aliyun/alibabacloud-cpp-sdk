// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeVulDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulDesktops, vulDesktops_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulDesktops, vulDesktops_);
    };
    DescribeVulDesktopsResponseBody() = default ;
    DescribeVulDesktopsResponseBody(const DescribeVulDesktopsResponseBody &) = default ;
    DescribeVulDesktopsResponseBody(DescribeVulDesktopsResponseBody &&) = default ;
    DescribeVulDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulDesktopsResponseBody() = default ;
    DescribeVulDesktopsResponseBody& operator=(const DescribeVulDesktopsResponseBody &) = default ;
    DescribeVulDesktopsResponseBody& operator=(DescribeVulDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulDesktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulDesktops& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigGroupId, configGroupId_);
        DARABONBA_PTR_TO_JSON(CveCount, cveCount_);
        DARABONBA_PTR_TO_JSON(Cves, cves_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(FirstFoundTime, firstFoundTime_);
        DARABONBA_PTR_TO_JSON(FixRecords, fixRecords_);
        DARABONBA_PTR_TO_JSON(PatchIds, patchIds_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
      };
      friend void from_json(const Darabonba::Json& j, VulDesktops& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigGroupId, configGroupId_);
        DARABONBA_PTR_FROM_JSON(CveCount, cveCount_);
        DARABONBA_PTR_FROM_JSON(Cves, cves_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(FirstFoundTime, firstFoundTime_);
        DARABONBA_PTR_FROM_JSON(FixRecords, fixRecords_);
        DARABONBA_PTR_FROM_JSON(PatchIds, patchIds_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
      };
      VulDesktops() = default ;
      VulDesktops(const VulDesktops &) = default ;
      VulDesktops(VulDesktops &&) = default ;
      VulDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulDesktops() = default ;
      VulDesktops& operator=(const VulDesktops &) = default ;
      VulDesktops& operator=(VulDesktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FixRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FixRecords& obj) { 
          DARABONBA_PTR_TO_JSON(BatchId, batchId_);
          DARABONBA_PTR_TO_JSON(FixFailureReason, fixFailureReason_);
          DARABONBA_PTR_TO_JSON(FixResult, fixResult_);
          DARABONBA_PTR_TO_JSON(FixTime, fixTime_);
          DARABONBA_PTR_TO_JSON(FixType, fixType_);
        };
        friend void from_json(const Darabonba::Json& j, FixRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
          DARABONBA_PTR_FROM_JSON(FixFailureReason, fixFailureReason_);
          DARABONBA_PTR_FROM_JSON(FixResult, fixResult_);
          DARABONBA_PTR_FROM_JSON(FixTime, fixTime_);
          DARABONBA_PTR_FROM_JSON(FixType, fixType_);
        };
        FixRecords() = default ;
        FixRecords(const FixRecords &) = default ;
        FixRecords(FixRecords &&) = default ;
        FixRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FixRecords() = default ;
        FixRecords& operator=(const FixRecords &) = default ;
        FixRecords& operator=(FixRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->batchId_ == nullptr
        && this->fixFailureReason_ == nullptr && this->fixResult_ == nullptr && this->fixTime_ == nullptr && this->fixType_ == nullptr; };
        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
        inline FixRecords& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // fixFailureReason Field Functions 
        bool hasFixFailureReason() const { return this->fixFailureReason_ != nullptr;};
        void deleteFixFailureReason() { this->fixFailureReason_ = nullptr;};
        inline string getFixFailureReason() const { DARABONBA_PTR_GET_DEFAULT(fixFailureReason_, "") };
        inline FixRecords& setFixFailureReason(string fixFailureReason) { DARABONBA_PTR_SET_VALUE(fixFailureReason_, fixFailureReason) };


        // fixResult Field Functions 
        bool hasFixResult() const { return this->fixResult_ != nullptr;};
        void deleteFixResult() { this->fixResult_ = nullptr;};
        inline string getFixResult() const { DARABONBA_PTR_GET_DEFAULT(fixResult_, "") };
        inline FixRecords& setFixResult(string fixResult) { DARABONBA_PTR_SET_VALUE(fixResult_, fixResult) };


        // fixTime Field Functions 
        bool hasFixTime() const { return this->fixTime_ != nullptr;};
        void deleteFixTime() { this->fixTime_ = nullptr;};
        inline string getFixTime() const { DARABONBA_PTR_GET_DEFAULT(fixTime_, "") };
        inline FixRecords& setFixTime(string fixTime) { DARABONBA_PTR_SET_VALUE(fixTime_, fixTime) };


        // fixType Field Functions 
        bool hasFixType() const { return this->fixType_ != nullptr;};
        void deleteFixType() { this->fixType_ = nullptr;};
        inline string getFixType() const { DARABONBA_PTR_GET_DEFAULT(fixType_, "") };
        inline FixRecords& setFixType(string fixType) { DARABONBA_PTR_SET_VALUE(fixType_, fixType) };


      protected:
        // The batch ID of the scheduled task execution.
        shared_ptr<string> batchId_ {};
        // The failure reason.
        shared_ptr<string> fixFailureReason_ {};
        // The fix result.
        shared_ptr<string> fixResult_ {};
        // The timestamp when the fix task ended, in milliseconds.
        shared_ptr<string> fixTime_ {};
        // The fix type.
        shared_ptr<string> fixType_ {};
      };

      class Cves : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cves& obj) { 
          DARABONBA_PTR_TO_JSON(CveId, cveId_);
          DARABONBA_PTR_TO_JSON(CveLevel, cveLevel_);
          DARABONBA_PTR_TO_JSON(CveTitle, cveTitle_);
          DARABONBA_PTR_TO_JSON(CveUrl, cveUrl_);
          DARABONBA_PTR_TO_JSON(ImpactScore, impactScore_);
          DARABONBA_PTR_TO_JSON(ReferenceUrl, referenceUrl_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        };
        friend void from_json(const Darabonba::Json& j, Cves& obj) { 
          DARABONBA_PTR_FROM_JSON(CveId, cveId_);
          DARABONBA_PTR_FROM_JSON(CveLevel, cveLevel_);
          DARABONBA_PTR_FROM_JSON(CveTitle, cveTitle_);
          DARABONBA_PTR_FROM_JSON(CveUrl, cveUrl_);
          DARABONBA_PTR_FROM_JSON(ImpactScore, impactScore_);
          DARABONBA_PTR_FROM_JSON(ReferenceUrl, referenceUrl_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        };
        Cves() = default ;
        Cves(const Cves &) = default ;
        Cves(Cves &&) = default ;
        Cves(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cves() = default ;
        Cves& operator=(const Cves &) = default ;
        Cves& operator=(Cves &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cveId_ == nullptr
        && this->cveLevel_ == nullptr && this->cveTitle_ == nullptr && this->cveUrl_ == nullptr && this->impactScore_ == nullptr && this->referenceUrl_ == nullptr
        && this->releaseTime_ == nullptr; };
        // cveId Field Functions 
        bool hasCveId() const { return this->cveId_ != nullptr;};
        void deleteCveId() { this->cveId_ = nullptr;};
        inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
        inline Cves& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


        // cveLevel Field Functions 
        bool hasCveLevel() const { return this->cveLevel_ != nullptr;};
        void deleteCveLevel() { this->cveLevel_ = nullptr;};
        inline string getCveLevel() const { DARABONBA_PTR_GET_DEFAULT(cveLevel_, "") };
        inline Cves& setCveLevel(string cveLevel) { DARABONBA_PTR_SET_VALUE(cveLevel_, cveLevel) };


        // cveTitle Field Functions 
        bool hasCveTitle() const { return this->cveTitle_ != nullptr;};
        void deleteCveTitle() { this->cveTitle_ = nullptr;};
        inline string getCveTitle() const { DARABONBA_PTR_GET_DEFAULT(cveTitle_, "") };
        inline Cves& setCveTitle(string cveTitle) { DARABONBA_PTR_SET_VALUE(cveTitle_, cveTitle) };


        // cveUrl Field Functions 
        bool hasCveUrl() const { return this->cveUrl_ != nullptr;};
        void deleteCveUrl() { this->cveUrl_ = nullptr;};
        inline string getCveUrl() const { DARABONBA_PTR_GET_DEFAULT(cveUrl_, "") };
        inline Cves& setCveUrl(string cveUrl) { DARABONBA_PTR_SET_VALUE(cveUrl_, cveUrl) };


        // impactScore Field Functions 
        bool hasImpactScore() const { return this->impactScore_ != nullptr;};
        void deleteImpactScore() { this->impactScore_ = nullptr;};
        inline string getImpactScore() const { DARABONBA_PTR_GET_DEFAULT(impactScore_, "") };
        inline Cves& setImpactScore(string impactScore) { DARABONBA_PTR_SET_VALUE(impactScore_, impactScore) };


        // referenceUrl Field Functions 
        bool hasReferenceUrl() const { return this->referenceUrl_ != nullptr;};
        void deleteReferenceUrl() { this->referenceUrl_ = nullptr;};
        inline string getReferenceUrl() const { DARABONBA_PTR_GET_DEFAULT(referenceUrl_, "") };
        inline Cves& setReferenceUrl(string referenceUrl) { DARABONBA_PTR_SET_VALUE(referenceUrl_, referenceUrl) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline Cves& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      protected:
        // The CVE ID.
        shared_ptr<string> cveId_ {};
        // The vulnerability level.
        shared_ptr<string> cveLevel_ {};
        // The vulnerability name.
        shared_ptr<string> cveTitle_ {};
        // The CVE URL.
        shared_ptr<string> cveUrl_ {};
        // The vulnerability score.
        shared_ptr<string> impactScore_ {};
        // The reference URL.
        shared_ptr<string> referenceUrl_ {};
        // The release time. The time follows the ISO 8601 standard in UTC: yyyy-MM-ddTHH:mm:ssZ.
        shared_ptr<string> releaseTime_ {};
      };

      virtual bool empty() const override { return this->configGroupId_ == nullptr
        && this->cveCount_ == nullptr && this->cves_ == nullptr && this->desktopId_ == nullptr && this->disabled_ == nullptr && this->firstFoundTime_ == nullptr
        && this->fixRecords_ == nullptr && this->patchIds_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->vulLevel_ == nullptr; };
      // configGroupId Field Functions 
      bool hasConfigGroupId() const { return this->configGroupId_ != nullptr;};
      void deleteConfigGroupId() { this->configGroupId_ = nullptr;};
      inline string getConfigGroupId() const { DARABONBA_PTR_GET_DEFAULT(configGroupId_, "") };
      inline VulDesktops& setConfigGroupId(string configGroupId) { DARABONBA_PTR_SET_VALUE(configGroupId_, configGroupId) };


      // cveCount Field Functions 
      bool hasCveCount() const { return this->cveCount_ != nullptr;};
      void deleteCveCount() { this->cveCount_ = nullptr;};
      inline int32_t getCveCount() const { DARABONBA_PTR_GET_DEFAULT(cveCount_, 0) };
      inline VulDesktops& setCveCount(int32_t cveCount) { DARABONBA_PTR_SET_VALUE(cveCount_, cveCount) };


      // cves Field Functions 
      bool hasCves() const { return this->cves_ != nullptr;};
      void deleteCves() { this->cves_ = nullptr;};
      inline const vector<VulDesktops::Cves> & getCves() const { DARABONBA_PTR_GET_CONST(cves_, vector<VulDesktops::Cves>) };
      inline vector<VulDesktops::Cves> getCves() { DARABONBA_PTR_GET(cves_, vector<VulDesktops::Cves>) };
      inline VulDesktops& setCves(const vector<VulDesktops::Cves> & cves) { DARABONBA_PTR_SET_VALUE(cves_, cves) };
      inline VulDesktops& setCves(vector<VulDesktops::Cves> && cves) { DARABONBA_PTR_SET_RVALUE(cves_, cves) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline VulDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline VulDesktops& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // firstFoundTime Field Functions 
      bool hasFirstFoundTime() const { return this->firstFoundTime_ != nullptr;};
      void deleteFirstFoundTime() { this->firstFoundTime_ = nullptr;};
      inline string getFirstFoundTime() const { DARABONBA_PTR_GET_DEFAULT(firstFoundTime_, "") };
      inline VulDesktops& setFirstFoundTime(string firstFoundTime) { DARABONBA_PTR_SET_VALUE(firstFoundTime_, firstFoundTime) };


      // fixRecords Field Functions 
      bool hasFixRecords() const { return this->fixRecords_ != nullptr;};
      void deleteFixRecords() { this->fixRecords_ = nullptr;};
      inline const vector<VulDesktops::FixRecords> & getFixRecords() const { DARABONBA_PTR_GET_CONST(fixRecords_, vector<VulDesktops::FixRecords>) };
      inline vector<VulDesktops::FixRecords> getFixRecords() { DARABONBA_PTR_GET(fixRecords_, vector<VulDesktops::FixRecords>) };
      inline VulDesktops& setFixRecords(const vector<VulDesktops::FixRecords> & fixRecords) { DARABONBA_PTR_SET_VALUE(fixRecords_, fixRecords) };
      inline VulDesktops& setFixRecords(vector<VulDesktops::FixRecords> && fixRecords) { DARABONBA_PTR_SET_RVALUE(fixRecords_, fixRecords) };


      // patchIds Field Functions 
      bool hasPatchIds() const { return this->patchIds_ != nullptr;};
      void deletePatchIds() { this->patchIds_ = nullptr;};
      inline const vector<string> & getPatchIds() const { DARABONBA_PTR_GET_CONST(patchIds_, vector<string>) };
      inline vector<string> getPatchIds() { DARABONBA_PTR_GET(patchIds_, vector<string>) };
      inline VulDesktops& setPatchIds(const vector<string> & patchIds) { DARABONBA_PTR_SET_VALUE(patchIds_, patchIds) };
      inline VulDesktops& setPatchIds(vector<string> && patchIds) { DARABONBA_PTR_SET_RVALUE(patchIds_, patchIds) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VulDesktops& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline VulDesktops& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VulDesktops& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vulLevel Field Functions 
      bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
      void deleteVulLevel() { this->vulLevel_ = nullptr;};
      inline string getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, "") };
      inline VulDesktops& setVulLevel(string vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


    protected:
      // The configuration task ID.
      shared_ptr<string> configGroupId_ {};
      // The number of vulnerabilities.
      shared_ptr<int32_t> cveCount_ {};
      // The list of vulnerability details.
      shared_ptr<vector<VulDesktops::Cves>> cves_ {};
      // The ID of the cloud computer affected by the vulnerability.
      shared_ptr<string> desktopId_ {};
      // Indicates whether the activation code is disabled.
      shared_ptr<bool> disabled_ {};
      // The time when the vulnerability was first discovered.
      shared_ptr<string> firstFoundTime_ {};
      // The list of fix records for the cloud computer.
      shared_ptr<vector<VulDesktops::FixRecords>> fixRecords_ {};
      // The list of patch IDs.
      shared_ptr<vector<string>> patchIds_ {};
      // The region ID. You can call [DescribeRegions](~~DescribeRegions~~) to query the regions supported by WUYING Workspace.
      shared_ptr<string> regionId_ {};
      // The enterprise resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The fix status of the patch.
      shared_ptr<string> status_ {};
      // The patch level.
      shared_ptr<string> vulLevel_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vulDesktops_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeVulDesktopsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVulDesktopsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulDesktopsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulDesktops Field Functions 
    bool hasVulDesktops() const { return this->vulDesktops_ != nullptr;};
    void deleteVulDesktops() { this->vulDesktops_ = nullptr;};
    inline const vector<DescribeVulDesktopsResponseBody::VulDesktops> & getVulDesktops() const { DARABONBA_PTR_GET_CONST(vulDesktops_, vector<DescribeVulDesktopsResponseBody::VulDesktops>) };
    inline vector<DescribeVulDesktopsResponseBody::VulDesktops> getVulDesktops() { DARABONBA_PTR_GET(vulDesktops_, vector<DescribeVulDesktopsResponseBody::VulDesktops>) };
    inline DescribeVulDesktopsResponseBody& setVulDesktops(const vector<DescribeVulDesktopsResponseBody::VulDesktops> & vulDesktops) { DARABONBA_PTR_SET_VALUE(vulDesktops_, vulDesktops) };
    inline DescribeVulDesktopsResponseBody& setVulDesktops(vector<DescribeVulDesktopsResponseBody::VulDesktops> && vulDesktops) { DARABONBA_PTR_SET_RVALUE(vulDesktops_, vulDesktops) };


  protected:
    // The number of entries per page in a paged query.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. An empty value indicates that no more results exist.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The list of cloud computers affected by the vulnerability.
    shared_ptr<vector<DescribeVulDesktopsResponseBody::VulDesktops>> vulDesktops_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
