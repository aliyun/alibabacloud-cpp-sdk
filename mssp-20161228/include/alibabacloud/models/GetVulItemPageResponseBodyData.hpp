// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULITEMPAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVULITEMPAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetVulItemPageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulItemPageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(CveUrlPrefix, cveUrlPrefix_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(FindTime, findTime_);
      DARABONBA_PTR_TO_JSON(HandledCount, handledCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(RelatedCveCount, relatedCveCount_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalFixCount, totalFixCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulItemPageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(CveUrlPrefix, cveUrlPrefix_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(FindTime, findTime_);
      DARABONBA_PTR_FROM_JSON(HandledCount, handledCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(RelatedCveCount, relatedCveCount_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalFixCount, totalFixCount_);
    };
    GetVulItemPageResponseBodyData() = default ;
    GetVulItemPageResponseBodyData(const GetVulItemPageResponseBodyData &) = default ;
    GetVulItemPageResponseBodyData(GetVulItemPageResponseBodyData &&) = default ;
    GetVulItemPageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulItemPageResponseBodyData() = default ;
    GetVulItemPageResponseBodyData& operator=(const GetVulItemPageResponseBodyData &) = default ;
    GetVulItemPageResponseBodyData& operator=(GetVulItemPageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->asapCount_ == nullptr && return this->customerId_ == nullptr && return this->cveUrlPrefix_ == nullptr && return this->dealed_ == nullptr && return this->findTime_ == nullptr
        && return this->handledCount_ == nullptr && return this->id_ == nullptr && return this->laterCount_ == nullptr && return this->level_ == nullptr && return this->name_ == nullptr
        && return this->nntfCount_ == nullptr && return this->related_ == nullptr && return this->relatedCveCount_ == nullptr && return this->scanType_ == nullptr && return this->tags_ == nullptr
        && return this->totalFixCount_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline GetVulItemPageResponseBodyData& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // asapCount Field Functions 
    bool hasAsapCount() const { return this->asapCount_ != nullptr;};
    void deleteAsapCount() { this->asapCount_ = nullptr;};
    inline int32_t asapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
    inline GetVulItemPageResponseBodyData& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetVulItemPageResponseBodyData& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // cveUrlPrefix Field Functions 
    bool hasCveUrlPrefix() const { return this->cveUrlPrefix_ != nullptr;};
    void deleteCveUrlPrefix() { this->cveUrlPrefix_ = nullptr;};
    inline string cveUrlPrefix() const { DARABONBA_PTR_GET_DEFAULT(cveUrlPrefix_, "") };
    inline GetVulItemPageResponseBodyData& setCveUrlPrefix(string cveUrlPrefix) { DARABONBA_PTR_SET_VALUE(cveUrlPrefix_, cveUrlPrefix) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline GetVulItemPageResponseBodyData& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // findTime Field Functions 
    bool hasFindTime() const { return this->findTime_ != nullptr;};
    void deleteFindTime() { this->findTime_ = nullptr;};
    inline string findTime() const { DARABONBA_PTR_GET_DEFAULT(findTime_, "") };
    inline GetVulItemPageResponseBodyData& setFindTime(string findTime) { DARABONBA_PTR_SET_VALUE(findTime_, findTime) };


    // handledCount Field Functions 
    bool hasHandledCount() const { return this->handledCount_ != nullptr;};
    void deleteHandledCount() { this->handledCount_ = nullptr;};
    inline int32_t handledCount() const { DARABONBA_PTR_GET_DEFAULT(handledCount_, 0) };
    inline GetVulItemPageResponseBodyData& setHandledCount(int32_t handledCount) { DARABONBA_PTR_SET_VALUE(handledCount_, handledCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetVulItemPageResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // laterCount Field Functions 
    bool hasLaterCount() const { return this->laterCount_ != nullptr;};
    void deleteLaterCount() { this->laterCount_ = nullptr;};
    inline int32_t laterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
    inline GetVulItemPageResponseBodyData& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetVulItemPageResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetVulItemPageResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nntfCount Field Functions 
    bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
    void deleteNntfCount() { this->nntfCount_ = nullptr;};
    inline int32_t nntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
    inline GetVulItemPageResponseBodyData& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline string related() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
    inline GetVulItemPageResponseBodyData& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // relatedCveCount Field Functions 
    bool hasRelatedCveCount() const { return this->relatedCveCount_ != nullptr;};
    void deleteRelatedCveCount() { this->relatedCveCount_ = nullptr;};
    inline int32_t relatedCveCount() const { DARABONBA_PTR_GET_DEFAULT(relatedCveCount_, 0) };
    inline GetVulItemPageResponseBodyData& setRelatedCveCount(int32_t relatedCveCount) { DARABONBA_PTR_SET_VALUE(relatedCveCount_, relatedCveCount) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline GetVulItemPageResponseBodyData& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline GetVulItemPageResponseBodyData& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // totalFixCount Field Functions 
    bool hasTotalFixCount() const { return this->totalFixCount_ != nullptr;};
    void deleteTotalFixCount() { this->totalFixCount_ = nullptr;};
    inline int64_t totalFixCount() const { DARABONBA_PTR_GET_DEFAULT(totalFixCount_, 0L) };
    inline GetVulItemPageResponseBodyData& setTotalFixCount(int64_t totalFixCount) { DARABONBA_PTR_SET_VALUE(totalFixCount_, totalFixCount) };


  protected:
    // Vulnerability alias.
    std::shared_ptr<string> aliasName_ = nullptr;
    // Number of high-priority vulnerabilities to be fixed.
    std::shared_ptr<int32_t> asapCount_ = nullptr;
    // User ID.
    std::shared_ptr<string> customerId_ = nullptr;
    // Prefix for the CVE remediation advice URL.
    std::shared_ptr<string> cveUrlPrefix_ = nullptr;
    // Processing status.
    std::shared_ptr<string> dealed_ = nullptr;
    // Timestamp of the last discovery of the vulnerability.
    std::shared_ptr<string> findTime_ = nullptr;
    // Number of processed vulnerabilities.
    std::shared_ptr<int32_t> handledCount_ = nullptr;
    // Primary key ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Number of medium-priority vulnerabilities to be fixed.
    std::shared_ptr<int32_t> laterCount_ = nullptr;
    // Risk level
    std::shared_ptr<string> level_ = nullptr;
    // Vulnerability name.
    std::shared_ptr<string> name_ = nullptr;
    // Number of low-priority vulnerabilities to be fixed.
    std::shared_ptr<int32_t> nntfCount_ = nullptr;
    // CVE number.
    std::shared_ptr<string> related_ = nullptr;
    // Number of related CVE numbers.
    std::shared_ptr<int32_t> relatedCveCount_ = nullptr;
    // Vulnerability type.
    std::shared_ptr<string> scanType_ = nullptr;
    // Tags.
    std::shared_ptr<string> tags_ = nullptr;
    // Total number of fixed vulnerabilities.
    std::shared_ptr<int64_t> totalFixCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
