// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterNamesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListClusterNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListClusterNamesResponseBody() = default ;
    ListClusterNamesResponseBody(const ListClusterNamesResponseBody &) = default ;
    ListClusterNamesResponseBody(ListClusterNamesResponseBody &&) = default ;
    ListClusterNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterNamesResponseBody() = default ;
    ListClusterNamesResponseBody& operator=(const ListClusterNamesResponseBody &) = default ;
    ListClusterNamesResponseBody& operator=(ListClusterNamesResponseBody &&) = default ;
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
    inline ListClusterNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListClusterNamesResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ListClusterNamesResponseBodyResult) };
    inline ListClusterNamesResponseBodyResult result() { DARABONBA_PTR_GET(result_, ListClusterNamesResponseBodyResult) };
    inline ListClusterNamesResponseBody& setResult(const ListClusterNamesResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListClusterNamesResponseBody& setResult(ListClusterNamesResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // The result set.
    std::shared_ptr<ListClusterNamesResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
