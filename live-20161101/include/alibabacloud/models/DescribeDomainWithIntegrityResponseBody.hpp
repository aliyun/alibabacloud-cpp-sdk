// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINWITHINTEGRITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINWITHINTEGRITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainWithIntegrityResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeDomainWithIntegrityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainWithIntegrityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainWithIntegrityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainWithIntegrityResponseBody() = default ;
    DescribeDomainWithIntegrityResponseBody(const DescribeDomainWithIntegrityResponseBody &) = default ;
    DescribeDomainWithIntegrityResponseBody(DescribeDomainWithIntegrityResponseBody &&) = default ;
    DescribeDomainWithIntegrityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainWithIntegrityResponseBody() = default ;
    DescribeDomainWithIntegrityResponseBody& operator=(const DescribeDomainWithIntegrityResponseBody &) = default ;
    DescribeDomainWithIntegrityResponseBody& operator=(DescribeDomainWithIntegrityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDomainWithIntegrityResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDomainWithIntegrityResponseBodyContent>) };
    inline vector<DescribeDomainWithIntegrityResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeDomainWithIntegrityResponseBodyContent>) };
    inline DescribeDomainWithIntegrityResponseBody& setContent(const vector<DescribeDomainWithIntegrityResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDomainWithIntegrityResponseBody& setContent(vector<DescribeDomainWithIntegrityResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainWithIntegrityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The verification information.
    std::shared_ptr<vector<DescribeDomainWithIntegrityResponseBodyContent>> content_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
