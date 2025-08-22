// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafDefaultRulesResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDefaultRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDefaultRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDefaultRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafDefaultRulesResponseBody() = default ;
    DescribeDcdnWafDefaultRulesResponseBody(const DescribeDcdnWafDefaultRulesResponseBody &) = default ;
    DescribeDcdnWafDefaultRulesResponseBody(DescribeDcdnWafDefaultRulesResponseBody &&) = default ;
    DescribeDcdnWafDefaultRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDefaultRulesResponseBody() = default ;
    DescribeDcdnWafDefaultRulesResponseBody& operator=(const DescribeDcdnWafDefaultRulesResponseBody &) = default ;
    DescribeDcdnWafDefaultRulesResponseBody& operator=(DescribeDcdnWafDefaultRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnWafDefaultRulesResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnWafDefaultRulesResponseBodyContent>) };
    inline vector<DescribeDcdnWafDefaultRulesResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnWafDefaultRulesResponseBodyContent>) };
    inline DescribeDcdnWafDefaultRulesResponseBody& setContent(const vector<DescribeDcdnWafDefaultRulesResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnWafDefaultRulesResponseBody& setContent(vector<DescribeDcdnWafDefaultRulesResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The rule configurations.
    std::shared_ptr<vector<DescribeDcdnWafDefaultRulesResponseBodyContent>> content_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
