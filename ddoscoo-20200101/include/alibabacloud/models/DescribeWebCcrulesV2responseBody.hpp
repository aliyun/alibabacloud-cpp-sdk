// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCCRulesV2ResponseBodyWebCCRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebCCRules, webCCRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebCCRules, webCCRules_);
    };
    DescribeWebCCRulesV2ResponseBody() = default ;
    DescribeWebCCRulesV2ResponseBody(const DescribeWebCCRulesV2ResponseBody &) = default ;
    DescribeWebCCRulesV2ResponseBody(DescribeWebCCRulesV2ResponseBody &&) = default ;
    DescribeWebCCRulesV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBody() = default ;
    DescribeWebCCRulesV2ResponseBody& operator=(const DescribeWebCCRulesV2ResponseBody &) = default ;
    DescribeWebCCRulesV2ResponseBody& operator=(DescribeWebCCRulesV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->webCCRules_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebCCRulesV2ResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCCRulesV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeWebCCRulesV2ResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webCCRules Field Functions 
    bool hasWebCCRules() const { return this->webCCRules_ != nullptr;};
    void deleteWebCCRules() { this->webCCRules_ = nullptr;};
    inline const vector<DescribeWebCCRulesV2ResponseBodyWebCCRules> & webCCRules() const { DARABONBA_PTR_GET_CONST(webCCRules_, vector<DescribeWebCCRulesV2ResponseBodyWebCCRules>) };
    inline vector<DescribeWebCCRulesV2ResponseBodyWebCCRules> webCCRules() { DARABONBA_PTR_GET(webCCRules_, vector<DescribeWebCCRulesV2ResponseBodyWebCCRules>) };
    inline DescribeWebCCRulesV2ResponseBody& setWebCCRules(const vector<DescribeWebCCRulesV2ResponseBodyWebCCRules> & webCCRules) { DARABONBA_PTR_SET_VALUE(webCCRules_, webCCRules) };
    inline DescribeWebCCRulesV2ResponseBody& setWebCCRules(vector<DescribeWebCCRulesV2ResponseBodyWebCCRules> && webCCRules) { DARABONBA_PTR_SET_RVALUE(webCCRules_, webCCRules) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned custom frequency control rules.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The custom frequency control rules.
    std::shared_ptr<vector<DescribeWebCCRulesV2ResponseBodyWebCCRules>> webCCRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
