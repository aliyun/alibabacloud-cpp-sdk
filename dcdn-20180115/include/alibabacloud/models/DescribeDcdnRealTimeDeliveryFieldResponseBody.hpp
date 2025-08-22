// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnRealTimeDeliveryFieldResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRealTimeDeliveryFieldResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRealTimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRealTimeDeliveryFieldResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnRealTimeDeliveryFieldResponseBody() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody(const DescribeDcdnRealTimeDeliveryFieldResponseBody &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody(DescribeDcdnRealTimeDeliveryFieldResponseBody &&) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRealTimeDeliveryFieldResponseBody() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody& operator=(const DescribeDcdnRealTimeDeliveryFieldResponseBody &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBody& operator=(DescribeDcdnRealTimeDeliveryFieldResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeDcdnRealTimeDeliveryFieldResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, DescribeDcdnRealTimeDeliveryFieldResponseBodyContent) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBodyContent content() { DARABONBA_PTR_GET(content_, DescribeDcdnRealTimeDeliveryFieldResponseBodyContent) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody& setContent(const DescribeDcdnRealTimeDeliveryFieldResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody& setContent(DescribeDcdnRealTimeDeliveryFieldResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned results.
    std::shared_ptr<DescribeDcdnRealTimeDeliveryFieldResponseBodyContent> content_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
