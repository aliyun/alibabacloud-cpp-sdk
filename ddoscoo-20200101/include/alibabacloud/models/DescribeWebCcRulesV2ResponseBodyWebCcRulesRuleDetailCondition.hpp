// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILCONDITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAILCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentList, contentList_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
      DARABONBA_PTR_TO_JSON(MatchMethod, matchMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
      DARABONBA_PTR_FROM_JSON(MatchMethod, matchMethod_);
    };
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition &&) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& operator=(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& operator=(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->contentList_ == nullptr && return this->field_ == nullptr && return this->headerName_ == nullptr && return this->matchMethod_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentList Field Functions 
    bool hasContentList() const { return this->contentList_ != nullptr;};
    void deleteContentList() { this->contentList_ = nullptr;};
    inline string contentList() const { DARABONBA_PTR_GET_DEFAULT(contentList_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& setContentList(string contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // headerName Field Functions 
    bool hasHeaderName() const { return this->headerName_ != nullptr;};
    void deleteHeaderName() { this->headerName_ = nullptr;};
    inline string headerName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


    // matchMethod Field Functions 
    bool hasMatchMethod() const { return this->matchMethod_ != nullptr;};
    void deleteMatchMethod() { this->matchMethod_ = nullptr;};
    inline string matchMethod() const { DARABONBA_PTR_GET_DEFAULT(matchMethod_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition& setMatchMethod(string matchMethod) { DARABONBA_PTR_SET_VALUE(matchMethod_, matchMethod) };


  protected:
    // The match content.
    std::shared_ptr<string> content_ = nullptr;
    // The match content when the match method is Equals to One of Multiple Values.
    std::shared_ptr<string> contentList_ = nullptr;
    // The match field.
    std::shared_ptr<string> field_ = nullptr;
    // The custom HTTP request header.
    // 
    // >  This parameter takes effect only when **Field** is set to **header**.
    std::shared_ptr<string> headerName_ = nullptr;
    // The match method.
    std::shared_ptr<string> matchMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
