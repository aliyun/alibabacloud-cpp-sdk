// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnAclFieldsResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnAclFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnAclFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnAclFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnAclFieldsResponseBody() = default ;
    DescribeDcdnAclFieldsResponseBody(const DescribeDcdnAclFieldsResponseBody &) = default ;
    DescribeDcdnAclFieldsResponseBody(DescribeDcdnAclFieldsResponseBody &&) = default ;
    DescribeDcdnAclFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnAclFieldsResponseBody() = default ;
    DescribeDcdnAclFieldsResponseBody& operator=(const DescribeDcdnAclFieldsResponseBody &) = default ;
    DescribeDcdnAclFieldsResponseBody& operator=(DescribeDcdnAclFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnAclFieldsResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnAclFieldsResponseBodyContent>) };
    inline vector<DescribeDcdnAclFieldsResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnAclFieldsResponseBodyContent>) };
    inline DescribeDcdnAclFieldsResponseBody& setContent(const vector<DescribeDcdnAclFieldsResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnAclFieldsResponseBody& setContent(vector<DescribeDcdnAclFieldsResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnAclFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the rules.
    std::shared_ptr<vector<DescribeDcdnAclFieldsResponseBodyContent>> content_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
