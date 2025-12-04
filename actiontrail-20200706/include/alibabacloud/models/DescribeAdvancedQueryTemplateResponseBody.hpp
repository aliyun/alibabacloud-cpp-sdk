// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVANCEDQUERYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAdvancedQueryTemplateResponseBodyTemplatePage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeAdvancedQueryTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvancedQueryTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplatePage, templatePage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvancedQueryTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplatePage, templatePage_);
    };
    DescribeAdvancedQueryTemplateResponseBody() = default ;
    DescribeAdvancedQueryTemplateResponseBody(const DescribeAdvancedQueryTemplateResponseBody &) = default ;
    DescribeAdvancedQueryTemplateResponseBody(DescribeAdvancedQueryTemplateResponseBody &&) = default ;
    DescribeAdvancedQueryTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvancedQueryTemplateResponseBody() = default ;
    DescribeAdvancedQueryTemplateResponseBody& operator=(const DescribeAdvancedQueryTemplateResponseBody &) = default ;
    DescribeAdvancedQueryTemplateResponseBody& operator=(DescribeAdvancedQueryTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->templatePage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdvancedQueryTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templatePage Field Functions 
    bool hasTemplatePage() const { return this->templatePage_ != nullptr;};
    void deleteTemplatePage() { this->templatePage_ = nullptr;};
    inline const DescribeAdvancedQueryTemplateResponseBodyTemplatePage & templatePage() const { DARABONBA_PTR_GET_CONST(templatePage_, DescribeAdvancedQueryTemplateResponseBodyTemplatePage) };
    inline DescribeAdvancedQueryTemplateResponseBodyTemplatePage templatePage() { DARABONBA_PTR_GET(templatePage_, DescribeAdvancedQueryTemplateResponseBodyTemplatePage) };
    inline DescribeAdvancedQueryTemplateResponseBody& setTemplatePage(const DescribeAdvancedQueryTemplateResponseBodyTemplatePage & templatePage) { DARABONBA_PTR_SET_VALUE(templatePage_, templatePage) };
    inline DescribeAdvancedQueryTemplateResponseBody& setTemplatePage(DescribeAdvancedQueryTemplateResponseBodyTemplatePage && templatePage) { DARABONBA_PTR_SET_RVALUE(templatePage_, templatePage) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeAdvancedQueryTemplateResponseBodyTemplatePage> templatePage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
