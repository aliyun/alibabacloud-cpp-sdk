// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMDOMAINSAMPLERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMDOMAINSAMPLERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomDomainSampleRateResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeCustomDomainSampleRateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomDomainSampleRateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomDomainSampleRateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomDomainSampleRateResponseBody() = default ;
    DescribeCustomDomainSampleRateResponseBody(const DescribeCustomDomainSampleRateResponseBody &) = default ;
    DescribeCustomDomainSampleRateResponseBody(DescribeCustomDomainSampleRateResponseBody &&) = default ;
    DescribeCustomDomainSampleRateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomDomainSampleRateResponseBody() = default ;
    DescribeCustomDomainSampleRateResponseBody& operator=(const DescribeCustomDomainSampleRateResponseBody &) = default ;
    DescribeCustomDomainSampleRateResponseBody& operator=(DescribeCustomDomainSampleRateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeCustomDomainSampleRateResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, DescribeCustomDomainSampleRateResponseBodyContent) };
    inline DescribeCustomDomainSampleRateResponseBodyContent content() { DARABONBA_PTR_GET(content_, DescribeCustomDomainSampleRateResponseBodyContent) };
    inline DescribeCustomDomainSampleRateResponseBody& setContent(const DescribeCustomDomainSampleRateResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeCustomDomainSampleRateResponseBody& setContent(DescribeCustomDomainSampleRateResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomDomainSampleRateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeCustomDomainSampleRateResponseBodyContent> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
