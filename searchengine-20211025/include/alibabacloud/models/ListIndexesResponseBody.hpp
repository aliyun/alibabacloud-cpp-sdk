// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINDEXESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIndexesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListIndexesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIndexesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListIndexesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListIndexesResponseBody() = default ;
    ListIndexesResponseBody(const ListIndexesResponseBody &) = default ;
    ListIndexesResponseBody(ListIndexesResponseBody &&) = default ;
    ListIndexesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIndexesResponseBody() = default ;
    ListIndexesResponseBody& operator=(const ListIndexesResponseBody &) = default ;
    ListIndexesResponseBody& operator=(ListIndexesResponseBody &&) = default ;
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
    inline ListIndexesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListIndexesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListIndexesResponseBodyResult>) };
    inline vector<ListIndexesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListIndexesResponseBodyResult>) };
    inline ListIndexesResponseBody& setResult(const vector<ListIndexesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListIndexesResponseBody& setResult(vector<ListIndexesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of indexes.
    std::shared_ptr<vector<ListIndexesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
