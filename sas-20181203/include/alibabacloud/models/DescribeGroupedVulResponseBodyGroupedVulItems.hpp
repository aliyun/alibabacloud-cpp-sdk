// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDVULRESPONSEBODYGROUPEDVULITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDVULRESPONSEBODYGROUPEDVULITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedVulResponseBodyGroupedVulItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedVulResponseBodyGroupedVulItems& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_TO_JSON(GmtFirst, gmtFirst_);
      DARABONBA_PTR_TO_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_TO_JSON(HandledCount, handledCount_);
      DARABONBA_PTR_TO_JSON(LanguageType, languageType_);
      DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalFixCount, totalFixCount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedVulResponseBodyGroupedVulItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
      DARABONBA_PTR_FROM_JSON(GmtFirst, gmtFirst_);
      DARABONBA_PTR_FROM_JSON(GmtLast, gmtLast_);
      DARABONBA_PTR_FROM_JSON(HandledCount, handledCount_);
      DARABONBA_PTR_FROM_JSON(LanguageType, languageType_);
      DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalFixCount, totalFixCount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeGroupedVulResponseBodyGroupedVulItems() = default ;
    DescribeGroupedVulResponseBodyGroupedVulItems(const DescribeGroupedVulResponseBodyGroupedVulItems &) = default ;
    DescribeGroupedVulResponseBodyGroupedVulItems(DescribeGroupedVulResponseBodyGroupedVulItems &&) = default ;
    DescribeGroupedVulResponseBodyGroupedVulItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedVulResponseBodyGroupedVulItems() = default ;
    DescribeGroupedVulResponseBodyGroupedVulItems& operator=(const DescribeGroupedVulResponseBodyGroupedVulItems &) = default ;
    DescribeGroupedVulResponseBodyGroupedVulItems& operator=(DescribeGroupedVulResponseBodyGroupedVulItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->asapCount_ != nullptr && this->gmtFirst_ != nullptr && this->gmtLast_ != nullptr && this->handledCount_ != nullptr && this->languageType_ != nullptr
        && this->laterCount_ != nullptr && this->name_ != nullptr && this->nntfCount_ != nullptr && this->raspDefend_ != nullptr && this->related_ != nullptr
        && this->tags_ != nullptr && this->totalFixCount_ != nullptr && this->type_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // asapCount Field Functions 
    bool hasAsapCount() const { return this->asapCount_ != nullptr;};
    void deleteAsapCount() { this->asapCount_ = nullptr;};
    inline int32_t asapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


    // gmtFirst Field Functions 
    bool hasGmtFirst() const { return this->gmtFirst_ != nullptr;};
    void deleteGmtFirst() { this->gmtFirst_ = nullptr;};
    inline int64_t gmtFirst() const { DARABONBA_PTR_GET_DEFAULT(gmtFirst_, 0L) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setGmtFirst(int64_t gmtFirst) { DARABONBA_PTR_SET_VALUE(gmtFirst_, gmtFirst) };


    // gmtLast Field Functions 
    bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
    void deleteGmtLast() { this->gmtLast_ = nullptr;};
    inline int64_t gmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


    // handledCount Field Functions 
    bool hasHandledCount() const { return this->handledCount_ != nullptr;};
    void deleteHandledCount() { this->handledCount_ = nullptr;};
    inline int32_t handledCount() const { DARABONBA_PTR_GET_DEFAULT(handledCount_, 0) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setHandledCount(int32_t handledCount) { DARABONBA_PTR_SET_VALUE(handledCount_, handledCount) };


    // languageType Field Functions 
    bool hasLanguageType() const { return this->languageType_ != nullptr;};
    void deleteLanguageType() { this->languageType_ = nullptr;};
    inline string languageType() const { DARABONBA_PTR_GET_DEFAULT(languageType_, "") };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setLanguageType(string languageType) { DARABONBA_PTR_SET_VALUE(languageType_, languageType) };


    // laterCount Field Functions 
    bool hasLaterCount() const { return this->laterCount_ != nullptr;};
    void deleteLaterCount() { this->laterCount_ = nullptr;};
    inline int32_t laterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nntfCount Field Functions 
    bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
    void deleteNntfCount() { this->nntfCount_ = nullptr;};
    inline int32_t nntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t raspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline string related() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // totalFixCount Field Functions 
    bool hasTotalFixCount() const { return this->totalFixCount_ != nullptr;};
    void deleteTotalFixCount() { this->totalFixCount_ = nullptr;};
    inline int64_t totalFixCount() const { DARABONBA_PTR_GET_DEFAULT(totalFixCount_, 0L) };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setTotalFixCount(int64_t totalFixCount) { DARABONBA_PTR_SET_VALUE(totalFixCount_, totalFixCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeGroupedVulResponseBodyGroupedVulItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The number of vulnerabilities that have the **high** priority.
    std::shared_ptr<int32_t> asapCount_ = nullptr;
    // The timestamp when the vulnerability was first detected. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtFirst_ = nullptr;
    // The timestamp when the vulnerability was last detected. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtLast_ = nullptr;
    // The number of handled vulnerabilities.
    std::shared_ptr<int32_t> handledCount_ = nullptr;
    // The language type associated with the vulnerability. Valid values:
    // 
    // *   **java**
    // *   **php**
    // 
    // >  This parameter is valid only for a vulnerability of the sca type.
    std::shared_ptr<string> languageType_ = nullptr;
    // The number of vulnerabilities that have the **medium** priority.
    std::shared_ptr<int32_t> laterCount_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The number of vulnerabilities that have the **low** priority.
    std::shared_ptr<int32_t> nntfCount_ = nullptr;
    // Indicates whether the application protection feature is supported. Valid values:
    // 
    // *   **0**: not supported
    // *   **1**: supported
    // 
    // >  If this parameter is not returned, the application protection feature is not supported.
    std::shared_ptr<int32_t> raspDefend_ = nullptr;
    // The IDs of the common vulnerabilities and exposures (CVEs) that are related to the vulnerability.
    std::shared_ptr<string> related_ = nullptr;
    // The tag of the vulnerability. Valid values:
    // 
    // *   **Restart required**
    // *   **Remote utilization**
    // *   **EXP exists**
    // *   **Available**
    // *   **Elevation of Privilege**
    // *   **Code Execution**
    std::shared_ptr<string> tags_ = nullptr;
    // The total number of fixed vulnerabilities.
    std::shared_ptr<int64_t> totalFixCount_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **app**: application vulnerability
    // *   **emg**: urgent vulnerability
    // *   **sca**: vulnerability that is detected by software component analysis
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
