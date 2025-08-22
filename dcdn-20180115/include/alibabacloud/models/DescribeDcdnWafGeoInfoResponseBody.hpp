// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGEOINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafGeoInfoResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGeoInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGeoInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGeoInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafGeoInfoResponseBody() = default ;
    DescribeDcdnWafGeoInfoResponseBody(const DescribeDcdnWafGeoInfoResponseBody &) = default ;
    DescribeDcdnWafGeoInfoResponseBody(DescribeDcdnWafGeoInfoResponseBody &&) = default ;
    DescribeDcdnWafGeoInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGeoInfoResponseBody() = default ;
    DescribeDcdnWafGeoInfoResponseBody& operator=(const DescribeDcdnWafGeoInfoResponseBody &) = default ;
    DescribeDcdnWafGeoInfoResponseBody& operator=(DescribeDcdnWafGeoInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDcdnWafGeoInfoResponseBodyContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDcdnWafGeoInfoResponseBodyContent>) };
    inline vector<DescribeDcdnWafGeoInfoResponseBodyContent> content() { DARABONBA_PTR_GET(content_, vector<DescribeDcdnWafGeoInfoResponseBodyContent>) };
    inline DescribeDcdnWafGeoInfoResponseBody& setContent(const vector<DescribeDcdnWafGeoInfoResponseBodyContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnWafGeoInfoResponseBody& setContent(vector<DescribeDcdnWafGeoInfoResponseBodyContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafGeoInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The type of information about the country or region.
    std::shared_ptr<vector<DescribeDcdnWafGeoInfoResponseBodyContent>> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
