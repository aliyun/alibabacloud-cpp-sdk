// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceSpecsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstanceSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListInstanceSpecsResponseBody() = default ;
    ListInstanceSpecsResponseBody(const ListInstanceSpecsResponseBody &) = default ;
    ListInstanceSpecsResponseBody(ListInstanceSpecsResponseBody &&) = default ;
    ListInstanceSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceSpecsResponseBody() = default ;
    ListInstanceSpecsResponseBody& operator=(const ListInstanceSpecsResponseBody &) = default ;
    ListInstanceSpecsResponseBody& operator=(ListInstanceSpecsResponseBody &&) = default ;
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
    inline ListInstanceSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceSpecsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceSpecsResponseBodyResult>) };
    inline vector<ListInstanceSpecsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListInstanceSpecsResponseBodyResult>) };
    inline ListInstanceSpecsResponseBody& setResult(const vector<ListInstanceSpecsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceSpecsResponseBody& setResult(vector<ListInstanceSpecsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The instance types.
    std::shared_ptr<vector<ListInstanceSpecsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
