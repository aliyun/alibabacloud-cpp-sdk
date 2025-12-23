// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEMERGEDTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEMERGEDTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateMergedTableResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GenerateMergedTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateMergedTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateMergedTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GenerateMergedTableResponseBody() = default ;
    GenerateMergedTableResponseBody(const GenerateMergedTableResponseBody &) = default ;
    GenerateMergedTableResponseBody(GenerateMergedTableResponseBody &&) = default ;
    GenerateMergedTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateMergedTableResponseBody() = default ;
    GenerateMergedTableResponseBody& operator=(const GenerateMergedTableResponseBody &) = default ;
    GenerateMergedTableResponseBody& operator=(GenerateMergedTableResponseBody &&) = default ;
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
    inline GenerateMergedTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GenerateMergedTableResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GenerateMergedTableResponseBodyResult) };
    inline GenerateMergedTableResponseBodyResult result() { DARABONBA_PTR_GET(result_, GenerateMergedTableResponseBodyResult) };
    inline GenerateMergedTableResponseBody& setResult(const GenerateMergedTableResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GenerateMergedTableResponseBody& setResult(GenerateMergedTableResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response parameters.
    std::shared_ptr<GenerateMergedTableResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
