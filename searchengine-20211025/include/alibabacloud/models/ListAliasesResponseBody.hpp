// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAliasesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListAliasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListAliasesResponseBody() = default ;
    ListAliasesResponseBody(const ListAliasesResponseBody &) = default ;
    ListAliasesResponseBody(ListAliasesResponseBody &&) = default ;
    ListAliasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesResponseBody() = default ;
    ListAliasesResponseBody& operator=(const ListAliasesResponseBody &) = default ;
    ListAliasesResponseBody& operator=(ListAliasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAliasesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAliasesResponseBodyResult>) };
    inline vector<ListAliasesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListAliasesResponseBodyResult>) };
    inline ListAliasesResponseBody& setResult(const vector<ListAliasesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAliasesResponseBody& setResult(vector<ListAliasesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // List
    std::shared_ptr<vector<ListAliasesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
