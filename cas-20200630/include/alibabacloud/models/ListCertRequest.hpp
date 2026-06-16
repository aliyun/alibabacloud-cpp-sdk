// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceUuid, instanceUuid_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCertRequest() = default ;
    ListCertRequest(const ListCertRequest &) = default ;
    ListCertRequest(ListCertRequest &&) = default ;
    ListCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertRequest() = default ;
    ListCertRequest& operator=(const ListCertRequest &) = default ;
    ListCertRequest& operator=(ListCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->beforeDate_ == nullptr && this->currentPage_ == nullptr && this->instanceUuid_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->parentIdentifier_ == nullptr && this->showSize_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline string getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, "") };
    inline ListCertRequest& setAfterDate(string afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline string getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, "") };
    inline ListCertRequest& setBeforeDate(string beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCertRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceUuid Field Functions 
    bool hasInstanceUuid() const { return this->instanceUuid_ != nullptr;};
    void deleteInstanceUuid() { this->instanceUuid_ = nullptr;};
    inline string getInstanceUuid() const { DARABONBA_PTR_GET_DEFAULT(instanceUuid_, "") };
    inline ListCertRequest& setInstanceUuid(string instanceUuid) { DARABONBA_PTR_SET_VALUE(instanceUuid_, instanceUuid) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCertRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCertRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline ListCertRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCertRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCertRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCertRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Filters certificates modified after this date.
    shared_ptr<string> afterDate_ {};
    // Filters certificates modified before this date.
    shared_ptr<string> beforeDate_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The UUID of the instance.
    shared_ptr<string> instanceUuid_ {};
    // The maximum number of entries to return.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results. This is the NextToken value from a previous response. If unspecified, the first page is returned.
    shared_ptr<string> nextToken_ {};
    // The identifier of the intermediate CA that issued the certificate.
    shared_ptr<string> parentIdentifier_ {};
    // The page size. Default value: 50.
    shared_ptr<int32_t> showSize_ {};
    // The status of the certificate. Valid values:
    // 
    // - ISSUE: Active
    // 
    // - REVOKE: Revoked
    shared_ptr<string> status_ {};
    // The certificate type. Valid values:
    // 
    // - SERVER: Server certificate
    // 
    // - CLIENT: Client certificate
    // 
    // - END_ENTITY: End-entity certificate
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
