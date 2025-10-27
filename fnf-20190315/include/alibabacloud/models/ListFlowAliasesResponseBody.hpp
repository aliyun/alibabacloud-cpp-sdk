// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFlowAliasesResponseBodyAliases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowAliasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowAliasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aliases, aliases_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowAliasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFlowAliasesResponseBody() = default ;
    ListFlowAliasesResponseBody(const ListFlowAliasesResponseBody &) = default ;
    ListFlowAliasesResponseBody(ListFlowAliasesResponseBody &&) = default ;
    ListFlowAliasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowAliasesResponseBody() = default ;
    ListFlowAliasesResponseBody& operator=(const ListFlowAliasesResponseBody &) = default ;
    ListFlowAliasesResponseBody& operator=(ListFlowAliasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliases_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const vector<ListFlowAliasesResponseBodyAliases> & aliases() const { DARABONBA_PTR_GET_CONST(aliases_, vector<ListFlowAliasesResponseBodyAliases>) };
    inline vector<ListFlowAliasesResponseBodyAliases> aliases() { DARABONBA_PTR_GET(aliases_, vector<ListFlowAliasesResponseBodyAliases>) };
    inline ListFlowAliasesResponseBody& setAliases(const vector<ListFlowAliasesResponseBodyAliases> & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline ListFlowAliasesResponseBody& setAliases(vector<ListFlowAliasesResponseBodyAliases> && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFlowAliasesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlowAliasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListFlowAliasesResponseBodyAliases>> aliases_ = nullptr;
    // list token
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
