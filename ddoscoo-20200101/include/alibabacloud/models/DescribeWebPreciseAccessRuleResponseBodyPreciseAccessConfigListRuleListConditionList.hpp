// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODYPRECISEACCESSCONFIGLISTRULELISTCONDITIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODYPRECISEACCESSCONFIGLISTRULELISTCONDITIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentList, contentList_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
      DARABONBA_PTR_TO_JSON(MatchMethod, matchMethod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
      DARABONBA_PTR_FROM_JSON(MatchMethod, matchMethod_);
    };
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList() = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList(const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList &) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList(DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList &&) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList() = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& operator=(const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList &) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& operator=(DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList &&) = default ;
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
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentList Field Functions 
    bool hasContentList() const { return this->contentList_ != nullptr;};
    void deleteContentList() { this->contentList_ = nullptr;};
    inline const vector<string> & contentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<string>) };
    inline vector<string> contentList() { DARABONBA_PTR_GET(contentList_, vector<string>) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& setContentList(const vector<string> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& setContentList(vector<string> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // headerName Field Functions 
    bool hasHeaderName() const { return this->headerName_ != nullptr;};
    void deleteHeaderName() { this->headerName_ = nullptr;};
    inline string headerName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


    // matchMethod Field Functions 
    bool hasMatchMethod() const { return this->matchMethod_ != nullptr;};
    void deleteMatchMethod() { this->matchMethod_ = nullptr;};
    inline string matchMethod() const { DARABONBA_PTR_GET_DEFAULT(matchMethod_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList& setMatchMethod(string matchMethod) { DARABONBA_PTR_SET_VALUE(matchMethod_, matchMethod) };


  protected:
    // The match content.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<string>> contentList_ = nullptr;
    // The match field.
    std::shared_ptr<string> field_ = nullptr;
    // The custom HTTP request header.
    // 
    // >  This parameter takes effect only when **Field** is set to **header**.
    std::shared_ptr<string> headerName_ = nullptr;
    // The logical operator.
    std::shared_ptr<string> matchMethod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
