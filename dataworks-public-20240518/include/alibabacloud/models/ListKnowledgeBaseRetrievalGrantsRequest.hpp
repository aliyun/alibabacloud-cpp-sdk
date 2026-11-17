// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASERETRIEVALGRANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASERETRIEVALGRANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListKnowledgeBaseRetrievalGrantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBaseRetrievalGrantsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBaseRetrievalGrantsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
    };
    ListKnowledgeBaseRetrievalGrantsRequest() = default ;
    ListKnowledgeBaseRetrievalGrantsRequest(const ListKnowledgeBaseRetrievalGrantsRequest &) = default ;
    ListKnowledgeBaseRetrievalGrantsRequest(ListKnowledgeBaseRetrievalGrantsRequest &&) = default ;
    ListKnowledgeBaseRetrievalGrantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBaseRetrievalGrantsRequest() = default ;
    ListKnowledgeBaseRetrievalGrantsRequest& operator=(const ListKnowledgeBaseRetrievalGrantsRequest &) = default ;
    ListKnowledgeBaseRetrievalGrantsRequest& operator=(ListKnowledgeBaseRetrievalGrantsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->principalType_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline ListKnowledgeBaseRetrievalGrantsRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeBaseRetrievalGrantsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListKnowledgeBaseRetrievalGrantsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline ListKnowledgeBaseRetrievalGrantsRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The number of entries per page. This parameter is optional. Default value: 20. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The cursor returned from the previous page. Do not specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The type of the principal that receives the share. This parameter is optional. Default value: USER. Only USER is supported in the initial release.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
