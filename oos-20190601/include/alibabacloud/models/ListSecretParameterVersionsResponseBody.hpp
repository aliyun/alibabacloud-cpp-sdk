// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETPARAMETERVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETPARAMETERVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecretParameterVersionsResponseBodyParameterVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListSecretParameterVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretParameterVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParameterVersions, parameterVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretParameterVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParameterVersions, parameterVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListSecretParameterVersionsResponseBody() = default ;
    ListSecretParameterVersionsResponseBody(const ListSecretParameterVersionsResponseBody &) = default ;
    ListSecretParameterVersionsResponseBody(ListSecretParameterVersionsResponseBody &&) = default ;
    ListSecretParameterVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretParameterVersionsResponseBody() = default ;
    ListSecretParameterVersionsResponseBody& operator=(const ListSecretParameterVersionsResponseBody &) = default ;
    ListSecretParameterVersionsResponseBody& operator=(ListSecretParameterVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdBy_ == nullptr
        && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->maxResults_ == nullptr && return this->name_ == nullptr
        && return this->nextToken_ == nullptr && return this->parameterVersions_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->type_ == nullptr; };
    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ListSecretParameterVersionsResponseBody& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline ListSecretParameterVersionsResponseBody& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSecretParameterVersionsResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSecretParameterVersionsResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecretParameterVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSecretParameterVersionsResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecretParameterVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parameterVersions Field Functions 
    bool hasParameterVersions() const { return this->parameterVersions_ != nullptr;};
    void deleteParameterVersions() { this->parameterVersions_ = nullptr;};
    inline const vector<ListSecretParameterVersionsResponseBodyParameterVersions> & parameterVersions() const { DARABONBA_PTR_GET_CONST(parameterVersions_, vector<ListSecretParameterVersionsResponseBodyParameterVersions>) };
    inline vector<ListSecretParameterVersionsResponseBodyParameterVersions> parameterVersions() { DARABONBA_PTR_GET(parameterVersions_, vector<ListSecretParameterVersionsResponseBodyParameterVersions>) };
    inline ListSecretParameterVersionsResponseBody& setParameterVersions(const vector<ListSecretParameterVersionsResponseBodyParameterVersions> & parameterVersions) { DARABONBA_PTR_SET_VALUE(parameterVersions_, parameterVersions) };
    inline ListSecretParameterVersionsResponseBody& setParameterVersions(vector<ListSecretParameterVersionsResponseBodyParameterVersions> && parameterVersions) { DARABONBA_PTR_SET_RVALUE(parameterVersions_, parameterVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretParameterVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecretParameterVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSecretParameterVersionsResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The user who created the encryption parameter.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The time when the encryption parameter was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the encryption parameter.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the encryption parameter.
    std::shared_ptr<string> id_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The name of the encryption parameter.
    std::shared_ptr<string> name_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the version of the encryption parameter.
    std::shared_ptr<vector<ListSecretParameterVersionsResponseBodyParameterVersions>> parameterVersions_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The type of the encryption parameter.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
