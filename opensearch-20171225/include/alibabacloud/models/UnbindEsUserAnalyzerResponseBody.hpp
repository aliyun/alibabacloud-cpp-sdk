// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDESUSERANALYZERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDESUSERANALYZERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UnbindESUserAnalyzerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindESUserAnalyzerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindESUserAnalyzerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(result, result_);
    };
    UnbindESUserAnalyzerResponseBody() = default ;
    UnbindESUserAnalyzerResponseBody(const UnbindESUserAnalyzerResponseBody &) = default ;
    UnbindESUserAnalyzerResponseBody(UnbindESUserAnalyzerResponseBody &&) = default ;
    UnbindESUserAnalyzerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindESUserAnalyzerResponseBody() = default ;
    UnbindESUserAnalyzerResponseBody& operator=(const UnbindESUserAnalyzerResponseBody &) = default ;
    UnbindESUserAnalyzerResponseBody& operator=(UnbindESUserAnalyzerResponseBody &&) = default ;
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
    inline UnbindESUserAnalyzerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & result() const { DARABONBA_GET(result_) };
    Darabonba::Json & result() { DARABONBA_GET(result_) };
    inline UnbindESUserAnalyzerResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline UnbindESUserAnalyzerResponseBody& setResult(Darabonba::Json & result) { DARABONBA_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The custom analyzer.
    Darabonba::Json result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
