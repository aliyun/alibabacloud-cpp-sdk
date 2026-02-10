// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECUREVULLISTRESPONSEBODY_HPP_
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
  class DescribeDomainSecureVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecureVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulList, vulList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecureVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulList, vulList_);
    };
    DescribeDomainSecureVulListResponseBody() = default ;
    DescribeDomainSecureVulListResponseBody(const DescribeDomainSecureVulListResponseBody &) = default ;
    DescribeDomainSecureVulListResponseBody(DescribeDomainSecureVulListResponseBody &&) = default ;
    DescribeDomainSecureVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecureVulListResponseBody() = default ;
    DescribeDomainSecureVulListResponseBody& operator=(const DescribeDomainSecureVulListResponseBody &) = default ;
    DescribeDomainSecureVulListResponseBody& operator=(DescribeDomainSecureVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulList& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_TO_JSON(GmtLast, gmtLast_);
        DARABONBA_PTR_TO_JSON(HandledCount, handledCount_);
        DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, VulList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_FROM_JSON(GmtLast, gmtLast_);
        DARABONBA_PTR_FROM_JSON(HandledCount, handledCount_);
        DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      VulList() = default ;
      VulList(const VulList &) = default ;
      VulList(VulList &&) = default ;
      VulList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulList() = default ;
      VulList& operator=(const VulList &) = default ;
      VulList& operator=(VulList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->asapCount_ == nullptr && this->gmtLast_ == nullptr && this->handledCount_ == nullptr && this->laterCount_ == nullptr && this->name_ == nullptr
        && this->nntfCount_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // asapCount Field Functions 
      bool hasAsapCount() const { return this->asapCount_ != nullptr;};
      void deleteAsapCount() { this->asapCount_ = nullptr;};
      inline int32_t getAsapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
      inline VulList& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


      // gmtLast Field Functions 
      bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
      void deleteGmtLast() { this->gmtLast_ = nullptr;};
      inline int64_t getGmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
      inline VulList& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


      // handledCount Field Functions 
      bool hasHandledCount() const { return this->handledCount_ != nullptr;};
      void deleteHandledCount() { this->handledCount_ = nullptr;};
      inline int32_t getHandledCount() const { DARABONBA_PTR_GET_DEFAULT(handledCount_, 0) };
      inline VulList& setHandledCount(int32_t handledCount) { DARABONBA_PTR_SET_VALUE(handledCount_, handledCount) };


      // laterCount Field Functions 
      bool hasLaterCount() const { return this->laterCount_ != nullptr;};
      void deleteLaterCount() { this->laterCount_ = nullptr;};
      inline int32_t getLaterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
      inline VulList& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VulList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nntfCount Field Functions 
      bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
      void deleteNntfCount() { this->nntfCount_ = nullptr;};
      inline int32_t getNntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
      inline VulList& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline VulList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VulList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The number of the vulnerabilities that have the **high** priority.
      shared_ptr<int32_t> asapCount_ {};
      // The timestamp when the vulnerability was last detected. Unit: milliseconds.
      shared_ptr<int64_t> gmtLast_ {};
      // The number of handled vulnerabilities.
      shared_ptr<int32_t> handledCount_ {};
      // The number of the vulnerabilities that have the **medium** priority.
      shared_ptr<int32_t> laterCount_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The number of the vulnerabilities that have the **low** priority.
      shared_ptr<int32_t> nntfCount_ {};
      // The tag that is added to the vulnerability. Valid values:
      // 
      // *   Restart required
      // *   Remote utilization
      // *   EXP exists
      // *   Available
      // *   Elevation of Privilege
      // *   Code Execution
      shared_ptr<string> tags_ {};
      // The type of the vulnerability. Default value: cve. Valid values:
      // 
      // *   **cve**: Linux software vulnerability.
      // *   **sys**: Windows system vulnerability.
      // *   **cms**: Web-CMS vulnerability.
      // *   **app**: application vulnerability that is detected by network scanning.
      // *   **sca**: application vulnerability that is detected by using software component analysis.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->vulList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainSecureVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDomainSecureVulListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulList Field Functions 
    bool hasVulList() const { return this->vulList_ != nullptr;};
    void deleteVulList() { this->vulList_ = nullptr;};
    inline const vector<DescribeDomainSecureVulListResponseBody::VulList> & getVulList() const { DARABONBA_PTR_GET_CONST(vulList_, vector<DescribeDomainSecureVulListResponseBody::VulList>) };
    inline vector<DescribeDomainSecureVulListResponseBody::VulList> getVulList() { DARABONBA_PTR_GET(vulList_, vector<DescribeDomainSecureVulListResponseBody::VulList>) };
    inline DescribeDomainSecureVulListResponseBody& setVulList(const vector<DescribeDomainSecureVulListResponseBody::VulList> & vulList) { DARABONBA_PTR_SET_VALUE(vulList_, vulList) };
    inline DescribeDomainSecureVulListResponseBody& setVulList(vector<DescribeDomainSecureVulListResponseBody::VulList> && vulList) { DARABONBA_PTR_SET_RVALUE(vulList_, vulList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of vulnerabilities returned.
    shared_ptr<int32_t> totalCount_ {};
    // The domain name-related vulnerabilities.
    shared_ptr<vector<DescribeDomainSecureVulListResponseBody::VulList>> vulList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
