// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertResponseBody() = default ;
    ListCertResponseBody(const ListCertResponseBody &) = default ;
    ListCertResponseBody(ListCertResponseBody &&) = default ;
    ListCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertResponseBody() = default ;
    ListCertResponseBody& operator=(const ListCertResponseBody &) = default ;
    ListCertResponseBody& operator=(ListCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(AfterTime, afterTime_);
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(CustomIdentifier, customIdentifier_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(KeyExportable, keyExportable_);
        DARABONBA_PTR_TO_JSON(Organization, organization_);
        DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubjectDn, subjectDn_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(AfterTime, afterTime_);
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(CustomIdentifier, customIdentifier_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(KeyExportable, keyExportable_);
        DARABONBA_PTR_FROM_JSON(Organization, organization_);
        DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubjectDn, subjectDn_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->afterTime_ == nullptr && this->algorithm_ == nullptr && this->aliasName_ == nullptr && this->beforeDate_ == nullptr && this->beforeTime_ == nullptr
        && this->certificateType_ == nullptr && this->commonName_ == nullptr && this->customIdentifier_ == nullptr && this->extra_ == nullptr && this->id_ == nullptr
        && this->identifier_ == nullptr && this->keyExportable_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->serialNumber_ == nullptr
        && this->status_ == nullptr && this->subjectDn_ == nullptr && this->tags_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline string getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, "") };
      inline List& setAfterDate(string afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // afterTime Field Functions 
      bool hasAfterTime() const { return this->afterTime_ != nullptr;};
      void deleteAfterTime() { this->afterTime_ = nullptr;};
      inline int64_t getAfterTime() const { DARABONBA_PTR_GET_DEFAULT(afterTime_, 0L) };
      inline List& setAfterTime(int64_t afterTime) { DARABONBA_PTR_SET_VALUE(afterTime_, afterTime) };


      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline List& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline List& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline string getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, "") };
      inline List& setBeforeDate(string beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // beforeTime Field Functions 
      bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
      void deleteBeforeTime() { this->beforeTime_ = nullptr;};
      inline int64_t getBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, 0L) };
      inline List& setBeforeTime(int64_t beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline List& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline List& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // customIdentifier Field Functions 
      bool hasCustomIdentifier() const { return this->customIdentifier_ != nullptr;};
      void deleteCustomIdentifier() { this->customIdentifier_ = nullptr;};
      inline string getCustomIdentifier() const { DARABONBA_PTR_GET_DEFAULT(customIdentifier_, "") };
      inline List& setCustomIdentifier(string customIdentifier) { DARABONBA_PTR_SET_VALUE(customIdentifier_, customIdentifier) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline List& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline List& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // keyExportable Field Functions 
      bool hasKeyExportable() const { return this->keyExportable_ != nullptr;};
      void deleteKeyExportable() { this->keyExportable_ = nullptr;};
      inline bool getKeyExportable() const { DARABONBA_PTR_GET_DEFAULT(keyExportable_, false) };
      inline List& setKeyExportable(bool keyExportable) { DARABONBA_PTR_SET_VALUE(keyExportable_, keyExportable) };


      // organization Field Functions 
      bool hasOrganization() const { return this->organization_ != nullptr;};
      void deleteOrganization() { this->organization_ = nullptr;};
      inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
      inline List& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


      // organizationUnit Field Functions 
      bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
      void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
      inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
      inline List& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline List& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subjectDn Field Functions 
      bool hasSubjectDn() const { return this->subjectDn_ != nullptr;};
      void deleteSubjectDn() { this->subjectDn_ = nullptr;};
      inline string getSubjectDn() const { DARABONBA_PTR_GET_DEFAULT(subjectDn_, "") };
      inline List& setSubjectDn(string subjectDn) { DARABONBA_PTR_SET_VALUE(subjectDn_, subjectDn) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline List& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline List& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> afterDate_ {};
      shared_ptr<int64_t> afterTime_ {};
      shared_ptr<string> algorithm_ {};
      shared_ptr<string> aliasName_ {};
      shared_ptr<string> beforeDate_ {};
      shared_ptr<int64_t> beforeTime_ {};
      shared_ptr<string> certificateType_ {};
      shared_ptr<string> commonName_ {};
      shared_ptr<string> customIdentifier_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> identifier_ {};
      shared_ptr<bool> keyExportable_ {};
      shared_ptr<string> organization_ {};
      shared_ptr<string> organizationUnit_ {};
      shared_ptr<string> serialNumber_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> subjectDn_ {};
      shared_ptr<vector<string>> tags_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->list_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageCount_ == nullptr && this->requestId_ == nullptr
        && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCertResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListCertResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListCertResponseBody::List>) };
    inline vector<ListCertResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListCertResponseBody::List>) };
    inline ListCertResponseBody& setList(const vector<ListCertResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListCertResponseBody& setList(vector<ListCertResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCertResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCertResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline ListCertResponseBody& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCertResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<ListCertResponseBody::List>> list_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> showSize_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
