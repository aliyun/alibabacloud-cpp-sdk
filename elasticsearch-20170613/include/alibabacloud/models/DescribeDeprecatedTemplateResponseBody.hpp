// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPRECATEDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPRECATEDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDeprecatedTemplateResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDeprecatedTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeprecatedTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeprecatedTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeDeprecatedTemplateResponseBody() = default ;
    DescribeDeprecatedTemplateResponseBody(const DescribeDeprecatedTemplateResponseBody &) = default ;
    DescribeDeprecatedTemplateResponseBody(DescribeDeprecatedTemplateResponseBody &&) = default ;
    DescribeDeprecatedTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeprecatedTemplateResponseBody() = default ;
    DescribeDeprecatedTemplateResponseBody& operator=(const DescribeDeprecatedTemplateResponseBody &) = default ;
    DescribeDeprecatedTemplateResponseBody& operator=(DescribeDeprecatedTemplateResponseBody &&) = default ;
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
    inline DescribeDeprecatedTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeDeprecatedTemplateResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, DescribeDeprecatedTemplateResponseBodyResult) };
    inline DescribeDeprecatedTemplateResponseBodyResult result() { DARABONBA_PTR_GET(result_, DescribeDeprecatedTemplateResponseBodyResult) };
    inline DescribeDeprecatedTemplateResponseBody& setResult(const DescribeDeprecatedTemplateResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeDeprecatedTemplateResponseBody& setResult(DescribeDeprecatedTemplateResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeDeprecatedTemplateResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
