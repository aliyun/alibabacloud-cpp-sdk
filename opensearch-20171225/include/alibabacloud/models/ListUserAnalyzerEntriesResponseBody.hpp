// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERANALYZERENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERANALYZERENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListUserAnalyzerEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAnalyzerEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAnalyzerEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(result, result_);
    };
    ListUserAnalyzerEntriesResponseBody() = default ;
    ListUserAnalyzerEntriesResponseBody(const ListUserAnalyzerEntriesResponseBody &) = default ;
    ListUserAnalyzerEntriesResponseBody(ListUserAnalyzerEntriesResponseBody &&) = default ;
    ListUserAnalyzerEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAnalyzerEntriesResponseBody() = default ;
    ListUserAnalyzerEntriesResponseBody& operator=(const ListUserAnalyzerEntriesResponseBody &) = default ;
    ListUserAnalyzerEntriesResponseBody& operator=(ListUserAnalyzerEntriesResponseBody &&) = default ;
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
    inline ListUserAnalyzerEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & result() const { DARABONBA_GET(result_) };
    Darabonba::Json & result() { DARABONBA_GET(result_) };
    inline ListUserAnalyzerEntriesResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline ListUserAnalyzerEntriesResponseBody& setResult(Darabonba::Json & result) { DARABONBA_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The entries of the custom analyzer. For more information, see [UserAnalyzerEntry](https://www.alibabacloud.com/help/en/open-search/industry-algorithm-edition/useranalyzerentry).
    Darabonba::Json result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
