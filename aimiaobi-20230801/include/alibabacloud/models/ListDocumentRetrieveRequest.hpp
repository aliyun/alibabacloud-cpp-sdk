// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTRETRIEVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTRETRIEVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDocumentRetrieveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentRetrieveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(ElementScope, elementScope_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Office, office_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SubContentType, subContentType_);
      DARABONBA_PTR_TO_JSON(SubjectClassify, subjectClassify_);
      DARABONBA_PTR_TO_JSON(WordSize, wordSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentRetrieveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(ElementScope, elementScope_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Office, office_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SubContentType, subContentType_);
      DARABONBA_PTR_FROM_JSON(SubjectClassify, subjectClassify_);
      DARABONBA_PTR_FROM_JSON(WordSize, wordSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDocumentRetrieveRequest() = default ;
    ListDocumentRetrieveRequest(const ListDocumentRetrieveRequest &) = default ;
    ListDocumentRetrieveRequest(ListDocumentRetrieveRequest &&) = default ;
    ListDocumentRetrieveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentRetrieveRequest() = default ;
    ListDocumentRetrieveRequest& operator=(const ListDocumentRetrieveRequest &) = default ;
    ListDocumentRetrieveRequest& operator=(ListDocumentRetrieveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->elementScope_ == nullptr && return this->endDate_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->office_ == nullptr
        && return this->query_ == nullptr && return this->region_ == nullptr && return this->source_ == nullptr && return this->startDate_ == nullptr && return this->subContentType_ == nullptr
        && return this->subjectClassify_ == nullptr && return this->wordSize_ == nullptr && return this->workspaceId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListDocumentRetrieveRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // elementScope Field Functions 
    bool hasElementScope() const { return this->elementScope_ != nullptr;};
    void deleteElementScope() { this->elementScope_ = nullptr;};
    inline string elementScope() const { DARABONBA_PTR_GET_DEFAULT(elementScope_, "") };
    inline ListDocumentRetrieveRequest& setElementScope(string elementScope) { DARABONBA_PTR_SET_VALUE(elementScope_, elementScope) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListDocumentRetrieveRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDocumentRetrieveRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDocumentRetrieveRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // office Field Functions 
    bool hasOffice() const { return this->office_ != nullptr;};
    void deleteOffice() { this->office_ = nullptr;};
    inline string office() const { DARABONBA_PTR_GET_DEFAULT(office_, "") };
    inline ListDocumentRetrieveRequest& setOffice(string office) { DARABONBA_PTR_SET_VALUE(office_, office) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListDocumentRetrieveRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListDocumentRetrieveRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListDocumentRetrieveRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListDocumentRetrieveRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subContentType Field Functions 
    bool hasSubContentType() const { return this->subContentType_ != nullptr;};
    void deleteSubContentType() { this->subContentType_ = nullptr;};
    inline string subContentType() const { DARABONBA_PTR_GET_DEFAULT(subContentType_, "") };
    inline ListDocumentRetrieveRequest& setSubContentType(string subContentType) { DARABONBA_PTR_SET_VALUE(subContentType_, subContentType) };


    // subjectClassify Field Functions 
    bool hasSubjectClassify() const { return this->subjectClassify_ != nullptr;};
    void deleteSubjectClassify() { this->subjectClassify_ = nullptr;};
    inline string subjectClassify() const { DARABONBA_PTR_GET_DEFAULT(subjectClassify_, "") };
    inline ListDocumentRetrieveRequest& setSubjectClassify(string subjectClassify) { DARABONBA_PTR_SET_VALUE(subjectClassify_, subjectClassify) };


    // wordSize Field Functions 
    bool hasWordSize() const { return this->wordSize_ != nullptr;};
    void deleteWordSize() { this->wordSize_ = nullptr;};
    inline string wordSize() const { DARABONBA_PTR_GET_DEFAULT(wordSize_, "") };
    inline ListDocumentRetrieveRequest& setWordSize(string wordSize) { DARABONBA_PTR_SET_VALUE(wordSize_, wordSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDocumentRetrieveRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> elementScope_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> office_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> subContentType_ = nullptr;
    std::shared_ptr<string> subjectClassify_ = nullptr;
    std::shared_ptr<string> wordSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
