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
        && this->elementScope_ == nullptr && this->endDate_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->office_ == nullptr
        && this->query_ == nullptr && this->region_ == nullptr && this->source_ == nullptr && this->startDate_ == nullptr && this->subContentType_ == nullptr
        && this->subjectClassify_ == nullptr && this->wordSize_ == nullptr && this->workspaceId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline ListDocumentRetrieveRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // elementScope Field Functions 
    bool hasElementScope() const { return this->elementScope_ != nullptr;};
    void deleteElementScope() { this->elementScope_ = nullptr;};
    inline string getElementScope() const { DARABONBA_PTR_GET_DEFAULT(elementScope_, "") };
    inline ListDocumentRetrieveRequest& setElementScope(string elementScope) { DARABONBA_PTR_SET_VALUE(elementScope_, elementScope) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListDocumentRetrieveRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDocumentRetrieveRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDocumentRetrieveRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // office Field Functions 
    bool hasOffice() const { return this->office_ != nullptr;};
    void deleteOffice() { this->office_ = nullptr;};
    inline string getOffice() const { DARABONBA_PTR_GET_DEFAULT(office_, "") };
    inline ListDocumentRetrieveRequest& setOffice(string office) { DARABONBA_PTR_SET_VALUE(office_, office) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListDocumentRetrieveRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListDocumentRetrieveRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListDocumentRetrieveRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListDocumentRetrieveRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subContentType Field Functions 
    bool hasSubContentType() const { return this->subContentType_ != nullptr;};
    void deleteSubContentType() { this->subContentType_ = nullptr;};
    inline string getSubContentType() const { DARABONBA_PTR_GET_DEFAULT(subContentType_, "") };
    inline ListDocumentRetrieveRequest& setSubContentType(string subContentType) { DARABONBA_PTR_SET_VALUE(subContentType_, subContentType) };


    // subjectClassify Field Functions 
    bool hasSubjectClassify() const { return this->subjectClassify_ != nullptr;};
    void deleteSubjectClassify() { this->subjectClassify_ = nullptr;};
    inline string getSubjectClassify() const { DARABONBA_PTR_GET_DEFAULT(subjectClassify_, "") };
    inline ListDocumentRetrieveRequest& setSubjectClassify(string subjectClassify) { DARABONBA_PTR_SET_VALUE(subjectClassify_, subjectClassify) };


    // wordSize Field Functions 
    bool hasWordSize() const { return this->wordSize_ != nullptr;};
    void deleteWordSize() { this->wordSize_ = nullptr;};
    inline string getWordSize() const { DARABONBA_PTR_GET_DEFAULT(wordSize_, "") };
    inline ListDocumentRetrieveRequest& setWordSize(string wordSize) { DARABONBA_PTR_SET_VALUE(wordSize_, wordSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDocumentRetrieveRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Document type. Valid values: 0 (default): All types. 1: Government documents. 2: Important articles. 5: Policy interpretation. 6: Legal provisions. 7: Regulations and rules. 8: General Secretary.
    shared_ptr<string> contentType_ {};
    // Search scope. Valid values: 1: Title only. 0: Full text (title and content). Default is 0.
    shared_ptr<string> elementScope_ {};
    // End date of issuance in yyyy-MM-dd format.
    shared_ptr<string> endDate_ {};
    // Maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // Issuing agency.
    shared_ptr<string> office_ {};
    // Search condition.
    shared_ptr<string> query_ {};
    // Region. Enter a province or city, such as Jilin Province or Beijing Municipality.
    shared_ptr<string> region_ {};
    // Source. Valid values: 0: Internal (within your organization). 1: External (outside your organization).
    shared_ptr<string> source_ {};
    // Start date of issuance in yyyy-MM-dd format.
    shared_ptr<string> startDate_ {};
    // - Secondary classification of document type.
    // 
    //   - When the document type is an official document: -1: Other; 0: Resolution; 1: Decision; 2: Order; 3: Bulletin; 4: Public Notice; 5: Notice; 6: Opinion; 7: Notification; 8: Circular; 9: Report; 10: Request for Instructions; 11: Approval; 12: Motion; 13: Letter
    // 
    //   - 14: Summary
    // 
    //   - When the article type is important articles: 1: important commentary 2: important theory 3: other articles
    // 
    //   - When the document genre is rules and regulations: 3: Administrative regulations 4: Supervisory regulations 5: Local regulations 7: Departmental rules 8: Others 9: Party constitution and regulations
    // 
    //   - When the article genre is a legal provision: 1: Constitution 2: Law 6: Judicial Interpretation
    shared_ptr<string> subContentType_ {};
    // Supported classifications:
    // 
    // | Level 1 category                                                        | Level 2 category                                                                                                                                                                                                                                  |
    // | ----------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
    // | National defense and international cooperation                          | National defense. Foreign affairs. Military affairs. Work related to Hong Kong, Macao, Taiwan, and overseas Chinese.                                                                                                                              |
    // | Comprehensive administration                                            | The 20th National Congress of the Communist Party of China. Government transparency and supervision. Joint administration. Party building. Conferences and proposals. Government document management. Other administrative matters.               |
    // | State Council organizational structure                                  | State Council. General Office of the State Council. State Council agencies.                                                                                                                                                                       |
    // | Administrative and market regulation                                    | Administrative regulation. Credit regulation. Product quality supervision. Work safety supervision. Market regulation.                                                                                                                            |
    // | Economic management                                                     | National economy. Market economy. Economic system reform. State-owned asset supervision.                                                                                                                                                          |
    // | Finance, banking, commerce, and customs                                 | Finance. Banking. Auditing. Commerce. Customs.                                                                                                                                                                                                    |
    // | Personnel and social security                                           | Personnel work. Population and family planning. Work related to women and children. Poverty alleviation. Disaster reduction and relief. Public services. Social welfare and assistance. Preferential treatment and resettlement. Social security. |
    // | Public security and social management                                   | Public security. Safety. Justice. Fire control. Ethnic affairs. Religion.                                                                                                                                                                         |
    // | Science, education, culture, and sports                                 | Culture. Scientific and technological innovation. Education. Intellectual property. Press and publishing. Radio, television, and the Internet. Sports. Tourism.                                                                                   |
    // | Healthcare                                                              | Health. Medical care. Veterinary medicine.                                                                                                                                                                                                        |
    // | Urban-rural development and industrial growth                           | Urban and rural development. Industry. Transportation.                                                                                                                                                                                            |
    // | Natural resources and environmental protection                          | Land and energy resources. Civil engineering. Meteorology. Environmental protection.                                                                                                                                                              |
    // | Agriculture, forestry, water resources, fisheries, and animal husbandry | Agriculture. Forestry. Water resources. Fisheries. Animal husbandry.                                                                                                                                                                              |
    // | Others                                                                  | Others.                                                                                                                                                                                                                                           |
    shared_ptr<string> subjectClassify_ {};
    // Document number.
    shared_ptr<string> wordSize_ {};
    // Unique identifier of the Model Studio workspace. For more information, see [Get workspaceId](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
