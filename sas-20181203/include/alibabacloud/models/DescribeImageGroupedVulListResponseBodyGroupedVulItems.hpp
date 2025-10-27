// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEGROUPEDVULLISTRESPONSEBODYGROUPEDVULITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEGROUPEDVULLISTRESPONSEBODYGROUPEDVULITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageGroupedVulListResponseBodyGroupedVulItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageGroupedVulListResponseBodyGroupedVulItems& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_TO_JSON(CanFix, canFix_);
      DARABONBA_PTR_TO_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageGroupedVulListResponseBodyGroupedVulItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_FROM_JSON(CanFix, canFix_);
      DARABONBA_PTR_FROM_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
      DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImageGroupedVulListResponseBodyGroupedVulItems() = default ;
    DescribeImageGroupedVulListResponseBodyGroupedVulItems(const DescribeImageGroupedVulListResponseBodyGroupedVulItems &) = default ;
    DescribeImageGroupedVulListResponseBodyGroupedVulItems(DescribeImageGroupedVulListResponseBodyGroupedVulItems &&) = default ;
    DescribeImageGroupedVulListResponseBodyGroupedVulItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageGroupedVulListResponseBodyGroupedVulItems() = default ;
    DescribeImageGroupedVulListResponseBodyGroupedVulItems& operator=(const DescribeImageGroupedVulListResponseBodyGroupedVulItems &) = default ;
    DescribeImageGroupedVulListResponseBodyGroupedVulItems& operator=(DescribeImageGroupedVulListResponseBodyGroupedVulItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->asapCount_ == nullptr && return this->canFix_ == nullptr && return this->gmtLast_ == nullptr && return this->lastScanTime_ == nullptr && return this->laterCount_ == nullptr
        && return this->name_ == nullptr && return this->nntfCount_ == nullptr && return this->ruleTag_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->type_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // asapCount Field Functions 
    bool hasAsapCount() const { return this->asapCount_ != nullptr;};
    void deleteAsapCount() { this->asapCount_ = nullptr;};
    inline int32_t asapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


    // canFix Field Functions 
    bool hasCanFix() const { return this->canFix_ != nullptr;};
    void deleteCanFix() { this->canFix_ = nullptr;};
    inline string canFix() const { DARABONBA_PTR_GET_DEFAULT(canFix_, "") };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setCanFix(string canFix) { DARABONBA_PTR_SET_VALUE(canFix_, canFix) };


    // gmtLast Field Functions 
    bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
    void deleteGmtLast() { this->gmtLast_ = nullptr;};
    inline int64_t gmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


    // lastScanTime Field Functions 
    bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
    void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
    inline int64_t lastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


    // laterCount Field Functions 
    bool hasLaterCount() const { return this->laterCount_ != nullptr;};
    void deleteLaterCount() { this->laterCount_ = nullptr;};
    inline int32_t laterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nntfCount Field Functions 
    bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
    void deleteNntfCount() { this->nntfCount_ = nullptr;};
    inline int32_t nntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline string ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageGroupedVulListResponseBodyGroupedVulItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The number of vulnerabilities that have the high priority.
    std::shared_ptr<int32_t> asapCount_ = nullptr;
    // Indicates whether the vulnerability can be fixed in the Security Center console. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> canFix_ = nullptr;
    // The timestamp when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtLast_ = nullptr;
    // The timestamp when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> lastScanTime_ = nullptr;
    // The number of vulnerabilities that have the medium priority.
    std::shared_ptr<int32_t> laterCount_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The number of vulnerabilities that have the low priority.
    std::shared_ptr<int32_t> nntfCount_ = nullptr;
    // The tag of this vulnerability. Valid values:
    // 
    // *   **AI**: AI-related components.
    std::shared_ptr<string> ruleTag_ = nullptr;
    // The status of the vulnerability. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: handled
    // *   **2**: verifying
    // *   **3**: added to the whitelist
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag of the vulnerability. Valid values:
    // 
    // *   Restart required
    // *   Remote exploitation
    // *   Exploit exists
    // *   Exploitable
    // *   Privilege escalation
    // *   Code execution
    std::shared_ptr<string> tags_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: image system vulnerability
    // *   **sca**: image application vulnerability
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
