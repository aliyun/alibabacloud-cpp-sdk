// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUERYPROCESSORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUERYPROCESSORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateQueryProcessorResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateQueryProcessorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQueryProcessorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQueryProcessorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateQueryProcessorResponseBody() = default ;
    CreateQueryProcessorResponseBody(const CreateQueryProcessorResponseBody &) = default ;
    CreateQueryProcessorResponseBody(CreateQueryProcessorResponseBody &&) = default ;
    CreateQueryProcessorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQueryProcessorResponseBody() = default ;
    CreateQueryProcessorResponseBody& operator=(const CreateQueryProcessorResponseBody &) = default ;
    CreateQueryProcessorResponseBody& operator=(CreateQueryProcessorResponseBody &&) = default ;
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
    inline CreateQueryProcessorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateQueryProcessorResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateQueryProcessorResponseBodyResult) };
    inline CreateQueryProcessorResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateQueryProcessorResponseBodyResult) };
    inline CreateQueryProcessorResponseBody& setResult(const CreateQueryProcessorResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateQueryProcessorResponseBody& setResult(CreateQueryProcessorResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the query analysis rule.
    std::shared_ptr<CreateQueryProcessorResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
