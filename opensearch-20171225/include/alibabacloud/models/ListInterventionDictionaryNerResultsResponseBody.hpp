// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInterventionDictionaryNerResultsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryNerResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryNerResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryNerResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListInterventionDictionaryNerResultsResponseBody() = default ;
    ListInterventionDictionaryNerResultsResponseBody(const ListInterventionDictionaryNerResultsResponseBody &) = default ;
    ListInterventionDictionaryNerResultsResponseBody(ListInterventionDictionaryNerResultsResponseBody &&) = default ;
    ListInterventionDictionaryNerResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryNerResultsResponseBody() = default ;
    ListInterventionDictionaryNerResultsResponseBody& operator=(const ListInterventionDictionaryNerResultsResponseBody &) = default ;
    ListInterventionDictionaryNerResultsResponseBody& operator=(ListInterventionDictionaryNerResultsResponseBody &&) = default ;
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
    inline ListInterventionDictionaryNerResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInterventionDictionaryNerResultsResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInterventionDictionaryNerResultsResponseBodyResult>) };
    inline vector<ListInterventionDictionaryNerResultsResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ListInterventionDictionaryNerResultsResponseBodyResult>) };
    inline ListInterventionDictionaryNerResultsResponseBody& setResult(const vector<ListInterventionDictionaryNerResultsResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInterventionDictionaryNerResultsResponseBody& setResult(vector<ListInterventionDictionaryNerResultsResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The NER result.
    // 
    // For more information, see [InterventionDictionaryEntry](https://help.aliyun.com/document_detail/173606.html).
    std::shared_ptr<vector<ListInterventionDictionaryNerResultsResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
