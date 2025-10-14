// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOROPTIONSJSONASSERTIONSASSERTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORLISTRESPONSEBODYSITEMONITORSSITEMONITOROPTIONSJSONASSERTIONSASSERTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& obj) { 
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(property, property_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& obj) { 
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(property, property_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions &&) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions() = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& operator=(const DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions &) = default ;
    DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& operator=(DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr
        && return this->property_ == nullptr && return this->target_ == nullptr && return this->type_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSiteMonitorListResponseBodySiteMonitorsSiteMonitorOptionsJsonAssertionsAssertions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The comparison operator of the assertion. Valid values:
    // 
    // *   contains: contains
    // *   doesNotContain: does not contain
    // *   matches: matches regular expressions
    // *   doesNotMatch: does not match regular expressions
    // *   is: equal to a numeric value or matches a character
    // *   isNot: not equal to
    // *   lessThan: less than
    // *   moreThan: greater than
    std::shared_ptr<string> operator_ = nullptr;
    // The parsing path of the assertion.
    // 
    // *   If the assertion type is `body_json`, the path is `json path`.
    // *   If the assertion type is `body_xml`, the path is `xml path`.
    std::shared_ptr<string> property_ = nullptr;
    // The numeric value or character used for matching.
    std::shared_ptr<string> target_ = nullptr;
    // The assertion type. Valid values:
    // 
    // *   response_time: checks whether the response time meets expectations.
    // *   status_code: checks whether the HTTP status code meets expectations.
    // *   header: checks whether the fields in the response header meet expectations.
    // *   body_text: checks whether the content in the response body meets expectations by using text matching.
    // *   body_json: checks whether the content in the response body meets expectations by using JSON parsing (JSONPath).
    // *   body_xml: checks whether the content in the response body meets expectations by using XML parsing (XPath).
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
