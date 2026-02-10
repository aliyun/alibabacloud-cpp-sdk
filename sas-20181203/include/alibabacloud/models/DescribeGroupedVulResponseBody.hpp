// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDVULRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDVULRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedVulResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedVulResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupedVulItems, groupedVulItems_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedVulResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupedVulItems, groupedVulItems_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGroupedVulResponseBody() = default ;
    DescribeGroupedVulResponseBody(const DescribeGroupedVulResponseBody &) = default ;
    DescribeGroupedVulResponseBody(DescribeGroupedVulResponseBody &&) = default ;
    DescribeGroupedVulResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedVulResponseBody() = default ;
    DescribeGroupedVulResponseBody& operator=(const DescribeGroupedVulResponseBody &) = default ;
    DescribeGroupedVulResponseBody& operator=(DescribeGroupedVulResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupedVulItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedVulItems& obj) { 
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
      friend void from_json(const Darabonba::Json& j, GroupedVulItems& obj) { 
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
      GroupedVulItems() = default ;
      GroupedVulItems(const GroupedVulItems &) = default ;
      GroupedVulItems(GroupedVulItems &&) = default ;
      GroupedVulItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedVulItems() = default ;
      GroupedVulItems& operator=(const GroupedVulItems &) = default ;
      GroupedVulItems& operator=(GroupedVulItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->asapCount_ == nullptr && this->gmtFirst_ == nullptr && this->gmtLast_ == nullptr && this->handledCount_ == nullptr && this->languageType_ == nullptr
        && this->laterCount_ == nullptr && this->name_ == nullptr && this->nntfCount_ == nullptr && this->raspDefend_ == nullptr && this->related_ == nullptr
        && this->tags_ == nullptr && this->totalFixCount_ == nullptr && this->type_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline GroupedVulItems& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // asapCount Field Functions 
      bool hasAsapCount() const { return this->asapCount_ != nullptr;};
      void deleteAsapCount() { this->asapCount_ = nullptr;};
      inline int32_t getAsapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
      inline GroupedVulItems& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


      // gmtFirst Field Functions 
      bool hasGmtFirst() const { return this->gmtFirst_ != nullptr;};
      void deleteGmtFirst() { this->gmtFirst_ = nullptr;};
      inline int64_t getGmtFirst() const { DARABONBA_PTR_GET_DEFAULT(gmtFirst_, 0L) };
      inline GroupedVulItems& setGmtFirst(int64_t gmtFirst) { DARABONBA_PTR_SET_VALUE(gmtFirst_, gmtFirst) };


      // gmtLast Field Functions 
      bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
      void deleteGmtLast() { this->gmtLast_ = nullptr;};
      inline int64_t getGmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
      inline GroupedVulItems& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


      // handledCount Field Functions 
      bool hasHandledCount() const { return this->handledCount_ != nullptr;};
      void deleteHandledCount() { this->handledCount_ = nullptr;};
      inline int32_t getHandledCount() const { DARABONBA_PTR_GET_DEFAULT(handledCount_, 0) };
      inline GroupedVulItems& setHandledCount(int32_t handledCount) { DARABONBA_PTR_SET_VALUE(handledCount_, handledCount) };


      // languageType Field Functions 
      bool hasLanguageType() const { return this->languageType_ != nullptr;};
      void deleteLanguageType() { this->languageType_ = nullptr;};
      inline string getLanguageType() const { DARABONBA_PTR_GET_DEFAULT(languageType_, "") };
      inline GroupedVulItems& setLanguageType(string languageType) { DARABONBA_PTR_SET_VALUE(languageType_, languageType) };


      // laterCount Field Functions 
      bool hasLaterCount() const { return this->laterCount_ != nullptr;};
      void deleteLaterCount() { this->laterCount_ = nullptr;};
      inline int32_t getLaterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
      inline GroupedVulItems& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GroupedVulItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nntfCount Field Functions 
      bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
      void deleteNntfCount() { this->nntfCount_ = nullptr;};
      inline int32_t getNntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
      inline GroupedVulItems& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


      // raspDefend Field Functions 
      bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
      void deleteRaspDefend() { this->raspDefend_ = nullptr;};
      inline int32_t getRaspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
      inline GroupedVulItems& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


      // related Field Functions 
      bool hasRelated() const { return this->related_ != nullptr;};
      void deleteRelated() { this->related_ = nullptr;};
      inline string getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
      inline GroupedVulItems& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline GroupedVulItems& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // totalFixCount Field Functions 
      bool hasTotalFixCount() const { return this->totalFixCount_ != nullptr;};
      void deleteTotalFixCount() { this->totalFixCount_ = nullptr;};
      inline int64_t getTotalFixCount() const { DARABONBA_PTR_GET_DEFAULT(totalFixCount_, 0L) };
      inline GroupedVulItems& setTotalFixCount(int64_t totalFixCount) { DARABONBA_PTR_SET_VALUE(totalFixCount_, totalFixCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline GroupedVulItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The number of vulnerabilities that have the **high** priority.
      shared_ptr<int32_t> asapCount_ {};
      // The timestamp when the vulnerability was first detected. Unit: milliseconds.
      shared_ptr<int64_t> gmtFirst_ {};
      // The timestamp when the vulnerability was last detected. Unit: milliseconds.
      shared_ptr<int64_t> gmtLast_ {};
      // The number of handled vulnerabilities.
      shared_ptr<int32_t> handledCount_ {};
      // The language type associated with the vulnerability. Valid values:
      // 
      // *   **java**
      // *   **php**
      // 
      // >  This parameter is valid only for a vulnerability of the sca type.
      shared_ptr<string> languageType_ {};
      // The number of vulnerabilities that have the **medium** priority.
      shared_ptr<int32_t> laterCount_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The number of vulnerabilities that have the **low** priority.
      shared_ptr<int32_t> nntfCount_ {};
      // Indicates whether the application protection feature is supported. Valid values:
      // 
      // *   **0**: not supported
      // *   **1**: supported
      // 
      // >  If this parameter is not returned, the application protection feature is not supported.
      shared_ptr<int32_t> raspDefend_ {};
      // The IDs of the common vulnerabilities and exposures (CVEs) that are related to the vulnerability.
      shared_ptr<string> related_ {};
      // The tag of the vulnerability. Valid values:
      // 
      // *   **Restart required**
      // *   **Remote utilization**
      // *   **EXP exists**
      // *   **Available**
      // *   **Elevation of Privilege**
      // *   **Code Execution**
      shared_ptr<string> tags_ {};
      // The total number of fixed vulnerabilities.
      shared_ptr<int64_t> totalFixCount_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   **cve**: Linux software vulnerability
      // *   **sys**: Windows system vulnerability
      // *   **cms**: Web-CMS vulnerability
      // *   **app**: application vulnerability
      // *   **emg**: urgent vulnerability
      // *   **sca**: vulnerability that is detected by software component analysis
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->groupedVulItems_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedVulResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupedVulItems Field Functions 
    bool hasGroupedVulItems() const { return this->groupedVulItems_ != nullptr;};
    void deleteGroupedVulItems() { this->groupedVulItems_ = nullptr;};
    inline const vector<DescribeGroupedVulResponseBody::GroupedVulItems> & getGroupedVulItems() const { DARABONBA_PTR_GET_CONST(groupedVulItems_, vector<DescribeGroupedVulResponseBody::GroupedVulItems>) };
    inline vector<DescribeGroupedVulResponseBody::GroupedVulItems> getGroupedVulItems() { DARABONBA_PTR_GET(groupedVulItems_, vector<DescribeGroupedVulResponseBody::GroupedVulItems>) };
    inline DescribeGroupedVulResponseBody& setGroupedVulItems(const vector<DescribeGroupedVulResponseBody::GroupedVulItems> & groupedVulItems) { DARABONBA_PTR_SET_VALUE(groupedVulItems_, groupedVulItems) };
    inline DescribeGroupedVulResponseBody& setGroupedVulItems(vector<DescribeGroupedVulResponseBody::GroupedVulItems> && groupedVulItems) { DARABONBA_PTR_SET_RVALUE(groupedVulItems_, groupedVulItems) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupedVulResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedVulResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGroupedVulResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The information about the vulnerability.
    shared_ptr<vector<DescribeGroupedVulResponseBody::GroupedVulItems>> groupedVulItems_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
