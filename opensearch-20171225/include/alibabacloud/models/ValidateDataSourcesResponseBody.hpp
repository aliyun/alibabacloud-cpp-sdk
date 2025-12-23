// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateDataSourcesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ValidateDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ValidateDataSourcesResponseBody() = default ;
    ValidateDataSourcesResponseBody(const ValidateDataSourcesResponseBody &) = default ;
    ValidateDataSourcesResponseBody(ValidateDataSourcesResponseBody &&) = default ;
    ValidateDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDataSourcesResponseBody() = default ;
    ValidateDataSourcesResponseBody& operator=(const ValidateDataSourcesResponseBody &) = default ;
    ValidateDataSourcesResponseBody& operator=(ValidateDataSourcesResponseBody &&) = default ;
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
    inline ValidateDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ValidateDataSourcesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ValidateDataSourcesResponseBodyResult>) };
    inline vector<ValidateDataSourcesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ValidateDataSourcesResponseBodyResult>) };
    inline ValidateDataSourcesResponseBody& setResult(const vector<ValidateDataSourcesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ValidateDataSourcesResponseBody& setResult(vector<ValidateDataSourcesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The result returned.
    std::shared_ptr<vector<ValidateDataSourcesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
