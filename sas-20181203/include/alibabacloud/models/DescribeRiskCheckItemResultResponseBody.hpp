// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKITEMRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKITEMRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRiskCheckItemResultResponseBodyPageContentResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckItemResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckItemResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageContentResource, pageContentResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckItemResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageContentResource, pageContentResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskCheckItemResultResponseBody() = default ;
    DescribeRiskCheckItemResultResponseBody(const DescribeRiskCheckItemResultResponseBody &) = default ;
    DescribeRiskCheckItemResultResponseBody(DescribeRiskCheckItemResultResponseBody &&) = default ;
    DescribeRiskCheckItemResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckItemResultResponseBody() = default ;
    DescribeRiskCheckItemResultResponseBody& operator=(const DescribeRiskCheckItemResultResponseBody &) = default ;
    DescribeRiskCheckItemResultResponseBody& operator=(DescribeRiskCheckItemResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageContentResource_ == nullptr
        && return this->requestId_ == nullptr; };
    // pageContentResource Field Functions 
    bool hasPageContentResource() const { return this->pageContentResource_ != nullptr;};
    void deletePageContentResource() { this->pageContentResource_ = nullptr;};
    inline const DescribeRiskCheckItemResultResponseBodyPageContentResource & pageContentResource() const { DARABONBA_PTR_GET_CONST(pageContentResource_, DescribeRiskCheckItemResultResponseBodyPageContentResource) };
    inline DescribeRiskCheckItemResultResponseBodyPageContentResource pageContentResource() { DARABONBA_PTR_GET(pageContentResource_, DescribeRiskCheckItemResultResponseBodyPageContentResource) };
    inline DescribeRiskCheckItemResultResponseBody& setPageContentResource(const DescribeRiskCheckItemResultResponseBodyPageContentResource & pageContentResource) { DARABONBA_PTR_SET_VALUE(pageContentResource_, pageContentResource) };
    inline DescribeRiskCheckItemResultResponseBody& setPageContentResource(DescribeRiskCheckItemResultResponseBodyPageContentResource && pageContentResource) { DARABONBA_PTR_SET_RVALUE(pageContentResource_, pageContentResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskCheckItemResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeRiskCheckItemResultResponseBodyPageContentResource> pageContentResource_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
