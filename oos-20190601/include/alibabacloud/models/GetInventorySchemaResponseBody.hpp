// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInventorySchemaResponseBodySchemas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetInventorySchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
    };
    GetInventorySchemaResponseBody() = default ;
    GetInventorySchemaResponseBody(const GetInventorySchemaResponseBody &) = default ;
    GetInventorySchemaResponseBody(GetInventorySchemaResponseBody &&) = default ;
    GetInventorySchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySchemaResponseBody() = default ;
    GetInventorySchemaResponseBody& operator=(const GetInventorySchemaResponseBody &) = default ;
    GetInventorySchemaResponseBody& operator=(GetInventorySchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->schemas_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline GetInventorySchemaResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetInventorySchemaResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInventorySchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<GetInventorySchemaResponseBodySchemas> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<GetInventorySchemaResponseBodySchemas>) };
    inline vector<GetInventorySchemaResponseBodySchemas> schemas() { DARABONBA_PTR_GET(schemas_, vector<GetInventorySchemaResponseBodySchemas>) };
    inline GetInventorySchemaResponseBody& setSchemas(const vector<GetInventorySchemaResponseBodySchemas> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline GetInventorySchemaResponseBody& setSchemas(vector<GetInventorySchemaResponseBodySchemas> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


  protected:
    // The number of entries per page.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that was used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed configurations of the configuration list.
    std::shared_ptr<vector<GetInventorySchemaResponseBodySchemas>> schemas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
