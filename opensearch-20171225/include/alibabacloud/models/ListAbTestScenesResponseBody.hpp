// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABTESTSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABTESTSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListABTestScenesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListABTestScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListABTestScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListABTestScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListABTestScenesResponseBody() = default ;
    ListABTestScenesResponseBody(const ListABTestScenesResponseBody &) = default ;
    ListABTestScenesResponseBody(ListABTestScenesResponseBody &&) = default ;
    ListABTestScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListABTestScenesResponseBody() = default ;
    ListABTestScenesResponseBody& operator=(const ListABTestScenesResponseBody &) = default ;
    ListABTestScenesResponseBody& operator=(ListABTestScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListABTestScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListABTestScenesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListABTestScenesResponseBodyResult>) };
    inline vector<ListABTestScenesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListABTestScenesResponseBodyResult>) };
    inline ListABTestScenesResponseBody& setResult(const vector<ListABTestScenesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListABTestScenesResponseBody& setResult(vector<ListABTestScenesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the test scenario.
    // 
    // For more information, see [ABTestScene](https://help.aliyun.com/document_detail/173618.html).
    std::shared_ptr<vector<ListABTestScenesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
